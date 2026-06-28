#pragma once
#include <string>
#include <iostream>

using namespace std;
    class Car {
    protected:// Protected members can be accessed by derived classes
        string sales_mark;
        int cylinders;
        int power;
    public:// Public members can be accessed from outside the class
        ~Car() {}// Destructor
        Car(string m, int mo, int y) : sales_mark(m), cylinders(mo), power(y) {}// Parameterized constructor
        Car() : sales_mark("Unknown"), cylinders(0), power(0) {} // Default constructor
        Car(const Car& other) {// Copy constructor
        sales_mark = other.sales_mark;// Copy the sales mark from the other Car object
        cylinders = other.cylinders;// Copy the number of cylinders from the other Car object
        power = other.power;// Copy the power from the other Car object
    }
        string getSalesMark() { return sales_mark; }// Getter for sales mark
        void setSalesMark(string m) { sales_mark = m; }// Setter for sales mark
    
        int getCylinders() { return cylinders; }// Getter for number of cylinders
        void setCylinders(int c) { cylinders = c; }// Setter for number of cylinders
    
        int getPower() { return power; }// Getter for power
        void setPower(int p) { power = p; }// Setter for power
        friend int countCars(Car* cars, int size) {// Friend function to count the number of cars
            return size;// Return the size of the array of cars
        }
        Car& operator=(const Car& other) {// Assignment operator
        if (this != &other) {// Check for self-assignment
            sales_mark = other.sales_mark;// Copy the sales mark from the other Car object
            cylinders = other.cylinders;// Copy the number of cylinders from the other Car object
            power = other.power;// Copy the power from the other Car object
        }
        return *this;// Return the current object
    }
        friend istream& operator>>(istream& in, Car& c) {// Overload the input operator for Car class
        in >> c.sales_mark >> c.cylinders >> c.power;// Read the sales mark, number of cylinders, and power from the input stream
        return in;// Return the input stream
    }
        friend ostream& operator<<(ostream& out, const Car& c) {// Overload the output operator for Car class
        out << "Sales Mark: " << c.sales_mark << ", Cylinders: " << c.cylinders << ", Power: " << c.power;// Write the sales mark, number of cylinders, and power to the output stream
        return out;// Return the output stream
    }
    };
    class lorry : public Car {// Derived class lorry inherits from base class Car
    public:
        int load_capacity;// Additional member variable for load capacity

        lorry(string m, int mo, int y, int lc) : Car(m, mo, y), load_capacity(lc) {}// Parameterized constructor for lorry class
        friend istream& operator>>(istream& in, lorry& l) {// Overload the input operator for lorry class
            in >> l.sales_mark >> l.cylinders >> l.power >> l.load_capacity;// Read the sales mark, number of cylinders, power, and load capacity from the input stream
            return in;// Return the input stream
        }
        friend ostream& operator<<(ostream& out, const lorry& l) {// Overload the output operator for lorry class
            out << "Sales Mark: " << l.sales_mark << ", Cylinders: " << l.cylinders << ", Power: " << l.power << ", Load Capacity: " << l.load_capacity;// Write the sales mark, number of cylinders, power, and load capacity to the output stream
            return out;// Return the output stream
        }
        ~lorry() {}// Destructor for lorry class
    };