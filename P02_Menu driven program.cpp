#include <iostream>
using namespace std;

class CComplex {
private:
    int real1, real2, addR, mulR;
    int imaginary1, imaginary2, addI, mulI;

public:
    CComplex() {
        real1 = 0;
        real2 = 0;
        imaginary1 = 0;
        imaginary2 = 0;
        addR = 0;
        addI = 0;
        mulR = 0;
        mulI = 0;
    }

    void GetInput() {
        cout << "For Complex Number 1:" << endl << "Real Number - ";
        cin >> real1;
        cout << "Imaginary Number - ";
        cin >> imaginary1;
        cout << "For Complex Number 2:" << endl << "Real Number - ";
        cin >> real2;
        cout << "Imaginary Number - ";
        cin >> imaginary2;
    }

    void AddInfo() {
        addR = real1 + real2;
        addI = imaginary1 + imaginary2;
        cout<<"The Addition has been done successfully."<<endl;
    }

    void MultiInfo() {
        mulR = real1 * real2 - imaginary1 * imaginary2;
        mulI = real1 * real2 + real2 * imaginary1;
        cout<<"The Multiplication has been done successfully."<<endl;
    }

    void DisplayInfo() {
    cout << "For Addition :" << endl;
    cout << " The number is: " << addR << " + i";
    if (addI >= 0)
        cout << addI << endl;
    else
        cout << "(" << addI << ")" << endl;

    cout << "For Multiplication :" << endl;
    cout << " The number is: " << mulR << " + i";
    if (mulI >= 0)
        cout << mulI << endl;
    else
        cout << "(" << mulI << ")" << endl;
}

};

int main() {
    CComplex objComplex;

    int choice;
    do {
        cout << endl << "Menu:" << endl;
        cout << "1. Input the data :" << endl;
        cout << "2. Addition of data" << endl;
        cout << "3. Multiplication of data" << endl;
        cout << "4. Display the data" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the data : " << endl;
                objComplex.GetInput();
                break;
            case 2:
                objComplex.AddInfo();
                break;
            case 3:
                objComplex.MultiInfo();
                break;
            case 4:
                objComplex.DisplayInfo();
                break;
            case 5:
                cout << "Thank you." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 5);

    return 0;
}

