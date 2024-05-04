#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a;
    cin >> a;
    set <int> arr;
    for (int i = 0; i < a; i++) {
        int b, c;
        cin >> b >> c;
        if (b == 1) arr.insert(c);
        else if (b == 2) arr.erase(c);
        else {
            auto it = arr.find(c);
            if (it != arr.end() && *it == c) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }  
    return 0;
}



