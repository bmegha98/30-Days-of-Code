#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;
class Calculator
{
    public:
    int power(int n,int p) 
    {
        if(n>=0 && p>=0)
            return pow(n,p);
        else
            throw runtime_error("n and p should be non-negative");  //runtime_error() is used to throw string exception message
    }
};
int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T>0)
    {
      cin>>n>>p;
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
         T--;
      }
    }
    
}
