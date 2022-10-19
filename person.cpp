#include "person.h"
#include <string>
#include <iostream>


Person::Person()
{
    m_name = "person";
}

Person::~Person()
{
    // nothing to do
}

void Person::person_name()
{

    cout << "Enter the name of the person: " << endl;
}
