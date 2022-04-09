#pragma once

// Fill in
class Shape {
    protected:
    double length;

    public:
    Shape(double x);
    virtual double area(double x);
    void print();
};

class Square : public Shape {
    public:
    Square(double x);
    virtual double area(double x);
    void print();   
};

class Equilateral : public Shape {
    public:
    Equilateral(double x);
    virtual double area(double x);
    void print();
};