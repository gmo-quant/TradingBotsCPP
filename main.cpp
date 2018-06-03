#include "Account.h"
#include "AccountDataProvider.h"
#include "OandaJsonKeys.h"
#include "OandaConstants.h"

int main(){
	testAccount();
	testOandaJsonKeys();
	testOandaConstants();
	// std::cout << OandaConstants::ACCESS_TOKEN << endl;
	return 0;
}