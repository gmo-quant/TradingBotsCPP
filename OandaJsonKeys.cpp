#include "OandaJsonKeys.h"
// how do you decide the value of each json key?
// refer to the api document of corresponding platform
// the json key should be the same as the ones 
// in the documents.
OandaJsonKeys::account="account";
OandaJsonKeys::accountID="accountID";
OandaJsonKeys::accountCurrency="accountCurrency";
OandaJsonKeys::marginRate="marginRate";
OandaJsonKeys::marginAvail="marginAvail";
OandaJsonKeys::balance="balance";
OandaJsonKeys::unrealizedPL="unrealizedPL";
OandaJsonKeys::realizePL="realizePL";
OandaJsonKeys::openTrades="openTrades";
OandaJsonKeys::instruments="instruments";
OandaJsonKeys::instrument="instrument";
OandaJsonKeys::interestRate="interestRate";
OandaJsonKeys::disconnect="disconnect";
OandaJsonKeys::pip="pip";
OandaJsonKeys::bid="bid";
OandaJsonKeys::ask="ask";
OandaJsonKeys::heartbeat="heartbeat";
OandaJsonKeys::candles="candles";
OandaJsonKeys::code="code";
OandaJsonKeys::openMid="openMid";
OandaJsonKeys::highMid="highMid";
OandaJsonKeys::lowMid="lowMid";
OandaJsonKeys::closeMid="closeMid";
OandaJsonKeys::time="time";
OandaJsonKeys::tick="tick"; 
OandaJsonKeys::prices="prices";
OandaJsonKeys::trades="trades";
OandaJsonKeys::tradeID="tradeID";
OandaJsonKeys::price="price";
OandaJsonKeys::avgPrice="avgPrice";
OandaJsonKeys::id="id";


void testOandaJsonKeys(){
	TESTCase(OandaJsonKeys);
}