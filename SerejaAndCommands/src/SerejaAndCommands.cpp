//============================================================================
// Name        : SerejaAndCommands.cpp
// Author      : Pulkit Mathur
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

std::vector<int>data;
void getAns(std::vector<int>& A, std::vector<int>type,std::vector<int>left,std::vector<int>right);

using namespace std;

int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int T,n,m,t,l,r;
	std::vector<int>N;
	std::vector<int>type;
	std::vector<int>left;
	std::vector<int>right;

	cin >> T;
	for(int i = 0;i<T;i++)
	{
		cin >> n;
		cin >> m;
		N.push_back(n);
		std::vector<int> A(n, 0);

		for(int j = 0;j<m;j++)
		{
			cin >> t;
			cin >> l;
			cin >> r;
			type.push_back(t);
			left.push_back(l);
			right.push_back(r);
		}
		getAns(A,type,left,right);
		for(int j=0;j<A.size();j++)
		{
			data.push_back(A[j]);
		}
		A.clear();
		type.clear();
		left.clear();
		right.clear();
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

void getAns(std::vector<int>& A,std::vector<int>type,std::vector<int>left,std::vector<int>right)
{
	for(int i = 0;i<type.size();i++)
	{
		int l = left[i];
		int r = right[i];
		if(type[i] == 1)
		{
			for(int j = l-1;j<=r-1;j++)
			{
				A[j]++;
			}
			//
			cout << "A: " << endl;
			for(int j=0;j<A.size();j++)
			{
				cout << A[j] << " ";
			}
			cout << endl;
		}
		else
		{
			cout << "Here 2" << endl;
			std::vector<int>ttype;
			std::vector<int>tleft;
			std::vector<int>tright;
			for(int j = l-1;j<=r-1;j++)
			{
				ttype.push_back(type[j]);
				tleft.push_back(left[j]);
				tright.push_back(right[j]);
			}
			getAns(A,ttype,tleft,tright);
		}
	}
	for(int i=0;i<A.size();i++)
	{
		data.push_back(A[i]);
	}
}
