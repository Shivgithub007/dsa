#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr{1,2,4,5,-7,3,-4,0,6,-2};
    int l=0;
    int h=arr.size()-1;
    while(l<h){
        if(arr[l]>=0){
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