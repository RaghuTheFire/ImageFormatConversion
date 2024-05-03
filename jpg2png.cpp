// Importing required libraries
#include <iostream>
#include <opencv2/opencv.hpp>

int main() 
{
  // Loading the image
  cv::Mat image = cv::imread("sample-jpg-image.jpg");

  // Converting image from JPG to PNG format
  std::vector < int > compression_params;
  compression_params.push_back(cv::IMWRITE_PNG_COMPRESSION);
  compression_params.push_back(9);
  bool result = cv::imwrite("converted-png-image.png", image, compression_params);

  if (result) 
  {
    std::cout << "Image successfully converted!" << std::endl;
  } 
  else 
  {
    std::cout << "Failed to convert the image." << std::endl;
  }

  return 0;
}
