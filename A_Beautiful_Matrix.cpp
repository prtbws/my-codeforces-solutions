#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<vector<int>> matrix(5, vector<int>(5));
    
    
    int a,b,steps;
    
    for (int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> matrix[i][j];

            if(matrix[i][j]==1) {
                a = i;
                b = j;
            }

        } 
    }

    steps = abs(a - 2) + abs(b - 2);

    cout << steps;

    return 0;
}