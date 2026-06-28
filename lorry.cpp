#include "lorry.h" // Include the Lorry class header file

// Constructors & Destructor 

Lorry::Lorry(string m, int mo, int y, int lc) : Car(m, mo, y), load_capacity(lc) {}

Lorry::Lorry() : Car(), load_capacity(0) {}

Lorry::~Lorry() {}

//  Friend Functions 

istream& operator>>(istream& in, Lorry& l) {
    in >> l.sales_mark >> l.cylinders >> l.power >> l.load_capacity;
    return in;
}

ostream& operator<<(ostream& out, const Lorry& l) {
    out << "Sales Mark: " << l.sales_mark << ", Cylinders: " << l.cylinders << ", Power: " << l.power << ", Load Capacity: " << l.load_capacity;
    return out;
}