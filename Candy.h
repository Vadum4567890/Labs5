#include <iostream>
#include <vector>
using namespace std;

enum TypeOfCandy {
    BAR,
    BUTTON,
    POPCORN,
    GUM
};

class Candy {
    string name;
    float mass_in_gram;
    int number_of_candies;
    float price;
public:

    Candy() {
        name = "noname candy";
        mass_in_gram = 0;
        number_of_candies = 0;
        price = 0;
    }
    Candy(string name, float mass_in_gram, int number_of_candies, float price) {
        this->name = name;
        this->mass_in_gram = mass_in_gram;
        this->number_of_candies = number_of_candies;
        this->price = price;
    }

    float get_price() {
        return price;
    }

    string get_name() {
        return name;
    }

    ~Candy() {

    }
};

