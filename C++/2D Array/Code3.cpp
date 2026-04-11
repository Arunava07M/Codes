//Input and Output in 2D Array
#include<iostream>
using namespace std;

int main(){
    int arr[4][3];
    int rows = 4;
    int cols = 3;

    for(int i = 0; i <= rows - 1; i++){//Input in 2D Array
        for(int j = 0; j <= cols - 1; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i <= rows - 1; i++){
        for(int j = 0; j <= cols - 1; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}