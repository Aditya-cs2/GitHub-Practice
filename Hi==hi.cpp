#include <iostream>
#include <string>
using namespace std;

int stringCompare(const string& s1, const string& s2) {
    size_t i = 0;

    while (i < s1.length() && i < s2.length()) {
        char c1 = s1[i];  // case-sensitive
        char c2 = s2[i];

        if (c1 != c2) 
        {
            return (c1 < c2) ? -1 : 1;
        }
        i++;

    }

    if (s1.length() == s2.length()) 
    {
        return 0; // equal
    } else if (s1.length() < s2.length()) 
    {
        return -1;
    } else {
        return 1; 
    }
}

int main() {
    string a, b;

    cout << "Enter first string: ";
    cin >> a;
    cout << "Enter second string: ";
    cin >> b;

    int result = stringCompare(a, b);

    cout << "The comparison of \"" << a << "\" and \"" << b 
         << "\" returns " << result << "." << endl;

    return 0;
}
