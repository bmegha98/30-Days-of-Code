#include <cmath>
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;


int main() {
    int n,k=0;
    cin>>n;
    string A[n];
    cin.ignore();
   
    for(int i=0;i<n;i++)
      getline(cin,A[i]);
   
    for(int i=0;i<n;i++)
    { 
            int m=A[i].length();
            char C[m];
            strcpy(C,A[i].c_str());
            
            for(int j=0;j<m;j++)
            {
                   if(j%2==0)
                    cout<<C[j];
                    }
                    cout<<" ";
                   for(int j=0;j<m;j++)
            {
                    if(j%2!=0)
                    cout<<C[j];
                    }
                    cout<<endl;
                    }
    return 0;
}
