#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int p;
 double q;
 string r;

  cin>>p;
  cin>>q;
  double sum=d+q;
cout<<i+p<<endl;
cout<<fixed<<setprecision(1)<<sum<<endl;
cin.ignore();
getline(cin,r);
cout<<s+r<<endl;
return 0;
}
