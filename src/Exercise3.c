/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int findMaxIndex(char char_arr[100][100], int row_index)
{
    int i, max = 0;
    for (i = 0; i < row_index; i++)
    {
        if (strlen(char_arr[i]) > strlen(char_arr[max]))
        {
            max = i;
        }
    }
    return max;
}

int findMinIndex(char char_arr[100][100], int row_index)
{
    int i, min = 0;
    for (i = 0; i < row_index; i++)
    {
        if (strlen(char_arr[i]) < strlen(char_arr[min]))
        {
            min = i;
        }
    }
    return min;
}
void Ex3(char *str)
{
	
 char char_arr[100][100];
    int row_index = 0;

    char *token = strtok(str, " ");
    while (token != NULL)
    {
        strcpy(char_arr[row_index], token);
        row_index++;
        token = strtok(NULL, " ");
    }
    printf("Shortest word: %s\n", char_arr[findMinIndex(char_arr, row_index)]);
    printf("Longest word: %s\n", char_arr[findMaxIndex(char_arr, row_index)]);
}
int main(int argc, char *argv[])
{
	// testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex3(testcase);

	return 0;
}
