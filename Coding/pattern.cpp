#include <bits/stdc++.h>
using namespace std;
void a()
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            // cout << "*";
            // cout<<i;
            // cout<<j;
            // cout << 10 - j;
            cout << sum++;
        }
        cout << endl;
    }
}
void b()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            // cout << "*";
            // cout << i - j;
        }
        cout << endl;
    }
}
void c()
{
    int num = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            // cout << "*";
            cout << num++;
        }
        cout << endl;
    }
}
void d()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            // cout<<"*";
            cout << 10 - i;
        }
        cout << endl;
    }
}
void e()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < 10 - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void f()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << char('e' - i + j);
        }
        cout << endl;
    }
}
void g()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * (10 - i) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void h()
{
    int n = 6;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << i + j;
        }
        for (int j = 0; j < i - 1; j++)
        {
            cout << 2 * i - j - 2;
        }
        cout << endl;
    }
}
int main()
{
    // g();
    h();

    return 0;
}