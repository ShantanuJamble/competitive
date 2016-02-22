#include<iostream>
#include<stdio.h>
#include <cstdio>
#include <vector>
using namespace std;
void PrintPeriodic(int num, int denom)
{
	// Print integral part and decimal point.
	printf("%d/%d = %d.", num, denom, num / denom);
	num %= denom;
	// Loop until periodic part is found.
	int found = -1;
	vector <int> seen, digits;
	for (;;) {
		int cur = (num * 10),
		cur_rem = cur % denom;
		for (int i = 0; i < seen.size(); i++) {
			if (seen[i] == cur_rem) {
				found = i;
				break;
			}
		}
		if (found != -1) {
			break;
		} else {
			seen.push_back(cur_rem);
			digits.push_back(cur / denom);
			num = cur_rem;
		}
	}
// Handle special case: periodic part is only zero.
		if (num == 0) {
			for (int i = 0; i <= found; i++) {
				printf("%d", digits[i]);
			}
			printf("(0)\n");
		} else {
			// Print pre-periodic part.
			for (int i = 0; i < found; i++) {
				printf("%d", digits[i]);
			}
			// Print periodic part.
			printf("(");
			for (int i = found; i < digits.size() && i < found+50; i++) {
				printf("%d", digits[i]);
			}
			if (found+50 < digits.size()) printf("...");
				printf(")\n");
			}
			printf(" %d = number of digits in repeating cycle\n", (int)digits.size() - found);
}
int main()
{
	int n, denom;
	while (~scanf("%d%d", &n, &denom)) {
		PrintPeriodic(n, denom);
	}
	return 0;
} 
