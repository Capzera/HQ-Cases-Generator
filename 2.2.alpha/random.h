/*********************************************************************************************************************
 * HQKJ Problem Cases Data Generator Head Files
 * Created By : Sunday 2024-05-12 23:46
 * Author     : @Capzera @2070super
 * E-mail     : 1786126188@qq.com / 1025404072@qq.com
 * Version    : V 2 . 1
 * This header file helps teachers quickly and accurately derive data for topic tests.
 * Thank you for using it. If you have any questions or suggestions please refer to the documentation or contact us!
*********************************************************************************************************************/
#ifndef RANDOM_H
#define RANDOM_H

#include <bits/stdc++.h>
using namespace std;

static string InputFileSuffix = "in";
static string OutputFileSuffix = "out";
static string FileName = "";
static string InputStream = "";
static string OutputStream = "";
static int caseNumber = 0;

template<typename T>
void iprint(T &x, char y = ' ') {
	InputStream += to_string(x);
	InputStream += y;
}

template<typename T>
void oprint(T &x, char y = ' ') {
	OutputStream += to_string(x);
	OutputStream += y;
}

void filePrint() {
	string InputFileName = FileName + to_string(caseNumber) + "." + InputFileSuffix;
	freopen(InputFileName.c_str(), "w", stdout);
	cout << InputStream;
	fclose(stdout);
	string OutputFileName = FileName + to_string(caseNumber) + "." + OutputFileSuffix;
	freopen(OutputFileName.c_str(), "w", stdout);
	cout << OutputStream;
	fclose(stdout);
	InputStream = OutputStream = "";
}

void init(int l, int r, string fileName = "") {
	FileName = fileName;
	srand(time(NULL));
}

inline long long mrand(long long l, long long r) { // 生成[l, r]闭区间的数, l为正整数或0, r不超过10000。
	if (l > r) {
		freopen ("CON", "w", stdout);
		cout << "mrand() :: Illegal parameter, [Range conflict]. Program had Broken!" << endl;
		exit(100);
		return 0;
	}
	long long ans = (rand() % (r - l + 1)) + l;
	return ans;
}

template<typename T>
T minusGenerate(T x, double minusRatio = 0) {
	if (minusRatio) {
		int minusGenerator1 = mrand(1, 100);
		if (minusGenerator1 <= minusRatio * 100) {
			x = -x;
		}
	}
	return x;
}

long long CapzeraRand(long long l, long long r) { // 生成[l, r]闭区间的数, l为正整数或0, r 不超过 long long。
	if (l > r || !r) return 0;
	r--;
	string stringNumber = to_string(r);
	int stringNumberLen = stringNumber.size(), minLen = to_string(l).size();
	long long ans = 0;
	int numberLen = mrand(minLen, stringNumberLen);
	if (numberLen == stringNumberLen) {  // 生成数长度等于目标数长度
		long long head = stringNumber[0] - '0';
		ans += mrand(1, head);
		r -= head * pow(10, --numberLen);
		if (!r && ans == head) {
			return 1ll * ans * pow(10, numberLen);
		}
	}
	while (numberLen >= 0) {
		int generate = pow(10, min(numberLen, 3));
		long long number = mrand(1, generate - 1);
		ans = ans * generate + number;
		numberLen -= 3;
	}
	return ans;
}

long long intRand(long long l, long long r, double minusRatio = 0) {
	if (l > r) {
		freopen ("CON", "w", stdout);
		cout << "intRand() :: Illegal parameter, [Range conflict]. Program had Broken!" << endl;
		exit(2);
	}
	if (minusRatio > 1 || minusRatio < 0) {
		freopen ("CON", "w", stdout);
		cout << "intRand() :: Illegal parameter, [minusRatio Out of Range, Range must belongs [0 - 1]]. Program had Broken!" << endl;
		exit(3);
	}
	long long result = CapzeraRand(l, r);
	while (result < l) {
		result = CapzeraRand(l, r);
	}
	return minusGenerate(result);
}

