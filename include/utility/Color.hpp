#ifndef COLOR_H
#define COLOR_H

struct Color {
    
    static Color white;
    static Color black;
    static Color red;
    static Color green;
    static Color blue;
    static Color cyan;
    static Color magenta;
    static Color yellow;
    static Color darkpurple;

    unsigned int value;

    Color(unsigned int value);
};

#endif