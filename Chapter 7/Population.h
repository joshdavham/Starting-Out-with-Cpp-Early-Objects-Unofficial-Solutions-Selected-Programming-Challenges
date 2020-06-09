#ifndef POPULATION_H
#define POPULATION_H
using namespace std;

class Population
{
        private:
                int population,//current population
                    births,//Annual number of births
                    deaths;//Annual number of deaths

        public:
                Population(int p = 0, int b = 0, int d = 0);
                void setPopulation(int p);
                void setBirths(int b);
                void setDeaths(int d);
                double getBirthRate();
                double getDeathRate();
};

#endif
