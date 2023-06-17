#include <bits/stdc++.h>
using namespace std;
 
int n, a;
 
bool isPrime(int x) {
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    while (n--) {
        cin >> a;
        int num = 0;
        for (int i = 2; i * i <= a; i++) {
            if (a % i == 0) {
                num = i;
                break;
            }
        }
        if (num && isPrime(a / num))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}