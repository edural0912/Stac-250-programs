/* program to calculate population growth rate 
and estimated population each year 
Date: 9/25/22
Author: Ethan Dural
CS 250
*/ 

#include <iostream>
using namespace std;

double growthRate(double&, double&);
int estimatedPop(int&, double&, double&);

double growthRate(double &birthRate, double &deathRate)
{
    return (birthRate - deathRate); 
}

int estimatedPop(int &currentPop, double &birthRate, double &deathRate)
{
    return (currentPop + (birthRate * currentPop)/ 100 - (deathRate * currentPop) / 100); 
}

int main(){
int startPop;
double birthRate;
double deathRate;
double years;

// User input setion 
    do {
        //user start population
        cout << "Enter a starting population: ";
        cin >> startPop;
        // error check if

        if (startPop < 2){
            cout << " Error: Incorrect population number. Please enter a number greater than 2. " << endl;
            cout << "Enter a starting population: ";
            cin >> startPop;
        }

        //user birth rate 
        cout << "Enter a birth rate: ";
        cin  >> birthRate;

        //error check if 

        if (birthRate < 0){
            cout << "Error: Incorrect birth rate. Please enter a postive number. " << endl;
            cout << "Enter a birth rate: ";
            cin  >> birthRate;
        }

        //user death rate 
        cout << "Enter a death rate: ";
        cin >> deathRate;
        
        //error check if 

        if (deathRate < 0){
            cout << "Error: Incorrect death rate. Please enter a postive number. " << endl;
            cout << "Enter a death rate: ";
            cin >> deathRate;
        }

        //user years projected 
        cout << "Enter the number of years you want to test: ";
        cin >> years;

        //error if 
        if(years <= 0){
            cout << "Error: Incorrect number of years entered. Please enter a postive number. " << endl;
             cout << "Enter the number of years you want to test: ";
            cin >> years;

        }

        // Output section
    double FGrate; 
    growthRate(birthRate, deathRate);
    cout << "The projected growth rate of the population is: " << FGrate << endl;
    
    int finalPop;
    estimatedPop (currentPop, birthRate, deathRate);
    cout << "The estimated population is: " << finalPop << endl;

    } while((birthRate > 0) && (deathRate > 0));

      

    return 0;
}