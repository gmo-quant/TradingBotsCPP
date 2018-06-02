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

	double amountAvailableRatio() const{
		return _amountAvailableRatio;
	}
	double marginRate() const{
		return _marginRate;
	}
	T accountID() const{
		return _accountID;
	}
	std::string currency() const{
		return _currency;
	}
	double netAssetValue() const{
		return _netAssetValue;
	}
	double totalBalance() const{
		return _totalBalance;
	}
	double unrealisePnL() const{
		return _unrealisePnL;
	}
	double realisePnL() const{
		return _realisePnL;
	}
	double marginUsed() const{
		return _marginUsed;
	}
	double marginAvailable(){
		return _marginAvailable;
	}
	long openTrades(){
		return _openTrades;
	}

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
	
	const double _amountAvailableRatio; // the amount available to trade as 
									// a fraction of total amount
	const int _hash;
	const std::string _toStr;

	int calcHashCode();
	std::string toStr();
};

void testAccount();
