// Importing required libraries
#include <iostream>
#include <opencv2/opencv.hpp>

int main() 
{
  // Loading the image
  cv::Mat image = cv::imread("sample-image.jpg");

  // Prints the name of the file
  std::cout << "Filename: " << "sample-image.jpg" << std::endl;

  // Prints the format of the file (e.g., PNG, JPG, GIF, etc.)
  int file_extension = static_cast < int > (image.type() & CV_MAT_DEPTH_MASK);
  std::string format;
  if (file_extension == CV_8U) 
  {
    format = "8U";
  } 
  else 
  if (file_extension == CV_8S) 
  {
    format = "8S";
  } 
  else 
  if (file_extension == CV_16U) 
  {
    format = "16U";
  } 
  else 
  if (file_extension == CV_16S) 
  {
    format = "16S";
  } 
  else 
  if (file_extension == CV_32S) 
  {
    format = "32S";
  } 
  else 
  if (file_extension == CV_32F) 
  {
    format = "32F";
  } 
  else 
  if (file_extension == CV_64F) 
  {
    format = "64F";
  }
  std::cout << "Format: " << format << std::endl;

  // Prints the mode of the file (e.g., RGB, RGBA, CMYK, etc.)
  int channels = image.channels();
  std::string mode;
  if (channels == 1) 
  {
    mode = "Grayscale";
  } 
  else 
  if (channels == 3) 
  {
    mode = "RGB";
  } 
  else 
  if (channels == 4) 
  {
    mode = "RGBA";
  }
  std::cout << "Mode: " << mode << std::endl;

  // Prints the size as a width, height tuple (in pixels)
  std::cout << "Size: " << image.cols << "x" << image.rows << std::endl;

  // Prints the width of the image (in pixels)
  std::cout << "Width: " << image.cols << std::endl;

  // Prints the height of the image (in pixels)
  std::cout << "Height: " << image.rows << std::endl;

  // Closing the image (not necessary in OpenCV)
  return 0;
}
