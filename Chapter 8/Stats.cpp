#include "Stats.h"
using namespace std;

Stats::Stats()
{
        currSize = 0;
}

double Stats::total()
{
        double total;
        total = 0;
        for(int i = 0; i < currSize; i++)
        {
                total += data[i];
        }

        return total;
}

double Stats::average()
{
        return total() / currSize;
}

int Stats::lowest()
{
        int index = 0;

        for(int i = 1; i < currSize; i++)
        {
                if(data[i] < data[index])
                {
                        index = i;
                }
        }

        return index;
}

int Stats::highest()
{
        int index = 0;

        for(int i = 1; i < currSize; i++)
        {
                if(data[i] > data[index])
                {
                        index = i;
                }
        }

        return index;
}

bool Stats::storeValue(double value)
{
        if(currSize >= 30)
        {
                return false;
        }
        else
        {
                data[currSize] = value;
                currSize += 1;
                return true;
        }
}

double Stats::getValue(int index)
{
        return data[index];
}
