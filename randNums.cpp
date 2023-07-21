
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));
    int dice_one = rand() % 6 + 1;
    int dice_two = rand() % 6 + 1;
    cout << "The two dices rolled results in: " << dice_one  << " and " << dice_two;

    return 0;
}


