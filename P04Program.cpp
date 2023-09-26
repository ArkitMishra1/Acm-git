#include <iostream>
#include <cstring>
using namespace std;

class CustomString
{
    private:
        char* str;

    public:
        // Default Constructor: Creates an uninitialized string
        CustomString() {
            str = new char[1];
            str[0] = '\0';
            cout << "Created: An uninitialized string." << endl;
        }

        // Parameterized Constructor: Creates a string with content
        CustomString(const char* s)
        {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
            cout << "Created: A string with content '" << str << "'." << endl;
        }

        // Destructor: Releases allocated memory
        ~CustomString()
        {
            delete[] str;
            cout << "Destroyed: String resource released." << endl;
        }

        // Member function to concatenate two CustomString objects
        CustomString concatenate(const CustomString& other) const {
            char* newStr = new char[strlen(str) + strlen(other.str) + 1];
            strcpy(newStr, str);
            strcat(newStr, other.str);
            CustomString result(newStr);
            delete[] newStr;
            return result;
        }

        // Member function to display the string content
        void display() const {
            cout << "Content: " << str << endl;
        }
};

int main()
{
    // Create objects and demonstrate functionality
    CustomString uninitializedStr; // Created an uninitialized string
    CustomString greeting("Hello ");
    CustomString place("World");
    CustomString fullGreeting = greeting.concatenate(place);

    cout << "Displaying Greetings: " << endl;
    greeting.display();
    place.display();
    fullGreeting.display();

    return 0;
}
