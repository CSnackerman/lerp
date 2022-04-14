#ifndef COLOR_H
#define COLOR_H

#include <string>

struct  Color {
    
    static Color white;
    static Color black;
    static Color red;
    static Color green;
    static Color blue;
    static Color darkpurple;

    unsigned int value;

    Color(unsigned int value);
};

#endif