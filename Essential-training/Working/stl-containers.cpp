#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main() {
	//stl containers
	//vectors
	vector<int> v1 = { 1,2,3 };
	vector<int> v2(move(v1));
	for (int i : v2) {
		cout << i << endl;
	}
	cout << size(v1) << "&" << size(v2) << endl;

	//set
	set<string> s1 = { "Two", "One", "Five" };
	for (auto i : s1)
	{
		cout << i << endl;
	}

	//map
	map<string, string> m1 = { {"e", "f"} ,{"a", "b"}, {"c", "d"}};
	for (auto iter : m1) {
		cout << iter.first << " " << iter.second << endl;
	}
}