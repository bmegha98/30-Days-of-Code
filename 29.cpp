#include <iostream>

using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int N,K,temp=0;
        cin>>N>>K;
    for(int j=1;j<N;j++)
    {
            for(int k=j+1;k<=N;k++)
            {
             int c=j & k;      
               if(c<K && c>=temp)
                     temp=c;
            }
     }
        cout<<temp<<endl;
    }
    system("pause");
   return 0; 
}
