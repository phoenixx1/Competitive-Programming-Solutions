//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, faces = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        string shape;
        cin >> shape;
        if(shape == "Tetrahedron") faces += 4;
        else if(shape == "Cube") faces += 6;
        else if(shape == "Octahedron") faces += 8;
        else if(shape == "Dodecahedron") faces += 12;
        else faces += 20;
    }
    cout << faces;
    return 0;
}