#ifndef HEADING_H
#define HEADING_H
#include <string>
using namespace std;

class Heading
{
        private:
                string company,
                       report;

        public:
                Heading(string c = "ABC Industries", string r = "Report");
                void printHeading();
};

#endif
