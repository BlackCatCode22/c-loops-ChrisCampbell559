#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "\n Welcome to strings and loop practice!\n";
    string myTestStr = "the Quick brown fox jumped over the lazy dog.";
    cout << "\n\n" << endl << endl << myTestStr << endl << endl;

    // this a comment.
    // Comments should come before the line of code they "talk" about
    // Use the find() function to find the substring fox in myTestStr
    int myIndex = myTestStr.find("fox");
    cout << "The index of fox is: " << myIndex << endl << endl;

    int atIndexFour = myTestStr .at(4);
    // should see the ASCII code for "q"
    cout << "\n this is the index four " << atIndexFour << endl << endl;

    //size ()
    cout << "\n size() " << myTestStr.size() << endl;
    // append()
    cout << "\n append() is " << myTestStr.append("xyz") << endl;
    //length()
    cout << "\n lenght() is " << myTestStr.length() << endl;
    //clear()
    //cout << "\n clear () is " << myTestStr.clear() << endl;
    //empty()
    if (myTestStr.empty()) {
    cout << " \n the string is empty";
    }
    else {
         cout << "The string is NOT empty.";
    }
    //substr()
    //find the five characters starting at 8
    string mySubStr = myTestStr.substr(7, 5);
    cout << "\n\n mysubStr(7,5) = " << mySubStr << endl;

    //The factorial of a number
    //6!=1*2*3*4*5*6=720

    int number;
    cout << "Number: ";
    cin >> number;//3

    int factorial = 1;//1

    //for (int i = 1; i <= number;i++){//i=1
    //  factorial=factorial * i;

    //}
    //6!=6*5*483*2*1-720
    for (int i = number; i >= 1;i--){
            factorial = factorial * i;
        }


    cout << number << "!=" << factorial;

    for (int i =0; i < 1000; i++) {
            cout << "\n Hello, i is " << i;
    }


    return 0;
}
