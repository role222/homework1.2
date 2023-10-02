#include<iostream>
using namespace std;

int main() {

    int x = 0, lx = 0, mc = 0, c = 1;
    
    cin >> x;
    
    while (x != 0){
        if (lx == x) {
            c++;
            if (c > mc)
                mc = c;
        }
        else {
            lx = x;
            c = 1;
        }
        cin >> x;
    }
    if(x == 0){
        mc = c;
    }

    cout << mc;
}