//============================================================================
// Name        : MinimumGoodPermutation.cpp
// Author      : Pulkit Mathur
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
#include <string>

using namespace std;

std::vector<int>data;
void findGoodPerm(int n);
void swap (int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {

	int T,n;
	std::vector<int>N;

	cin >> T;
	for(int i = 0;i<T;i++)
	{
		cin >> n;
		N.push_back(n);
		findGoodPerm(n);
	}

	int index = 0;
	for(int i = 0;i<N.size();i++)
	{
		for(int j = 0;j<N[i];j++)
		{
			cout << data[j+index] << " ";
		}
		index = index + N[i];
		cout << endl;
	}
	return 0;
}


void findGoodPerm(int n)
{
	std::vector<int>t;
	for(int i = 1;i<=n;i++)
	{
		t.push_back(i);
	}
	for(int i=0;i<t.size();i = i+2)
	{
		int a = t[i];
		int b = t[i+1];
		t[i] = b;
		t[i+1] = a;
	}


	if(n%2 == 0)
	{
		for(int i=0;i<t.size();i++)
		{
			data.push_back(t[i]);
		}
	}
	else
	{
		int a = t[t.size()  -1];
		int  b = t[t.size() - 2];
		t[t.size() - 1] = b;
		t[t.size() - 2] = a;
		for(int i=0;i<t.size();i++)
		{
			data.push_back(t[i]);
		}
	}
}
