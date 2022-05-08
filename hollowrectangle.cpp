#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 0 || i == 4)
        {
            for (int i = 0; i < 4; i++)
            {

                cout << "*";
            }
        }
    else
        {
            for (int i = 0; i < 4; i++)
            {
                if (i == 0 || i==3 )
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            
        }
        cout<<endl;
    }
}
