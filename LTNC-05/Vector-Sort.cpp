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
    sort(arr.begin(), arr.end());
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
