

class MerkelMain
{
public:
  MerkelMain();
  /** call this to start the sime*/
  void init();
private:
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