#include "Account.h"

using namespace std;
template <typename T>
Account<T>::Account(double totalBalance, 
			double marginAvailable,
			std::string currency,
			T accountID,
			double marginRate) :
			Account<T>::Account(totalBalance, 
					0, 0, 0,
					marginAvailable,
					0, 
					currency,
					accountID,
					marginRate){}

template<typename T>
Account<T>::Account(double totalBalance,
			double unrealisePnL,
			double realisePnL,
			double marginUsed,
			double marginAvailable,
			long openTrades,
			std::string currency,
			T accountID, 
			double marginRate):
// initiate the const data member via 
// initiate list, same effect as final 
// variable in Java.
// be care full about the order of the declaration 
// of the data member,
// the order of these variables in the initialization list
// should be the same as the order of the declaration.
// and it doesn't have to use the variables/values
// of the parameter list.
	_totalBalance (totalBalance),
	_unrealisePnL(unrealisePnL),
	_realisePnL(realisePnL),
	_marginUsed(marginUsed),
	_marginAvailable (marginAvailable),
	_openTrades(openTrades),
	_currency (currency),
	_accountID (accountID),
	_marginRate (marginRate),
	_netAssetValue(_marginUsed + _marginAvailable),
	_amountAvailableRatio (_marginAvailable / _totalBalance),
	_hash (calcHashCode()),
	_toStr(toStr())
	{}


/* does c++ provide hashcode? */
template<typename T> 
int Account<T>::calcHashCode(){
		const int prime = 31;
		int result = 1;
		std::hash<T> hv;
		result = prime * result + hv(_accountID);
				// ((_accountID == nullptr) ? 
				// 	0 : std::hash<T>(_accountID) );
	return result;		
}
template<typename T>
string Account<T>::toStr(){
	// use string format to describe the value of each attributes
	return "test";
}

static void testInitialization(){
	Account<string> account(123.0, 123.0, "USD", "101-001-8531924-001", 345.0 );
	ASSERT_APPROX_EQUAL(account.totalBalance() , 123.0, 0.001);
	ASSERT_APPROX_EQUAL(account.marginAvailable() , 123.0, 0.001);
}
void testAccount(){
	TESTCase(Account);
	TEST(testInitialization);
}

