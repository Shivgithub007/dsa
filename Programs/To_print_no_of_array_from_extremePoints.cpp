// #include <iostream>
// #include <limits.h>

// using namespace std;

// int main(){
  
//     int arr[10]={34,2,34,56,47,23,1,234,5};
//     int n=9;
//     for(int i=0; i<n/2;i++){
//        if((n/2)%2!=0){
//            cout << arr[i] << " ";
//            cout << arr[n-1-i] << " ";
//        }else{
//            cout << arr[i] << " ";
//            if(i!= n/2){
//                cout << arr[n-1-i] << " ";
//            }
//        }
//     }
   
// }


#include <iostream>
#include <limits.h>

using namespace std;

int main(){
  
    int arr[10]={34,2,34,56,47,23,1,234,5,};
    int start=0;
    int end=9-1;
    while(start<=end){
        if(start!=end){
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }else{
            cout << arr[start] << " ";
        }
        start++;
        end--;
    }
   
}