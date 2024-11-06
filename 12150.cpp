#include <bits/stdc++.h>
#include <cstring>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define mii map<int, int>
#define pb push_back
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void judge() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
void input(vi &arr, int n) {
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
}

int solve() {
  int n;
  cin >> n;
}
int solve(int N, vector<pair<int, int>> &arr) {

  vector<int> ans(N, -1);
  for (int i = 0; i < N; i++) {
    int initStanding = i + arr[i].second;
    if (initStanding >= 0 && initStanding <= N - 1) {
      if (ans[initStanding] == -1) {
        ans[initStanding] = arr[i].first;
      } else {
        return 1;
      }
    } else {
      return 1;
    }
  }
  for (auto it : ans) {
    cout << it << " ";
  }
  cout << endl;
  return 0;
}

void testcases() {
  int t;
  t = 4;
  while (t--) {
    int N;
    cin >> N;
    vector<pair<int, int>> arr;
    for (int i = 0; i < N; i++) {
      int a, b;
      cin >> a >> b;
      arr.push_back(make_pair(a, b));
    }
    int ans = solve(N, arr);
    if (ans) {
      cout << -1 << endl;
    }
  }
}

int main() {
  judge();
  testcases();
  return 0;
}
