#include "random.h"
// STEP 4 : Modify the cases number
//|---------------------------------------------|
int ll = 0, rr = 0; //Test Cases Number
//|---------------------------------------------|
void solve(int number) {
	string aaa = to_string(number) + ".in";
	freopen(aaa.c_str(), "w", stdout);
	//STEP 1 : std 100%AC Code copy here and replace "cin" with generator
	//|---------------------------------------------|
	for (int i = 0; i < 10; i++) {
		int x = intRand(1, 50);
		print(x);
	}
	//|---------------------------------------------|
	string bbb = to_string(number) + ".out";
	freopen(bbb.c_str(), "w", stdout);
	
	//STEP 2 : cout ans here :
	//|---------------------------------------------|
	
	//|---------------------------------------------|
}

int main() {
	init();
	for (int i = ll; i <= rr; i++) {
		solve(i);
	}
	return 0; 
} 
