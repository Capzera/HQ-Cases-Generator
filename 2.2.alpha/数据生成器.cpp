#include "random.h"
// STEP 2 : Modify the cases number
//|---------------------------------------------|
	int minCaseNumber = 1, maxCaseNumber = 1; //Test Cases Number
//|---------------------------------------------|
void solve() {
//STEP 1 : std Code copy here and replace "cin" and "cout" with generator
//|---------------------------------------------|
	int n = intRand(10, 20);
	vector<int> v;
	for (int i = 1; i <= n; i++) {
		int c=intRand(1,20);
		v.push_back(c);
	}
	iprint(v);
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
