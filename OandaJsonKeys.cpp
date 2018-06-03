#include "OandaJsonKeys.h"
// how do you decide the value of each json key?
// refer to the api document of corresponding platform
// the json key should be the same as the ones 
// in the documents.

using namespace std;
const string OandaJsonKeys::account="account";
const string OandaJsonKeys::accountID="accountID";
const string OandaJsonKeys::accountCurrency="accountCurrency";
const string OandaJsonKeys::marginRate="marginRate";
const string OandaJsonKeys::marginAvail="marginAvail";
const string OandaJsonKeys::balance="balance";
const string OandaJsonKeys::unrealizedPL="unrealizedPL";
const string OandaJsonKeys::realizePL="realizePL";
const string OandaJsonKeys::openTrades="openTrades";
const string OandaJsonKeys::instruments="instruments";
const string OandaJsonKeys::instrument="instrument";
const string OandaJsonKeys::interestRate="interestRate";
const string OandaJsonKeys::disconnect="disconnect";
const string OandaJsonKeys::pip="pip";
const string OandaJsonKeys::bid="bid";
const string OandaJsonKeys::ask="ask";
const string OandaJsonKeys::heartbeat="heartbeat";
const string OandaJsonKeys::candles="candles";
const string OandaJsonKeys::code="code";
const string OandaJsonKeys::openMid="openMid";
const string OandaJsonKeys::highMid="highMid";
const string OandaJsonKeys::lowMid="lowMid";
const string OandaJsonKeys::closeMid="closeMid";
const string OandaJsonKeys::time="time";
const string OandaJsonKeys::tick="tick"; 
const string OandaJsonKeys::prices="prices";
const string OandaJsonKeys::trades="trades";
const string OandaJsonKeys::tradeID="tradeID";
const string OandaJsonKeys::price="price";
const string OandaJsonKeys::avgPrice="avgPrice";
const string OandaJsonKeys::id="id";


void testOandaJsonKeys(){
	TESTCase(OandaJsonKeys);
}