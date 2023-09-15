#include<iostream>
#include "Transaction.h"
using namespace std;


void tryToChangeTransaction(Transaction t)
{
    t.DoubleAmount();
}

void changeTransaction(Transaction& t)
{
    t.DoubleAmount();
}

int main()
{
    Transaction deposit(100, "Deposiit");
    cout << "Original: " << deposit.Report() <<'\n';
    tryToChangeTransaction(deposit);
    cout << "After pass by value: " << deposit.Report() <<'\n';
    changeTransaction(deposit);
    cout << "After pass by reference: " << deposit.Report() <<'\n';

    return 0;

}