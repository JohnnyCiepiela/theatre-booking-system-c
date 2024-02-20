#ifndef EVENT_H
#define EVENT_H

#include <ostream>

#include <cstdio>

#include <iostream>

#include <iomanip>

#include <stdio.h>

#include <vector>

#include <string>

#include <fstream>


class Event {

private:

    // Private data members
    int id;
    std::string performance_name;
    std::string short_description;


public:

    // Public data members
    int seats_available;
    int capacity;

    // Public member functions

  // Modifier for ID
    void set_id(int i) {
        id = i;
    }

    // Accessor for ID
    int get_id() {
        return id;
    }

    // Modifier for a name
    void set_name(std::string n) {
        performance_name = n;
    }

    // Accessor for a name
    std::string get_name() {
        return performance_name;
    }

    // Modifier for description
    void set_description(std::string d) {
        short_description = d;
    }

    // Accessor for description
    std::string get_description() {
        return short_description;
    }

    // Modifier for capacity
    void set_capacity(int c) {
        capacity = c;
    }

    // Accessor for capacity
    int get_capacity() {
        return capacity;
    }

    // Modifier for available seats
    void set_availability(int s) {
        seats_available = s;
    }

    // Accessor for available seats
    int get_availability() {
        return seats_available;
    }

};

// Function prototypes
void reduce(int* a);
void expand(int* b);


#endif
