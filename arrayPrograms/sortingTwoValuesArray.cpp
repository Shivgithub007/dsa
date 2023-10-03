#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr{0,1,0,1,0,1,0,1};
    int l=0;
    int h=arr.size()-1;
    while(l<h){
        if(arr[l]==1){
            swap(arr[l],arr[h]);
            h--;
        }else{
            l++;
        }
        
    }
    for(auto value: arr){
        cout << value << endl;
    }
}