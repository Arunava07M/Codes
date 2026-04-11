//Stock Buy and Sell Problem -> Brute force
//Time Complexity -> O(n^2)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> stock = {7,1,5,3,6,4};
    int n = stock.size();

    int maxProfit = 0;//took 0 in place of INT_MIN because stock price can not be negative

    for(int i = 0; i <= n - 1; i++){
        for(int j = i + 1; j <= n - 1; j++){
            if(stock[i] < stock[j]){
               int profit = stock[j] - stock[i];
               maxProfit = max(maxProfit,profit);
            }            
        }
    }
    cout << "Maximum Profit = " << maxProfit << endl;
    return 0;
}