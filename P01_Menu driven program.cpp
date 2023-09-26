#include<iostream>
using namespace std;

int Check_letters(string s);
int Check_Password(string p);
int Check_Uppercase(string p);
int Check_lowercase(string p);
int Check_isdigit(string p);
int Check_symbols(string p);

class CStudent
{
   private:
       string Student_Name;
       string Student_Password;
       string Student_AccessRights;

   public:
       CStudent()
       {
          Student_Name = "Arkit Mishra";
          Student_Password = "Arkti@123";
          Student_AccessRights = "R";
       }

       void GetName()
       {
           cout<<"Enter the student Name : ";
           cin>>Student_Name;
           if(Check_letters(Student_Name) == 2)
           {
               cout<<"Invalid characters!, Please enter name again" << endl;
               GetName();
           }
       }
       void SetPassword()
       {
           cout<<"Enter the student password : ";
           cin>>Student_Password;
           if(Check_Password(Student_Password) == 2)
           {
               cout<<"Invalid characters!, Please enter password again" << endl;
               SetPassword();
           }
           else{
               cout<<"Password  seted successfully. "<<endl;
           }
       }
       void SetAccessRights() {
        cout << "Enter the student Access Rights (R, W, X): ";
        cin >> Student_AccessRights;
        while (Student_AccessRights != "R" && Student_AccessRights != "W" && Student_AccessRights != "X") {
            cout << "Invalid access rights. Please enter R, W, or X: ";
            cin >> Student_AccessRights;
        }

        cout << "Access rights set successfully!" << endl;
    }
       void DisplayInfo()
       {
           cout << "Student Name: " << Student_Name << endl;
           cout << "Password: " << Student_Password << endl;
           cout << "Access Rights: " << Student_AccessRights << endl;
       }
};

int Check_letters(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (!((s[i] >= 'A' && s[i] <= 'Z')||(s[i] >= 'a' && s[i] <= 'z')||s[i] == ' '))
        {
            return 2;
        }
    }
    return 0;
}

int Check_Password(string p)
{
    if(Check_Uppercase(p) != 2)
       return 2;
    if(Check_lowercase(p) != 2)
       return 2;
    if(Check_isdigit(p) != 2)
       return 2;
    if(Check_symbols(p) != 2)
       return 2;

    return 0;
}

int Check_Uppercase(string p)
{
    for(int i=0;i<p.length();i++)
    {
        if((p[i]>='A' && p[i]<='Z'))
          return 2;
    }
    return 0;
}
int Check_lowercase(string p)
{
    for(int i=0;i<p.length();i++)
    {
        if(p[i]>='a' && p[i]<='z')
           return 2;
    }
    return 0;
}
int Check_isdigit(string p)
{
     for(int i=0;i<p.length();i++)
    {
        if(p[i]>='0' && p[i]<='9')
           return 2;
    }
    return 0;
}
int Check_symbols(string p)
{
     for(int i = 0; i < p.length(); i++)
    {
        if((p[i]>=33 && p[i]<=47)||(p[i]>=58 && p[i]<=64)||(p[i]>=91 && p[i]<=96)||(p[i]>=123 && p[i]<=126))
           return 2;
    }
    return 0;
}


int main() {
    CStudent objStudent;

    int choice;
    do {
        cout << endl <<"Menu:" << endl;
        cout << "1. Input Student Information" << endl;
        cout << "2. Display Student Information" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                objStudent.GetName();
                objStudent.SetPassword();
                objStudent.SetAccessRights();
                break;
            case 2:
                objStudent.DisplayInfo();
                break;
            case 3:
                cout << "Thank you." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 3);

    return 0;
}

