#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
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

  int userOption;
  std::cin >> userOption;
  std::cout << "you chose: " << userOption << std::endl;

  if (userOption == 0) // bad input
  {
    std::cout << "Invalid choice. choose 1-6" << std::endl;
  }
  if (userOption == 1) // bad input
  {
    std::cout << "Help - your aim is to make money. Analyse the market and make bids and offers" << std::endl;
  }
  if (userOption == 2) // bad input
  {
    std::cout << "Market looks good" << std::endl;
  }
  if (userOption == 3) // bad input
  {
    std::cout << "Make an offer - enter the amount" << std::endl;
  }
  if (userOption == 4) // bad input
  {
    std::cout << "Make a bid - enter the amount" << std::endl;
  }
  if (userOption == 5) // bad input
  {
    std::cout << "Your wallet is empty" << std::endl;
  }
  if (userOption == 6) // bad input
  {
    std::cout << "Going to next time frame" << std::endl;
  }

  return 0;
}