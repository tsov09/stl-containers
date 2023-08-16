#include <iostream>
#include <list>
#include <vector>
#include <set>

using namespace std;


void remove_item_list(list<int> li, int n) {
	cout << "      { ";
	for (auto it = li.begin(); it != li.end(); it++) {
		if (*it < n) {
			li.erase(it);
			it--;
		}
		else {
			cout << *it << " ";
		}
	}
	cout << "}";
}

void remove_item_vector(vector<int> vi, int n) {
	cout << "        { ";
	for (auto it = vi.begin(); it != vi.end(); it++) {
		if (*it < n) {
			it = vi.erase(it);
			it--;
		}
		else {
			cout << *it << " ";
		}
	}
	cout << "}";
}

void remove_item_set(set<int> si, int n) {
	cout << "     { ";
	for (set<int>::iterator it = si.begin(); it != si.end(); it++) {
		if (*it < n) {
			it = si.erase(it);
		}
		else {
			cout << *it << " ";
		}
	}
	cout << "}";
}

int main() {
	int n = 20;
	list<int> li {85, 45, 96, 12, 17, 39};
	cout << "List: { ";
	for (auto it = li.begin(); it != li.end(); it++) {
		cout << *it << " ";
	}
	cout << "}";
	cout << endl;
	remove_item_list(li, n);
	cout << endl;

	vector<int> vi{ 85, 45, 96, 12, 17, 39 };
	cout << "Vector: { ";
	for (auto it : vi) {
		cout << it << " ";
	}
	cout << "}";
	cout << endl;
	remove_item_vector(vi, n);
	cout << endl;

	set<int> si { 85, 45, 96, 12, 17, 39 };
	cout << "Set: { ";
	for (auto it : si) {
		cout << it << " ";
	}
	cout << "}";
	cout << endl;
	remove_item_set(si, n);

	return 0;
}