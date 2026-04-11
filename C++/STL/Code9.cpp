//Queue

#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    
    cout << "size of queue q = " << q.size() << endl;

    queue<int> q1;

    q1.swap(q);//q queue 's element will be swapped to q1 queue 's and q queue will get empty

    cout << "q stack is empty = " << q.empty() << endl;

    while(!q1.empty()){//run till queue is not empty
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
    return 0;
}