/*********************************************************************************************************************
 * HQKJ Problem Cases Data Generator Head Files
 * Created By : Sunday 2024-05-12 23:46
 * Author     : @Capzera @2070super
 * E-mail     : 1786126188@qq.com / 1025404072@qq.com
 * Version    : V 2 . 0
 * This header file helps teachers quickly and accurately derive data for topic tests. 
 * Thank you for using it. If you have any questions or suggestions please refer to the documentation or contact us!
*********************************************************************************************************************/
#ifndef RANDOM_H
#define RANDOM_H

#include <bits/stdc++.h>
using namespace std;
static string InputFileSuffix = "in";
static string OutputFileSuffix = "out";
static string FileName = "";
static int caseNumber = 0;

template<typename T>
void iprint(T &x, char y = ' ') {
	string fileName = FileName + to_string(caseNumber) + "." + InputFileSuffix;
	freopen(fileName.c_str(), "a", stdout);
	cout << x << y;
	fclose(stdout);
}

template<typename T>
void oprint(T &x, char y = ' ') {
	string fileName = FileName + to_string(caseNumber) + "." + OutputFileSuffix;
	freopen(fileName.c_str(), "a", stdout);
	cout << x << y;
	fclose(stdout);
}

void init(int l, int r, string fileName = "") {
	for (int i = l; i <= r; i++) {
		string curFileName = fileName + to_string(i) + "." + InputFileSuffix;
		freopen(curFileName.c_str(), "w", stdout);
		fclose(stdout);
		curFileName = fileName + to_string(i) + "." + OutputFileSuffix;
		freopen(curFileName.c_str(), "w", stdout);
		fclose(stdout);
	}
	FileName = fileName;
	srand(time(NULL));
}

long long mrand(long long l, long long r) {
	long long ans = (rand() % (r - l + 1)) + l;
	return ans;
}

long long intRand(long long l, long long r, double minusRatio = 0) {
	if (l > r) return 0;
	string maxRangeString = to_string(r);
	int maxRangeStringSize = maxRangeString.size();
	int generatorLength = rand() % maxRangeStringSize + 1;
	long long result = LLONG_MIN;
	while (result < l || result > r) {
		if (generatorLength == 1) {
			result = mrand(1, 9);
		} else if (generatorLength == maxRangeStringSize) {
			result = mrand(pow(10, generatorLength - 1), (maxRangeString[0] - '0') * pow(10, generatorLength - 1));
		} else {
			result = mrand(pow(10, generatorLength - 1), pow(10, generatorLength) - 1);
		}
	}
	if (minusRatio) {
		int minusGenerator1 = mrand(1, 100);
		if (minusGenerator1 <= minusRatio * 100) {
			result = -result;
		}
	}
	return result;
}
char CharRand(bool NumFlag=0,bool LowerCase=0,bool CapitalCase=0,bool Ascii=0)
{
	if(NumFlag==0||LowerCase==0||CapitalCase==0||Ascii==0)
	{
		exit(1);
	}
	vector<char>v;
	if(Ascii==1)
	{
		return mrand(0,127);
	}
	if(NumFlag==1)
	{
		v.push_back(mrand(0,9)+'0');
	}
	if(LowerCase==1)
	{
		v.push_back(mrand(0,25)+'a');
	}
	if(CapitalCase==1)
	{
		v.push_back(mrand(0,25)+'A');
	}
	int n=mrand(0,v.size()-1);
	return v[n];
}

# endif
