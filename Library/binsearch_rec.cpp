#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll binarySearch(vector<ll> arr, ll l, int r, ll x){
    if (r >= l) {
        ll mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}