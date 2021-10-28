#include <iostream>
#include <Windows.h>
#include <stdio.h>

using namespace std;

int Q(const int m, const int n, int level, int& depth)
{
    if (level > depth)
        depth = level;

    if (m == 1 || n == 1)
    {
        return  1;
    }
    else
        if (m < n)
        {
            return  Q(n, m, level + 1, depth);
        }
        else
            if (m == n)
            {
                return  1 - Q(m, m - 1, level + 1, depth);
            }
            else
                return  Q(m, n - 1, level + 1, depth) + Q(m - n, n, level + 1, depth);

}


int main()
{
    int m, n, depth;
    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;
    cout << "Q =" << Q(m, n, 1, depth) << endl;
    cout << "depth =" << depth << endl;

    return 0;
}




