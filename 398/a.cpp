#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 5e1 + 10;
int n, x;
pair <int, int[MAXN]> p[MAXN];
vector <int> v;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        cin >> p[i].first;
        for (int j = 0; j < p[i].first; j++) {
            cin >> p[i].second[j];
        }
    }
    for (int i = 1; i <= n; i++) {
        if (i == x) continue;
        for (int j = 0; j < p[i].first; j++) {
            bool f = true;
            for (int k = 0; k < p[x].first; k++) {
                if (p[i].second[j] == p[x].second[k]) {
                    f = false;
                    break;
                }
            }
            if (f && p[i].second[j] != x)
                v.push_back(p[i].second[j]);
        }
    }
    cout << v.size() << '\n';
    if (v.size()) {
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << '\n';    
    }
    return 0;
}