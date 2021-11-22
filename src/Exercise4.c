/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex4(char *str){
	//Your codes here
	 int size = strlen(str);
  char formattedStr[size];
  memset(formattedStr, '\0', size);
  int i = 0, j = 0;
  while (str[i] == ' ' && i < size) {
    i++;
  }
  for (i; i < size - 1; ++i) {
    formattedStr[j] = str[i];
    ++j;
    while (str[i] == ' ' && str[i + 1] == ' ') {
      ++i;
    }
  }
  if (str[size - 1] != ' ') {
    formattedStr[size - 1] = str[size - 1];
  }
  printf("%s", formattedStr);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}