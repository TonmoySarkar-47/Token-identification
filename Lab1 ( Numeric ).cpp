#include <iostream>
using namespace std;

int main()
{
    string input;
    cin>>input;

    bool constant;

    for(char c:input)
    {
        if(isdigit(c))
        {
            constant=true;
        }
        else
        {
            constant=false;
        }
    }
    if(constant)
    {
        cout<<"Numeric constant";
    }
    else
    {
        cout<<"Not numeric";

    }

}
