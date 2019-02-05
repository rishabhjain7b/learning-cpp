
/********************************************************
 * This problem was asked by Uber.
 *
 * Given an array of integers, return a new array such 
 * that each element at index i of the new array is the 
 * product of all the numbers in the original array except 
 * the one at i.
 *
 * For example, if our input was [1, 2, 3, 4, 5], 
 * the expected output would be [120, 60, 40, 30, 24]. 
 * If our input was [3, 2, 1], the expected output would be [2, 3, 6].
 *
 * Follow-up: what if you can't use division?
*********************************************************/

#include <iostream>

using namespace std;

int main (void) {

	int size = 0;
	int *ar, *ar_out;
	int prod = 1;

	cout << "Enter array size you wish to have" << endl;
	cin >> size;

	cout << "Enter array now: " << endl;
	
	ar = new int[size];
	ar_out = new int[size];
	for(int i=0; i<size; i++) cin >> ar[i];

	for(int j=0; j<size; j++) prod *= ar[j];

	for(int i=0; i<size; i++) ar_out[i] = prod/ar[i];

	cout << "Output array is : " << endl;
	for(int i=0; i<size; i++) cout << ar_out[i] << " ";
	cout << endl;

	delete[] ar;
	delete[] ar_out;

	return 0;
}
