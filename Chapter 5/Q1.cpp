#include <iostream>
using namespace std;

int main()
{
        cout << "\n";//Eat a line
        for(int i = 32; i <= 127; i++)
        {
                cout << static_cast<char>(i);

                if(i % 16 == 0)
                {
                        cout << "\n";//Starts the next line
                }
                else
                {
                        cout << " ";//Create a space before the next character is printed
                }
        }
        cout << "\n";//Eats the last line.



        return 0;
}
