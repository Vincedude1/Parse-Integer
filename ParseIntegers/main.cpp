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
    
    char parseInt(char userInput[40], char integers[40]);
    
    cout << "The integers inside the string you entered were: \n" << integers;
    
    return 0;
}

char parseInt(char userInput[40], char& integers)
{
    int j = 0;
    for(int i = 0; i<sizeof(userInput); i++)
    {
        if( userInput[i] == 48 || userInput[i] == 49 || userInput[i] == 50 || 
            userInput[i] == 51 || userInput[i] == 52 || userInput[i] == 53 ||
            userInput[i] == 54 || userInput[i] == 55 || userInput[i] == 56||
            userInput[i] == 57 )
        {
            integers = userInput[i];
            j++;
        }
    }
}


