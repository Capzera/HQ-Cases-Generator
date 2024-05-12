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
		int x = intRand(1, 50, 0.1);
		oprint(x);
	}
	//|---------------------------------------------|
}

int main() {
	OutputFileSuffix = "ans";
	// STEP 3 : Modify the cases name
	//|---------------------------------------------|
	init(minCaseNumber, maxCaseNumber, "fake");
	
	//|---------------------------------------------|
	for (int i = minCaseNumber; i <= maxCaseNumber; i++) {
		solve(i);
	}
	return 0; 
} 
