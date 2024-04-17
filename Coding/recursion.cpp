// #include <bits/stdc++.h>
// using namespace std;
// int fact(int n)
// {
//     if (n < 2)
//     {
//         return n;
//     }
//     int smallAns = fact(n - 1);
//     return n * smallAns;
// }
// int fib(int n)
// {
//     if (n == 0 || n == 1)
//         return n;
//     return fib(n - 1) + fib(n - 2);
// }
// // for sum return n+smallAsn;
// bool isSorted(int arr[], int n)
// {
//     if (n == 1)
//         return 1;
//     if (arr[0] > arr[1])
//     {
//         return false;
//     }
//     return isSorted(arr + 1, n - 1);
// }
// int lens(string s)
// {
//     if (s[0] == '\0')
//     {
//         return 0;
//     }
//     return 1 + lens(s.substr(1));
// }
// int main()

// {
//     cout << lens("himanshu");
//     // cout << fact(3);
//     // cout << fib(3);
//     // int arr[] = {1, 2, 32, 4};
//     // int n = 4;
//     // cout << isSorted(arr, n);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void ok(string &s)
{
    // string ss="";
    if (s.size() == 0)
    {
        return;
    }
    if (s[0] == 'x')
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            s[i] = s[i + 1];
        }
    }
    ok(s.substr(1));
    // ss=s;
}
int main()
{
    string s = "popuxhimanx";
    ok(s);
    cout << s;
    return 0;
}