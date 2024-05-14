#include "random.h"
// STEP 2 : Modify the cases number
//|---------------------------------------------|
	int minCaseNumber = 1, maxCaseNumber = 1; //Test Cases Number
//|---------------------------------------------|
void solve() {
//STEP 1 : std Code copy here and replace "cin" and "cout" with generator
//|---------------------------------------------|
	int mx = INT_MIN;
	int n = intRand(8e5, 1e6);
	
	for (int i = 1; i <= n; i++) {
		int x = intRand(1, 1e6);
		iprint(x);
	}
	oprint(mx);
//|---------------------------------------------|
	filePrint();
}
int main() {
// STEP 3 : Modify the cases name
//|---------------------------------------------|
	init(minCaseNumber, maxCaseNumber, "TEST");
	InputFileSuffix = "in";
	OutputFileSuffix = "out";
//|---------------------------------------------|
	for (int i = minCaseNumber; i <= maxCaseNumber; i++) {
		caseNumber = i;
		solve();
	}
	return 0; 
} 
