#ifndef TRAIN_H
#define TRAIN_H
#include<string>
#include<iostream>
using namespace std;
#include "Transporter.h"
#include "Cargo.h"

class Train : public Transporter<Cargo>{
private:
    Cargo* ListofCargo;
    int currentCount;
    int maxCount;

public:
//Constructors
    Train();
    Train(int maxNum = 50);
    ~Train();

    void load(const Cargo& rhs) override;
    void unload() override;
    void move() override;
    void empty() override;

// Getters
    double getWeightTotal() const;

    bool IsEmpty() const override;
    int GetCount() const override;
};
#endif