#include <iostream>

using namespace std;

int main() {
    int col,row;
    cin >> col;
    cin >> row;
    for(int i=1;i<=row;i++){
        if(i==1 || i==row){
            for(int j=1; j<=col ; j++){
                cout << "*";
            }
            cout << endl;
        }
        for (int j=1; j<=col; j++){
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