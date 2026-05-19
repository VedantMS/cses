// CSES Problem 1660: Subarray Sums I
// Link: https://cses.fi/problemset/task/1660/
// Description: Given an array of n positive integers, your task is to count the number of subar...

#include<iostream>
#include<vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, x;
    cin >> n >> x;

    vector<long long> arr(n);

    for(auto &it : arr)     cin >> it;

    long long index = 0, sum = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];

        while(sum > x)      sum -= arr[index++];

        if(sum == x)        ans++;
    }

    cout << ans << '\n';

    return 0;
}
