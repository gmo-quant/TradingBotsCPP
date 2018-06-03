#include "OandaConstants.h"

using namespace std;

const string OandaConstants::ACCESS_TOKEN = "694132397a844a292b753a3c2a47f763-eb9a6f5b08db3035b5d4e33cdbfdfea8";
const string OandaConstants::ACCOUNT_ID = "101-001-8531924-001";
const string OandaConstants::SIM_API_URL = "";
const string OandaConstants::SIM_STREAM_URL = "";
const string OandaConstants::PROD_API_URL = "";
const string OandaConstants::PROD_STREAM_RUL = "";



static void testOutput(){
	cout << OandaConstants::ACCESS_TOKEN << endl
			<< OandaConstants::ACCOUNT_ID << endl;
}

void testOandaConstants(){
	TESTCase(OandaConstants);
	TEST(testOutput);
}