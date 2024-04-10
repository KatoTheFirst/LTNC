#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    string c = a + b;
    string a1 = a, b1 = b;
    a1[0] = b[0], b1[0] = a[0];
    cout << c << '\n' << a1 << " " << b1;
    return 0;
}
