#include "random.h"
// STEP 2 : Modify the cases number
//|---------------------------------------------|
int minCaseNumber = 1, maxCaseNumber = 10; //Test Cases Number
//|---------------------------------------------|
void solve(int number) {
	caseNumber = number;
	//STEP 1 : std Code copy here and replace "cin" and "cout" with generator
	//|---------------------------------------------|
	for (int i = 0; i < 10; i++) {
		int x = intRand(1, 50, 0.2);
		iprint(x);
	}
	//|---------------------------------------------|
}

int main() {
	// STEP 3 : Modify the cases name
	//|---------------------------------------------|
	init("book");
	//|---------------------------------------------|
	for (int i = minCaseNumber; i <= maxCaseNumber; i++) {
		solve(i);
	}
	return 0; 
} 
