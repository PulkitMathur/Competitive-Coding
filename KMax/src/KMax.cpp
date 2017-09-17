//============================================================================
// Name        : KMax.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int getSum(int A[],int size,int K);
int min(int a,int b);

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


int main()
{
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int T,N,K;
	std::vector<int>ans;
	scanf("%d",&T);
	for(int i = 0;i<T;i++)
	{
		scanf("%d",&N);
		scanf("%d",&K);
		int A[N];
		for(int j=0;j<N;j++)
		{
			scanf("%d",&A[j]);
		}
		ans.push_back(getSum(A,N,K));
	}

	for(int i=0;i<ans.size();i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}

int min(int a,int b)
{
	if(a < b)
	{
		return a;
	}
	return b;
}

int getSum(int A[],int size,int K)
{
	quickSort(A,0,size-1);
	int sum = 0;
	//std::vector<int>t;
	for(int i = 0;i<size;i++)
	{
		for(int j = 0;j<size;j++)
		{
			int m = min(K,j-i+1);
			if(j-i+1 >= m)
			{
				for(int k=i;k<=j;k++)
				{
					sum = sum + A[k];
				}
				/*for(int k=i;k<=j;k++)
				{
					t.push_back(A[k]);
				}
				std::sort(t.begin(),t.end());
				int s = t.size() - 1;
				for(int h = 0;h <m;h++)
				{
					sum = sum + t[s];
					s--;
				}
				t.clear();*/
			}
		}
	}

	int q = pow(10,9) + 7;
	return sum%q;
}
