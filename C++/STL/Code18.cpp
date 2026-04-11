//Custom Comparator

#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

bool comparator(pair<int,int> p1, pair<int,int> p2){//custom caparator made which sorts on 
    if(p1.second < p2.second){ // the basis of second value
        return true;
    }
    if(p1.second > p2.second){
        return false;
    }
    if(p1.first < p2.first){// when second values are same sorting based on first value 
        return true;
    }
    else{
        return false;
    }
}

int main(){
    vector<pair<int,int>> vec = {{3,1},{2,1},{7,1},{5,2}};
    
    sort(vec.begin(),vec.end(),comparator);// we included our comaprator here
                                           // we can do it for vectors and array values
    for(auto p : vec){
        cout << p.first << "," << p.second << endl;
    }
    return 0;
}