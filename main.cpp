#include <iostream>
#include <string>

using namespace std;

string answer;
string question;

int main()
{
    cout << "Enter another day? (Y/N):" << endl;
    cin >> question;

    while (question == "Y")
    {
        cout << "What's today:" << endl;
        cin >> answer;

        if (answer == "Monday")
        {
            cout << "Weekday." << endl;
        }
        else if (answer == "Tuesday")
        {
            cout << "Another weekday." << endl;
        }
        else if (answer == "Wednesday")
        {
            cout << "Half way there." << endl;
        }
        else if (answer == "Thursday")
        {
            cout << "Thirsty Thursday." << endl;
        }
        else if (answer == "Friday")
        {
            cout << "Almost the weekend!" << endl;
        }
        else if (answer == "Saturday")
        {
            cout << "Weekend!" << endl;
        }
        else if (answer == "Sunday")
        {
            cout << "Sunday fun day!" << endl;
        }
        else
        {
            cout << "That doesn't appear to be a valid day." << endl;
        }

        cout << "Enter another day? (Y/N):" << endl;
        cin >> question;
    }
}


