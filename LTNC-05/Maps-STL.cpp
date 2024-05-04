#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;
    cin >> a;
    map <string, int> m;
    for (int i = 0; i < a; i++) {
        int b;
        cin >> b;
        string c;
        cin >> c;
        if (b == 1) { 
            int d;
            cin >> d;
            m[c] += d;
        }
        if (b == 2) {
            m[c] = 0;
        }
        if (b == 3) {
            cout << m[c] << endl;
        }
    }
    return 0;
}



