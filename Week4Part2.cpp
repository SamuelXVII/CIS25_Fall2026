#include <iostream>
using namespace std;


int uno,dos,tres;
void Numcheck1();

//Nested if statement
int main(void) 
{ 
    cout << "\n\nInput three numbers- \n";
    cin >> uno;
    cin >> dos;
    cin >> tres;
    Numcheck1();
	return 0; 
} 

void Numcheck1() {
    if(uno > dos){
        cout << "\n" << uno <<" is larger than" << dos;
         
        if(uno > tres){
        cout << "\nand " << uno <<" is larger than" << tres;
        
        }
        else if (uno == tres) {
        cout << "\n" << uno <<" is tied for largest with" << tres;
        }
        else {
        cout << "\nbut " << tres << " is larger than" << uno;
        }
    }
    else if (uno == dos) {
        cout << "\n" << uno <<" is equal to" << dos;
         if(uno > tres){
        cout << "\nand both " << uno <<" and" << dos << "is larger than" << tres;
        }
        else if (uno == tres) {
        cout << "\nAmazingly, " << uno <<", "<<dos<< " and "<< tres<<" are all the same number";
        }
        else {
            cout << "\nbut " << tres <<" trumps both" << uno<< "and "<< dos;
        }
        
        
         
    }
    else {
        cout << "\n" << dos <<" is larger than" << uno;
         
        if(dos > tres){
        cout << "\n and " << dos <<" is larger than" << tres;
        
        }
        else if (dos == tres) {
        cout << "\n" << dos <<" is tied for largest with" << tres;
        }
        else {
        cout << "\n but " << tres <<" is larger than" << dos;
        }
    }

}