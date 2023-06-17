#include <bits/stdc++.h>
using namespace std;
 
int n;
vector <pair <int, int>> ans;
 
bool isPrime(int x) {
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 3; i + 2 <= n; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            ans.push_back(make_pair(2, i));
        }
    }
    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i].first << " " << ans[i].second << '\n';
    return 0;
}