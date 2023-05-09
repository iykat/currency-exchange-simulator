#pragma once
#include <vector>
#include "OrderBookEntry.h"
#include "OrderBook.h"
#include "Wallet.h"

class MerkelMain
{
public:
  MerkelMain();
  /** call this to start the sim*/
  void init();

private:
  void printMenu();
  int getUserOption();
  void printHelp();
  void printMarketStats();
  void enterAsk();
  void enterBid();
  void printWallet();
  void goToNextTimeFrame();
  void processUserOption(int userOption);

  std::string currentTime;
  OrderBook orderBook{"test.csv"};

  Wallet wallet;
};