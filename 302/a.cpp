#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;
 
#define int long long
 
string s;
vector <int> v;
 
int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> s;
    string x = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '<') {
            if (s[i + 1] == 'U')
                x += '(', i += 3;
            else if (s[i + 1] == 'D')
                x += '[', i += 5;
            else if (s[i + 1] == '/' && s[i + 2] == 'U')
                x += ')', i += 4;
            else x += ']', i += 6;
        }
        else x += s[i];
    }
    s = x;
    for (int i = 0; i < s.size(); i++) {
        if (!v.size() && s[i] != '(' && s[i] != ')' && s[i] != '[' && s[i] != ']')
            cout << s[i];
        else if (s[i] == ')' || s[i] == ']')
            v.pop_back();
        else if (s[i] == '(')
            v.push_back(1);
        else if (s[i] == '[')
            v.push_back(2);
        else {
            if (v.back() == 1 && s[i] >= 'a')
                cout << char(s[i] - 'a' + 'A');
            else if (v.back() == 2 && s[i] < 'a')
                cout << char(s[i] + 'a' - 'A');
            else
                cout << s[i];
        }
    }
    cout << endl;
    return 0;
}