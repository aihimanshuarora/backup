#include <bits/stdc++.h>
using namespace std;
class trienode
{
public:
    bool isTerminal;
    char c;
    trienode **link;

    trienode(char cc)
    {
        isTerminal = 0;
        c = cc;
        link = new trienode *[26];
        for (int i = 0; i < 26; i++)
        {
            link[i] = NULL;
        }
    }
};
class trie
{
    trienode *root;

public:
    trie()
    {
        root = new trienode('\0');
    }
    void insertword(trienode *root, string d)
    {
        int getIndex = 'a' - d[0];
        if (r[0] == '\0')
        {
            root->isTerminal = 1;
        }
        if (root[getIndex] == NULL)
        {
            root[getIndex] = new trienode(d[0]);
        }
        else
        {
            continue;
        }
    }
    void insert(string s)
    {
        insertword(root, s);
    }
};
int main()
{
    return 0;
}