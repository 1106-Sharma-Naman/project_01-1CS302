#include "Bus.h"

//Constructor definitions
Bus:: Bus(){
    maxCount = 50;
    currentCount = 0;
    fare = 0.0;
    listofPeople = new Person[maxCount];
}

Bus:: Bus(int max, double fareperCustomer);{
    maxCount = max;
    currentCount = 0;
    fare = fareperCustomer;
}

//Destructor
Bus:: ~Bus(){
delete[] listofPeople;
}

// Logic for sorting passangers
void Bus:: sortPeople(){
    for(int i=0; i<currentCount-1; i++){
        for(int j=i+1; j< currentCount; j++){
            if(listofPeople[j]<listofPeople[i]){
                Person temp = listofPeople[i];
                listofPeople[i]=listofPeople[j];
                listofPeople[j]=temp;
            }
        }
    }
}

void Bus::load(const Person& rhs){
    if(currentCount< maxCount){
        listofPeople[currentCount] = rhs;
        currentCount++;
        sortPeople();
    }
}

void Bus:: unload(){
    if(currentCount>0){
        currentCount--;
    }
}

// Empty the bus
void Bus::empty(){
    currentCount=0;
}

void Bus::move(){
    cout<<"Bus moving to next stop.\n"
}

//Checking if the bus is empty
bool Bus::isEmpty() const{
    return currentCount==0;
}

//For number of passangers
int Bus::getCount() const{
    return currentCount;
}
//Fare per passanger
int Bus::getFare() const{
    return fare;
}

// setting fare per passanger
double Bus::setFare(double newFare){
    fare = newFare;
    return fare;
}

//total fare for all passangers
double Bus::getTotalFare() const{
    return fare*currentCount;
}