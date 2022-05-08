#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for(int i=1;i<4;i++){
        for (int j = 1; j < 10; j++)
        {
           if((i+j)%4==0){
               cout<<"*";
           }
           else if(i==2 && j%4==0){
               cout<<"*";
           }
           else{
               cout<<" ";
           }
        }
        cout<<endl;
    }
    return 0;
}

