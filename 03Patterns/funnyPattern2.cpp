# include <iostream>
using namespace std;

int main(){
    int row;
    int count;
    cin >> row;
    for(int i=1; i<=row; i++){
        count=0;
        for(int j=1;j<=(2*i - 1);j++){
            if(i==1){
                cout << j;
            }
            else{
                if(j<=((2*i-1)/2)+1){
                    cout << ++count;
                }else{
                    cout << --count;
                }
            }
            
        }
        cout << endl;
    }
   
}

// 1
// 121
// 12321
// 1234321
// 123454321
// 12345654321
// 1234567654321
