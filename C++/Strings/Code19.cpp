//Compression String

//The outer loop iterates over the characters from left to right.
//The inner while loop advances i over consecutive identical characters.
//Since each character is visited exactly once by the combined loops (the inner loop skips 
//duplicates), the total number of iterations over the input is proportional to n.
//All other operations (like to_string(count) and writing digits) are proportional 
//to the number of groups, and since the count digits per group are small compared to n, 
//this remains O(n) overall.
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void compressString(vector<char> &chars){
    int n = chars.size();
    int idx = 0;
    for(int i = 0; i <= n - 1; i++){
        char ch = chars[i];
        int count = 0;
        while(i <= n - 1 && chars[i] == ch){
            count++;
            i++;
        }
        if(count == 1){
            chars[idx] = ch;
            idx++;
        }
        else{
            chars[idx] = ch;
            idx++; // Increment idx after placing character
            string str = to_string(count);
            for(char dig : str){
                chars[idx] = dig;
                idx++;
            }
        }
        i--;
    }
    
    // Resize vector to new compressed size
    chars.resize(idx);
}

int main(){
    vector<char> chars = {'a','a','b','b','c','c','c'};
    compressString(chars);

    for(char c : chars){
        cout << c;
    }
    cout << endl;
    
    return 0;
}
