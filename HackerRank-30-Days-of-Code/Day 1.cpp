// Data Types
// author @Nishant

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int i1;
    double d1;
    string s1;

    cin >> i1 >> d1;
    cin.ignore();

    getline(cin, s1);
    
    cout << i1 + i << endl;
    cout << fixed << setprecision(1) << (d1 + d) << endl;
    cout << s << s1 << endl;
    
    return 0;
}