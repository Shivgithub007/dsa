// #include <iostream>
// #include <vector>
// using namespace std;

// int indexFinder(vector <int> arr, int f){
//     int s=0,e=arr.size(),m;
//     while(s<=e){
//         m=s+(e-s)/2;
//         if(f==arr[m]){
//             while(arr[m]==f){
//                 m--;
//             }
//             return m+1;
//         }
//         else if(arr[m]>f){
//             e=m-1;
//         }
//         else if(arr[m]<f){
//             s=m+1;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector <int> arr={1,2,3,7,4,4,4,4,5,6,};
//     int f=4;
//     int val=indexFinder(arr,f);
//     if(val!=-1){
//         cout << val;
//     }else{
//         cout << "Value not found";
//     }
// }



#include <iostream>
#include <vector>
using namespace std;

int indexFinder(vector <int> arr, int f){
    int s=0,e=arr.size(),m;
    int fo=-1;
    while(s<=e){
        m=s+(e-s)/2;
        if(f==arr[m]){
            
            fo=m;
            e=m-1;
        }
        else if(arr[m]>f){
            e=m-1;
        }
        else if(arr[m]<f){
            s=m+1;
        }
    }
    return fo;
}

int main(){
    vector <int> arr={1,2,3,3,4,4,4,4,5,6,};
    int f=4;
    int val=indexFinder(arr,f);
    if(val!=-1){
        cout << val;
    }else{
        cout << "Value not found";
    }
}