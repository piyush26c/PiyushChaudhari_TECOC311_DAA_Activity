/**
 *    author:  Piyush Rajendra Chaudhari
 *    created: 02.04.2020 18:40:54       
**/
#include <bits/stdc++.h>
using namespace std;

const int maxn = 100000 + 5;
int n, k;
int a[maxn];
map<int, int> mp;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a, a + n);
    int ret = 0;
    for (int i = 0; i < n; i++) {
        int l = i + 1, r = n - 1;
        while (l <= r) {
            int mid = (l + r) >> 1;
            if (a[mid] - a[i] == k) {
                ret += mp[a[mid]];
                break;
            }
            if (a[mid] - a[i] > k) r = mid - 1;
            else l = mid + 1;
        }
    }
    cout << ret << "\n";
    return 0;
}
