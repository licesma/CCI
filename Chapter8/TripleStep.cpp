
#include <iostream>
#include<algorithm>
#include <vector>
#include "TreeNode.h"
using namespace std;

void ways(vector<int> toUse, vector<int> used, int n, vector<vector<int>>* res) {
	if (n != 0) {
		if (toUse.size() > 1) {
			int div; div = toUse[toUse.size()-1];
			toUse.pop_back();
			int i = 0, num = n;
			while (num>= 0) {
				used.push_back(i);
				//cout << "\neste es num: "<<num << ", cuando div es: " << div;
				ways(toUse, used, num, res);
				used.pop_back();
				i++; num = num - div;
			}
		}
		else {
			used.push_back(n);
			toUse.pop_back();
			ways(toUse, used, 0, res);
		}
	}
	else {
		for (int i = 0; i < (toUse.size()); i++) {
			used.push_back(0);
		}
		cout << "\n[";
		for (int i = 0; i < used.size()-1; i++) {
			cout << used[i] << ", ";
		}
		cout << used[used.size() - 1] << "]\n";
		res->push_back(used);
	}
}
void prueba(vector<int> vec) {
	if (vec[vec.size() - 1] != 3) {
		cout << "\ntamano " << vec.size() << "\n";
		vec.push_back(vec[vec.size() - 1]+1);
		cout << "entro \n";
		prueba(vec);
		
	}
	else {
		cout << "se salio\n";
	}

}
	

int main(){

	vector<int> toUse; 
	toUse.push_back(1); toUse.push_back(2); toUse.push_back(3);
	vector<int> use; use.clear();
	vector<vector<int>>* res = new vector<vector<int>>();
	ways(toUse, use, 14, res);

		return 0;
}

