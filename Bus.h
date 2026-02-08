#ifndef BUS_H
#define BUS_H
#include<string>
#include<iostream>
using namespace std;
#include "Transporter.h"
#include "Person.h"

class Bus : public Transporter<Cargo>{
private:
    Person* listofPeople;
    int currentCount;
    int maxCount;
    double fare
    void sortPeople;

public:
//Constructors
    Bus();
    Bus(int max, double fareperCustomer);
    ~Bus();

//Interface and getters
    void load(const Person& rhs) override;
    void unload() override;
    void move() override;
    void empty() override;
    bool isEmpty() const override;
    int getCount() const override;
    double getFare() const;
    double getTotalFare() const;

//Setters
double setFare(double newFare);
};
##endif