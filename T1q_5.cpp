#include<iostream>

using namespace std;

struct STest
{
    int iCount;
    STest()
    {
        iCount = 1;
    }
    void DisplayInfo()
    {
        cout<<"Hardwork beats talent!";
    }
    ~STest()
    {
        cout<<endl<<"Give your best!";
    }
};

int main()
{
    STest objSTest;
    cout<<objSTest.iCount<<endl;
    objSTest.DisplayInfo();
    return 0;
}
