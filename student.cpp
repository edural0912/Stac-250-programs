#include "student.h"
#include <string>
#include <iostream>

Student::Student()
{
   string courses[10];
   int taking = 0;
}

Student::~Student()
{
    // nothing to do
}

void Student::student_data() {
        person_name();
        cout << "How many courses is the student taking? "; << endl;
        cin >> taking;
}

void Student::student_coursesError() {

    do{
        if(taking > 10)
        {
            cout << " Error: student cannot take more then 10 courses." << endl;
        }

    } while(taking > 10)

}

void Student::student_courses() {
    cout << " Insert the names of the courses being taken: ";
    for(int i=0, i<taking, i++) {
        cin >> courses[i];
    }

}

void Student::student_display(){

cout << "The student is taking: " << taking << " courses"<< endl;
}


