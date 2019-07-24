#import <Foundation/Foundation.h>
#import "MBVPlatformInterface.h"

#include <optional>

#include "VisionCore/platform_interface.hpp"

class Platform: public cva::PlatformInterface {

    id<MBVPlatformInterface> interface;

public:
    Platform(id<MBVPlatformInterface> interface);

    void MakeVideoClip(float startTime, float endTime) override;

    void SaveImage(cva::ImagePtr const & image, std::string const & fileName) override;

    void HttpGet(std::string const &url, ReplyFnT &&replyFn) override;

    void HttpPostData(std::string const & url, std::string const & data, ReplyFnT && replyFn) override;

    void SendTelemetry(cva::TelemetryEvent const & evt) override;

    std::optional<std::string> ReadLocalStorageByKey(std::string const & key) override;
    void WriteLocalStorageByKey(std::string const & key, std::string const & value, size_t expiration) override;

    std::string GetSecretToken() override;

private:
    void HttpRequest(std::string const & url, std::string const & method, std::string const & data, ReplyFnT && replyFn);
};
