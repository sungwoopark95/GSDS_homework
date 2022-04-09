#include <cstdlib>
#include <iostream>
#include <math.h>
#include "mycode.h"

// Fill in
using namespace std;

/* Shape */
Shape::Shape(double x) {
    length = x;
}

double Shape::area(double x) {
    return 1.0;
}

void Shape::print() {
    printf("This is Shape. Area is %.6f\n", area(length));
}

/* Square */
Square::Square(double x) : Shape(x) {}

double Square::area(double x) {
    return x * x;
}

void Square::print() {
    printf("This is Square. Area is %.6f\n", area(length));
}

/* Equilateral */
Equilateral::Equilateral(double x) : Shape(x) {}

double Equilateral::area(double x) {
    double width = x;
    double height = (0.5) * width * tan(M_PI / 3);
    return 0.5 * width * height;
}

void Equilateral::print() {
    printf("This is Equilateral. Area is %.6f\n", area(length));
}