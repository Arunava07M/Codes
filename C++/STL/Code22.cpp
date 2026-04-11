//Max Element and Min Element

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    vector<int> vec1 = {1,2,3,4,5};
    
    cout << "Max Element = " << *(max_element(vec.begin(),vec.end())) << endl;
    cout << "Min Element = " << *(min_element(vec1.begin(),vec1.end())) << endl;

    
    return 0;
}