#include <bits/stdc++.h>
using namespace std;
void one()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void two()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i != 0 && i != 3 && j != 0 && j != 3)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}
void three()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void four()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void five()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i != 0 && i != 3 && j != 0 && j != 7)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}
void six()
{
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 20; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void seven()
{

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 10; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void eight()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void nine()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void ten()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {

            if (i == 0 || i == 9)
                cout << "*";
            else
            {
                if (j == 0 || j == 2 * i)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}
void eleven()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < 2 * (10 - i) - 1; j += 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void twelve()
{
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * (10 - i) + 1; j++)
        {
            if (i == 0 || j == 0 || j == 2 * (10 - i))
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}
void thirteen()
{
    for (int i = 0; i < 8; i++)
    {
        if (i < 4)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < 8 - i; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
void fourteen()
{
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            for (int j = 0; j < 10 - i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < 10 - i; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
void fifteen()
{
    for (int j = 0; j < 20; j++)
    {
        if (j < 10)
        {
            for (int i = 0; i < 20 - j; i++)
            {
                cout << " ";
            }
            for (int i = 0; i < 2 * j + 1; i++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int i = 0; i <= j; i++)
            {
                cout << " ";
            }
            for (int i = 0; i < 40 - (2 * j) - 1; i++)
            {
                cout << "*";
            }
        }

        cout << endl;
    }
}
int main()
{
    fifteen();
    return 0;
}