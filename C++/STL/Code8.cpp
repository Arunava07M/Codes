//Stack

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    cout << "size of stack s = " << s.size() << endl;

    stack<int> s1;

    s1.swap(s);//s stack 's element will be swapped to s1 stack 's and s stack will get empty

    cout << "s stack is empty = " << s.empty() << endl;

    while(!s1.empty()){//run till stack is not empty
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;
    return 0;
}