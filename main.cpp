#include <iostream>
#include "student.h"
#include "professor.h"
#include "person.h"
#include <string>

using namespace std;

int main()
{
    string opt1 = "Student";
    string opt2 = "Professor";
    int opt;

    cout << "Choose between (1) " << opt1 << "or (2)" << opt2 << endl;
    cin >> opt;

    if(opt == 1) {
        Student.student_courses;
        Student.student_coursesError;
        Student.student_data;
        Student.student_display;
    }

    else {
        Professor.professor_info();
        Professor.getName();
    }

return 0;
}

