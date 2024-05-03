// Include necessary libraries
#include <iostream>
#include <FreeImage.h>

int main() 
{
    // Load the GIF image
    FreeImage_Initialise();
    FREE_IMAGE_FORMAT fif = FreeImage_GetFileType("sample-transparent-gif-image.gif", 0);
    FIBITMAP* image = FreeImage_Load(fif, "sample-transparent-gif-image.gif");

    // Convert the image to PNG format
    FreeImage_Save(FIF_PNG, image, "converted-png-image.png", 0);

    // Clean up
    FreeImage_Unload(image);
    FreeImage_DeInitialise();

    std::cout << "Image successfully converted!" << std::endl;

    return 0;
}
