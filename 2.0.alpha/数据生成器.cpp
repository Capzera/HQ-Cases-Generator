#include "random.h"
// STEP 2 : Modify the cases number
//|---------------------------------------------|
	int minCaseNumber = 1, maxCaseNumber = 1; //Test Cases Number
//|---------------------------------------------|
void solve(int number) {
	caseNumber = number;
	string fileName = FileName + to_string(caseNumber) + "." + InputFileSuffix;
	freopen(fileName.c_str(), "w", stdout);
//STEP 1 : std Code copy here and replace "cin" and "cout" with generator
//|---------------------------------------------|
	int mx = INT_MIN;
	for (int i = 1; i <= 100000; i++) {
		int x = intRand(1, 1e6);
		iprint(x);
		mx = max(mx, x);
	}
	fileName = FileName + to_string(caseNumber) + "." + OutputFileSuffix;
	freopen(fileName.c_str(), "w", stdout);
	cout << mx;
//|---------------------------------------------|
}
int main() {
// STEP 3 : Modify the cases name
//|---------------------------------------------|
	init(minCaseNumber, maxCaseNumber, "TEST");
	InputFileSuffix = "in";
	OutputFileSuffix = "out";
//|---------------------------------------------|
	for (int i = minCaseNumber; i <= maxCaseNumber; i++) {
		solve(i);
	}
	return 0; 
} 
