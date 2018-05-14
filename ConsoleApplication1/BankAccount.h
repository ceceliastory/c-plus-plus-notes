#pragma once
#include <string>

class BankAccount
{
public:
	BankAccount(int balance);
	~BankAccount();
	std::string GetHolderName() const;
	int GetBalance() const { return balanceInPennies; }
	bool operator<(BankAccount const& bankAccount) const;

private:
	int balanceInPennies;
};
