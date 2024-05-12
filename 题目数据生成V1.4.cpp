/*************************************
This code is for teacher who made a new
problem and need to create test cases.
This is a manual of the code.

@Create : 2024-01-31 17:59
@Author : Capzera
@E-mail : 1786126188@qq.com

void print(long long x, int p) // This function is used to output the input data to a file
	p = 0 cout space after print
	p = 1 cout null after print
	p = 2 cout enter after print

long long mrand(ll x, ll y, int g, int p) //This function is a custom random function
	g = 0 generate the ramdom number
	g = 1 generate the random character
	g = 2 generate the char number
**************************************/
#include <bits/stdc++.h>
using namespace std;

template<typename T>
void print(T x, int p = 0) {
	cout << x;
	if (!p) cout << " ";
	if (p == 2) cout << endl;
}
bool is(string s)
{
	bool ans=true;
	int i=0,j=s.size()-1;
	if(s.size()==1)
	{
		return true;
	}
	while(j>i)
	{
		if(s[j]!=s[i])
		{
			return false;
		}
	}
	return true;
}
long long mrand(long long x, long long y, int g = 0, int p = 0) {
	long long a = INT_MIN, b = INT_MIN, c = INT_MIN, d = INT_MIN, ans = LLONG_MIN;
	long long eps1 = 1000000000000;
	int ran;
	char ansc = ' ';
	if (!g) { //d = 0 only Long long int numbers
		while (ans < x || ans > y) {
			if (y <= 1e4) {
				ans = rand() % y;
			}
			else if (y <= 1e5) {
				a = rand() % 100;
				b = rand() % 1000;
				ans = a * 1000 + b;
			}
			else if (y <= 1e6) {
				a = rand() % 1000;
				b = rand() % 1000;
				ans = a * 1000 + b;
			}
			else if (y <= 1e9) {
				a = rand() % 1000;
				b = rand() % 1000;
				c = rand() % 1000;
				ans = a * 1e6 + b * 1e3 + c;
			}
			else if (y <= eps1) {
				a = rand() % 1000;
				b = rand() % 1000;
				c = rand() % 1000;
				d = rand() % 1000;
				ans = a * 1e9 + b * 1e6 + c * 1e3 + d;
			}
		}
		print(ans, p);
		return ans;
	}
	if (g == 1) { // all Letters and Numbers
        ran = rand() % 128;
		while (!isalpha(ansc) || isdigit(ansc)) {
			ran = rand() % 128;
			ansc = ran;
		}
	}
	if (g == 2) {
		ran = rand() % 10;
		ansc = '0' + ran;
	}
	if (g > 2 && g < 6) {
		ran = rand() % 26;
		int cas = 0;
		if (g == 5) cas = 1;
		if (g == 3) cas = rand() % 2;
		if (!cas) ansc = 'A' + ran;
		else ansc = 'a' + ran;
	}
    print(ansc, p);
	return ansc;
}
// STEP 4 : Modify the cases number
//|---------------------------------------------|
int ll = 7, rr = 10; //Test Cases Number
//|---------------------------------------------|
void solve(int number) {
	string aaa = to_string(number) + ".in";
	freopen(aaa.c_str(), "w", stdout);
	//STEP 1 : std 100%AC Code copy here and replace "cin" with generator
	//|---------------------------------------------|
	
	
    //|---------------------------------------------|
	
	//STEP 2 : cout ans here :
	//|---------------------------------------------|

	
	//|---------------------------------------------|
}

int main() {
	srand(time(NULL));
	for (int i = ll; i <= rr; i++) {
		solve(i);
	}
	return 0; 
} 
