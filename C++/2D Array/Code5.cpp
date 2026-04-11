//Code with pair<int, int>
#include<iostream>
#include<utility>  // For std::pair
using namespace std;

void linearSearch(int matrix[4][3], int rows, int cols, int key) {
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(key == matrix[i][j]){
                pair<int, int> position = make_pair(i, j);  // Use pair to store the coordinates
                cout << "Key found at (" << position.first << ", " << position.second << ")" << endl;
                return;  // Exit after first match
            }
        }
    }
    cout << "Key not found in the matrix." << endl;
}

int main(){
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };
    
    int key = 8;

    linearSearch(matrix, 4, 3, key);

    return 0;
}

