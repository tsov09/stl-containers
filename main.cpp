#include <iostream>
#include <list>
#include <vector>
#include <set>
#include<algorithm>

//using namespace std;


void remove_item_list(std::list<int> li, int n) {
	std::cout << "      { ";
	for (auto it = li.begin(); it != li.end(); it++) {
		if (*it < n) {
			li.erase(it);
			it--;
		}
		else {
			std::cout << *it << " ";
		}
	}
	std::cout << "}";
}

void remove_item_vector(std::vector<int> vi, int n) {
	std::cout << "        { ";
	for (auto it = vi.begin(); it != vi.end(); it++) {
		if (*it < n) {
			it = vi.erase(it);
			it--;
		}
		else {
			std::cout << *it << " ";
		}
	}
	std::cout << "}";
}

void remove_item_set(std::set<int> si, int n) {
	std::cout << "     { ";
	for (std::set<int>::iterator it = si.begin(); it != si.end(); it++) {
		if (*it < n) {
			it = si.erase(it);
		}
		else {
			std::cout << *it << " ";
		}
	}
	std::cout << "}";
}

int main() {
	int n = 20;
	std::list<int> li {85, 103, 45, 140, 157, 96, 12, 207, 17, 39, 178 };
	
	for_each(li.begin(), li.end(), [](int i) { (i > 100 && i < 200) ? (std::cout << i << " ") : (std::cout << "");});
	
	std::cout << std::endl;

	/*remove_item_list(li, n);
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
	remove_item_set(si, n);*/

	return 0;
}