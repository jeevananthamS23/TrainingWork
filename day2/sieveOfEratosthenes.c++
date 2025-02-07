#include <iostream>
#include<vector>
using namespace std;

int main() {
    int a,b;
    cout<<"enter the range of number";
    cin>>a>>b;
    vector<bool> isprime(b,true);
    for(int i=2;i*i<=b;i++){   
        if(isprime[i]==true){
        
        for(int j=2;i*j<=b;j++){
            isprime[i*j]=false;
        }
    }
        
    }
    cout<<"Isprime_number";
    for(int i=2;i<=b;i++){
        if(isprime[i])
        cout<<i<<" ";
    }
    
 

    return 0;
}