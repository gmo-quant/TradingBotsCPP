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
	const double _totalBalance;
	const double _unrealisePnL; // Profit & Loss
	const double _realisePnL;
	const double _marginUsed;
	const double _marginAvailable;
	const long _openTrades;
	const std::string _currency;
	const T _accountID;
	const double _marginRate; // the leverage offered on this account, 
								//for e.g. 0.05, 0.1 etc
	const double _netAssetValue;
	 // std::string _toStr;
	const double _amountAvailableRatio; // the amount available to trade as 
									// a fraction of total amount
	const int _hash;

	int calcHashCode();
};

void testAccount();