#include "utility/Color.hpp"

// static init

Color Color::white       = Color(0xFFFFFFFF);
Color Color::black       = Color(0x000000FF);
Color Color::red         = Color(0xFF0000FF);
Color Color::green       = Color(0x00FF00FF);
Color Color::blue        = Color(0x0000FFFF);
Color Color::cyan        = Color(0x00FFFFFF);
Color Color::magenta     = Color(0xFF00FFFF);
Color Color::yellow      = Color(0xFFFF00FF);
Color Color::darkpurple  = Color(0x171033FF);

// constructor
Color::Color(unsigned int value) :
    value (value)
{}