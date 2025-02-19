#include <iostream>
#include <vector>
#include <queue>
using namespace std;

string getHappyString(int n, int k)
{
    vector<string> result;
    queue<string> q;

    q.push("a");
    q.push("b");
    q.push("c");

    while (!q.empty())
    {
        string curr = q.front();
        q.pop();

        if (curr.size() == n)
        {
            result.push_back(curr);
            continue;
        }

        string first = curr;
        string second = curr;

        if (curr.back() == 'a')
        {
            first.push_back('b');
            second.push_back('c');
        }
        else if (curr.back() == 'b')
        {
            first.push_back('a');
            second.push_back('c');
        }
        else
        {
            first.push_back('a');
            second.push_back('b');
        }

        q.push(first);
        q.push(second);
    }

    if (result.size() < k)
        return "";

    return result[k - 1];
}

int main()
{
    int n = 1, k = 3;
    cout << getHappyString(n, k) << endl;
    return 0;
}