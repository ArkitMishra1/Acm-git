#include<iostream>
using namespace std;

class cTest
{
    private:
        int n;
        int arr[n];

    public:
        cTest(int n)
        {
            this -> n = n;
        }
        bool operator == (cTest &temp)
        {
            if(sizeof(arr) == sizeof(temp.arr))
            {
                for(int i=0;i<sizeof(arr));i++)
                {
                    if(arr[i] == temp.arr[i])
                    {}
                    else
                    {
                        return false;
                    }
                }
                return true;
            }
            else
                return false;

        }

};

int main()
{
    int input1,input2;
    cout<<"Enter the first array size : ";
    cin>>input1;
    cout<<"Enter the second array size : ";
    cin>>input2;
    cTest arr1(input1);
    cTest arr2(input2);
    if(arr1 == arr2)
        cout<<"Both the array is same."<<endl;
    else
        cout<<"Both the array are different"<<endl;
}

