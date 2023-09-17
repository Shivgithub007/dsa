#include <iostream>

using namespace std;

int main() {
    int col,row,i,j;
    cin >> col;
    cin >> row;
    for(i=1;i<=row;i=i+1){
        if(i==1 || i==row){
            for(j=1; j<=col ; j=j+1){
                cout << "*";
            }
            cout << endl;
        }
        else{
            for ( j=1; j<=col; j=j+1){
            if(j==1 || j==col){
                cout << "*";
                if(j==col){
                    cout << endl;
                }
            }
            else{
                cout << " ";
            }
            
        }
        }
    }
}

// ******
// *    *
// *    *
// ******
