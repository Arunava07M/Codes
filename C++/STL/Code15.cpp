//Set

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(1);
    s.insert(6);
    s.insert(3);
    s.insert(2);
    s.insert(4);

    cout << "lower bound = " << *(s.lower_bound(4)) << endl;// 4 will be returned
    cout << "lower bound = " << *(s.lower_bound(5)) << endl;// 6 will be returned
    cout << "lower bound = " << *(s.lower_bound(7)) << endl;// 0 will be returned
    cout << "upper bound = " << *(s.upper_bound(2)) << endl;// 3 will be returned
    cout << "upper bound = " << *(s.upper_bound(4)) << endl;// 3 will be returned

    for(auto i : s){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}