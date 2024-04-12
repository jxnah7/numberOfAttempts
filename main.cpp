#include <iostream>

using namespace std;

// this function receives a character corresponding to the answer entered by the user in main() and makes sure it is
// either 'y' or 'n'. If the answer is incorrect, the function keeps asking for the right answer until it is provided and
// then returns it to main() along with the number of attempts taken to enter the correct answer.
bool checkanswer(char& answer, int& attempts)
{

    cin >> answer;

    while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
    {
        cout << "Invalid input. Please enter y or n: ";
        cin >> answer;
        attempts++;
    }


    return true; // Return true if input is valid
}


int main()
{
// declare variable(s) to be used

    char answer;
    int attempts = 1;

// ask the user if he would you like to continue

    cout << "Would you like to continue?";

// prompt the user to enter the answer

    cout << "\nPlease enter y or n as an answer: ";    
    
// get the answer from the keyboard and store it in corresponding variable
// determine which answer was entered by the user
// must call the function to ensure the correct answer (y or n) is entered
// display "Yes" or "No" according to the answer provided by the user

     if (checkanswer(answer, attempts))
    {
        if (answer == 'y' || answer == 'Y')
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }

// display number of attempts

    cout << "\nNumber of attempts: " << attempts << endl;

}
