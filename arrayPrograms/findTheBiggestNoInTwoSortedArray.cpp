// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
//     vector <int> arr={1,3,5,7,8,9,10,9,8,7,5,4,2,1,0,-1,-89};
//     int s=0,e=arr.size()-1,m;
//     while(s<e){
//         cout << "s:"<<s<<"| e:" << e<<endl;
//         m=(s+e)/2;
//         cout << m << endl;
//         if(arr[m]>arr[m+1] && arr[m]> arr[m-1]){
//             cout << arr[m];
//             break;
//         }
//         else if(arr[m]>arr[m+1]){
//             e=m;
//         }else{
//             s=m;
//         }
//     }
// }


#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> arr={1,3,5,7,9};
    int s=0,e=arr.size()-1,m;
    while(s<e){
        cout << "s:"<<s<<"| e:" << e<<endl;
        m=(s+e)/2;
        cout << m << endl;
        
        if(arr[m]<arr[m+1]){
            s=m+1;
        }else{
            e=m;
        }
    }
    cout << arr[m] << endl;
}