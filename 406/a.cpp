#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 1e1 + 10;
int n, m, l, b[MAXN];
pair <int, int[MAXN]> p[MAXN];
bool mark[MAXN];
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> p[i].first;
        for (int j = 0; j < p[i].first; j++)
            cin >> p[i].second[j];
    }
    while (m--) {
        for (int i = 0; i < n; i++)
            mark[i] = true;
        cin >> l;
        for (int i = 0; i < l; i++) {
            cin >> b[i];
            if (b[i] > 0) {
                for (int j = 0; j < n; j++) {
                    if (!mark[j]) continue;
                    bool f = true;
                    for (int k = 0; k < p[j].first; k++) {
                        if (p[j].second[k] == b[i]) {
                            f = false;
                            break;
                        }
                    }
                    if (f)
                        mark[j] = false;
                }
            }
            else {
                for (int j = 0; j < n; j++) {
                    if (!mark[j]) continue;
                    bool f = false;
                    for (int k = 0; k < p[j].first; k++) {
                        if (p[j].second[k] == b[i] * -1) {
                            f = true;
                            break;
                        }
                    }
                    if (f)
                        mark[j] = false;
                }
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
            if (mark[i]) cnt++;
        cout << cnt << '\n';
        if (cnt) {
            for (int i = 0; i < n; i++) {
                if (mark[i]) {
                    cout << p[i].first << " ";
                    for (int j = 0; j < p[i].first; j++)
                        cout << p[i].second[j] << " ";
                    cout << '\n';
                }
            }    
        }
    }
    return 0;
}