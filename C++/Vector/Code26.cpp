//Container with most water -> Brute force
//Time Complexity -> O(n^2)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> lines = {1,8,6,2,5,4,8,3,7};
    int n = lines.size();

    int maxAmount = 0;

    for(int i = 0; i <= n - 1; i++){
        int e = 0;
        int width = 1;//I could have also used the logic of interest like j-i being width
        for(int j = i + 1; j <= n - 1; j++){
            if(lines[j] > lines[i]){
                e = lines[i] * width;//lines[i] * (j - i)
                width++;
            }
            else{
                e = lines[j] * width;//lines[j] * (j - i)
                width++;
            }
            maxAmount = max(maxAmount,e);

            /*i could have done this too

            w = j - i;
            ht = min(lines[i],lines[j]);
            area = w * ht;
            maxAmount = max(maxAmount, area);
                        
            */
        }
    }
    cout << "Maximum amount of water in the container = " << maxAmount << endl;
    return 0;
}
