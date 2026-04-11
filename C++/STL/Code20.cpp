//Next Permutation

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s = "abc";
    next_permutation(s.begin(),s.end());
    cout << s << endl;

    string s1 = "bca";
    prev_permutation(s1.begin(),s1.end());
    cout << s1 << endl;
    return 0;
}