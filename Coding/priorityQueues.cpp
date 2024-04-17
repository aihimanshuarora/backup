#include <bits/stdc++.h>
using namespace std;
class arrays
{
    vector<int> arr;

public:
    arrays()
    {
    }
    bool isEmpty()
    {
        return arr.size() == 0;
    }
    int getSize()
    {
        return arr.size();
    }
    int getMinElement()
    {
        return arr[0];
    }
    void insert(int element)
    {
        arr.push_back(element);
        int ci = arr.size() - 1, pi = 0;
        while (ci > 0)
        {
            pi = (ci - 1) / 2;
            if (arr[pi] > arr[ci])
            {
                swap(arr[pi], arr[ci]);
                ci = pi;
            }
            else
                break;
        }
    }
    void show()
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i];
            cout << endl;
        }
    }
    void downheapify(vector<int> arr)
    {
        int pi = 0;
        int r = 1, l = 2;

        while (l < arr.size())
        {
            int min = pi;

            if (arr[pi] > arr[l])
            {
                min = l;
            }
            // while(){
            if (r < arr.size() && arr[min] > arr[r])
            {
                min = r;
            }
            if (pi == min)
            {
                return;
            }
            swap(arr[min], arr[pi]);
            pi = min;
            r = 2 * pi + 1;
            l = 2 * pi + 2;
        }
    }
    void deleted()
    {
        if (arr.size() <= 0)
        {
            return;
        }
        // we always delete root in it.
        int temp = arr[0];
        arr[0] = arr[arr.size() - 1];
        arr.pop_back();
        downheapify(arr);
    }
};
int main()
{
    arrays *abc = new arrays();
    abc->insert(1);
    abc->insert(2);
    abc->insert(3);
    abc->insert(4);
    abc->deleted();
    abc->show();
    return 0;
}