#include <bits/stdc++.h>
using namespace std;

void cnt_sort(vector<int> v, int n){
    int mx = -1e9;

    for (int i = 0; i < n; i++)
        mx = max(mx, v[i]);

    vector<int> cnt(mx + 1, 0);

    for (int i = 0; i < n; i++) cnt[v[i]] += 1;

    int lidx = 0;

    for (int i = 0; i <= mx; i++){
        while (cnt[i]--){
            v[lidx] = i;
            lidx += 1;
        }
    }

    for (int i = 0; i < n; i++) cout << v[i] << "  ";
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    cnt_sort(v, n);
}

int main() {
    solve();
}