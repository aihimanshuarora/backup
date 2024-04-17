#include <iostream>
using namespace std;
int main()
{
    cout << "hello world" << endl;
    int a = 4;
    int b = 3;
    cout << a + b << endl;
    int p = 100;
    int r = 29;
    int t = 20;
    cout << (p * r * t) / 100 << endl;
    int cp = 100;
    int sp = 1000;
    cout << sp - cp << endl
         << ((sp - cp) / cp) * 100 << endl;
    int aa = 4;
    if (aa % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "odd" << endl;
    if (sp > cp)
        cout << sp << endl;
    else
        cout << cp << endl;
    if (sp - cp < 100)
    {
        cout << "The Tax Is " << (0.06 * (sp - cp));
    }
    else if (sp - cp < 1000)
    {

        cout << "The Tax Is " << (0.10 * (sp - cp));
    }
    else
    {
        cout << "The Tax Is " << (.10 * (sp - cp));
    }
    cout << endl;
    int i = 3;
    int sum = 0, prof = 1;
    while (i > 0)
    {
        cout << i + 1 << endl;
        sum += i;
        prof *= i;
        i--;
    }
    cout << sum << endl
         << prof << endl;
    cout << endl;
    int kb = 10;
    for (int i = 1; i <= 10; i++)
    {
        bool ok = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                ok = 0;
                break;
            }
        }
        if (ok)
            cout << i;
    }
    a=0,b=1,sum=a+b;
    cout<<a<<endl<<b<<endl;
    for(int i=0;i<10;i++){
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<endl;
    }
}