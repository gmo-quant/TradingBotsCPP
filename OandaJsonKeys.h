#pragma once
#include "stdafx.h"

/**
 * json keys for a json payload
 */
class OandaJsonKeys{
public:
	// static data member can only be initialized at its definition
	static const std::string account;
	static const std::string accountID;
	static const std::string accountCurrency;
	static const std::string marginRate;
	static const std::string marginAvail;
	static const std::string balance;
	static const std::string unrealizedPL;
	static const std::string realizePL;
	static const std::string openTrades;
	static const std::string instruments;
	static const std::string instrument;
	static const std::string interestRate;
	static const std::string disconnect;
	static const std::string pip;
	static const std::string bid;
	static const std::string ask;
	static const std::string heartbeat;
	static const std::string candles;
	static const std::string code;
	static const std::string openMid;
	static const std::string highMid;
	static const std::string lowMid;
	static const std::string closeMid;
	static const std::string time;
	static const std::string tick; 
	static const std::string prices;
	static const std::string trades;
	static const std::string tradeID;
	static const std::string price;
	static const std::string avgPrice;
	static const std::string id;
	// add later when needed
	// static const std::string 
	// static const std::string
	// static const std::string
	// static const std::string 
	// static const std::string
	// static const std::string
	// static const std::string
	// static const std::string
	// static const std::string 
	// static const std::string
	// static const std::string
	// static const std::string
	// static const std::string
	// static const std::string 
	// static const std::string
	// static const std::string
	// static const std::string
	// static const std::string
	// static const std::string 
	// static const std::string
	// static const std::string
	// static const std::string
	// static const std::string
private:
	OandaJsonKeys(){}
};

void testOandaJsonKeys();