#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

int main() {
    cv::Mat img = cv::imread("/home/moveon2/Desktop/Desktop1/All-Projects/Python-project/Opencv-Cpp/00.project-examples/image.jpg");
    if(img.empty()) {
        std::cerr << "Could not read the image: " << std::endl;
        return 1;
    }
    cv::imshow("Image", img);
    cv::waitKey(0);
    return 0;
}
