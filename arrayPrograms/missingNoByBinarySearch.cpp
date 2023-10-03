#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> arr{1,2,3,4,5,6,7,9,10,11,12};
    int s=0,e=arr.size()-1,m;
    while(s<=e){
        cout << "s:" << s << "| e:" << e << endl;
        m=(s+e)/2;
        cout << m << endl;
        if(arr[m]==(m+1)){
            s=m+1;
        }else{
            e=m-1;
        }
        
    }
    cout << "===" << endl;
    cout << arr[m]-1 << endl;
}