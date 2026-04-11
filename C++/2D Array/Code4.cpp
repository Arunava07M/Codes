//linear search
#include<iostream>
using namespace std;

void linearSearch(int matrix[4][3], int rows, int cols, int key){//you can skip row number
    for(int i = 0; i <= rows - 1; i++){            //but you should not skip column number
        for(int j = 0; j <= cols - 1; j++){
            if(key == matrix[i][j]){
                cout << "Key found at " << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}

int main(){
    int matrix[4][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9},{10, 11, 12}};
    int rows = 4;
    int cols = 3;

    int key = 8;

    linearSearch(matrix, rows, cols, key);
    return 0;
}