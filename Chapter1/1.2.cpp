// CCI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using namespace std;
bool isPermutation(string s1, string s2){
	int i, n1, n2; n1 = s1.size(); n2 = s2.size();
	if (n1==n2) {
		int* arr; arr = new int[128];
		for (i = 0; i < 128; i++) {
			arr[i] = 0;
		}
		for (i = 0; i < n1; i++) {
			arr[s1[i]]++;
		}
		for (i = 0; i < n2; i++) {
			arr[s2[i]]--;
		}
		for (i = 0; i < 128; i++) {
			if (arr[i] != 0) {
				return false;
			}
		}
			return true;
	}
	else {
		return false;
	}


}
int main()
{
	cout << isPermutation("dented", "tened");
}


