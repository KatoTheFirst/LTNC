#include <iostream>
#include <vector>
#include <string>
int main() {
    int a, b;
    std::cin >> a >> b;
    std::vector <std::string> arr = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) std::cout << arr[i - 1] << std::endl;
        else {
            if (i % 2 == 0) std::cout << "even" << std::endl;
            else std::cout << "odd" << std::endl;
        }
    }
}