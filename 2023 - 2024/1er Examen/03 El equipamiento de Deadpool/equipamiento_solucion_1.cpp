#include <iostream>
using namespace std;

int n, amount;
string action;
char weapon;
int equipment[128]; 

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> action >> weapon;

        int index = (int)weapon; 

        if (action == "add") {
            cin >> amount;
            equipment[index] += amount;
        } else if (action == "remove") {
            cin >> amount;
            if (equipment[index] < amount) {
                equipment[index] = 0;
            } else {
                equipment[index] -= amount;
            }
        } else if (action == "query") {
            cout << equipment[index] << endl;
        }
    }
    return 0;
}