#include "hashDog.h"
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

using namespace std;


int main()
{

    //open file
    string dogFile;
    cout<< "type in file you want to open: " << dogFile << endl;
    cin >> dogFile;
    if (fs.fail()){
        throw "Error could not open input file";
    }

    while (getline (dogFile)){
        cout << "You have successfully opened the file."
        << endl;
        try{
            openFiles(dogFile);
            while(dogFile.get(ch)){
                dogfile.put(ch);
            }

        }
        catch(const char* msg){
        cout << msg << endl;
        }

        //menu
    cout<<"Choose an country from the menu to display the amount of dogs in a country"<< endl;
    cin >> opt;
    cout << "\n" << endl;

    switch (opt)
    {
        case 1:
             cout <<"Germany";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 2:
            cout<< "Spain";
            DogList:: dlist;
            DogList::getNumDogs;
            break;
        case 3:
            cout<< "Italy";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 4:
            cout << "France";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 5:
            cout << "Poland";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 6:
            cout << "Romania";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 7:
            cout<< "Hungary";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 8:
            cout << "Portugal";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 9:
            cout<< "Netherlands";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 10;
            cout << "Belgium";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 11:
            cout << "Sweden";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 12:
            cout << "Austria";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 13:
            cout << "Finland";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 14:
            cout << "Greece";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 15:
            cout << "Ireland";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 16:
            cout << "US";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 17:
            cout << "Canada";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 18:
            cout << "Mexico";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 20:
            cout << "China";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 21:
            cout << "India"
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 22:
            cout << "Brazil";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 23:
            cout << "Japan";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 24:
            cout << "UK";
            DogList::dlist;
            DogList::getNumDogs;
            break;
        case 0:
            exit(1);
        default:
            break;
    }

    dogFile.close();



    }
return 0;
}
