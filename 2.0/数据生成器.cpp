#include "random.h"
// STEP 2 : Modify the cases number
//|---------------------------------------------|
int minCaseNumber = 1, maxCaseNumber = 1; //Test Cases Number
//|---------------------------------------------|
void solve(int number) {
	caseNumber = number;
	//STEP 1 : std Code copy here and replace "cin" and "cout" with generator
	//|---------------------------------------------|
		string x = HighIntRand("00000099999999", "12345678901235456789");
		iprint(x);
	//|---------------------------------------------|
}

int main() {
 	InputFileSuffix = "in";
	OutputFileSuffix = "out";
	// STEP 3 : Modify the cases name
	//|---------------------------------------------|
	init(minCaseNumber, maxCaseNumber, "TEST");
	
	//|---------------------------------------------|
	for (int i = minCaseNumber; i <= maxCaseNumber; i++) {
		solve(i);
	}
	return 0; 
} 
