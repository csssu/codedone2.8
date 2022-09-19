/**
 * @file ProblemEighth.cpp
 * @author amir aghazadeh (cssu.ama@gmail.com)
 * @brief compare sum of left and right part of numbers
 * @version 0.1.0
 * @date 2022-09-13
 * @id 7code2
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t)
    {
        string s;
        cin >> s;
        if (s[0] - '0' + s[1] - '0' + s[2] - '0' == s[3] - '0' + s[4] - '0' + s[5] - '0')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        t--;
    }

    return 0;
}