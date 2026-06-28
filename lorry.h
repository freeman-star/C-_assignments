#pragma once
#include "car.h" // Include the Car class header file
#include <iostream>
#include <string>

using namespace std;

class Lorry : public Car {
public:
    int load_capacity;// Additional attribute for Lorry

    // Constructors and Destructor
    Lorry(string m, int mo, int y, int lc);
    Lorry(); 
    ~Lorry();

    // Friend functions 
    friend istream& operator>>(istream& in, Lorry& l);
    friend ostream& operator<<(ostream& out, const Lorry& l);
};