#include "EvenStack.h"
#include <stack>
#include <iostream>

using namespace std;

EvenStack::EvenStack(int nums)
{
    int nums = numbers;
    stack <EvenStack> myStack;
    myStack.push(nums);
    myStack.pop();


}

EvenStack::getEvenNumbers(int nums)
{
    stack <EvenStack> myStack;
    myStack.push(nums);
    myStack.pop();
    stack <EvenStack> evenStack;
    myStack.push(nums);
    evenStack.push(nums);

}

EvenStack::emptyStack()
{


     while (!myStack.empty())
    {
        cout << myStack.top().getEvenNumbers() << " " <<
           myStack.push().getEvenNumbers() << endl;
        myStack.pop();
    }
}
