//author @Nishant

#include <iostream>
using namespace std;

int check(int count){
    if (count == 1 || count == 4)
        cout << "MS" << endl;
    else if (count == 2 || count == 3)
        cout << "AS" << endl;
    else if (count == 0 || count == 5)
        cout << "WS" << endl;
    return 0;
}

int seat(int N){
    int count = 0, i;
    for (i = N; i % 6 != 0; i++){
        count++;
    }
    if (i % 12 == 0){
        count = 5 - count;
        cout << N - (1 + 2 * count) << " ";
    }

    else{
        cout << N + (1 + 2 * count) << " ";
    }
    check(count);
    return 0;
}

int main(){
    int T, N;
    cin >> T;

    while(T--){
        cin >> N;
        seat(N);
    }
    return 0;
}
