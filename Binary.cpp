#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int rem=0,count=0,one=0;
    while(n>0)
    {
        rem=n%2;
        n=n/2;
        if(rem==1)
        {
            count++;
            if(count>=one)
                one=count;
        }
        else
            count=0;
    }
cout<<one<<endl;
    return 0;
}
