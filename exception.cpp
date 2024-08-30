/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

namespace myname
{
    float div(int a,int b)
    {
        if(b==0)
        {
            throw runtime_error("can not div by zero");
        }
        float total=(int)a /(int)b;
        return total;
    }
}

int main()
{
    try
    {
        cout<<"div is "<<myname::div(10,5);
    }
    catch(exception& e)
    {
        cout<<"enter valid number";
    }
    return 0;
}