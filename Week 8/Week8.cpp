#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() {
        balance = 0.0;
    }

    void deposit(double amount) {
            balance += amount;
    cout << "\nAdded starting balance of " << balance << "\n" << endl;
            saveTransaction("Deposit", amount);
    }

    void makePurchase(string item, double cost) {
        if (cost > balance) {
            cout << "Can't proceed with purchase for " << item << endl;
        } else {
            balance -= cost;
    	cout << "Successful Purchase of " << item << endl;
            saveTransaction("Purchase type: " + item, cost);
        }
    }

  void displayBalance() {
        cout << "Current Balance: $" << balance << "\n"<< endl;
    }

    void saveTransaction(string type, double balance) {
        ofstream file("transaction.txt", ios::app);
        if (file.is_open()) {
            file << type << ": $" << balance << endl;
            file.close();
        }
    }

};

int main() 
{ 
    BankAccount myAccount;
    myAccount.deposit(500.00);
    myAccount.deposit(1000.00);
    myAccount.makePurchase("Lego set", 97.99);
    myAccount.makePurchase("Graphing calculator", 156.00);
    myAccount.displayBalance();

   return 0; 
} 