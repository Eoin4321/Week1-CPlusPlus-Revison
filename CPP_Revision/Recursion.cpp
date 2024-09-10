#include "Recursion.h"
#include <iostream>

using namespace std;

bool isPalindrome(string &s, int p)
{

	if (s[p] != s[s.length() - 1 - p])
	{
		return false;
	}

	if (s.length() / 2 - p < 2)
	{
		return true;
	}

	if (s.length() < 2)
	{
		return true;
	}
	//string sub = s.substr(s.substr(1, s.length() - 2));
	return isPalindrome(s,p+1);
}

void findMinMax(int* arr, int size, int& min, int& max, int p)
{
	//My version
	/*if (arr[p]<min)
	{
		arr[p] = min;
	}
	if (arr[p] > max)
	{
		arr[p] = max;
	}
	if (size > p)
	{
		findMinMax(arr,size,min,max,p);
	}*/
	//Version done on board
	if (p == size)
		return;
	if(p == 0|| min>arr[p])
	min = arr[p];
	if (p == 0 || max < arr[p])
		max = arr[p];

	findMinMax(arr, size, min, max, p + 1);
}


string reverseString(string& s, int p)
{
	if (p == s.length())
		return "";
	return reverseString(s, p + 1) + s[p];
}
int power(int x)
{
	if (x == 0)
		return 1;
	return 2 * power(x - 1);
}
//Eoins way
//int power(int& i, int p)
//{
//	if (p == i)
//		return 1;
//	
//	return 2*power(i, p + 1);
//}


