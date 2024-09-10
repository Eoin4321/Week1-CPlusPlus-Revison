// CPP_Revision.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Recursion.h"

using namespace std;

int main()
{
    string arr[] = { "racecar", "john", "gohangasalamiimalasagnahog","Eoin" };

    for (int i = 0;i < 4;i++)
        {  
        cout << arr[i] << ": " << (isPalindrome(arr[i]) ? "yes" : "No") << endl;
       
       }
    
    srand(time(NULL));
    int arrInt[20];
    for (int i = 0; i < 20; i++)
    {
        arrInt[i] = 1 + rand() % 20;
    }
    for (int i = 0; i < 20; i++)
    {
        if (i != 0)
            cout << ", ";
        cout << arrInt[i];
    }

    cout << endl;
    int max, min;
    findMinMax(arrInt, 20, min, max);
    cout << "Min Value " << min << endl;
    cout << "Max Value " << max << endl;


    string input="cars";
    cout << "Reversed:" << input << endl;
    input = reverseString(input);
    cout << "Reversed:" << input << endl;

    int x = 5;
    cout << power(x) << endl;
}

