// Include necessary libraries
#include <iostream>
#include <string>
#include <vector>
#include <opencv2/opencv.hpp>

int main() 
{
    // Load the image
    cv::Mat image = cv::imread("sample-png-image.png");
    // Check if the image was loaded successfully
    if (image.empty()) 
    {
        std::cout << "Failed to load the image." << std::endl;
        return -1;
    }
    // Convert the image to RGB format
    cv::cvtColor(image, image, cv::COLOR_BGR2RGB);
    // Save the image in JPG format
    cv::imwrite("converted-jpg-image.jpg", image);
    std::cout << "Image successfully converted!" << std::endl;
    return 0;
}
