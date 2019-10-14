//Name: Alexander
//Date: 10/13/2019
//Assignment #4 Question 2

using namespace std;

#include <iostream>
#include <string>



//Declarations
int recSearch(int arr[], int l,
	int r, int x,int final);

//Variables

int main()
{
	int arr[] = { 6, 34, 54, 2, 3 , 12, 12, 13, 6, 5, 9}, i;
	int n = sizeof(arr) / sizeof(arr[0]);
	
	//Index to be searched for
	int x = 6;
	int index = recSearch(arr, 0, n - 1, x, 0);
	return 0;
}

//Function

//Linear Search Function from GeeksForGeeks then modified by myself to find the last index.
int recSearch(int arr[], int l,
	int r, int x, int final)
{
	if (r < l) {
		if (final == 0)
		{
			cout << "No variable found" << endl;
		}
		else
		{
			cout << "Variable final index is ->" << final;
			return -1;
		}
	}
	if (arr[l] == x)
		final = l;
	
	if (arr[r] == x)
		final = r;

	return recSearch(arr, l + 1,
		r - 1, x, final);
}