#include "hashDog.h"
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

using namespace std;

DogList::DogList()
{
    //ctor
}

void DogList::getLine(ifstream& fin)
{
      string line, field;
      getline(fin, line);
      stringstream str(line);
        fields.clear();
        dlist = 0;
    while (getline(str,field,',') ) {
        dlist++;
        fields.push_back(field);
    }
}

void DogList::getNumDogs(int)
{
    return int numDogs;
}

void DogList::<unordered_map> dlist;
{
    unordered_map<string,int> dlist;

    dlist = {};
    cout << endl;
    for (auto i=dlist.begin(); i!=dlist.end(); i++) {
        cout << i->first << ":" << i->second <<endl;
    }

}



