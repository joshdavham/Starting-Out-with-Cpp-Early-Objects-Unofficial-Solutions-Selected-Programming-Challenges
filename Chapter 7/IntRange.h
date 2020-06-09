#ifndef INTRANGE_H
#define INTRANGE_H

class IntRange
{
        private:
                int input,
                    lower,
                    upper;

        public:
                IntRange(int l, int u);
                int getInt();
};

#endif
