//Prime Number
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your Number = ";
    cin >> n;

    int d = 0;

    for(int i = 2; i <= n - 1; i++){//Here Condition of i can be root over n also for 
                                    //Optimization or i * i <= n
                                    // you can also use #include<cmath> and then use sqrt()
        if(n % i == 0){
            d = 1;
            break;
        }
    }
    if(n <= 1){
        cout << "The number is neither prime nor composite" << endl;
    }
    else if(d == 0){
        cout << "The number is a prime number" << endl;
    }
    else{
        cout << "The number is a Composite number" << endl;
    }
    return 0;
}