#ifndef TESTGRADER_H
#define TESTGRADER_H
#include <iostream>
#include <string>
using namespace std;

class TestGrader
{
        private:
                char answers[20];

        public:
                //No need for a custom constructor
                void setKey(string key);
                void grade(string studentAnswers);
};

#endif
