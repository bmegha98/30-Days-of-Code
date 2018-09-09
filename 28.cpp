#include <iostream>
#include <regex>

using namespace std;

int main()
{
    int N,k=0;
    cin >> N;
 char A[30][20],t[20];
    for (int i = 0; i < N; i++) 
    {
        string Name,Email;
        cin>>Name>>Email;
       regex b(".+@gmail\\.com$");
        if(regex_match(Email,b))
        {
           strcpy(A[k],Name.c_str());
            k++;
        }
    }
for(int i=1;i<k;i++)
{
  for(int j=0;j<k-i;j++)  
  {
      if(strcmp(A[j],A[j+1])>0)
      {
         strcpy(t,A[j]);
          strcpy(A[j],A[j+1]);
          strcpy(A[j+1],t);
      }
  }
}
   for(int i=0;i<k;i++)
       cout<<A[i]<<endl;
   
    return 0;
}

