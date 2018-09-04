#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
       int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int n,f=0;
        cin>>n;
        if(n==1)
        {
         cout<<"Not prime"<<endl;
            
        }
        else
        {
        for(int j=2;j<=sqrt(n);j++)
        {
            if(n%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"Not prime"<<endl;
        else 
            cout<<"Prime"<<endl;
        
        }
    }
    return 0;
}
