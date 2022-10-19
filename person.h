#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <string>

using namespace std;

class Person
{
public:
       Person();
       virtual ~Person();

        string getName()
        {
            return m_name;
        }


private:
    string m_name;
    void person_name();

};


#endif // PERSON_H_INCLUDED
