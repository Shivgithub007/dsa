# include <iostream>
using namespace std;

int main(){
    int row;
    cin >> row;
    for(int i=1; i<=row; i++){
        for(int j=1 ;j<=i ;j++){
            if(  j!=i){
                cout << j << "*";
            }else{
                cout <<j;
            }
        }
        cout << endl;
        
    }
    for(int i=1; i<=row; i++){
        for(int k=row-i+1; k>=1;k--){
            if(k!=1){
                cout <<row-k+1 << "*";
            }else{
                cout << row-k+1;
            }
        }
        cout << endl;
    }
   
}

// 1
// 1*2
// 1*2*3
// 1*2*3*4
// 1*2*3*4*5
// 1*2*3*4*5
// 2*3*4*5
// 3*4*5
// 4*5
// 5
