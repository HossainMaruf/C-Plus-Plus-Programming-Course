#include <iostream>
using namespace std;

class BankAccount {
   string ownerName;
   string accountNo; 
   float balance = 0.0f;
   public:
   void setOwnerName(string name) { ownerName = name; }
   string getOwnerName() { return ownerName; }
   void setAccountNo(/* private can not be used */string accountNo ) { this->accountNo = accountNo; }
   string getAccountNo() { return accountNo; }
   void setBalance(float balance) { this->balance = balance; }
   float getBalance() { return balance; }
};

int main() {
    BankAccount b;
    // b.(all things are methods, no instance variable)
    b.setOwnerName("Maruf Hossain");
    b.setAccountNo("10100003451");
    b.setBalance(100);
    cout << b.getOwnerName() << " " << b.getAccountNo() << " " << b.getBalance();

    return 0;
}