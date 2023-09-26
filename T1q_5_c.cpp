#include<iostream>
using namespace std;

class CTest
{
    static int iCount;
public:
    CTest()
    {
        iCount++;
    }
    static void Change (float fValue)
    {
        iCount = fValue;
    }
    ~CTest()
    {
        cout<<iCount--<<endl;
    }
};

int CTest:: iCount = 1.0;

int main()
{
    CTest::Change(2);
    CTest objCTest[3];
    return 0;
}
