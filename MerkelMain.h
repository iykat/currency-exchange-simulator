#pragma once
#include <vector>
#include "OrderBookEntry.h"

class MerkelMain
{
public:
  MerkelMain();
  /** call this to start the sime*/
  void init();

private:
  void loadOrderBook();
  void printMenu();
  int getUserOption();
  void printHelp();
  void printMarketStats();
  void enterOffer();
  void enterBid();
  void printWallet();
  void goToNextTimeFrame();
  void processUserOption(int userOption);

  std::vector<OrderBookEntry> orders;
};