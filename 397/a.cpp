#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <iomanip>
#include <list>
using namespace std;
 
#define int long long
 
string s;
list <char> l;
list <char> :: iterator it;
 
int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> s;
    it = l.begin();
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a')
            l.insert(it, s[i]);
        else if (s[i] == 'L' && it != l.begin())
            it--;
        else if (s[i] == 'R' && it != l.end())
            it++;
    }
    for (it = l.begin(); it != l.end(); it++)
        cout << *it;
    cout << endl;
    return 0;
}