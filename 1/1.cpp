#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double k, A, w, f, x, T;

    cout << "k = ";
    cin >> k;

    cout << "A = ";
    cin >> A;

    cout << "w = ";
    cin >> w;

    f = asin(1/k);
    T = ((90 - f)/w);
    x = A * sin(w*T + f);

    cout << "Result: " << x << endl;
    
    return 0;
}