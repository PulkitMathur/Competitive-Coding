//============================================================================
// Name        : Princess.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <unordered_map>

using namespace std;

std::string getAns(std::string s);
int countPalindromes(string s);


int main()
{
	int T;
	std::vector<string>ans;
	string s;
	cin >> T;
	for(int i = 0;i<T;i++)
	{
		cin >> s;
		ans.push_back(getAns(s));
	}

	for(int i = 0;i<ans.size();i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}


std::string getAns(std::string s)
{
	int x = countPalindromes(s);
	//cout << "countPalindromes = " << x << endl;
	//cout << "s.len = " << s.length() << endl;
	if(x>0)
	{
		return "YES";
	}
	return "NO";
}



int countPalindromes(string s)
{
    std::unordered_map<string, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        // check for odd length palindromes
        for (int j = 0; j <= i; j++)
        {
            if (!s[i + j])
            {
                break;
            }

            if (s[i - j] == s[i + j])
            {

                // check for palindromes of length
                // greater than 1
                if ((i + j + 1) - (i - j) > 1)
                {
                    m[s.substr(i - j,(i + j + 1) - (i - j))]++;
                    return 1;
                }

            } else
                break;
        }

        // check for even length palindromes
        for (int j = 0; j <= i; j++)
        {
            if (!s[i + j + 1])
            {
                break;
            }
            if (s[i - j] == s[i + j + 1])
            {
                // check for palindromes of length
                // greater than 1
                if ((i + j + 2) - (i - j) > 1)
                {
                    m[s.substr(i - j,
                         (i + j + 2) - (i - j))]++;
                    return 1;
                }
            }
            else
            {
                break;
            }
        }
    }

    return m.size();
}
