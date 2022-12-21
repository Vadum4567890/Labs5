#include <iostream>
#include <vector>
#include "Candy.h"
#include "Dinner.h"
using namespace std;

int main() {

    Candy milk1 = Candy("Milk1", 5, 12, 3);
    Candy dark2 = Candy("Dark2", 2, 25, 7);
    Candy white3 = Candy("White3", 1, 19, 2);
    Candy milk4 = Candy("Milk4", 3, 8, 13);
    Candy dark5 = Candy("Dark5", 7, 10, 15);

    vector<Candy>veta;

    veta.push_back(milk1);
    veta.push_back(milk4);
    veta.push_back(white3);
    veta.push_back(dark5);
    veta.push_back(dark2);

    Dinner din = Dinner(veta);
    din.theMostExpensiveTop();
    cout << endl;

    return 0;
};