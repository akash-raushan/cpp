#include <bits/stdc++.h>
using namespace std;

void ADD(stack<int> &stk)
{
    int e;
    cout << "ENTER ELEMENT TO ADD: ";
    cin >> e;
    stk.push(e);
}

void POP(stack<int> &stk)
{
    if (stk.size() == 0)
    {
        cout << "UNDERFLOW......STACK IS EMPTY.." << endl;
    }
    else
    {
        stk.pop();
        cout << "ELEMENT POPED." << endl;
    }
}

void DISPLAY(stack<int> stk) {
    if (stk.empty()) {
        cout << "STACK IS EMPTY." << endl;
        return;
    }

    cout << "STACK ELEMENTS: "<<endl;
    while (!stk.empty()) {
        cout <<"                " <<stk.top() <<"                "<< endl;
        stk.pop();
    }
    cout << endl;
}

int main()
{
    // cout<<6;
    stack <int> st;
    bool flag=false;

    while (!flag)
    {

        cout << "Cureent size of the stack is: "<<st.size()<<endl;
        cout << "1. TO PUSH" << endl;
        cout << "2. TO POP" << endl;
        cout << "3. TO DISPLAY" << endl;
        cout << "4. TO EXIT" << endl;

        int ch;
        cout << "ENTER CHOICE: ";
        cin >> ch;

        if (ch == 1)
        {
            ADD(st);
        }
        else if (ch == 2)
        {
            POP(st);
        }
        else if (ch == 3)
        {
            DISPLAY(st);
        }
        else if (ch == 4)
        {
            flag=true;
        }
        else
        {
            cout << "Invalid Input." << endl;
        }
    }

    return 0;
}