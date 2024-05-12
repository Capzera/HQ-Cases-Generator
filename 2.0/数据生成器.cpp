#include "random.h"
// STEP 2 : Modify the cases number
//|---------------------------------------------|
int ll = 0, rr = 0; //Test Cases Number
//|---------------------------------------------|
void solve(int number) {
	caseNumber = number;
	//STEP 1 : std Code copy here and replace "cin" and "cout" with generator
	//|---------------------------------------------|
	for (int i = 0; i < 10; i++) {
		int x = intRand(1, 50);
		iprint(x);
	}
	//|---------------------------------------------|
}

int main() {
	// STEP 3 : Modify the cases name
	//|---------------------------------------------|
	init("");
	//|---------------------------------------------|
	for (int i = ll; i <= rr; i++) {
		solve(i);
	}
	return 0; 
} 
