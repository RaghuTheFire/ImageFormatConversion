
// Include necessary libraries
#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>

int main() 
{
    // Load the PNG image
    cv::Mat image = cv::imread("sample-transparent-png-image.png", cv::IMREAD_UNCHANGED);

    // Check if the image was loaded successfully
    if (image.empty()) 
    {
        std::cout << "Failed to load the image." << std::endl;
        return -1;
    }

    // Convert the image from PNG to WebP format
    std::vector<int> params;
    params.push_back(cv::IMWRITE_WEBP_QUALITY);
    params.push_back(100); // Set the quality to 100 (highest)
    bool success = cv::imwrite("converted-webp-image.webp", image, params);

    if (success) 
    {
        std::cout << "Image successfully converted!" << std::endl;
    } 
    else 
    {
        std::cout << "Failed to convert the image." << std::endl;
    }

    return 0;
}
