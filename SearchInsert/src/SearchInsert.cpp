//============================================================================
// Name        : SearchInsert.cpp
// Author      : Pulkit Mathur
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;
int find(std::vector<int> nums, int target)
{
	if(target > nums[nums.size()-1])
	{
		return nums.size();
	}

	if(target <= nums[0])
	{
		return 0;
	}
	int z = -1;
	for(int i=0;i<nums.size();i++)
	{
		if(nums[i] == target)
		{
			z = i;
		}
	}
	cout << "Not in array" << endl;
	if(z == -1)
	{
		cout << "z = -1" << endl;
		for(int i=0;i<nums.size();i++)
		{
			if(nums[i]>target)
			{

				z = i;
				cout << "z = " << z << endl;
				break;
			}
		}
	}
	return z;
}
int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	std::vector<int>x;
	x.push_back(1);
	x.push_back(3);
	x.push_back(5);
	cout << find(x,2);
	return 0;
}
