#GIVEN A LIST OF HISTORICAL STOCK PRICES FOR A SINGLE DAY FOR AMAZON STOCK.
#THE INDEX OF THE LIST REPRESENTS THE TIMESTAMP SO THE ELEMENT AT INDEX 0 IS THE 
#INITIAL PRICE OF THE STOCK. THE ELEMENT AT INDEX 1 IS THE NEXT RECORDED PRICE OF
#THE STOCK FOR THAT DAY.
#FUNCTION TO RETURN MAXIMUM PROFIT POSSIBLE FROM THE PURCHASE AND SALE OF A 
#SINGLE SHARE OF STOCK ON THAT DAY.
def maxprofit(stock_prices):
    max_profit=0
    for i in range(0,len(stock_prices)-1):
        for j in range(i+1,len(stock_prices)):
            if stock_prices[i]<stock_prices[j]:
                curr_profit=stock_prices[j]-stock_prices[i]
                if(curr_profit>max_profit):
                    max_profit=curr_profit
    return max_profit
print(maxprofit([12,11,15,3,10]))
#3,10 gives 10-3=7
print(maxprofit([10,12,14,12,13,11,8,7,6,13,23,45,11,10]))
#7,45 gives 45-7=39
