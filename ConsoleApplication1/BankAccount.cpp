#include "BankAccount.h"
using std::string;

BankAccount::BankAccount(int balance) :
	balanceInPennies(balance)
{
}

BankAccount::~BankAccount()
{
}

string BankAccount::GetHolderName() const 
{
	return nullptr;
}

bool BankAccount::operator<(BankAccount const & bankAccount) const
{
	return balanceInPennies < bankAccount.balanceInPennies;
}
