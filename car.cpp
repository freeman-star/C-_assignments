#include "car.h"

//  Destructor 
Car::~Car() {}

//  Constructors 
Car::Car(string m, int mo, int y) : sales_mark(m), cylinders(mo), power(y) {}

Car::Car() : sales_mark("Unknown"), cylinders(0), power(0) {}

Car::Car(const Car& other) {
    sales_mark = other.sales_mark;
    cylinders = other.cylinders;
    power = other.power;
}

// Getters and Setters 
string Car::getSalesMark() { return sales_mark; }
void Car::setSalesMark(string m) { sales_mark = m; }

int Car::getCylinders() { return cylinders; }
void Car::setCylinders(int c) { cylinders = c; }

int Car::getPower() { return power; }
void Car::setPower(int p) { power = p; }

// Assignment Operator
Car& Car::operator=(const Car& other) {
    if (this != &other) {
        sales_mark = other.sales_mark;
        cylinders = other.cylinders;
        power = other.power;
    }
    return *this;
}

// Friend Functions 

int countCars(Car* cars, int size) {
    return size;
}

istream& operator>>(istream& in, Car& c) {
    in >> c.sales_mark >> c.cylinders >> c.power;
    return in;
}

ostream& operator<<(ostream& out, const Car& c) {
    out << "Sales Mark: " << c.sales_mark << ", Cylinders: " << c.cylinders << ", Power: " << c.power;
    return out;
}