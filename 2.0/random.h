/*********************************************************************************************************************
 * HQKJ Problem Cases Data Generator Head Files
 * Created By : Sunday 2024-05-12 23:46
 * Author     : @Capzera @2070super
 * E-mail     : 1786126188@qq.com / 1025404072@qq.com
 * Version    : V 2 . 0
 * This header file helps teachers quickly and accurately derive data for topic tests. 
 * Thank you for using it. If you have any questions or suggestions please refer to the documentation or contact us!
*********************************************************************************************************************/
#ifndef RANDOM_H
#define RANDOM_H

#include <bits/stdc++.h>
using namespace std;

static string FileName = "";
static int caseNumber = 0;

template<typename T>
void iprint(T &x, char y = ' ') {
	string aaa = FileName + to_string(caseNumber) + ".in";
	freopen(aaa.c_str(), "w", stdout);
	cout << x << y;
	fclose(stdin);
}

template<typename T>
void oprint(T &x, char y = ' ') {
	string bbb = FileName + to_string(caseNumber) + ".out";
	freopen(bbb.c_str(), "w", stdout);
	cout << x << y;
	fclose(stdout);
}

void init(string fileName = "") {
	FileName = fileName;
	srand(time(NULL));
}

long long mrand(long long l, long long r) {
	long long ans = (rand() % (r - l + 1)) + l;
	return ans;
}

long long intRand(long long l, long long r, double minus = 0) {
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
		int minusGenerator1 = mrand(1, 100);
		if (minusGenerator1 <= minus * 100) {
			ans = -ans;
		}
	}
	return ans;
}
# endif
