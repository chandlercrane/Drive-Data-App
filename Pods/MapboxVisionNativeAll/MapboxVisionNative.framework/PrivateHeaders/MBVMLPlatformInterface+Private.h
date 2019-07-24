#import <Foundation/Foundation.h>
#import "MBVMLPlatformInterface.h"

#include "VisionCore/ml/ml_config.hpp"
#include "VisionCore/ml_platform_interface.hpp"

#include <mutex>
#include <string>

class MLPlatform : public cva::MLPlatformInterface
{
  id<MBVMLPlatformInterface> interface;

public:
  MLPlatform(id<MBVMLPlatformInterface> interface);

  bool RequestSegmentationMask(cva::MLRequestData const &data, cva::Image &mask, cva::SegMask::Logits &logits);
  bool RequestDetection(cva::MLRequestData const &data, cva::DetectResult &outResult);
  bool RequestClassif(std::vector<cva::MLRequestData> const &data, cva::SignClassifResult &outResult);
  bool RequestMergedModel(cva::MLRequestData const &data, cva::MLMergedModelResult &outResult);

private:
  std::shared_ptr<cva::MLConfig> GetConfig();
  NSArray<NSArray<MLMultiArray *> *> *PredictBatchClassif(const std::vector<cva::MLRequestData> &data, NSArray<NSString *> *outputNames) API_AVAILABLE(macos(10.14), ios(12.0), watchos(5.0), tvos(12.0));
  NSArray<NSArray<MLMultiArray *> *> *PredictBatchFallbackClassif(const std::vector<cva::MLRequestData> &data, NSArray<NSString *> *outputNames);

private:
  std::mutex m_mutex;
  std::string m_configPath;
  std::shared_ptr<cva::MLConfig> m_config;
};
