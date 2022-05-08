#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=5;
    for(int i=0;i <= n;i++){int j=i-1;
         for (int j = n; j>i; j--)
         {
            cout<<" ";
        }
        for (int k = 1; k < i; k++)
        {
         cout<<j;
         j--;
         
        }
        for (int k = 2; k < i; k++)
        { 
         cout<<k;
        }
        cout<<endl;
        
        
    }
    return 0;
}