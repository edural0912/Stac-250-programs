#ifndef EVENSTACK_H_INCLUDED
#define EVENSTACK_H_INCLUDED

#include <int>

using namespace std;

class EvenStack {

    public:
        EvenStack(int);

        string getEvenNumbers();
        void setEvenNumbers(int);

        void emptyStack();

    private:
        int m_evenNumbers;
        int m_numbers;



};

#endif // EVENSTACK_H_INCLUDED
