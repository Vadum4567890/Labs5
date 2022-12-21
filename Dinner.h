#include <iostream>
#include "Candy.h"
using namespace std;


class Dinner {
private:
    vector<Candy> pieces;
public:
    Dinner(vector<Candy> candies) {
        this->pieces = candies;
    }

    void sortCandy() {
        if (pieces.size() > 1) {
            for (int i = 0; i < pieces.size() - 1; i++) {
                for (int k = 0; k < pieces.size() - i - 1; k++) {
                    if (pieces[k].get_price() < pieces[k + 1].get_price()) {
                        swap(pieces[k], pieces[k + 1]);
                    }
                }
            }
        }
    }
    void theMostExpensiveTop() {
        sortCandy();
        cout << "top candy:" << '\n'
            << pieces[0].get_name() << " - " << pieces[0].get_price() << '\n'
            << pieces[1].get_name() << " - " << pieces[1].get_price() << '\n'
            << pieces[2].get_name() << " - " << pieces[2].get_price() << endl;
    }
    void  ate(int mass_in_grams, int amount) {
        if (mass_in_grams * amount > 2, "кг") {
            cout << "you're on a diet" << endl << endl;
        }
        else {
            cout << "what delicious candies!" << endl << endl;
        }
    }



};