# Subarray Sums II (ID: 1661)

**Problem Link:** [https://cses.fi/problemset/task/1661/](https://cses.fi/problemset/task/1661/)

## Problem Description

Given an array of n integers, your task is to count the number of subarrays having sum x.

## Solution

```cpp
#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, x;
    cin >> n >> x;

    vector<long long> arr(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    map<long long, int> prefix_count;

    long long ans = 0;

    for(int i = 0; i <= n; i++) {
        if(prefix_count.count(arr[i] - x))      ans += prefix_count[arr[i] - x];

        prefix_count[arr[i]]++;
    }

    cout << ans << '\n';

    return 0;
}
```
