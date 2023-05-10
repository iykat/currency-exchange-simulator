#include <iostream>
#include <vector>
#include <string>
#include "OrderBookEntry.h"
#include "MerkelMain.h"
#include "CSVReader.h"
#include "Wallet.h"

using namespace std;

int main()
{
  // MerkelMain app{};
  // app.init();
  // CSVReader::readCSV("data.csv");
  Wallet wallet;
  wallet.insertCurrency("BTC", 10);
  wallet.insertCurrency("USDT", 10000);
  std::cout << "Wallet has btc " << wallet.containsCurrency("BTC", 10) << std::endl;
  wallet.removeCurrency("USDT", 1000);
  std::cout << wallet.toString() << std::endl;


}