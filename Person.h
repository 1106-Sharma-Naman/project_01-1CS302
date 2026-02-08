#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using namespace std;

class Person{
private:
    double height;
    string name;

public:
//Constructors
Person();
Person(const string& name, double height);

//Getters
string getName() const;
double getHeight() const;

//
bool operator<(const Person& rhs) const;
};
#endif