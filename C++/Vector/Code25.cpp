//Stock Buy and Sell Problem -> Optimized
//Time Complexity -> O(n)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> stock = {7,1,5,3,6,4};
    int n = stock.size();

    int maxProfit = 0;

    int buy = stock[0];

    for(int i = 1; i <= n - 1; i++){
        if(buy < stock[i]){
            maxProfit = max(maxProfit,(stock[i] - buy));
            
        }
        if(buy > stock[i]){//you could have used "else" in place if "if"
            buy = stock[i];//you could have writeen min function also
        }                  //buy = min(buy,stock[i])
    }
    cout << "Maximum Profit = " << maxProfit << endl;
    return 0;
}