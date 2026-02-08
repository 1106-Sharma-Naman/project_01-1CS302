#include "Cargo.h"

//Constructors
Cargo:: Cargo(): type(""), weight(0.0) {}

Cargo:: Cargo(const string&type, double weight) : type(type), weight(weight) {}

// Getters
string Cargo:: getType() const{
    return type;
}

double Cargo:: getWeight() const{
    return weight;
}