#pragma once
#include "includes/stdafx.h"
#include "Account.h"


/**
 * just interest in read-only information
 * a provider of account information
 * 
 * @param <T>
 * 		the type of accountID
 * @see Account
 */
template<typename T>
class AccountDataProvider{
public:
	/**
	 * @param accountID
	 * @return Account infomation for the given accountID
	 */
	virtual Account<T> lastestAccountInfo(T accountID) const= 0;
	/**
	 * use set because account should be unique
	 * @return A collection of All account available
	 */
	virtual std::set< Account<T> > lastestAccountInfo() const = 0;
};