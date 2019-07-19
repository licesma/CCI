// CCI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using namespace std;
void urlify(string &st, int length) {
	int i,n, distance; distance = 0;
	for (i = 0; i < length; i++) {
		if (st[i] == ' ') {
			distance++;
		}
	}
	distance = distance * 2;
	n = length - 1;
	while (distance != 0) {
		if (st[n] != ' ') {
			st[n + distance] = st[n];
		}
		else {
			st[n + distance] = '0'; distance--;
			st[n + distance] = '2'; distance--;
			st[n + distance] = '%';
		}
		n--;
	}
}
int main()
{
	string st; st = "hola esteban   ";
	 urlify(st,12);
	cout << st;

}


