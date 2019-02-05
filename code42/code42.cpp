
/******************************************************
 * This problem was recently asked by Google.
 * 
 * Given a list of numbers and a number k, return 
 * whether any two numbers from the list add up to k.
 *
 * For example, given [10, 15, 3, 7] and k of 17, 
 * return true since 10 + 7 is 17.
 *
 * Bonus: Can you do this in one pass?
*******************************************************/

#include <iostream>

using namespace std;

int main (void) {

	int size = 0;
	int* ar;
	int k = 0;

	cout << "Enter array size you wish to have" << endl;
	cin >> size;

	cout << "Enter array now: " << endl;
	
	ar = new int[size];
	for(int i=0; i<size; i++) cin >> ar[i];

	cout << "Enter the sum now: " << endl;
	cin >> k;

	for (int p=0; p<size; p++) {
		for (int q=p+1; q<size; q++) {
			if (ar[p]+ar[q] == k) {
				cout << "The numbers are "
				       << ar[p] << " and "
			       		<< ar[q] << endl;
		 		break;
			}		
		}
	}

	delete[] ar;

	return 0;
}
