#include <bits/stdc++.h>
#define FOR(i, start, end) for(int i = start; i < end; i++)
#define ROF(i, start, end) for(int i = end; i > start; i--)
#define FORO(i, end) for(int i = 0; i < end; i++)
#define ROFO(i, start) for(int i = start; i >= 0; i--)
#define pub push_back
#define fir first
#define sec second
#define pob pop_back
#define mp make_pair
#define read_arr(arr, start, end) for (int i = start; i < end; i++) { cin >> arr[i]; }
#define vi vector<int>
#define vl vector<long>
#define pii pair<int, int>
using namespace std;
typedef long long LL;
typedef long double LD;

const int MA = 101;
int b[MA], g[MA];

int main() {
    int n, m, ans = 0;

    cin >> n;
    FORO(i, n) {
        int x;
        cin >> x;
        b[x]++;
    }

    cin >> m;
    FORO(i, m) {
        int x;
        cin >> x;
        g[x]++;
    }

    FORO(i, 101) {
        FOR(j, -1, 2) {
            int ptr = i+j;
            if (b[ptr] > 0) {
                int sub = min(b[ptr], g[i]);
                b[ptr] -= sub;
                g[i] -= sub;
                ans += sub;
            }
        }
    }
    printf("%d\n", ans);
}