#include <iostream>
#include <vector>
#include <string>
int main() {
	int a;
	std::cin >> a;
	std::vector <std::string> arr = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	if (a >= 1 && a <= 9) std::cout << arr[a - 1];
	else std::cout << "Greater than 9";
}