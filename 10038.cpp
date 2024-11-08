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

void solve() {
  vector<int> arr;
  int n = 5;
  for (int i = 0; i < n; i++) {
    int e;
    cin >> e;
    arr.push_back(e);
  }
  for (int i = 1; i < n; i++) {
    int diff = abs(abs(arr[i]) - abs(arr[i - 1]));
    if (arr[diff] >= 0) {
      arr[diff] = -arr[diff];
    }
  }
  int flag = 1;
  for (int i = 1; i < n - 1; i++) {
    if (arr[i] > 0) {
      flag = 0;
      break;
    }
  }
  if (flag) {
    cout << "Jolly" << endl;
  } else {
    cout << "Not Jolly" << endl;
  }
}

int main() {
  judge();
  int t = 2;
  while (t--) {
    solve();
  }
}
