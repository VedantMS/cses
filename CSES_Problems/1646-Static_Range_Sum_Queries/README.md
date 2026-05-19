# Static Range Sum Queries (ID: 1646)

**Problem Link:** [https://cses.fi/problemset/task/1646/](https://cses.fi/problemset/task/1646/)

## Problem Description

Given an array of n integers, your task is to process q queries of the form: what is the sum of values in range [a,b]?

## Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    vector<long long> arr(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    while(q--) {
        long long a, b;
        cin >> a >> b;

        cout << arr[b] - arr[a - 1] << '\n';
    }

    return 0;
}
```
