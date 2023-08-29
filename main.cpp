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
	
	std::cout << "List homework 75:" << std::endl;

	for_each(li.begin(), li.end(), [](int i) { (i > 100 && i < 200) ? (std::cout << i << " ") : (std::cout << "");});
	
	std::cout << std::endl;

	// counting sort

	std::vector<int> vec{ 1, 2, 8, 4, 2, 7, 8, 9, 10, 1, 10, 2, 3, 4, 7, 8, 3, 4, 5, 4, 5, 6, 7, 6, 9, 10, 3 };
	std::vector<int> vec_count{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	for (int item: vec) {
		vec_count[item - 1]++;
	}
	std::cout << "Counting sort: " << std::endl;
	std::cout << "Vector: ";

	for (int item : vec) {
		std::cout << item << " ";
	}
	std::cout << std::endl;

	int next = 0;
	for (int i = 0; i < vec_count.size(); i++) {
		for (int g = 0; g < vec_count[i]; g++) {
			vec[next] = i + 1;
			next++;
		}
	}
	std::cout << "Sorted vector: ";
	for (int item : vec) {
		std::cout << item << " ";
	}

	return 0;
}