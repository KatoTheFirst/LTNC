#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    cin >> a;
    vector <int> arr;
    for (int i = 0; i < a; i++) {
        int b;
        cin >> b;
        arr.push_back(b);
    }   
    int c, d;
    cin >> a >> c >> d;
    arr.erase(arr.begin() + a - 1);
    arr.erase(arr.begin() + c - 1, arr.begin() + d - 1);
    cout << arr.size() << endl;
    for (int i = 0; i < int(arr.size()); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
