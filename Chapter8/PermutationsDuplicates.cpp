
#include <iostream>
#include<algorithm>
#include <vector>
#include <string>
#include "TreeNode.h"
using namespace std;
// @author Esteban Martínez
bool contains(vector<char> vec, char ch) {
	int i, n = vec.size();
	for (i = 0; i < n; i++) {
		if (vec[i] == ch)
			return true;
	}
	return false;
}
void permuts(string remaining, string current, vector<string>* res, int delPos) {
	if (delPos >= 0) {
		remaining.erase(remaining.begin() + delPos);
	}
	if (remaining.size() > 0) {
		
		int i, n = remaining.size();
		vector<char> adding;
		for (i = 0; i < n; i++) {
			if (!contains(adding, remaining[i])) {
				current.push_back(remaining[i]);
				adding.push_back(remaining[i]);
				permuts(remaining, current, res, i);
				current.pop_back();
			}
			
		}
	}
	else {
		res->push_back(current);
		
		cout << current << "\n";
	}
}
vector<string>* permutations(string st) {
	string current = "";
	vector<string>* res; res = new vector<string>();
	permuts(st, current, res, -1);
	return res;
}


int main() {
	permutations("casa");
		return 0;
}

