// CoderByteBST.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


//string a[] = { "[10, 5, 1, 7, 40, 50]", "50", "40" };
string a[] = { "[3, 2, 1, 12, 4, 5, 13]", "5", "13" };
//string a[] = { "[10, 5, 1, 7, 40, 50]", "5", "10" };


int main()
{
	string root = "";
	
	for (int i = 0; i < a[0].length(); i++)
	{
		
		while (a[0][i] != ',' && a[0][i] != '[' && a[0][i] != ']') 
		{
			root += a[0][i];
			i++;
		}
		if (a[0][i] == ',' || a[0][i] == ']')
		{
			if (stoi(root) > stoi(a[1]) && stoi(root) > stoi(a[2]))
			{
				root = "";
			}
			else if (stoi(root) < stoi(a[1]) && stoi(root) < stoi(a[2]))
			{
				root = "";
			}
			else
			{
				cout << root << '\n';
				break;
			}
		}
	}
	return 0;

}

