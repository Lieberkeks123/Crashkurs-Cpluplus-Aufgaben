#ifndef RECT_H_INCLUDED
#define RECT_H_INCLUDED



#endif // RECT_H_INCLUDED
#pragma once // include guard
class Rect
{
public: Rect(int w=0, int h=0); // Konstruktor-Deklaration

int area() // inline-Methode
{
    return m_width * m_height;
}

void draw(); // Methoden-Deklaration

private: int m_width, m_height; // Attribute
};
