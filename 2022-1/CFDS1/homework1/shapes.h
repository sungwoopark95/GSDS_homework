#pragma once

// Fill in here
class Shape {
    protected:
    int x_pos; int y_pos; // member variable - only available on own and subclasses

    public:
    Shape(int x, int y); // constructor
    virtual void DrawSelf(void); // pure virtual
};

class Point: public Shape {
    public:
    Point(int x, int y);
    virtual void DrawSelf(void);
};

class Line: public Shape {
    public:
    Line(int x, int y);
    virtual void DrawSelf(void);
};

class Triangle: public Shape {
    public:
    Triangle(int x, int y);
    virtual void DrawSelf(void);
};

class Equilateral: public Triangle {
    public:
    Equilateral(int x, int y);
    virtual void DrawSelf(void);
};

class Isoceles: public Triangle {
    public:
    Isoceles(int x, int y);
    virtual void DrawSelf(void);
};

class Scalene: public Triangle {
    public:
    Scalene(int x, int y);
    virtual void DrawSelf(void);
};

class Quadrilateral: public Shape {
    public:
    Quadrilateral(int x, int y);
    virtual void DrawSelf(void);
};

class Rectangle: public Quadrilateral {
    public:
    Rectangle(int x, int y);
    virtual void DrawSelf(void);
};

class Square: public Quadrilateral {
    public:
    Square(int x, int y);
    virtual void DrawSelf(void);
};