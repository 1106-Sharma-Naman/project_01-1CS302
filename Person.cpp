#include "Person.h"

// Constructors
Person:: Person(){
    name="";
    height = 0.0;

}
Person:: Person(const string& nam, double hei){
    name =nam;
    height=hei;
}

// Getters
string Person:: getName() const{
    return name;
}

double Person:: getHeight() const{
    return height;
}

bool Person::operator<(const Person& rhs) const{
    return height < rhs.height;
}