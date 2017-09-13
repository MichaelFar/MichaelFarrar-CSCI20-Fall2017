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
    Fordm.stockName;
    cout << "What is the name of the first stock?" <<endl;
    cin >> Fordm.stockName;
    cout << "How many shares in this stock do you have?"<<endl;
    Fordm.numShares;
    cin >> Fordm.numShares;
    cout << "What is the sector?"<<endl;
    Fordm.sector;
    cin >> Fordm.sector;
    cout << "What is each share worth?"<<endl;
    Fordm.sharePrice = 0.00;
    cin >> Fordm.sharePrice;
    
    stocks Albertsn;
    cout << "What is the name of the second stock?"<<endl;
    cin >> Albertsn.stockName;
    cout << "How many shares in this stock do you have?"<<endl;
    Albertsn.numShares;
    cin >> Albertsn.numShares;
    Albertsn.stockName;
    Albertsn.sector;
    cout << "What is the sector?"<<endl;
    Albertsn.sector;
    cin >> Albertsn.sector;
    cout << "What is each share worth?"<<endl;
    Albertsn.sharePrice = 0.00;
    cin >> Albertsn.sharePrice;
    
    
    
    stocks AAPL;
    AAPL.stockName;
    cout << "What is the name of the third stock?"<<endl;
    cin >> AAPL.stockName;
    cout << "How many shares in this stock do you have?"<<endl;
    AAPL.numShares;
    cin >> AAPL.numShares;
    cout << "What is the sector?"<<endl;
    AAPL.sector;
    cin >> AAPL.sector;
    cout << "What is each share worth?"<<endl;
    AAPL.sharePrice = 0.00;
    cin >> AAPL.sharePrice;
    
    
    
    stocks TSLA;
    TSLA.stockName;
    cout << "What is the name of the fourth stock?"<<endl;
    cin >> TSLA.stockName;
    cout << "How many shares in this stock do you have?"<<endl;
    TSLA.numShares;
    cin >> TSLA.numShares;
    cout << "What is the sector?"<<endl;
    TSLA.sector;
    cin >> TSLA.sector;
    cout << "What is each share worth?"<<endl;
    TSLA.sharePrice = 0.00;
    cin >> TSLA.sharePrice;
    

    stocks WFC;
    WFC.stockName;
    cout << "What is the name of the fifth stock?"<<endl;
    cin >> WFC.stockName;
    cout << "How many shares in this stock do you have?"<<endl;
    WFC.numShares;
    cin >> WFC.numShares;
    cout << "What is the sector?"<<endl;
    WFC.sector;
    cin >> WFC.sector;
    cout << "What is each share worth?"<<endl;
    WFC.sharePrice = 0.00;
    cin >> WFC.sharePrice;
    
    Fordm.totalPrice = Fordm.sharePrice * Fordm.numShares;
    Albertsn.totalPrice = Albertsn.sharePrice * Albertsn.numShares;
    AAPL.totalPrice = AAPL.sharePrice * AAPL.numShares;
    TSLA.totalPrice = TSLA.sharePrice * TSLA.numShares;
    WFC.totalPrice = WFC.sharePrice * WFC.numShares;
    
    cout << "Name of stock" << "      " << "Number of Shares" << "      " << "Current Value" << "      " << "Total Value" << endl;
    cout << Fordm.stockName << "      " << Fordm.numShares << "      " << Fordm.sharePrice << "      " << Fordm.totalPrice << endl;
    cout << Albertsn.stockName << "   " << Albertsn.numShares << "      " << Albertsn.sharePrice << "      " << Albertsn.totalPrice << endl;
    cout << AAPL.stockName << "      " << AAPL.numShares << "      " << AAPL.sharePrice << "      " << AAPL.totalPrice << endl;
    cout << TSLA.stockName << "      " << TSLA.numShares << "      " << TSLA.sharePrice << "      " << TSLA.totalPrice << endl;
    cout << WFC.stockName << "      " << WFC.numShares << "      " << WFC.sharePrice << "      " << WFC.totalPrice << endl;
    portfolioValue = Fordm.totalPrice + Albertsn.totalPrice + AAPL.totalPrice + TSLA.totalPrice + WFC.totalPrice;
    cout << "Total value of your portfolio " << portfolioValue <<" Dollars" <<endl;
}