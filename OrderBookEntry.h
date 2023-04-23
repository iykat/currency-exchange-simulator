#include <string>;

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
                 OrderBookType _orderType);

  double price;
  double amount;
  std::string timestamp;
  std::string product;
  OrderBookType orderType;
};
