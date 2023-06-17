#include <bits/stdc++.h>
using namespace std;
 
int n, m, k, a;
vector <pair <int, int>> v, vk;
 
void f(int x) {
    while (v.size()) v.pop_back();
    for (int i = 2; i * i <= x; i++) {
        if (x % i) continue;
        v.push_back(make_pair(i, 0));
        while (x % i == 0) {
            x /= i;
            v[v.size() - 1].second++;
        }
    }
    if (x > 1)
        v.push_back(make_pair(x, 1));
}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m >> k;
    int ans, x;
    ans = 0, x = k;
    for (int i = 2; i * i <= x; i++) {
        if (x % i) continue;
        vk.push_back(make_pair(i, 0));
        while (x % i == 0) {
            x /= i;
            vk[vk.size() - 1].second++;
        }
    }
    if (x > 1)
        vk.push_back(make_pair(x, 1));
    for (int i = 0; i < n; i++) {
        cin >> a;
        f(a);
        // for (int i = 0; i < v.size(); i++)
        //     cout << v[i].first << "^" << v[i].second << " ";
        // cout << '\n';
        bool b = true;
        for (int j = 0; j < vk.size(); j++) {
            bool bb = true;
            for (int k = 0; k < v.size(); k++) {
                if (vk[j].first != v[k].first) continue;
                bb = false;
                if (v[k].second * m < vk[j].second) {
                    b = false;
                    break;
                }
            }
            if (bb) {
                b = false;
                break;
            }
        }
        if (b) ans++;
    }
    cout << ans << '\n';
    return 0;
}