long long mulIntRand(long long _l, long long _r, long long _division, double _minusRatio = 0) {
	long long realL = _l / _division;
	long long realR = _r / _division;
	long long result = intRand(realL, realR, _minusRatio);
	return 1ll * result * _division;
}

char charRand(bool NumFlag = 0, bool LowerCase = 0, bool CapitalCase = 0, bool Ascii = 0) {
	if (NumFlag == 0 && LowerCase == 0 && CapitalCase == 0 && Ascii == 0) {
		freopen ("CON", "w", stdout);
		cout << "charRand() :: Illegal parameter, [All parameter was 0]. Program had Broken!" << endl;
		exit(1);
	}
	vector<char>v;
	if (Ascii == 1) {
		return mrand(0, 127);
	}
	if (NumFlag == 1) {
		v.push_back(mrand(0, 9) + '0');
	}
	if (LowerCase == 1) {
		v.push_back(mrand(0, 25) + 'a');
	}
	if (CapitalCase == 1) {
		v.push_back(mrand(0, 25) + 'A');
	}
	int n = mrand(0, v.size() - 1);
	return v[n];
}

string stringRand(size_t size = 0, bool NumFlag = 0, bool LowerCase = 0, bool CapitalCase = 0, bool Ascii = 0) {
	if (NumFlag == 0 && LowerCase == 0 && CapitalCase == 0 && Ascii == 0) {
		freopen ("CON", "w", stdout);
		cout << "stringRand() :: Illegal parameter, [All parameter was 0]. Program had Broken!" << endl;
		exit(1);
	}
	string s;
	for (size_t i = 0; i < size; i++) {
		s.push_back(charRand(NumFlag, LowerCase, CapitalCase, Ascii));
	}
	return s;
}

string highIntRand(int Left, int Right) {
	if (Left > Right) {
		freopen ("CON", "w", stdout);
		cout << "highIntRand() :: Illegal parameter, [Range conflict]. Program had Broken!" << endl;
		exit(2);
	}
	int b = mrand(Left, Right);
	string answer;
	for (int i = 0; i < b; i++) {
		if (i == 0) {
			answer.push_back(mrand(1, 9) + '0');
		} else {
			answer.push_back(mrand(0, 9) + '0');
		}
	}
	return answer;
}

string highIntRand(string Left, string Right) {
	string s;
	if (Left.size() > Right.size() || (Left.size() == Right.size() && Left > Right)) {
		freopen ("CON", "w", stdout);
		cout << "highIntRand() :: Illegal parameter, [Range conflict]. Program had Broken!" << endl;
		exit(2);
	}
	string s2;
	for (size_t i = 0; i < Right.size() - Left.size(); i++) {
		s2.push_back('0');
	}
	Left = s2 + Left;
	string answer;
	for (size_t i = 0; i < Left.size(); i++) {
		int anum = Left[i] - '0';
		int bnum = Right[i] - '0';
		answer.push_back(mrand(anum, bnum) + '0');
	}
	size_t a = 0;
	while (answer[a] == '0') {
		a++;
	}
	answer.erase(0, a);
	return answer;
}

double doubleRand(int intParticialLen, int doubleParticialLen, double minusRatio = 0) {
	if (minusRatio > 1 || minusRatio < 0) {
		freopen ("CON", "w", stdout);
		cout << "doubleRand() :: Illegal parameter, [minusRatio Out of Range, Range must belongs [0 - 1]]. Program had Broken!" << endl;
		exit(3);
	}
	long long _SumLen = intParticialLen + doubleParticialLen;
	long long GeneRatorDoubleNumber = intRand(pow(10, _SumLen - 1), pow(10, _SumLen) - 1);
	double ans = 1.0 * GeneRatorDoubleNumber / pow(10, doubleParticialLen);
	return minusGenerate(ans, minusRatio);
}
# endif
