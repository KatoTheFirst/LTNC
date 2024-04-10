#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));
    string a = s.substr(8, 2);
    string h;
    if (a == "PM") {
        hour += 12;
        h = to_string(hour);
        if (hour == 24) h = "12";
        return h + ":" + s.substr(3, 2) + ":" + s.substr(6, 2);
    }
    else {
        h = to_string(hour);
        if (hour == 12) h = "00";
        return h + ":" + s.substr(3, 2) + ":" + s.substr(6, 2);
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
