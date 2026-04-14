#include<iostream>
using namespace std;

int main(){
    cout << "Hello World \n Arunava Mukherjee" << endl;
    //spces after \n can make the output print a little right or left according to the 
    //placement of the statement for this we can see the output as
    //Output:-

    //Hello World
    // Arunava Mukherjee% 

    //the gap is there at the beginning because you printed it with a 
    //space after \n

    cout << "Arunava Mukherjee " << "Hello" << endl;
    //space after Mukherjee before closing the bracket gave you the output at 
    //Arunava Mukherjee Hello
    //if after Mukherjee you did not gave space before ending the quote it would have looked
    //like...Output:-
    //Arunava MukherjeeHello
    return 0;
}