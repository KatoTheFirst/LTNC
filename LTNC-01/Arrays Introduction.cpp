#include <iostream>
#include <vector>
int main() {
    int a, b;
    std::cin >> a;
    std::vector <int> arr;
    for (int i = 0; i < a; i++) {
        std::cin >> b;
        arr.push_back(b);
    }
    for (int i = a; i > 0; i--) {
        std::cout << arr[i - 1] << " ";
    }
}