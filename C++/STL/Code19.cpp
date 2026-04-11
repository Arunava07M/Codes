//Reverse

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    vector<int> vec1 = {1,2,3,4,5};
    
    reverse(vec.begin(),vec.end());
    reverse(vec1.begin() + 1, vec1.begin() + 3);

    for(int i : vec){
        cout << i << " ";
    }
    cout << endl;

    for(int j : vec1){
        cout << j << " ";
    }
    cout << endl;
    return 0;
}