#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(1);// inserts 1 in the end
    vec.push_back(2);// inserts 2 in the end
    vec.push_back(3);// inserts 3 in the end
    vec.push_back(4);// inserts 4 in the end
    vec.push_back(5);// inserts 5 in the end
    
    vec.pop_back();// 5 deleted

    cout << vec.front() << endl;// prints 1

    cout << vec.back() << endl;// prints 4

    cout << vec.at(0) << endl;// prints 1 as 1 is the value in 0 th index

    cout << "Size = " << vec.size() << endl;// prints Size = 4

    for(int i : vec){
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}