// countAndSay_38.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;
string next(string s)
{
	string res;
	char c = s[0];
	int n = 1;
	int i = 1;
	for (;i<s.size();i++)
	{
		if (s[i]==s[i-1])
		{
			n++;
		}
		else
		{
			res.push_back(n + '0');
			res.push_back(s[i - 1]);
			n = 1;
		}
	}
	res.push_back(n + '0');
	res.push_back(s[i - 1]);
	return res;
}

string countAndSay(int n) {
	string s = "1";
	n--;
	while (n--)
	{
		s = next(s);
	}
	return s;
}

int main()
{
	cout << countAndSay(5);
    return 0;
}

