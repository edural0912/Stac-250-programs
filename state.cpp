#include <iostream>
#include "state.h"
#include <string>

using namspace std;

const int BTU = 51;

State::State()
{
   m_name = "";

}

State::State(string name, double energy, long long int size)
{
    m_name = name;
    m_energy = energy;
    m_size = size;
}

void State::findPercentage()
{
    double panelsNeeded = ceil (m_energy / BTU);
    double panelsFeet = panelsNeeded * 18;

    percent = (panelsFeet/ m_size) * 100;
}
