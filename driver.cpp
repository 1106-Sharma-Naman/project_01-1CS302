#include <iostream>

// Include your class headers here.  Please use PascalCase for naming.
#include<string>
#include "Train.h"
#include "Person.h"
#include "Bus.h"
#include "Cargo.h"
using namespace std;

int main()
{
    cout << "=== CS 302 Project 1: Transporters ===" << endl;
    cout << endl;

    // ------------------------------------------------------------
    // Create a Train and load it with Cargo
    // ------------------------------------------------------------

    cout << "Creating train..." << endl;

    // Create a train.
    Train train(7);

    // The train should be empty when first created.
    // Demonstrate this by outputting:
    //  - whether the train is empty
    //  - how many cargo items it currently holds
    cout << "Train is Empty: " << train.isEmpty()<< endl;
    cout << "Count of Cargo: " << train.getCount() << endl;


    // Let's load our train!
    cout << "Loading cargo onto train..." << endl;

    // Create several Cargo objects.
    // Each cargo should have:
    //  - a type (string)
    //  - a weight (double)
    Cargo Ca1("Wood", 1122.2);
    Cargo Ca2("Raw material", 150.5);
    Cargo Ca3("Furniture", 4321.2);


    // Load cargo onto the train.
    // After loading, the train should no longer be empty.
    train.load(Ca11);
    train.load(Ca2);
    train.load(Ca3);


    // Display the number of cargo items on the train.
    // Also display whether the train is empty.
    cout << "Cargo count: " << train.getCount() << endl;
    cout << "Train empty: " << train.isEmpty() << endl;


    // Output train-specific functionality.
    // For example:
    //  - total weight of all cargo
    //  - any other behavior unique to a train

    cout << "Total weight of cargo: " << train.getWeightTotal() << endl;

    // Demonstrate unloading one cargo item.
    // Then display the updated cargo count.
    train.unload();
    cout << "Cargo Unloaded/Unloading: " << train.getCount() <<endl;


    // Demonstrate moving the train.
    // The move function may output its own message.
    train.move();


    cout << endl;

    // ------------------------------------------------------------
    // Create a Bus and load it with People
    // ------------------------------------------------------------

    cout << "Creating bus..." << endl;

    // Create a bus.
    Bus bus(7, 70.0);

    // The bus should be empty when first created.
    // Demonstrate this with output.
    cout << "Bus empty: " << bus.isEmpty() << endl;
    cout << "Passenger Count" << bus.getCount() << endl;


    // Set the fare for the bus.
    bus.setFare(5.0);


    cout << "Loading passengers onto bus..." << endl;

    // Create several Person objects.
    // Each person should have:
    //  - a name
    //  - a height
    //
    // Intentionally create people in an order
    // that is NOT sorted by height.
    Person pa1("Naman", 165.0);
    Person pa2("Charlie", 160.0);
    Person pa3("Modi", 135.0);


    // Load people onto the bus.
    // The bus should automatically keep passengers
    // sorted from shortest to tallest.

    bus.load(pa1);
    bus.load(pa2);
    bus.load(pa3);

    // Display the number of passengers on the bus.
    // Also display whether the bus is empty.
    cout << "Passenger count: " << bus.getCount() << endl;
    cout << "Bus empty: " << bus.isEmpty() << endl;


    // Output bus-specific functionality.
    // For example:
    //  - total fare collected
    //  - any other behavior unique to a bus

    cout << "Total fare collected: " << bus.getTotalFare() << endl;

    // Demonstrate unloading one passenger.
    // Then display the updated passenger count.
    bus.unload();
    cout << "Passenger count after unloaded: " << bus.getCount() << endl;


    // Demonstrate moving the bus.
    // The move function may output its own message.

    bus.move();

    cout << endl;

    // ------------------------------------------------------------
    // Demonstrate emptying transporters
    // ------------------------------------------------------------

    cout << "Emptying train and bus..." << endl;

    // Empty the train.
    train.empty();

    // Empty the bus.

    bus.empty();

    // Demonstrate that both transporters are now empty.
    // Output both:
    //  - empty status
    //  - item count

    cout << "Train empty: " << train.isEmpty() << endl;
    cout << "Train cargo count: " << train.getCount() << endl;
    cout << "Bus empty: " << bus.isEmpty() << endl;
    cout << "Bus passenger count: " << bus.getCount() << endl;

    cout << endl;
    cout << "=== End of Program ===" << endl;

    return 0;
}
