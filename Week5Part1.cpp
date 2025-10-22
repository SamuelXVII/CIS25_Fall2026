#include <iostream>
#include "Menu.h"
using namespace std;

int main() { 
	int option; 
	do { 
    	Program(); 
    	cin >> option; 
        if (option == 1) {
            Quote();
        }
        else if (option == 2) {
            Compliment();
        }
        else if (option == 3) {
            Joke();
        }
    } while (option != 4); 
	return 0; 
} 

