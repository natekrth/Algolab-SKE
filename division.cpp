#include <iostream>

using namespace std;

int main()
{
    int queries;
    int division_x, division_y; 
    int count = 0;
    int x, y;
    cin >> queries;

    while (queries != 0) {
        cin >> division_x >> division_y;

        while (count < queries) {
            cin >> x >> y;
            if (x == division_x or y == division_y) {
                cout << "divisa" << endl;
            }
            else if (x > division_x and y < division_y) {
                cout << "SE" << endl;
            }
            else if (x < division_x and y > division_y) {
                cout << "NO" << endl;
            }
            else if (x > division_x or y > division_y) {
                cout << "NE" << endl;
            }
            else if (x < division_x or y < division_y) {
                cout << "SO" << endl;
            }
            count++;
        }
        cin >> queries;
        count = 0;
    }
}