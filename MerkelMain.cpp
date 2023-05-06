#include "MerkelMain.h"
#include <iostream>
#include <vector>
#include "OrderBookEntry.h"
#include "CSVReader.h"

MerkelMain::MerkelMain()
{
}

void MerkelMain::init()
{
  int input;
  currentTime = orderBook.getEarliestTime();
  while (true)
  {
    printMenu();
    input = getUserOption();
    processUserOption(input);
  }
};

void MerkelMain::printMenu()
{
  // 1 print help
  std::cout << "1: print help " << std::endl;
  // 2 print exchange stats
  std::cout << "2: print exchange stats " << std::endl;
  // 3 make an offer
  std::cout << "3: make an offer " << std::endl;
  // 4 make a bid
  std::cout << "4: make a bid " << std::endl;
  // 5 print wallet
  std::cout << "5: print wallet " << std::endl;
  // 6 continue
  std::cout << "6: continue " << std::endl;

  std::cout << "============== " << std::endl;
  std::cout << "Type in 1-6" << std::endl;

  std::cout << "Current time is " << currentTime << std::endl;
}

int MerkelMain::getUserOption()
{
  int userOption;
  // std::cout << "Type 1-6" << std::endl;
  std::cin >> userOption;
  std::cout << "You chose " << userOption << std::endl;
  return userOption;
}

void MerkelMain::printHelp()
{
  std::cout << "Help - your aim is to make money. Analyse the market and make bids and offers" << std::endl;
}
void MerkelMain::printMarketStats()
{

  for (std::string const &p : orderBook.getKnownProducts())
  {
    std::cout << "Product: " << p << std::endl;
    std::vector<OrderBookEntry> entries = orderBook.getOrders(OrderBookType::ask,
                                                              p, currentTime);
    std::cout << "Asks seen: " << entries.size() << std::endl;
    std::cout << "Max ask: " << OrderBook::getHighPrice(entries) << std::endl;
    std::cout << "Min ask: " << OrderBook::getLowPrice(entries) << std::endl;
  }
  // std::cout << "OrderBook contains: " << orders.size() << " entries" << std::endl;
  // unsigned int bids = 0;
  // unsigned int asks = 0;
  // for (OrderBookEntry& e : orders) {
  //   if (e.orderType == OrderBookType::ask) {
  //     asks ++;
  //   }

  //   if (e.orderType == OrderBookType::bid) {
  //     bids ++;
  //   }
  // }
  // std::cout << "OrderBook asks: " << asks << " bids:" << bids << std::endl;
};

void MerkelMain::enterOffer()
{
  std::cout << "Make an offer - enter the amount" << std::endl;
}

void MerkelMain::enterBid()
{
  std::cout << "Make a bid - enter the amount" << std::endl;
}
void MerkelMain::printWallet()
{
  std::cout << "Your wallet is empty" << std::endl;
}

void MerkelMain::goToNextTimeFrame()
{
  std::cout << "Going to next time frame" << std::endl;
  currentTime = orderBook.getNextTime(currentTime);
}

void MerkelMain::processUserOption(int userOption)
{
  if (userOption == 0) // bad input
  {
    std::cout << "Invalid choice. choose 1-6" << std::endl;
  }
  if (userOption == 1) // bad input
  {
    printHelp();
  }
  if (userOption == 2) // bad input
  {
    printMarketStats();
  }
  if (userOption == 3) // bad input
  {
    enterOffer();
  }
  if (userOption == 4) // bad input
  {
    enterBid();
  }
  if (userOption == 5) // bad input
  {
    printWallet();
  }
  if (userOption == 6) // bad input
  {
    goToNextTimeFrame();
  }
}