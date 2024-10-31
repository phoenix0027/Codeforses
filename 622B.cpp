#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    long long n;
    cin >> n;
    
    int hr = stoi(str.substr(0, 2));
    int min = stoi(str.substr(3, 5));
    
    long long total_minutes = hr * 60 + min + n;
    total_minutes %= 1440;

    int new_hr = total_minutes / 60; 
    int new_min = total_minutes % 60;

    cout << setw(2) << setfill('0') << new_hr << ":" << setw(2) << setfill('0') << new_min << endl;
    
    return 0;
}
