#pragma once
#include "stdafx.h"
class OandaConstants{

public:
	OandaConstants(){}
	static const std::string ACCESS_TOKEN;
	static const std::string ACCOUNT_ID;
	static const std::string SIM_API_URL;
	static const std::string SIM_STREAM_URL;
	static const std::string PROD_API_URL;
	static const std::string PROD_STREAM_RUL;
};

void testOandaConstants();