#include <iostream>
#include <math.h>
using namespace std;

class Shape {
    protected:
    double len;
    
    public:
    Shape(double f) {
        len = f;
    }
    
    virtual double area(double f) {
        return 0;
    }
    
    void print() {
        cout << "This is shape and the area is " << area(len) << endl;
    }
};

class Square : public Shape {
    public:
    Square(double f) : Shape(f) {
        // Shape(f);
    }
    
    virtual double area(double f) {
        return f * f;
    }
    
    void print() {
        cout << "This is square and the area is " << area(len) << endl;
    }
};

class Equilateral : public Shape {
    public:
    Equilateral(double f) : Shape(f) {
        // Shape(f);
    }
    
    virtual double area(double f) {
        return (0.5 * f * tan(M_PI/3));
    }
    
    void print() {
        cout << "This is square and the area is " << area(len) << endl;
    }
};

int main() {
    Equilateral eq(4.0f);
    Square sq(5.0f);
    
    eq.print();
    sq.print();
    
    Shape *s1 = &eq;
    Shape *s2 = &sq;
    
    s1->print();
    s2->print();
    
    return 0;
}