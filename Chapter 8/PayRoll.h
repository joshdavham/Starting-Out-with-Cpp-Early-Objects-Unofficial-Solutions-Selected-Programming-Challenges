#ifndef PAYROLL_H
#define PAYROLL_H

class PayRoll
{
        private:
                double rate,
                       hours;

        public:
                PayRoll();
                void setRate(double r);
                void setHours(double h);
                double getPay();
};

#endif
