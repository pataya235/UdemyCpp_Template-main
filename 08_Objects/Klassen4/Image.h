#pragma once

#include <vector>

using uchar = unsigned char; //typedef unsigned char uchar;
using GrayscaleMatrix = std::vector<std::vector<uchar>>;

class Image
{
public:
    // 2 Konstruktoren
    Image();
    Image(const unsigned int width, const unsigned int height);

    // Destruktor
    ~Image();

    // Getter
    unsigned int get_width() const;
    unsigned int get_height() const;

    // Setter
    void set_width(unsigned int new_width);
    void set_height(unsigned int new_height);

    // Helper
    void save_image(
        const char *file_name) const; //const after method -> method is not changing member-variables of object instance

    // Exercise 1
    void clear_image();
    // Exercise 2
    void set_pixel(const unsigned int x, const unsigned int y, const uchar value);
    // Exercise 3
    void resize_image(const unsigned int new_width, const unsigned int new_height);
    // Exercise 4
    void fill_image(const uchar value);
    // Exercise 5
    void draw_line(const unsigned int x1,
                   const unsigned int y1,
                   const unsigned int x2,
                   const unsigned int y2,
                   const uchar value);

private:
    unsigned int m_width; //initialised first
    unsigned int m_height;
    GrayscaleMatrix m_matrix; //cant be initialised before m_width or m_height
};
