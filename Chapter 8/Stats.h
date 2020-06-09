#ifndef STATS_H
#define STATS_H
using namespace std;

class Stats
{
        private:
                double data[30];
                int currSize;//Keeps track of the size of the array

        public:
                Stats();
                double total();
                double average();
                int lowest();
                int highest();
                bool storeValue(double value);
                double getValue(int index);

};

#endif
