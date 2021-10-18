/*
4. Write a function to check whether a given array is sorted or not.
Return 1 if sorted increasing, -1: decreasing, 0: not sorted
Ex:
__________________________________
| Input: 8 7 9 2 1 5 2               |
| Output: 0                          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Ex4(int arr[], int n){
	//Your codes here
	{
	  int kt=0;
for (int i=0; i<n-1; i++)
{

if (kt != 1 && arr[i] < arr[i+1])
kt= kt+1;
if (kt != 2 && arr[i] > arr[i+1])
kt = kt-1;
}
if (kt == 3)
kt = 0;
return kt;
}
}
  


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	printf("%d", Ex4(testcase, argc));

	return 0;
}