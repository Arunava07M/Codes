//Priority Queue

#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> pq;// for reverse order priority queue
    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);
    pq.push(1);
    
    while(!pq.empty()){//run till priority queue pq is not empty
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    return 0;
}