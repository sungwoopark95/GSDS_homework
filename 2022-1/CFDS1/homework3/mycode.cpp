#include <cstdlib>
#include <iostream>
#include <math.h>
#include "mycode.h"

// Fill in
using namespace std;

/* Shape */
Shape::Shape(float x) {
    length = x;
}

float Shape::area(float x) {
    return 1.0;
}

void Shape::print() {
    printf("This is Shape. Area is %.6f\n", area(length));
}

/* Square */
Square::Square(float x) : Shape(x) {}

float Square::area(float x) {
    return x * x;
}

void Square::print() {
    printf("This is Square. Area is %.6f\n", area(length));
}

/* Equilateral */
Equilateral::Equilateral(float x) : Shape(x) {}

float Equilateral::area(float x) {
    float width = x;
    float height = (0.5) * width * tan(M_PI / 3);
    return 0.5 * width * height;
}

void Equilateral::print() {
    printf("This is Equilateral. Area is %.6f\n", area(length));
}