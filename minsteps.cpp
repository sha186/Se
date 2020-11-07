
#include <bits/stdc++.h> 
using namespace std; 

int max(int x, int y) 
{ 
	return (x > y) ? x : y; 
} 
int minJumps(int arr[], int n) 
{ 
	if (n <= 1) 
		return 0; 
	if (arr[0] == 0) 
    	return -1; 
	int maxReach = arr[0]; 
	int step = arr[0]; 
	int jump = 1; 
	int i = 1; 
	for (i = 1; i < n; i++) { 
		if (i == n - 1) 
			return jump; 
		maxReach = max(maxReach, i + arr[i]); 
		step--; 
		if (step == 0) { 
			jump++;
			if (i >= maxReach) 
				return -1; 
            step = maxReach - i; 
		} 
	} 

	return -1; 
} 

// Driver program to test above function 
int main() 
{ 
	int arr[] = { 1, 0, 0 }; 
	int size = sizeof(arr) / sizeof(int); 

	// Calling the minJumps function 
	cout << ("Minimum number of jumps to reach end is %d ", 
			minJumps(arr, size)); 
	return 0; 
} 
// This code is contributed by 
// Shashank_Sharma 
