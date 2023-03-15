#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll binarySearch(vector<ll> v, ll To_Find){
    ll lo = 0, hi = v.size() - 1;
    ll mid;
    while (hi - lo > 1) {
        ll mid = lo + (hi-lo)/2;
        if (v[mid] < To_Find) {
            lo = mid + 1;
        }
        else {
            hi = mid;
        }
    }
    if (v[lo] == To_Find) {
        return lo;
    }
    else if (v[hi] == To_Find) {
        return hi;
    }
    else {
        return -1;
    }
}