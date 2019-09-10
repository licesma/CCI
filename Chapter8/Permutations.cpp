
#include <iostream>
#include<algorithm>
#include <vector>
#include <string>
#include "TreeNode.h"
using namespace std;
// @author Esteban Mart�nez

void permuts(string remaining, string current, vector<string>* res, int delPos) {
	if (delPos >= 0) {
		remaining.erase(remaining.begin() + delPos);
	}
	if (remaining.size() > 0) {
		
		int i, n = remaining.size();
		for (i = 0; i < n; i++) {
		
			current.push_back(remaining[i]);
			permuts(remaining, current, res, i);
			current.pop_back();
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
	permutations("eml");
		return 0;
}

