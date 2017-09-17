//============================================================================
// Name        : AlwaysLate.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;
int query1(std::vector<int> A,int x);

int main()
{
	int T,N,Q,x,y;
	std::vector<int>ans;

	scanf("%d",&T);
	for(int i = 0;i<T;i++)
	{
		scanf("%d",&N);
		scanf("%d",&Q);

		//input array
		std::vector<int>A;
		int t;
		for(int j = 0;j<N;j++)
		{
			scanf("%d",&t);
			A.push_back(t);
		}

		/*cout << endl << "A: ";
		for(int m = 0;m<N;m++)
		{
			cout << A[m] << "  ";
		}
		cout << endl;*/

		int a;
		for(int j=0;j<Q;j++)
		{
			scanf("%d",&a);
			if(a == 1)
			{
				scanf("%d",&x);
				//ans.push_back(query1(A,x));
				int sum = 0;
				for(int i=x-1;i<A.size();i+=x)
				{
					sum = sum + A[i]*A[i];
				}
				ans.push_back(sum % 1000000007);
			}
			else if(a == 2)
			{
				scanf("%d",&x);
				scanf("%d",&y);
				//query2(A,x,y);
				A[x-1] = y;
			}
		}

		A.clear();
	}

	for(int i = 0;i<ans.size();i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}


int query1(std::vector<int>A,int x)
{
	int sum = 0;

	/*cout << endl << "A: ";
	for(int i = 0;i<N;i++)
	{
		cout << A[i] << "  ";
	}
	cout << endl;*/

	for(int i=x-1;i<A.size();i+=x)
	{
		sum = sum + A[i]*A[i];
	}

	//cout <<"sum = " << sum << endl;

	return sum % 1000000007;
}


/*void query2(std::vector<int>& A,int x,int y)
{
	A[x-1] = y;
	cout << endl << "A: ";
	for(int i = 0;i<A.size();i++)
	{
		cout << A[i] << "  ";
	}
	cout << endl;
}*/
