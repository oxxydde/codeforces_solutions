#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
using namespace std;
typedef long long LL;

int main() {
    int t;
    cin >> t;

    while (t--) {
        LL n, k;
        cin >> n >> k;
        if ((n % 2) == (k % 2) && n >= (k * k)) printf("YES\n");
        else printf("NO\n");
    }
}