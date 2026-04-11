//Vector Iterators

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    vector<int> vec1 = {1,2,3,4,5};
    vector<int> vec2 = {1,2,3,4,5};
    vector<int> vec3 = {1,2,3,4,5};

    cout << *(vec.begin()) << endl;
    cout << *(vec.end() - 1) << endl;
    
    //forward
    vector<int>::iterator it;//declaring iterator it
    for(it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;
    
    //backward
    vector<int>::reverse_iterator itr;//declaring iterator itr
    for(itr = vec1.rbegin(); itr != vec1.rend(); itr++){
        cout << *(itr) << " ";
    }
    cout << endl;

    //you can also use keyword auto instead of declaring iterator

    //forward
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    //backward
    for(auto itr = vec1.rbegin(); itr != vec1.rend(); itr++){
        cout << *(itr) << " ";
    }
    cout << endl;

    return 0;
}