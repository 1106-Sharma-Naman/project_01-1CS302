#ifndef CARGO_H
#define CARGO_H
#include<string>
using namespace std;


class Cargo {
private:
    string type;
    double weight;

public:
//Constructors
    Cargo();
    Cargo(const string& type, double weight);

//Getters
string getType() const;
double getWeight() const;

// No setters needed in here because it might change internal state of an existing cargo object.
};
#endif