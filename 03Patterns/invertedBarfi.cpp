# include <iostream>
using namespace std;

int main(){
    int row;
    cin >> row;
     for(int i=1; i<=row; i++){
       for(int j=1; j<=row+1-i; j++){
           cout << "*";
       }
       for(int k=1; k<=(2*i - 1); k++){
           cout << " ";
       }
       for(int l=1; l<=row+1-i; l++){
           cout << "*";
       }
       cout << endl;
    }
    for(int i=1;i<=row;i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        for(int k=(((1+row)-i)*2)-1; k>=1; k--){
            cout << " ";
        }
        for(int k=1; k<=i; k++){
            cout << "*";
        }
        cout << endl;
        
    }
   
}

// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****
