#include<iostream>
using namespace std;

// int main(){
//     int row;
//     cin >> row;
//     for(int i=1;i<=row;i++){
//         for(int j=row ; j>=i; j--){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

int main(){
    int row;
    cin >> row;
    for(int i=row ; i>0 ; i--){
        for(int j=1 ; j<=i ;j++){
            cout << "*";
        }
        cout << endl;
    }
}