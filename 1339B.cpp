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

/*
CONSTRUCT:
1. Take always front and end
3. 
*/

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    deque<int> data;

    FORO(i, n) {
      int x;
      cin >> x;

      data.push_back(x);
    }
    sort(data.begin(), data.end());

    vector<int> ans;
    while (!data.empty()) {
      ans.pub(data.front()); data.pop_front();
      if (data.empty()) continue;
      ans.pub(data.back()); data.pop_back();
    }

    ROFO(i, ans.size()-1) {
      printf((i != 0) ? "%d " : "%d\n", ans[i]);
    }
  }
}