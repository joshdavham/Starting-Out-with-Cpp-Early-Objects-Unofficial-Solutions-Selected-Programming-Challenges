#ifndef TIPS_H
#define TIPS_H
using namespace std;

class Tips
{
        private:
                double taxRate;

        public:
                Tips(double tr = 0.65);
                double computeTip(double bill, double tipRate);
};

#endif
