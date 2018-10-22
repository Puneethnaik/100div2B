#include <bits/stdc++.h>
using namespace std;
struct Point{
    int x, y;
};
int main(){
    Point a, b, c;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    cout << "3\n";
    Point d1, d2, d3;
    d1.x = b.x + c.x - a.x;
    d1.y = b.y + c.y - a.y;
    d2.x = c.x + a.x - b.x;
    d2.y = c.y + a.y - b.y;
    d3.x = b.x + a.x - c.x;
    d3.y = b.y + a.y - c.y;
    cout << d1.x << " " << d1.y << endl;
    cout << d2.x << " " << d2.y << endl;
    cout << d3.x << " " << d3.y << endl;
    return 0;
}