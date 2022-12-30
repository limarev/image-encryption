#include <opencv2/imgcodecs.hpp>
#include <iostream>

int main() {
  auto&& source = cv::imread("../Gmail_Logo_512px.png", cv::IMREAD_COLOR);

  if (source.empty())
    return 1;

  cv::imwrite("test.png", source);

}