#include <iostream>
using namespace std;
int main() {
    int notebooks = 15;
    int pens = 20;
    double notebook_cost = 2.25;
    double pen_cost = 0.75;
    double total_cost = (notebooks * notebook_cost) + (pens * pen_cost);
    cout << "The total cost of the supplies is Rs. " << total_cost << endl;
    return 0;
}