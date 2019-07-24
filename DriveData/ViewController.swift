//
//  ViewController.swift
//  DriveData
//
//  Created by CHANDLER CRANE on 7/24/19.
//  Copyright © 2019 AT&T. All rights reserved.
//

import UIKit
import MapboxVision
// OPTIONAL: include Vision AR functionality
import MapboxVisionAR
// OPTIONAL: include Vision Safety functionality
import MapboxVisionSafety

class ViewController: UIViewController {
    private var videoSource: CameraVideoSource!
    private var visionManager: VisionManager!
    private var visionSafetyManager: VisionSafetyManager!

    private let visionViewController = VisionPresentationViewController()
    private var alertView: UIView!

    private var vehicleState: VehicleState?
    private var restrictions: RoadRestrictions?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        addVisionView()
        addAlertView()
        
        let videoSource = CameraVideoSource()
        videoSource.add(observer: self)
        
        // create VisionManager with video source
        visionManager = VisionManager.create(videoSource: videoSource)
        visionSafetyManager =
            VisionSafetyManager.create(visionManager: visionManager, delegate: self)
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
        visionManager.start(delegate: self)
        videoSource.start()
    }
    
    override func viewDidDisappear(_ animated: Bool) {
        super.viewDidDisappear(animated)
        
        videoSource.stop()
        visionManager.stop()
        // free up resources by destroying modules when they're not longer used
        visionSafetyManager.destroy()
    }
    deinit {
        // free up VisionManager's resources, should be called after destroing its module
        visionManager.destroy()
    }
    
    private func addVisionView() {
        addChild(visionViewController)
        view.addSubview(visionViewController.view)
        visionViewController.didMove(toParent: self)
    }
    
    private func addAlertView() {
        alertView = UIImageView(image: UIImage(named: "alert"))
        alertView.isHidden = true
        alertView.translatesAutoresizingMaskIntoConstraints = false
        view.addSubview(alertView)
        NSLayoutConstraint.activate([
            alertView.topAnchor.constraint(equalToSystemSpacingBelow: view.topAnchor, multiplier: 1),
            view.trailingAnchor.constraint(equalToSystemSpacingAfter: alertView.trailingAnchor, multiplier: 1)
            ])
    }

}


extension ViewController: VisionManagerDelegate, VisionSafetyManagerDelegate {
    func visionManager(_ visionManager: VisionManagerProtocol, didUpdateVehicleState vehicleState: VehicleState) {
        DispatchQueue.main.async { [weak self] in
            // save the latest state of the vehicle
            self?.vehicleState = vehicleState
        }
    }
    
    func visionSafetyManager(_ visionSafetyManager: VisionSafetyManager, didUpdateRoadRestrictions roadRestrictions: RoadRestrictions) {
        DispatchQueue.main.async { [weak self] in
            // save currenly applied road restrictions
            self?.restrictions = roadRestrictions
        }
    }
    
    func visionManagerDidCompleteUpdate(_ visionManager: VisionManagerProtocol) {
        DispatchQueue.main.async { [weak self] in
            // when update is completed all the data has the most current state
            guard let state = self?.vehicleState, let restrictions = self?.restrictions else { return }
            
            // decide whether speed limit is exceeded by comparing it with the current speed
            let isOverSpeeding = state.speed > restrictions.speedLimits.speedLimitRange.max
            self?.alertView.isHidden = !isOverSpeeding
        }
    }
}

extension ViewController: VideoSourceObserver {
    public func videoSource(_ videoSource: VideoSource, didOutput videoSample: VideoSample) {
        DispatchQueue.main.async { [weak self] in
            // display received sample buffer by passing it to presentation controller
            self?.visionViewController.present(sampleBuffer: videoSample.buffer)
        }
    }
}


