

class MerkelMain
{
public:
  MerkelMain();
  void init();
  void printMenu();
  int getUserOption();
  void printHelp();
  void printMarketStats();
  void enterOffer();
  void enterBid();
  void printWallet();
  void goToNextTimeFrame();
  void processUserOption(int userOption);
};