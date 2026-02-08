#include "Train.h"

// Constructors
Train:: Train(){
maxCount = 50;
currentCount = 0;
ListofCargo = new Cargo[maxCount];
}

Train:: Train (int cap){
    maxCount = cap;
    currentCount = 0;
    ListofCargo= new Cargo[maxCount];
}

// Destructor
Train:: ~Train(){
delete[] ListofCargo;
}

// Loading of cargo
void Train:: load(const Cargo& rhs){
if (currentCount < maxCount){
    ListofCargo[currentCount]= rhs;
    currentCount++;
   }
}
// Unload of cargo
void Train:: unload(){
    if (ListofCargo > 0){
    currentCount--;
    }
}

// Move the train
void Train::empty(){
currentCount = 0;
}

// Checking that the train is empty or not
bool Train:: isEmpty() const {
    if (currentCount=0){
    return true;
    }
    else{
    return false;
    }
}

// Getting Number of cargo
int Train:: getCount() const{
    return currentCount;
}

// Get the weight
double Train:: getWeightTotal() const{
    double total = 0;
    for(int i =0; i < currentCount; i++){
    total = total + ListofCargo[i].getWeight();
    }
    return total;
}
