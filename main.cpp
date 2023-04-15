#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum class OrderBookType
{
  bid,
  ask
};

class OrderBookEntry
{
public:
  OrderBookEntry(double _price,
                 double _amount,
                 std::string _timestamp,
                 std::string _product,
                 OrderBookType _orderType)
      : price(_price),
        amount(_amount),
        timestamp(_timestamp),
        product(_product),
        orderType(_orderType)

  {
  }
  double price;
  double amount;
  std::string timestamp;
  std::string product;
  OrderBookType orderType;
};

void printMenu()
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

int getUserOption()
{
  int userOption;
  std::cout << "Type 1-6" << std::endl;
  std::cin >> userOption;
  std::cout << "You chose " << userOption << std::endl;
  return userOption;
}

void printHelp()
{
  std::cout << "Help - your aim is to make money. Analyse the market and make bids and offers" << std::endl;
}
void printMarketStats()
{
  std::cout << "Market looks good" << std::endl;
}

void enterOffer()
{
  std::cout << "Make an offer - enter the amount" << std::endl;
}

void enterBid()
{
  std::cout << "Make a bid - enter the amount" << std::endl;
}
void printWallet()
{
  std::cout << "Your wallet is empty" << std::endl;
}

void goToNextTimeFrame()
{
  std::cout << "Going to next time frame" << std::endl;
}

void processUserOption(int userOption)
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

int main()
{

  // double price = 5321.2003;
  // double amount = 0.00002;
  // std::string timestamp{"3/17/2020 17:01:25"};
  // std::string product{""};

  // OrderBookType orderType = OrderBookType::ask;

  std::vector<OrderBookType> orderType;
  std::vector<double> prices;
  std::vector<double> amounts;
  std::vector<std::string> products;
  std::vector<std::string> timeStamps;

  prices.push_back(20302.3);
  amounts.push_back(0.01);
  timeStamps.push_back("3/17/2020 17:01:25");
  products.push_back("ETH/BTC");
  orderType.push_back(OrderBookType::bid);

  std::cout << "the price is " << prices[0] << std::endl;

  // while (true)
  // {
  //   printMenu();
  //   int userOption = getUserOption();
  //   processUserOption(userOption);
  // }

  OrderBookEntry order1{100, 0.01, "3/17/2020 17:01:25", "ETH/BTC", OrderBookType::ask};
  std::cout << "the price is " << order1.price << std::endl;

  return 0;
}