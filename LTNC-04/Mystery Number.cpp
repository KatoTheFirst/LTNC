#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, sum1 = 0, sum2 = 0;
    cin >> a;
    vector <int> arr1(a);
    vector <int> arr2(a + 1);
    for (int i = 0; i < a; i++) {
        cin >> arr1[i];
        sum1 += arr1[i];
    }
    for (int i = 0; i < a + 1; i++) {
        cin >> arr2[i];
        sum2 += arr2[i];
    }
    cout << sum2 - sum1;
    return 0;
}
