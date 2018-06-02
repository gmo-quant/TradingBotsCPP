#pragma once
#include "stdafx.h"

/*
	use Template

 */
template <typename T>
class Account{
public:
	Account(double totalBalance, 
			double marginAvailable,
			std::string _currency,
			T accountID,
			double marginRate);
	Account(double totalBalance,
			double unrealisePnL,
			double realisePnL,
			double marginUsed,
			double marginAvailable,
			long openTrades,
			std::string currency,
			T accountID, 
			double marginRate);
private:
	// why these private const variables?
	// these const variables are immutable, 
	// therefore we can calculate the hashCode() 
	// and toString() values upfront in the constructors
	// and store them in const variables,
	// any call to toString() or hashCode() will return the pre-calculate
	// values
	//
	// but does it necessary to have hashCode()
	// and toString() in C++?
	// what is the meaning of having these two method 
	// in java?
	const double _totalBalance;
	const double _unrealisePnL; // Profit & Loss
	const double _realisePnL;
	const double _marginUsed;
	const double _marginAvailable;
	const double _netAssetValue;
	const long _openTrades;
	const double _marginRate; // the leverage offered on this account, 
								//for e.g. 0.05, 0.1 etc
	const std::string _currency;
	const T _accountID;
	const std::string _toStr;
	const double _amountAvailableRatio; // the amount available to trade as 
									// a fraction of total amount
	// const int hash;

	// int calcHashCode();
};

void testAccount();
