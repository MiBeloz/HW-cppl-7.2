#include <iostream>
#include <set>


int main() {
	setlocale(LC_ALL, "ru");
	std::cout << "\tУдаление дубликатов\n" << std::endl;

	std::set<int> set;
	int size = 0;
	int n = 0;

	std::cout << "[IN]:" << std::endl;
	std::cin >> size;
	for (int i = 0; i < size; i++) {
		std::cin >> n;
		set.insert(n);
	}

	std::cout << std::endl << "[OUT]:" << std::endl;
	for (auto it = set.crbegin(); it != set.crend(); ++it) {
		std::cout << *it << std::endl;
	}

	system("pause > nul");
	return 0;
}