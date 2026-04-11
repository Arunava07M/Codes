/*
1. Takes input for the cost of three items from the user using the float data type:
       A pencil
       A pen
       An eraser

2. Outputs the total cost as the user's bill.

3. (Optional Add-On): Add 18% GST (Goods and Services Tax) to the total cost and 
   display the final amount
*/
#include<iostream>
using namespace std;

int main(){
    float pencil;
    cout << "Pencil = ";
    cin >> pencil;

    float pen;
    cout << "Pen = ";
    cin >> pen;

    float eraser;
    cout << "eraser = ";
    cin >> eraser;

    float total = pencil + pen + eraser;
    float finalBill = total + total * 0.18;

    cout << "Total Cost = " << finalBill << endl;
    return 0;
}