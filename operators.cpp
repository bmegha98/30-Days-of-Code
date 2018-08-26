#include <iostream>
#include<cmath>

using namespace std;
void solve(double meal_cost, int tip_percent, int tax_percent) 
{
    int tot_cost,res;
    double tip,tax,s;
    tip= meal_cost *tip_percent/100;
    tax=meal_cost *tax_percent/100;
    s=meal_cost+tip+tax;
     tot_cost=int(s);
     if(s-tot_cost >=0.5)
       res=ceil(s);
       else
       res=tot_cost;
    cout<<"The total meal cost is "<<res<<" dollars."<<endl;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    int tip_percent;
    cin >> tip_percent;
    int tax_percent;
    cin >> tax_percent;
    solve(meal_cost, tip_percent, tax_percent);
    system("pause");
    return 0;
}
