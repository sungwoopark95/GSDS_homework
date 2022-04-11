#pragma once

// Fill in
class Shape {
    protected:
    float length;

    public:
    Shape(float x);
    virtual float area(float x);
    void print();
};

class Square : public Shape {
    public:
    Square(float x);
    virtual float area(float x);
    void print();   
};

class Equilateral : public Shape {
    public:
    Equilateral(float x);
    virtual float area(float x);
    void print();
};