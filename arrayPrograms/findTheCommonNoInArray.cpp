// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector <int> arr1{1,5,10,20,40,80};
//     vector <int> arr2{6,7,20,80,100};
//     vector <int> arr3{3,4,15,20,30,70,80,120};
//     for(int i=0; i<arr1.size(); i++){
//         for(int j=0; j<arr2.size(); j++){
//             if(arr1[i]==arr2[j]){
//                 for(int k=0; k<arr3.size(); k++){
//                     if(arr1[i]==arr3[k]){
//                         cout << arr1[i] << endl;
//                     }
//                 }
//             }
//         }
//     }
    
// }


// More optimal way

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr1{1,5,10,20,40,80};
    vector <int> arr2{6,7,20,80,100};
    vector <int> arr3{3,4,15,20,30,70,80,120};
    int i=0;
    int j=0;
    int k=0;
    while( i<arr1.size() && j<arr2.size() && k<arr3.size()){
        if(arr1[i]==arr2[j]&& arr2[j]==arr3[k]){
            cout << arr1[i] << endl;
            i++;
            j++;
            k++;
        }else if(arr1[i]<arr2[j]){
            i++;
        }else if(arr2[j]<arr3[k]){
            j++;
        }else{
            k++;
        }
    }
    
}