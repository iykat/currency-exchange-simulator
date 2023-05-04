#include "OrderBook.h"
#include "CSVReader.h"

/** connstruct, reading a csv data file */
OrderBook::OrderBook(std::string filename){
  orders = CSVReader::readCSV(filename);
};
/** return vector of all known products in the dataset */
std::vector<std::string> OrderBook::getKnowonProducts()
{
  std::vector<std::string> products;
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