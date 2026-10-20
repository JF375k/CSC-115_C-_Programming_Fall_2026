
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Variable Section
int gaz_price;

//Main function
int main()
{

    //Input section
    cout << "Enter the current gaz price" << endl;
    while(gaz_price <=0 || gaz_price >=5)
    {
        cout << "This is definitely unacceptable gaz_price \n Type a reasonable price please:" << endl;
        cin >> gaz_price;
    }
    cout << "The acceptable gaz_price is: " << "US dollars" << endl;


    return 0;
}
