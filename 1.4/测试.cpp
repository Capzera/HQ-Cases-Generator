#include <bits/stdc++.h>
using namespace std;
int abs1(int a)
{
	if(a<0)
	{
		return a*-1;
	}
	return a;
}
int sub(int &a, int &b) {
	return a - b;
}
int mul(int &a, int &b) {
	return a * b;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
	cout << a - b << endl;
	int sum = 1;
	for (int i = 0; i < b; i++) {
		sum *= a;
	}
	cout << "Pow(a, b) = " << sum << endl;
    return 0;
}
