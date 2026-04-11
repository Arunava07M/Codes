//Vectors
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};

    vec.erase(vec.begin());//remove 1
    vec.erase(vec.begin() + 1);//remove 3 as 3 is first index 2 is zeroeth index

    vec.erase(vec.begin() + 1,vec.begin() + 4);//remove 4,5,6 now 4 is first index
                                           //begin()+4 does not remove 4 th index

    //now the array is 2,7,8,9,10
    vec.insert(vec.begin() + 2, 100);
    //now it should be 2,7,100,8,9,10

    vec.clear();//clears the array

    for(int i : vec){
        cout << i << " ";
    }
    cout << endl;

    cout << "is empty : " << vec.empty() << endl;
    return 0;
}