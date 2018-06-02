#include "Account.h"

using namespace std;
// template <typename T>
// Account<T>::Account(double totalBalance, 
// 			double marginAvailable,
// 			std::string currency,
// 			T accountID,
// 			double marginRate) :
// 			Account<T>::Account(totalBalance, 
// 					0, 0, 0,
// 					marginAvailable,
// 					0, 
// 					currency,
// 					accountID,
// 					marginRate){}

// template<typename T>
// Account<T>::Account(double totalBalance,
// 			double unrealisePnL,
// 			double realisePnL,
// 			double marginUsed,
// 			double marginAvailable,
// 			long openTrades,
// 			std::string currency,
// 			T accountID, 
// 			double marginRate):
// // initiate the const data member via 
// // initiate list, same effect as final 
// // variable in Java.
// 	_totalBalance (totalBalance),
// 	_unrealisePnL(unrealisePnL),
// 	_realisePnL(realisePnL),
// 	_marginUsed(marginUsed),
// 	_marginAvailable (marginAvailable),
// 	_openTrades(openTrades),
// 	_currency (currency),
// 	_accountID (accountID),
// 	_marginRate (marginRate) 
// 	{
// 		_amountAvailableRatio = _marginAvailable / _totalBalance;
// 		_netAssetValue = _marginUsed + _marginAvailable;
// 	}


/* does c++ provide hashcode? 
template<typename T>
	Account<T>::calcHashCode(){
		const int prime = 31;
		int result = 1;
		result = prime * result + 
				((_accountID == nullptr) ? 0 : _accountID.)
	}

*/
void testAccount(){
	Account<string> account(123.0, 123.0, "USD", "123345", 345.0 );
}

// const double _totalBalance;
// 	const double _unrealisePnL; // Profit & Loss
// 	const double _realisePnL;
// 	const double _marginUsed;
// 	const double _marginAvailable;
// 	const double _netAssetValue;
// 	const long _openTrades;
// 	const double _marginRate; // the leverage offered on this account, 
// 								//for e.g. 0.05, 0.1 etc
// 	const std::string _currency;
// 	const T _accountID;
// 	const std::string _toStr;
// 	const _amountAvailableRatio; // the amount available to trade as 
// 							