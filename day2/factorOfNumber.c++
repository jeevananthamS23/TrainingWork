#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number to find the factor"<<endl;
    cin>>n;
    cout<<"cofactors"<<endl;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(n%(n/i)==0)
            {
                cout<<i<<" "<<n/i<<" ";
            }
        }
    }
    
 

    return 0;
}