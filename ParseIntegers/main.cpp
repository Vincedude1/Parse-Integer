/*==============================================================================
Zachary Hadjah                    June 6th 2018
Junior Year                       Side Project

After the user enters string input (which will be put into a char string). The 
program will then parse all the integers inside the string and place them into 
another char string. The program will display the original string and the parsed 
integers. 
==============================================================================*/
#include <cstdlib>
#include <iostream>
#include <limits>
#include <string.h>
#include <istream>
using namespace std;

char parseInt(char userInput[40], char& integers);

int main() 
{
    char userInput[40]; 
    char integers[40];
    
    cout << "After you enter string input, the program will parse all the integers "
         <<  "inside the string and display them.  \n  Enter a string:  \n";
    cin.ignore();
    cin.getline(userInput, 40);
    
    parseInt(userInput, integers);
    
    cout << "The integers inside the string you entered were: \n" << integers;
    
    return 0;
}

char parseInt(char userInput[40], char& integers)
{
    int j = 0;
    for(int i = 0; i<sizeof(userInput); i++)
    {
        if( userInput[i] == 1 || userInput[i] == 2 || userInput[i] == 3 || 
            userInput[i] == 4 || userInput[i] == 5 || userInput[i] == 6 ||
            userInput[i] == 7 || userInput[i] == 8 || userInput[i] == 9 ||
            userInput[i] == 0 )
        {
            integers = userInput[i];
            j++;
        }
    }
}


