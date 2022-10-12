//

#include <iomanip>
#include <iostream>
using namespace std;

void maxmin(int a, int b, int c, int &max, int &min) {
    max = a;
    min = a;
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    if (min > b) {
        min = b;
    }
    if (min > c) {
        min = c;
    }
}