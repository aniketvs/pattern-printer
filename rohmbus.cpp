#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=5;
    for (int i = 1; i <=n; i++)
    {
      for (int j = n; j >i; j--)
      {
        cout<<" ";
        
      }
      for (int i = 1; i <=n; i++)
      {
          cout<<"*";
      }
      
      cout<<endl;
    }
    
    return 0;
}
