#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=5;
    for(int i=0;i <= n;i++){
         for (int j = n; j>i; j--)
         {
            cout<<" ";
        }
        for (int k = 1; k < i; k++)
        {
         cout<<"*";
        
         
        }
        for (int k = 2; k < i; k++)
        { 
         cout<<"*";
        }
        cout<<endl;
        
        
    }
     for(int i=0;i <= n;i++){
          for (int k = 0; k < i; k++)
         {
            cout<<" ";
         }
         for (int j = n-1; j >i; j--)
         {
            cout<<"*";
         }
        
          for (int j = n-2; j >i; j--)
          {
              cout<<"*";
          }
         cout<<endl;
         
         
     }
    return 0;
}