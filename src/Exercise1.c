/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n)
{
	// Your codes here
	const char *numberStr[] = {"zero", "one", "two", "three", "four",
							   "five", "six", "seven", "eight", "nine"};
	const char *two_digits[] = {"ten", "eleven", "twelve",
								"thirteen", "fourteen", "fifteen", "sixteen",
								"seventeen", "eighteen", "nineteen"};
	const char *digit2[] = {"twenty", "thrity", "fourty", "fifty",
							"sixty", "seventy", "eighty", "ninty"};
	int t = 0, h = 0, u = 0;
	t = n / 1000;
	if ( t != 0)
	{
		printf("%s thousand ", numberStr[t]);
	}
	n = n - t * 1000;
	h = n / 100;
	if ( h != 0)
	{
		printf("%s hundred ", numberStr[h]);
	}
	n = n - h * 100;
	u = n / 10;
	if (u == 1)
	{
		printf("%s ", two_digits[n % 10]);
	}
	else if (u > 1)
	{
		printf("%s ", digit2[u]);
		if (n % 10 != 0)
		{
			printf("%s\n", numberStr[n % 10]);
		}
	}
}

int main(int argc, char *argv[])
{
	// testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);

	Ex1(testcase);
	return 0;
}