#include <iostream>

#include "ps3eye.h"
#include <opencv2/opencv.hpp>

#define WIDTH 320
#define HEIGHT 240
#define FPS 187

int main() {

    const auto& devices = ps3eye::PS3EYECam::getDevices(true);
    if (devices.empty()) {
        std::cerr << "No PS3 eye device found!" << std::endl;
        return 1;
    }

    const auto cam = devices[0];
    bool success = cam->init(WIDTH, HEIGHT, FPS);

    if (!success) {
        std::cerr << "Could not initialize PS3 eye device" << std::endl;
        return 1;
    }

    cam->start();
    cam->setAutogain(true);

    volatile bool running = true;
    cv::Mat frame = cv::Mat::zeros(cv::Size(WIDTH, HEIGHT), CV_8UC3);

    while (running) {
        cam->getFrame(frame.data);

        cv::imshow("out", frame);
        auto key = cv::waitKey(1);
        if(key == 27) {
            running = false;
        }
    }

    cam->stop();

    return 0;
}