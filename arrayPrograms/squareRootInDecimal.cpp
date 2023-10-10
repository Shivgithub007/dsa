#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int sqrt(int t){
    int s=0;
    int e=t;
    int m;
    int ans;
    while(s<=e){
        m=s+(e-s)/2;
        if(m*m<=t){
            ans=m;
            s=m+1;
        }else{
            e=m-1;
        }
    }
    return ans;
}

float sqrt2(float t,int upto,int target){
    float ans;
    float it;
    for(int i=1; i<=upto; i++){
        
        for(int j=0; j<=9; j++){
            it=t+j/pow(10,i);
            
            if(it*it<=target){
                
                ans=it;
            }
            
        }
        t=ans;
    }
    return ans;
}

int main(){
    int t=122;
    
    int ans=sqrt(t);
    float ans1=sqrt2(ans,4,t);
    cout << ans1 << endl;
}