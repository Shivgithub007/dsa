# include <iostream>
using namespace std;

int main(){
    int row;
    cin >> row;
     for(int i=1; i<=row; i++){
        for(int j=row; j>i; j--){
            cout << " ";
        }
        for(int k=1; k<=(2*i - 1); k++){
            if(k%2!=0){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        
        cout << endl;
    }
    for(int i=1; i<=row; i++){
        for(int j=1; j<i; j++){
            cout << " ";
        }
        for(int k=i; k<=row; k++){
            cout << "* ";
        }
        
        cout << endl;
    }
   
}

//        *
//       * *
//      * * *
//     * * * *
//    * * * * *
//   * * * * * *
//  * * * * * * *
// * * * * * * * *
// * * * * * * * * 
//  * * * * * * * 
//   * * * * * * 
//    * * * * * 
//     * * * * 
//      * * * 
//       * * 
//        * 
