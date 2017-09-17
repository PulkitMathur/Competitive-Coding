//============================================================================
// Name        : LittleChefsAndSums.cpp
// Author      : Pulkit Mathur
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;


int getMinIndex(long double A[],int size);
//int prefixSum(int A[],int size, int x);
//int suffixSum(int A[],int size, int x);

int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int T,N;
	std::vector<int>ans;
	cin >> T;
	for(int i = 0;i<T;i++)
	{
		cin >> N;
		long double A[N];
		for(int j = 0;j<N;j++)
		{
			cin >> A[j];
		}
		ans.push_back(getMinIndex(A,N));
	}

	for(int i = 0;i<ans.size();i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}


int getMinIndex(long double A[],int size)
{
	std::vector<long double>prefix;
	std::vector<long double>suffix;
	std::vector<long double>final;

	long double t = 0;
	long double sum = 0;
	for(int i = 0; i < size; i++)
	{
		t = t + A[i];
		prefix.push_back(t);
		sum += A[i];
	}

	suffix.push_back(sum);

	for(int i = 0;i<size-1;i++)
	{
		sum = sum - A[i];
		suffix.push_back(sum);
	}

	for(int i = 0;i<prefix.size();i++)
	{
		final.push_back(prefix[i] + suffix[i]);
	}

	/*cout << "Prefix: ";
	for(int i = 0;i<prefix.size();i++)
	{
		cout << prefix[i] << "  ";
	}
	cout << endl;

	cout << "Suffix: ";
	for(int i = 0;i<suffix.size();i++)
	{
		cout << suffix[i] << "  ";
	}
	cout << endl;*/

	/*cout << "Final: ";
	for(int i = 0;i<final.size();i++)
	{
		cout << final[i] << "  ";
	}
	cout << endl;*/

	int min_index = 0;
	for(int i = 1;i<final.size();i++)
	{
		if(final[i] < final[min_index])
		{
			min_index = i;
		}
	}
	return min_index+1;

	/*
	std::vector<int>a;
	int left = 0;
	int right = sum;

	for(int i = 0;i<size;i++)
	{
		left = left + A[i];
		if(i != 0)
		{
			right = right - A[i-1];
		}
		a.push_back(left+right);
	}

	int min = 0;
	for(int i = 1;i<a.size();i++)
	{
		if(a[i] < a[min])
		{
			min = i;
		}
	}
	return min+1;*/
}

/*
int prefixSum(int A[],int size, int x)
{
	int s = 0;
	for(int i = 0;i<x;i++)
	{
		s = s + A[i];
	}
	return s;
}

int suffixSum(int A[],int size, int x)
{
	int s = 0;
	int y = size-x+1;
	int index = size-1;
	while(y > 0)
	{
		s = s + A[index];
		index--;
		y--;
	}
	return s;
}
 */
