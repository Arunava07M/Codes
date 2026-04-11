//Maximum Column Sum
#include<iostream>
#include<climits>
using namespace std;

void maxRowSum(int matrix[3][3], int rows, int cols){
    int max = INT_MIN;
    for(int i = 0; i <= rows - 1; i++){
        int d = 0;            
        for(int j = 0; j <= cols - 1; j++){
            d = d + matrix[j][i];//just interchanged j being cols is read as rows
        }//i being rows is read as cols
        if(d > max){
            max = d;
        }//you could have used max = max(d,max); using #include <algorithm>
    }
    cout << "Maximum Row Sum = " << max << endl;
}

int main(){
    int matrix[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rows = 3;
    int cols = 3;

    maxRowSum(matrix, rows, cols);
    return 0;
}