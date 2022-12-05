#include <iostream>
#include <vector>
using namespace std;

enum type {
    bar,
    button,
    popcorn,
    gum
};

class Candy {
public:
    string name;
    float mass_in_gram;
    int amount;
    int price;
    Candy() {
        name = "noname candy";
        mass_in_gram = 0;
        amount = 0;
        price = 0;
    }
    Candy(string name, float mass_in_gram, int amount, int price) {
        this->name = name;
        this->mass_in_gram = mass_in_gram;
        this->amount = amount;
        this->price = price;
    }

};

class Dinner {
private:
    vector<Candy> pieces;
public:
    Dinner(vector<Candy> candies) {
        this->pieces = candies;
    }

    void sortcandy() {
        if (pieces.size() > 1) {
            for (int i = 0; i < pieces.size() - 1; i++) {
                for (int k = 0; k < pieces.size() - i - 1; k++) {
                    if (pieces[k].price < pieces[k + 1].price) {
                        swap(pieces[k], pieces[k + 1]);
                    }
                }
            }
        }
    }
    void theMostExpensiveTop() {
        sortcandy();
        cout << "top candy:" << '\n'
            << pieces[0].name << " - " << pieces[0].price << '\n'
            << pieces[1].name << " - " << pieces[1].price << '\n'
            << pieces[2].name << " - " << pieces[2].price << endl;
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