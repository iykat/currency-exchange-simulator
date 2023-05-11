#pragma once
#include <string>
#include <map>
#include "OrderBookEntry.h"

class Wallet
{
public:
  Wallet();
  /** insert currency to the wallet */
  void insertCurrency(std::string type, double amount);
  /** remove currency to the wallet */
  bool removeCurrency(std::string type, double amount);
  /** check if the wallet contains this much currency or more */
  bool containsCurrency(std::string type, double amount);

  /** checks if the wallet can cope with this ask or bid*/
  bool canFulfillOrder(OrderBookEntry order);

  /** generate a string representation of the wallet */
  std::string toString();

private:
  std::map<std::string, double> currencies;
};