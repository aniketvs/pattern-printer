#include <iostream>
using namespace std;
int fact(int n){
     int s=1;

for (int i = 2; i <=n; i++)
{
    s=s*i;
    
}
return s;
}
int main(int argc, char const *argv[])
{
    int n=6;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j <=i; j++)
       {
        cout<<fact(i)/(fact(j)*fact(i-j));
       }
       cout<<endl;
    }
    
    return 0;
}
