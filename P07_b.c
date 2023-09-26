#include<iostream>
using namespace std;

class cTest
{
    private:
        string str;

    public:
        cTest(string s)
        {
            str = s;
        }
        bool operator == (cTest &temp)
        {
            temp.str = temp.str;
            if(str.length() == temp.str.length())
            {
                for(int i=0;i<str.length();i++)
                {
                    if(str[i] == temp.str[i])
                    {}
                    else
                    {
                        cout<<"These two strings are not equal "<<endl;
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
    string input1,input2;
    cout<<"Enter the first string : ";
    cin>>input1;
    cout<<"Enter the second string : ";
    cin>>input2;
    cTest str1(input1);
    cTest str2(input2);
    if(str1 == str2)
        cout<<"Both the strings is same."<<endl;
    else
        cout<<"Both the strings are different"<<endl;
}
