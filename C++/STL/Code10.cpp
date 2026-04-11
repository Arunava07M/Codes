//Priority Queue

#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);
    pq.push(1);
    
    cout << "size of priority queue pq = " << pq.size() << endl;

    priority_queue<int> pq1;

    pq1.swap(pq);//pq priority queue 's element will be swapped to pq1 
    // priority queue 's and pq queue will get empty
    cout << "pq priority queue is empty = " << pq.empty() << endl;

    while(!pq1.empty()){//run till priority queue pq1 is not empty
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout << endl;
    return 0;
}