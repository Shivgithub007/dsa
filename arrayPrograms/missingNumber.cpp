#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr{1,2,2,4};
    
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size()-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(auto val:arr){
        cout << val << endl;
    }
    for(int i=0; i<arr.size(); i++){
        if((i+1)!=arr[i]){
            cout << "Missing number : " << i+1;
            break;
        }
    }
    
}