#include "Image.h"
#include <iostream>

//getter-, setter-functions for access of private membervariables

int main()
{
    Image my_image1(100, 400);
    my_image1.save_image("image.bmp");

    std::cout << "Height: " << my_image1.get_height() << std::endl;

    my_image1.set_height(200);
    std::cout << "Height: " << my_image1.get_height() << std::endl;

    my_image1.resize_image(500, 300);
    my_image1.fill_image(0);
    my_image1.save_image("image2.bmp");

    my_image1.draw_line(0, 150, 200, 150, 123);
    my_image1.save_image("image3.bmp");
    my_image1.fill_image(0);
    my_image1.draw_line(20, 200, 20, 150, 123);
    my_image1.save_image("image4.bmp");

    my_image1.clear_image();

    return 0;
}
