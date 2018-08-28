#include<iostream>
using namespace std;
class Solution
{
   char *stack,*queue;
   int top,front,rear,n;
   public:
   Solution(int size)
   {
    n=size;
    stack=new char[n];
    queue=new char[n];
    top=-1;
    front=0;
    rear=-1;
   }
   void pushCharacter(char ch)
   {
        if(top==n-1)
         cout<<"OVERFLOW!!!!!"<<endl;
         else
         stack[++top]=ch;
         }
   void enqueueCharacter(char ch) 
   {
        if(rear==n-1)
        cout<<"Queue is full "<<endl;
        else
        queue[++rear]=ch;
        }
   char popCharacter()
   {
        if(top<0)
        {
        cout<<"UNDERFLOW!!!!"<<endl;
         return '0';
         }
        else 
        return stack[top--];
    }
    char dequeueCharacter() 
    {
         if(front==n)
         {
          cout<<"Queue is empty "<<endl;
          return '0';
          }
          else
          return queue[front++];
          }
};
int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    int n=s.length(),f=0;
    char A[n];
    strcpy(A,s.c_str());
    Solution sol(n);
    for(int i=0;i<n;i++)
    {
         sol.pushCharacter(A[i]);
         sol.enqueueCharacter(A[i]);
    }
 
    for(int i=0;i<n;i++)
    {
      char s=sol.popCharacter();
      char q=sol.dequeueCharacter();
     if(s!=q)
     {
       f=1;
       break;      
     }
     }
     if(f==1)
     cout<<"String is not palindrome "<<endl;
     else
     cout<<"String is palindrome "<<endl;
    system("pause");
    return 0;
}
