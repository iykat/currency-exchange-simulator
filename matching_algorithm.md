    <!-- The pseudocode algorithm for the matching engine -->
    asks = orderbook.asks in this timeframe

    bids = orderbook.bids in this timeframe

    sales = []

    sort asks lowest first
    sort bids highest first

    for ask in asks: 
      for bid in bids:
        if bid.price >= ask.price # we have a match
          sale = new orderbookentry()
          sale.price = ask.price

          if bid.amount == ask.amount: # bid completely clears ask
            sale.amount = ask.amount
            sales.append(sale)
            bid.amount = 0 # make sure the bid is not processed again
            <!--  can do no more with this ask -->
            <!-- go onto the next ask -->
            break
          
          if bid.amount > ask.amount: # ask is completely gone slice the bid
            sale.amount = ask.amount
            sales.append(sale)
            <!--  we adjust the bid in place -->
            <!--  so it can be used to process the next ask -->
            bid.amount = bid.amount - ask.amount
            <!--  ask is completely gone, so go to next ask -->
            break
          
          if bid.amount < ask.amount # bid is completely gone,, slice the ask
            sale.amount = bid.amount
            sales.append(sale)
            <!--  update the ask -->
            <!--  and follow further bids to process the remaining amount -->
            ask.amount = ask.amount - bid.amount
            bid.amount = 0 # make sure the bid not processed again
            <!--  some ask remains so go to the next bid -->
            continue

    return sales