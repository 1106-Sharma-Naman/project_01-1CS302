# Project 1: Transporters

## Program Description

This program is written in C++ and demonstrates the use of object-oriented programming concepts such as inheritance, polymorphism, dynamic memory, and abstract base classes.

The main goal of the program is to model different types of transporters. A common `Transporter` interface is used to define shared behavior. Two concrete transporters are implemented: a `Train` and a `Bus`.

The `Train` transports cargo items, while the `Bus` transports people. Each transporter supports basic operations such as loading items, unloading items, checking if it is empty, emptying all contents, moving, and reporting how many items it currently holds.

All required functionality is demonstrated/integrated in the `driver.cpp` file.



## Transporter Types

### Train

The `Train` class stores `Cargo` objects.  
Each cargo item has a type and a weight.

The train supports:
- Loading and unloading cargo
- Checking if it is empty
- Calculation of the total weight of all cargo
- Moving the train

### Bus

The `Bus` class stores `Person` objects.  
Each person has a name and a height.

The bus supports:
- Loading and unloading passengers
- Keeping passengers sorted from shortest to tallest
- Checking if it is empty
- Calculating the total fare collected
- Moving the bus (outputs a message)

Passengers are automatically sorted by height when they are added to the bus.

---

## Files Included

- `Transporter.h` – Abstract base class that defines the transporter interface
- `Cargo.h` / `Cargo.cpp` – Defines cargo items used by the train
- `Train.h` / `Train.cpp` – Implements a transporter for cargo
- `Person.h` / `Person.cpp` – Defines people used by the bus
- `Bus.h` / `Bus.cpp` – Implements a transporter for people
- `driver.cpp` – Tests all required functionality
- `Makefile` – Used to compile and run the program

---

## How to Compile and Run

To compile the program, use the following command:

make

To run the executable:

make run

To remove compiled files:

make clean

// For this file i took a little idea from online resources because i have never made Readme file before.