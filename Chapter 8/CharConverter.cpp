#include "CharConverter.h"
using namespace std;

string CharConverter::uppercase(string str)
{
        string result;

        for(int i = 0; i < str.length(); i++)
        {
                if(str[i] >= 97 && str[i] <= 122)
                {
                        result += str[i] - 32;
                }
                else
                {
                        result += str[i];
                }
        }

        return result;
}

string CharConverter::properWords(string str)
{
        string result;

        bool readChar;//Tells us whether we can add the next letter-char to the result

        readChar = true;
        for(int i = 0; i < str.length(); i++)
        {
                if(readChar)
                {
                        if(str[i] >= 65 && str[i] <= 90)//The character is upper-case
                        {
                                result += str[i];
                                readChar = false;
                        }
                        else if(str[i] >= 97 && str[i] <= 122)//The char is lower-case
                        {
                                result += str[i] - 32;
                                readChar = false;
                        }
                }
                else if(str[i] == ' ')
                {
                        readChar = true;
                }
        }

        return result;
}
