#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int ADate,AMonth,AYear,EDate,EMonth,EYear,fine;
    cin>>ADate>>AMonth>>AYear;
    cin>>EDate>>EMonth>>EYear;
     if(ADate<=EDate && AMonth<=EMonth && AYear<=EYear)
         fine=0;
    else if(ADate!=EDate && AMonth==EMonth && AYear==EYear)
        fine=15*(ADate-EDate);
   else if(AMonth>EMonth && AYear==EYear )
        fine=500*(AMonth-EMonth);
    else if(AYear>EYear)
        fine=10000;
    cout<<fine<<endl;
    return 0;
}
