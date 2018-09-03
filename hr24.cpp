#include<iostream>
using namespace std;

int main()
{
    int *A,n,swaps=0;
    cout<<"Enter number of elements : ";
    cin>>n;
    A=new int[n];
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<n;i++)
    cin>>A[i];
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<n-1;j++)
     {
      if(A[j]>A[j+1])
      {
        int temp=A[j];
        A[j]=A[j+1];
        A[j+1]=temp;
        swaps++;
        }
        }
      if(swaps==0)
        break;
        }
        cout<<"Array is sorted in "<<swaps<<" swaps."<<endl;
        cout<<"First Element: "<<A[0]<<endl;
        cout<<"Last Element: "<<A[n-1]<<endl;
        system("pause");
        return 0;
}
