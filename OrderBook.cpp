#include "OrderBook.h"
#include "CSVReader.h"
#include <map>
#include <algorithm>

/** connstruct, reading a csv data file */
OrderBook::OrderBook(std::string filename)
{
  orders = CSVReader::readCSV(filename);
};
/** return vector of all known products in the dataset */
std::vector<std::string> OrderBook::getKnownProducts()
{
  std::vector<std::string> products;
  std::map<std::string, bool> prodMap;

  for (OrderBookEntry &e : orders)
  {
    prodMap[e.product] = true;
  }

  // now flatten the map to a vector of strings
  for (auto const &e : prodMap)
  {
    products.push_back(e.first);
  }

  return products;
};
/** return vector of Orders according to the sent filters */
std::vector<OrderBookEntry> OrderBook::getOrders(OrderBookType type,
                                                 std::string product,
                                                 std::string timestamp)
{
  std::vector<OrderBookEntry> orders_sub;
  for (OrderBookEntry &e : orders)
  {
    if (e.orderType == type &&
        e.product == product &&
        e.timestamp == timestamp)
    {
      orders_sub.push_back(e);
    }
  }
  return orders_sub;
};

double OrderBook::getHighPrice(std::vector<OrderBookEntry> &orders)
{
  double max = orders[0].price;
  for (OrderBookEntry &e : orders)
  {
    if (e.price > max)
      max = e.price;
  }
  return max;
}

double OrderBook::getLowPrice(std::vector<OrderBookEntry> &orders)
{
  double min = orders[0].price;
  for (OrderBookEntry &e : orders)
  {
    if (e.price < min)
      min = e.price;
  }
  return min;
}

std::string OrderBook::getEarliestTime()
{
  return orders[0].timestamp;
}

std::string OrderBook::getNextTime(std::string timestamp)
{
  std::string next_timestamp = "";
  for (OrderBookEntry &e : orders)
  {
    if (e.timestamp > timestamp)
    {
      next_timestamp = e.timestamp;
      break;
    }
  }

  if (next_timestamp == "")
  {
    next_timestamp = orders[0].timestamp;
  }

  return next_timestamp;
}

void OrderBook::insertOrder(OrderBookEntry &order)
{
  orders.push_back(order);
  std::sort(orders.begin(), orders.end(), OrderBookEntry::compareByTimestamp);
}
