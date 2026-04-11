//2D Array Print
#include<iostream>
using namespace std;

int main(){
    int matrix[4][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9},{10, 11, 12}};
    int rows = 4;
    int cols = 3;

    for(int i = 0; i <= rows - 1; i++){
        for(int j = 0; j <= cols - 1; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}