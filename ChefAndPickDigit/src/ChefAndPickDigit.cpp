//============================================================================
// Name        : ChefAndPickDigit.cpp
// Author      : Pulkit Mathur
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
std::vector<int> getDigits(int number)
{
	std::vector<int>t;
	while (number > 0)
	{
		int digit = number%10;
		number /= 10;
		t.push_back(digit);
		//print digit
	}
	return t;
}*/


std::string getString(std::string s);

int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	string N;
	int T;
	std::vector<std::string>ans;
	cin >> T;
	for(int i = 0;i<T;i++)
	{
		cin >> N;
		ans.push_back(getString(N));
	}

	for(int i = 0;i<ans.size();i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}


std::string getString(std::string s)
{

	std::string ans;
	if(s.length() == 2)
	{
		char c1 = s[0];
		char c2 = s[1];
		int x = (int)c1;
		int y = (int)c2;
		int z = x*10 + y;
		int p = y*10 + x;
		if(z>= 65 && z <= 97)
		{
			//ans.push_back(char)
		}
	}
	for(int i =0;i<s.length();i++)
	{
		for(int j = i+1;j<s.length();j++)
		{
			char c1 = s[i];
			char c2 = s[j];
			int x = (int)c1;
			int y = (int)c2;
			//int z =
		}
	}
}
