// CCI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using namespace std;
bool uniqueCharacters(string str) {
	bool* arr; arr = new bool[128];
	int i, n;
	for (i = 0; i < 128; i++) {
		arr[i] = 0;
	}
	n = str.size();
	for (int i = 0; i < n; i++) {
		if (arr[str[i]]) {
			return false;
		}
		else {
			arr[str[i]] = 1;
		}
	}
	return true;

}
bool uniqueCharactersNM(string str) {// limited memory
	for (int i = 0; i < str.size(); i++) {
		for (int j = i + 1; j < str.size(); j++) {
			if (str[i] == str[j]) {
				return false;
			}
		}
	}
	return true;
}
int main()
{
	
}


