#include <iostream>
using namespace std;


int main(void) 
{ 
	int pet;
	cout << "\nWhich pets are you more fond of?"; 
	cout << "\n\n1) Cats 2) Large dog breeds 3) Smaller dog breeds 4) Fish 5) Hamsters\n"; 
	cout << "\nSelect a number corresponding to the preffered animal: \n"; 
	cin >> pet;

	if (pet == 1) cout << "\nSo you're a cat person...\n"; 
	else if (pet == 2 or pet == 3) cout << "\nIf you don't already have a dog, which breed you would choose.\n"; 
	else if (pet == 4 or pet == 5) cout << "\nLow maitenance pets have their own charm. \n"; 
	else cout << "\n Mistaken entry.\n"; 

	return 0; 
} 
