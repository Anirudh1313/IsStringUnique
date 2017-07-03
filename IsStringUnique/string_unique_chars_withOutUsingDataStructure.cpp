//============================================================================
// Name        : string_unique_chars_withOutUsingDataStructure.cpp
// Author      : anirudh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool unique(string str);

int main()
{
	string str;
	cout << "Enter the string: " << endl;
	cin >> str;

	if(unique(str))
		cout << "yes" << endl;
	else
		cout << "No" << endl;


	return 0;
}

bool unique(string str)
{
	for(int i = 0; i < str.length(); i++)
	{
		for(int j = i+1; j < str.length(); j++)
		{
			if(str[i] == str[j])
			{
				return false;
			}
		}
	}

	return true;
}
