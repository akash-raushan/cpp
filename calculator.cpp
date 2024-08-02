#include <bits/stdc++.h>
using namespace std;

int main()
{

    while (1)
    {
        int first, second;
        cout << "ENTER FIRST NUMBER: ";
        cin >> first;
        cout << "ENTER SECOND NUMBER: ";
        cin >> second;
        char op;
        cout << "ENTER OPERATOR: ";
        cin >> op;

        switch (op)
        {
        case '+':
            cout << first + second << endl;
            break;
        case '-':
            cout << first - second << endl;
            break;
        case '*':
            cout << first * second << endl;
            break;
        case '/':
            cout << first / second << endl;
            break;
        case '%':
            cout << first % second << endl;
            break;
        default:
            cout << "ENETR VALID OPERATOR";
            break;
        }

        char choice;
        cout << "Do you want to calculate more (y/n): ";
        cin >> choice;
        if (choice == 'n' || choice == 'N')
            break;
    }

    return 0;
}