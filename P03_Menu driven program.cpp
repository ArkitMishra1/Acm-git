#include <iostream>
using namespace std;

class CBankAccount
{
    private:
        string CustomerName;
        string AccountNumber;
        string AccountType;
        float AccountBalance;

    public:
        void SetValues()
        {
            cin >> CustomerName;
            cin >> AccountNumber;
            cin >> AccountType;
            cin >> AccountBalance;
        }

        void DepositAmount(int amount)
        {
            AccountBalance += amount;
        }

        void WithdrawAmount(int amount)
        {
            cout << "You have " << AccountBalance << " amount in your bank." << endl;
            if (amount <= AccountBalance)
                AccountBalance -= amount;
            else
                cout << "Insufficient money in your account." << endl;
        }

        void DisplayCustomer()
        {
            cout << "Account Holder: " << CustomerName << endl;
            cout << "Account Number: " << AccountNumber << endl;
            cout << "Account Type: " << AccountType << endl;
            cout << "Balance: " << AccountBalance << endl;
        }
};

int main()
{
    CBankAccount objAccount[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the details of Account Name, Number, Type, Balance for person "<< i + 1 << endl;
        objAccount[i].SetValues();
    }

    int i;
    do {
        int choice, amount;
        cout << "Enter the customer (1-5) and 0 for Exit : ";
        cin >> i;

        if (i >= 1 && i <= 5)
        {
            cout << endl << "Menu:" << endl;
            cout << "1. Deposit" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Display" << endl;
            cout << "4. Exit to check another Holder's detail " << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    cout << "Enter the amount: ";
                    cin >> amount;
                    objAccount[i - 1].DepositAmount(amount);
                    break;
                case 2:
                    cout << "Enter the amount: ";
                    cin >> amount;
                    objAccount[i - 1].WithdrawAmount(amount);
                    break;
                case 3:
                    objAccount[i - 1].DisplayCustomer();
                    break;
                case 4:
                    break;
                default:
                    cout << "Invalid choice! Please enter again your choice." << endl;
                    break;
            }
        }
        else if (i == 0)
        {
            cout << "Thank you" << endl;
        }
        else
        {
            cout << "Invalid customer number! Please enter a number between 1 and 5." << endl;
            continue;
        }
    } while (i != 0);

    return 0;
}

