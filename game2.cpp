#include <iostream>
#include "conio.h" // For getch()

using namespace std;

int main()
{
    bool found = false;
    const int num = 20;
    int key;

    while (!found)
    {
        // Display the welcome and game instructions
        cout << "\t\t\t\t                                               " << endl;
        cout << "\t\t\t\t_______________________________________________" << endl;
        cout << "\t\t\t\t|                                              |" << endl;
        cout << "\t\t\t\t|                                              |" << endl;
        cout << "\t\t\t\t|      Welcome to Guessing Number Game !       |" << endl;
        cout << "\t\t\t\t|                                              |" << endl;
        cout << "\t\t\t\t|     I have Hidden a Number in this box       |" << endl;
        cout << "\t\t\t\t|         ___________________                  |" << endl;
        cout << "\t\t\t\t|         |                   |                |" << endl;
        cout << "\t\t\t\t|         |     Find me!      |                |" << endl;
        cout << "\t\t\t\t|         |        ?          |                |" << endl;
        cout << "\t\t\t\t|         |___________________|                |" << endl;
        cout << "\t\t\t\t|                                              |" << endl;
        cout << "\t\t\t\t|           Please Type Your Number            |" << endl;
        cout << "\t\t\t\t|         and Press Enter to continue          |" << endl;
        cout << "\t\t\t\t|______________________________________________|" << endl;

        cin >> key;

        system("clear"); // Clears the screen (Linux only) for windows use cls

        if (key > num)
        {
            cout << "Oops! The number is too big. Please reduce it.\n";
        }
        else if (key < num)
        {
            cout << "Oops! The number is too small. Please increase it.\n";
        }
        else
        {
            found = true; // The correct number is guessed
        }
    }

    // Final message when the correct number is guessed
    cout << "Congratulations! You guessed the right number!\n";

    return 0;
}
