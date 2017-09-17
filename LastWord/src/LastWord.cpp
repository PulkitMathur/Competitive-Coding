//============================================================================
// Name        : LastWord.cpp
// Author      : Pulkit Mathur
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int lengthOfLastWord(string s)
{
	std::vector<std::string>t;
	std::string x;

	for(int i =0;i<s.length();i++)
	{
		if(s[i] == ' ')
		{
			if(x.length() > 0){
			t.push_back(x);
			x.clear();
			}
		}
		else
		{
			x.push_back(s[i]);
		}
	}
	if(x.length() > 0)
	{
		t.push_back(x);
	}
	if(t.size() == 0){return 0;}
	return t[t.size()-1].length();
}

vector<int> plusOne(vector<int>& digits)
{

}

int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	std::string s = "a";
	cout << lengthOfLastWord(s);
	return 0;
}
