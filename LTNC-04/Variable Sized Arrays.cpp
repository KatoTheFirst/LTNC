#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a, b;
    cin >> a >> b;
    vector <vector<int>> arr1;
    for (int i = 0; i < a; i++) {
        int c;
        cin >> c;
        vector <int> arr2;
        for (int j = 0; j < c; j++) {
            int x;
            cin >> x;
            arr2.push_back(x);
        }
        arr1.push_back(arr2);
    }
    for (int i = 0; i < b; i++) {
        int a1, b1;
        cin >> a1 >> b1;
        cout << arr1[a1][b1] << endl;
    }
    return 0;
}
