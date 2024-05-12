/*

*/
#ifndef RANDOM_H
#define RANDOM_H

#include <bits/stdc++.h>
using namespace std;
template<typename T>
void print(T &x, char y = ' ') {
	cout << x << y;
}

void init(string fileName = "") {
	srand(time(NULL));
}

long long mrand(long long l, long long r) {
	long long ans = (rand() % (r - l + 1)) + l;
	return ans;
}

long long intRand(long long l, long long r, int minus = 0) {
	if (l > r) return 0;
	string xx = to_string(r);
	int len = xx.size();
	int ppp = rand() % len + 1;
	long long ans = LLONG_MIN;
	if (ans < l || ans > r) {
		if (ppp == 1) {
			ans = mrand(1, 9);
		} else if (ppp == len) ans = mrand(pow(10, ppp - 1), (xx[0] - '0') * pow(10, ppp - 1));
		else ans = mrand(pow(10, ppp - 1), pow(10, ppp) - 1);
	}
	if (minus) {
		int xxx = rand() % 2;
		if (xxx) ans = -ans;
	}
	return ans;
}
# endif
