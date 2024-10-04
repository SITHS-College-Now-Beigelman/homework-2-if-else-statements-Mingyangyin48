// Mingyang Michelle Yin
// Oct. 1, 2024
// HW pt 1

#include <iostream>
using namespace std;

int main()
{
    // stating variables 
    int month;
    int day;

    cout << "Please insert what month is it (1 is January and 12 is December): ";   // asking the user what month it was
    cin >> month;   // user input the month

    // making sure that the number was a acutal number for a month 

    while (month > 12 || month < 1)
        {
            cout << "Invalid month please renter another month: ";   
            cin >> month;
        }
    cout << "Please insert what day is it (1-31) : ";   // asking the user what day it was
    cin >> day;   // user input the day

    // making sure that the number was a correct number for the correct amonut of days in x month

    if (month == 1 && month == 3 && month == 5 && month == 6 && month == 8 && month == 10 && month == 12 )  // months with 31 days
        while (day > 31)
        {
            cout << "Invalid day please renter another day: ";
            cin >> day;
        }

    else if (!month == 1 && month == 3 && month == 5 && month == 6 && month == 8 && month == 10 && month == 12 )    // months with 30 days
        while (day > 30)
        {
            cout << "Invalid day please renter another day: ";
            cin >> day;
        }
    else if (month == 2)    // month with 29 days
        while (day > 29)
        {
            cout << "Invalid day please renter another day: ";
            cin >> day;
        }
    cout << endl;

    // finding the correct seasons

    // setting the variables for the days / months for spring
    if (( month == 3 && 21 <= day ) || ( month == 6 && 20 >= day ) || (month == 4) || (month == 5)) 
        cout << "It is spring now!";

    // setting the variables for the days / months for summer
    else if (( month == 6 && 21 <= day ) || ( month == 9 && 22 >= day ) || (month == 7) || (month == 8))
        cout << "It is summer now!";

    // setting the variables for the days / months for fall
    else if (( month == 9 && 23 <= day ) || ( month == 12 && 21 >= day ) || (month == 10) || (month == 11))
        cout << "It is fall now!";

    // setting the variables for the days / months for winter
    else if (( month == 12 && 22 <= day ) || ( month == 3 && 20 >= day ) || (month == 1) || (month == 2))
        cout << "It is winter now!";

    return 0;
}


/*
    //OUTPUT//

Please insert what month is it (1 is January and 12 is December): 3
Please insert what day is it (1-31) : 22

It is spring now!

*/