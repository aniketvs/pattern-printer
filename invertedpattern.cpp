#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
   int n=5; 
   for(int i=1 ;i<=n ;i++){int k=1;
       for (int j = n; j>=i ; j--){
         cout<<k;
         k++;
         
       }
        cout<<endl;
   }
  
}
