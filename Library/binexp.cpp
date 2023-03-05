#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll mod = 1e9 + 7;

int binexp(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}
