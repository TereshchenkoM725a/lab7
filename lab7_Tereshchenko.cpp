#include <iostream>
using namespace std;

int main() {
    double R;
    int count = 0;

    cout << "Enter R(>0):";
    cin >> R;

    for (int x = -(int)R; x <= (int)R; x++) {
        for (int y = -(int)R; y <= (int)R; y++) {
            if (x * x + y * y <= R * R) {
                count++;
            }
        }
    }

    cout << "Points inside circle:" << count << endl;

    return 0;
}

