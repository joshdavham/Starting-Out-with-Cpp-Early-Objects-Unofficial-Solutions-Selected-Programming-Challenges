#ifndef DATE_H
#define DATE_H

class Date
{
        private:
                int month,
                    day,
                    year;

        public:
                Date(int m = 1, int d = 1, int y = 2001);
                void printDate1();
                void printDate2();
                void printDate3();
};

#endif
