#include "OrderBook.h"
#include "CSVReader.h"
#include <map>

/** connstruct, reading a csv data file */
OrderBook::OrderBook(std::string filename){
  orders = CSVReader::readCSV(filename);
};
/** return vector of all known products in the dataset */
std::vector<std::string> OrderBook::getKnownProducts()
{
  std::vector<std::string> products;
  std::map<std::string, bool> prodMap;

  for (OrderBookEntry& e : orders) 
  {
    prodMap[e.product] = true;
  } 

  // now flatten the map to a vector of strings
  for (auto const& e : prodMap) 
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
  return orders_sub;
};