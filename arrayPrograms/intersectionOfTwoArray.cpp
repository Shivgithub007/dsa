// #include <iostream>
// #include <vector>;
// using namespace std;

// int main(){
//     vector <int> arr1{1,2,3,4,5,6,7,8,9,9};
//     vector <int> arr2{9,10,11};
//     vector <int > intersection;
//     for(int i=0;i<arr1.size();i++){
//         for(int j=0;j<arr2.size();j++){
//             if(arr1[i]==arr2[j]){
//                 // marking
//                 arr2[j]=-1;
//                 intersection.push_back(arr1[i]);
//             }
//         }
//     }

//     for(int i=0;i<intersection.size();i++){
//         cout << intersection[i] << endl;
//     }
// }

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr1{1,2,3,4,5,6,7,8,9,};
    vector <int> arr2{9,10,11};
    vector <int> res;

    for(int i=0;i< arr1.size(); i++){
        for(int j=0; j< arr2.size(); j++){
            if(arr1[i]==arr2[j]){
                arr2[j]=-1;
            }
        }
    }

    

    for(int i=0; i<arr1.size(); i++){
        res.push_back(arr1[i]);
    }
    for(int i=0; i<arr2.size(); i++){
        if(arr2[i]!=-1){
            res.push_back(arr2[i]);
        }
    }

    for(int i=0; i<res.size(); i++){
        cout << res[i] << endl;
    }



}