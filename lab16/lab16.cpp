#include <iostream>
#include <string>
using namespace std;
struct stocks{
        string stockName;
        string sector;
        double totalPrice;
        double numShares;
        double sharePrice;
    };
int main(){
    double portfolioValue = 0;

    stocks Fordm;
    cout << "How many shares in Fordm do you have?";
    Fordm.numShares;
    cin >> Fordm.numShares;
    Fordm.stockName = "Fordm";
    Fordm.sector = "A";
    Fordm.sharePrice = 18.76;
    
    stocks Albertsn;
    cout << "How many shares in Albertsn do you have?";
    Albertsn.numShares;
    cin >> Albertsn.numShares;
    Albertsn.stockName = "Albertsn";
    Albertsn.sector = "C";
    Albertsn.sharePrice = 34.39;
    
    stocks AAPL;
    cout << "How many shares in AAPL do you have?";
    AAPL.numShares;
    cin >> AAPL.numShares;
    AAPL.stockName = "AAPL";
    AAPL.sector = "T";
    AAPL.sharePrice = 145.91;
    
    stocks TSLA;
    cout << "How many shares in TSLA do you have?";
    TSLA.numShares;
    cin >> TSLA.numShares;
    TSLA.stockName = "TSLA";
    TSLA.sector = "A";
    TSLA.sharePrice = 375.64;

    stocks WFC;
    cout << "How many shares in WFC do you have?";
    WFC.numShares;
    cin >> WFC.numShares;
    WFC.stockName = "WFC";
    WFC.sector = "F";
    WFC.sharePrice = 53.02;
    
    Fordm.totalPrice = Fordm.sharePrice * Fordm.numShares;
    Albertsn.totalPrice = Albertsn.sharePrice * Albertsn.numShares;
    AAPL.totalPrice = AAPL.sharePrice * AAPL.numShares;
    TSLA.totalPrice = TSLA.sharePrice * TSLA.numShares;
    WFC.totalPrice = WFC.sharePrice * WFC.numShares;
    
    cout << "Name of stock" << "      " << "Number of Shares" << "      " << "Current Value" << "      " << "Total Value" << endl;
    cout << Fordm.stockName << "      " << Fordm.numShares << "      " << Fordm.sharePrice << "      " << Fordm.totalPrice << endl;
    cout << Albertsn.stockName << "      " << Albertsn.numShares << "      " << Albertsn.sharePrice << "      " << Albertsn.totalPrice << endl;
    cout << AAPL.stockName << "      " << AAPL.numShares << "      " << AAPL.sharePrice << "      " << AAPL.totalPrice << endl;
    cout << TSLA.stockName << "      " << TSLA.numShares << "      " << TSLA.sharePrice << "      " << TSLA.totalPrice << endl;
    cout << WFC.stockName << "      " << WFC.numShares << "      " << WFC.sharePrice << "      " << WFC.totalPrice << endl;
    portfolioValue = Fordm.totalPrice + Albertsn.totalPrice + AAPL.totalPrice + TSLA.totalPrice + WFC.totalPrice;
    cout << "Total value of your portfolio " << portfolioValue <<" Dollars" <<endl;
}