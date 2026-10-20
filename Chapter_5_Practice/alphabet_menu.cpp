
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

char choice;

//Main function
int main()
{

    //Input section
    cout << "========== Welcome to Alphabet Menu ==========" << endl;
    cout << "Please pick one letter (A,b or c) from the following menu:" << endl;
    cout << "1 pick (A)" << endl;
    cout << "1 pick (B)" << endl;
    cout << "1 pick (C)" << endl;
    cin >> choice;

    switch(toupper(choice))
    {
        case 'A':
        cout << "You have picked the option A \n";
        break;
        case 'B':
        cout << "You have picked the option B \n";
        break;
        case 'C':
        cout << "You have picked the option C \n";
        break;
        default:
        cout << "This option doesnt exist!" << endl;
    }

    return 0;
}
