//author @Nishant

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        unsigned long long a, b;
        cin >> a >> b;
        if(b - a == 1 || (b & (b - 1)) == b - 1){
            cout << (b & (b - 1)) << endl;
        }else{
            cout << b - 2 << endl;
        }
    }
}