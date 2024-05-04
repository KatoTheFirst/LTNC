#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a;
    vector <int> arr;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int b;
        cin >> b;
        arr.push_back(b);
    }
    sort(arr.begin(), arr.end());
    cin >> a;
    for (int i = 0 ; i < a; i++) {
        int b;
        cin >> b;
        auto res = lower_bound(arr.begin(), arr.end(), b);
        if (res != arr.end() && *res == b) cout << "Yes " << res - arr.begin() + 1 << endl;
        else cout << "No " << res - arr.begin() + 1 << endl;
    }  
    return 0;
}
