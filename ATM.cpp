// Add transfer function

#include <iostream>
using namespace std;

void showMenu()
{
    cout << "**********MENU**********"
         << "\n";
    cout << "1. Check balance"
         << "\n";
    cout << "2. Deposit"
         << "\n";
    cout << "3. Withdraw"
         << "\n";
    cout << "4. Exit"
         << "\n";
    cout << "************************"
         << "\n";
}

int main()
{
    // Check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;
    do
    {
        showMenu();
        cout << "Option: ";
        cin >> option;
        system("cls");

        switch (option)
        {
        case 1:
            cout << "Balance is: " << balance << " $"
                 << "\n";
            break;
        case 2:
            double depositAmount;
            cout << "Enter the deposit amount: ";
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3:
            double withDrawAmount;
            cout << "Enter the deposit amount: ";
            cin >> withDrawAmount;
            if (withDrawAmount <= balance)
            {
                balance -= withDrawAmount;
            }
            else
            {
                cout << "Not enough money"
                     << "\n";
            }
            break;
        }
    } while (option != 4);
    return 0;
}