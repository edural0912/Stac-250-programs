#include <iostream>
#include "state.h"
#include <string>
#include <list>

using namspace std;
void add();

// ordered list function to add and display values

void add (list<State> 1)
{
    list<State>::iterator it;
    list<State>::iterator previous;
    if (1.empty() || (1.front()) > x) {
        1.push_front(x);
    }
    else{
        previous = 1.begin();
        for (auto it = 1.begin(); it != 1.end(); ++it){
            if (*it > x)
                break;
            else previous = it;
        }
        1.insert(++previous,x)
    }

}
void print(list<State> 1)
{
    for (auto it = 1.begin(); it != 1.end(); ++it) {
        cout << *it << " ";
    }

}


int main()
{

// ordered list

list<State>, ordered;
    add(ordered, Tx);
    add(ordered, Ca);
    add(ordered, Lu);
    add(ordered, Fl);
    add(ordered, Il);
    add(ordered, PEN);
    add(ordered, OH);
    add(ordered, NY);
    add(ordered, GA);
    add(ordered, MI);


    //display state percentage
    State Tx ("Texas", 13480.8, 7487580672000);
    Tx.findPercentage();

    State Ca ("California",6922.8, 4563554688000);
    Ca.findPercentage();

    State Lu ("Louisiana",4200.4,1445216256000);
    Lu.findPercentage();

    State Fl ("Florida", 4003.1, 1805265792000);
    Fl.findPercentage();

    State Il ("Illinois", 3612.9,1614549657000);
    Il.findPercentage();

    State PEN("Pennsylvania", 3413.0,1283967590400)
    PEN.findPercentage();

    State OH("Ohio", 3404.5, 1249649280000);
    OH.findPercentage();

    State NY("New York", 3354.2, 1520933990400);
    NY.findPercentage();

    State GA("Georgia", 2727.6, 1656673920000);
    GA.findPercentage();

    State MI("Michigan", 2610.6,2969287334400);
    MI.findPercentage();


    return 0;
}
