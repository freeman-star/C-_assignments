#pragma once
#include <string>
#include <iostream>

using namespace std;

class Car {
protected:
    string sales_mark;
    int cylinders;
    int power;

public:
    // Destructor & Constructors
    ~Car();
    Car(string m, int mo, int y);
    Car();
    Car(const Car& other);

    // Getters and Setters
    string getSalesMark();
    void setSalesMark(string m);
    int getCylinders();
    void setCylinders(int c);
    int getPower();
    void setPower(int p);

    // Assignment operator
    Car& operator=(const Car& other);

    // Friend functions 
    friend istream& operator>>(istream& in, Car& c);
    friend ostream& operator<<(ostream& out, const Car& c);
};
int countCars(Car* cars, int size);