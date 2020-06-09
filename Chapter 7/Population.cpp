#include "Population.h"
using namespace std;

Population::Population(int p, int b, int d)
{
        if(p < 2)
        {
                population = 2;
        }
        else
        {
                population = p;
        }

        if(b < 0)
        {
                births = 0;
        }
        else
        {
                births = b;
        }

        if(d < 0)
        {
                deaths = 0;
        }
        else
        {
                deaths = d;
        }
}

void Population::setPopulation(int p)
{
        if(p < 2)
        {
                population = 2;
        }
        else
        {
                population = p;
        }
}

void Population::setBirths(int b)
{
        if(b < 0)
        {
                births = 0;
        }
        else
        {
                births = b;
        }
}

void Population::setDeaths(int d)
{
        if(d < 0)
        {
                deaths = 0;
        }
        else
        {
                deaths = d;
        }
}

double Population::getBirthRate()
{
        return births / (double)population;
}

double Population::getDeathRate()
{
        return deaths / (double)population;
}
