#include "OandaConstants.h"

OandaConstants::ACCESS_TOKEN = "694132397a844a292b753a3c2a47f763-eb9a6f5b08db3035b5d4e33cdbfdfea8";
OandaConstants::ACCOUNT_ID = "101-001-8531924-001";
OandaConstants::SIM_API_URL = "";
OandaConstants::SIM_STREAM_URL = "";
OandaConstants::PROD_API_URL = "";
OandaConstants::PROD_STREAM_RUL = "";



static void testOutput(){
	std::cout << OandaConstants::ACCESS_TOKEN << endl
			<< OandaConstants::ACCOUNT_ID << endl;
}

void testOandaConstants(){
	TESTCase(OandaConstants);
	TEST(testOutput);
}