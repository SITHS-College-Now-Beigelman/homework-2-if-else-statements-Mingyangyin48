// Mingyang Michelle Yin
// Oct. 1, 2024
// HW pt 2

#include <iostream>
using namespace std;

int main()
{
    // listing variables
    double judge1;
    double judge2;
    double judge3;
    double judge4;
    double judge5;
    double judge6;
    double lowestScore;
    double highestScore;

    cout << "Please enter the scores each of the 6 judges (a score between the numbers 0.0-10.0)"; // asking the user to enter a score for the 6 judges
    cout << endl;

    // judge 1 score
    cout << "judge 1: "; 
    cin >> judge1;
    if (judge1 < 0.0 || judge1 > 10.0) // checking if it is a valid score
        while (judge1 < 0.0 || judge1 > 10.0)
        {
        cout << "invalid score, please renter another score for judge 1: ";  // telling the user to enter a different score
        cin >> judge1;
        }
    
    // judge 2 score
    cout << "judge 2: ";
    cin >> judge2;
    if (judge2 < 0.0 || judge2 > 10.0) // checking if it is a valid score
        while (judge2 < 0.0 || judge2 > 10.0)
    {
        cout << "invalid score, please renter another score for judge 2: ";  // telling the user to enter a different score
        cin >> judge2;
        }

    // judge 3 score
    cout << "judge 3: ";
    cin >> judge3;
    if (judge3 < 0.0 || judge3 > 10.0) // checking if it is a valid score
        while (judge3 < 0.0 || judge3 > 10.0)
    {
        cout << "invalid score, please renter another score for judge 3: "; // telling the user to enter a different score
        cin >> judge3;
        }
    
    // judge 4 score
    cout << "judge 4: ";
    cin >> judge4;
    if (judge4 < 0.0 || judge4 > 10.0) // checking if it is a valid score
        while (judge4 < 0.0 || judge4 > 10.0)
    {
        cout << "invalid score, please renter another score for judge 4: "; // telling the user to enter a different score
        cin >> judge4;
        }

    // judge 5 score
    cout << "judge 5: ";
    cin >> judge5;
    if (judge5 < 0.0 || judge5 > 10.0) // checking if it is a valid score
        while (judge5 < 0.0 || judge5 > 10.0)
    {
        cout << "invalid score, please renter another score for judge 5: "; // telling the user to enter a different score
        cin >> judge5;
        }

    // judge 6 score
    cout << "judge 6: ";
    cin >> judge6;
    if (judge6 < 0.0 || judge6 > 10.0) // checking if it is a valid score
        while (judge6 < 0.0 || judge6 > 10.0)
    {
        cout << "invalid score, please renter another score for judge 6: "; // telling the user to enter a different score
        cin >> judge6;
    }

    // finding the total score before subtracting the highest and lowest  

    double totalScore = (judge1 + judge2 + judge3 + judge4 + judge5 + judge6);

        // finding the lowest score

    if (judge1 <= judge2 && judge1 <= judge3 && judge1 <= judge4 && judge1 <= judge5 && judge1 <= judge6) // checking judge 1's score comapred to all the other scores to see if it is smaller.
        lowestScore = judge1;
    else if (judge2 <= judge3 && judge2 <= judge4 && judge2 <= judge5 && judge2 <= judge6)
        lowestScore = judge2;
    else if (judge3 <= judge4 && judge3 <= judge5 && judge3 <= judge6)
        lowestScore = judge3;
    else if (judge4 <= judge5 && judge4 <= judge6)
        lowestScore = judge4;
    else if (judge5 <= judge6)
        lowestScore = judge5;
    else if (judge6 <= judge5)
        lowestScore = judge6;
    
        // finding the Highest score 

    if (judge1 >= judge2 && judge1 >= judge3 && judge1 >= judge4 && judge1 >= judge5 && judge1 >= judge6) // checking judge 1's score comapred to all the other scores to see if it is larger.
        highestScore = judge1;
    else if (judge2 >= judge1 && judge2 >= judge3 && judge2 >= judge4 && judge2 >= judge5 && judge2 >= judge6)
        highestScore = judge2;
    else if (judge3 >= judge1 && judge3 >= judge2 && judge3 >= judge4 && judge3 >= judge5 && judge3 >= judge6)
        highestScore = judge3;
    else if (judge4 >= judge1 && judge4 >= judge2 && judge4 >= judge3 && judge4 >= judge5 && judge4 >= judge6)
        highestScore = judge4;
    else if (judge5 >= judge1 && judge5 >= judge2 && judge5 >= judge3 && judge5 >= judge4 && judge5 >= judge6)
        highestScore = judge5;
    else if (judge6 >= judge1 && judge6 >= judge2 && judge6 >= judge3 && judge6 >= judge4 && judge6 >= judge5)
        highestScore = judge6;

    // final math

    double finalScore = totalScore - (highestScore + lowestScore);  // using the total and then subtracting the highest and lowest scores

    cout << "The final score is: " << finalScore / 4; // telling the user the mean of the scores

    return 0;
}

/*

    //OUTPUT//

Please enter the scores each of the 6 judges (a score between the numbers 0.0-10.0)
judge 1: 1
judge 2: 2
judge 3: 3
judge 4: 4
judge 5: 5
judge 6: 6
The final score is: 3.5

*/