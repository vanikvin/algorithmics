#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int H, V, a, t, x, y, g = 9.8, k;
    
    k = (1 + (2*g*H) / (pow(V, 2) * pow(sin(a), 2)));

    cout << "H: ";
    cin >> H;

    cout << "V: ";
    cin >> V;

    cout << "a: ";
    cin >> a;

    if (k >= 0){
        t = ((V * sin(a)) / g) * (1 + sqrt(k));
        x = V * t * cos(a);
        y = H + V * t * sin(a) - 0,5 * g * pow(t, 2);
    } 
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    
    return 0;
}