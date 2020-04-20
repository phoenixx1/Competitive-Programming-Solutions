//Nested Logic
// author @Nishant

#include<bits/stdc++.h>
using namespace std;

struct dates{
    int day, month, year;
};

int main(){
    dates d1, d2;
    
    cin >> d1.day;
    cin >> d1.month;
    cin >> d1.year;

    cin >> d2.day;
    cin >> d2.month;
    cin >> d2.year;

    int fine = 0;
    if(d1.year > d2.year) fine = 10000;
    else if(d1.year == d2.year){
        if(d1.month > d2.month) fine = (d1.month - d2.month)*500;
        else if(d1.month == d2.month && d1.day>d2.day)fine = (d1.day - d2.day)*15;   
    } 
    cout << fine;
    return 0;
}