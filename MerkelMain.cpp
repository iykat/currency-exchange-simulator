#include "MerkelMain.h"
#include <iostream>

MerkelMain::MerkelMain()
{
}

void MerkelMain::init()
{
}
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
}

int MerkelMain::getUserOption()
{
  int userOption;
  std::cout << "Type 1-6" << std::endl;
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
  std::cout << "Market looks good" << std::endl;
}

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