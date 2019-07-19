// CCI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using namespace std;
bool isPermPalindrome(string st) {
	bool* arr; arr = new bool[128];
	int i, n, count;
	for (i = 0; i < 128; i++) {
		arr[i] = false;
	}
	n = st.size(); count = 0;
	for (i = 0; i < n; i++) {
		arr[st[i]]=!arr[st[i]];
	}
	for (i = 0; i < 128; i++) {
		if (arr[i]){
			count++;
			}
		if (count >= 2) {
			return false;
		}
	}
	return true;
}
int main()
{

		return 0;
}
