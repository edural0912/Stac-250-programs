#include "professor.h"
#include <string>
#include <iostream>


Professor::Professor()
{
    m_name = "person";
}

Professor::~Professor()
{
    // nothing to do
}

void professor_info(){
    person_name();

        cout << "Insert office name: ";
        cin >> office;
}
