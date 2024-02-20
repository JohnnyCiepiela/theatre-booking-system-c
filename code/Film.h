#ifndef FILM_H
#define FILM_H

#include "Event.h"


class Film : public Event {

private:

    bool is_three_d;

public:

    // Setting up the case for movie dimensions
    void set_dimension(bool d) {
        is_three_d = d;
    }

    bool get_dimension() {
        return is_three_d;
    }

};

#endif
