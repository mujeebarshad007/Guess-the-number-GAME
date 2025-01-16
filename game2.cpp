#include <iostream>
#include "conio.h" // For getch()
int n = 5;
const int num = 20;

using namespace std;

void game(void)
{
    bool life = false;
    bool found = false;
    int key;

    while (!found)
    {
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
        if (key == num)
        {
            cout << "Congratulations! You guessed the right number!\n";
            exit(0);
        }
        if (key > num)
        {
            system("clear");
            cout << "Oops! The number is too big. Please reduce it.\n";
            n--;
            cout << " Life left are " << n << endl;
            getch();
        }
        else if (key < num && key > 18)
        {
            system("clear");
            cout << " You are too Close increase it more" << endl;
            n--;
            cout << " Life left are " << n << endl;
            getch();
        }
        else if (key < num)
        {

            system("clear");
            cout << "Oops! The number is too small. Please increase it.\n";
            n--;
            cout << " Life left are " << n << endl;
            getch();
        }

        if (n == 0)
        {

            system("clear");
            cout << " No lives left . You Lost" << endl;
            cout << " Press Enter to start  this game again " << endl;
            getch();
        }
    }
}

int main()
{
    while (1)
    {
        game();
        getch();
    }
    return 0;
}
