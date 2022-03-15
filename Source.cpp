#include <iostream>
#include <string>
using namespace std;

class memberType
{
private:
    string name_of_person;
    int member_ID, number_of_books_bought;
    float amount_spent;
public:
    memberType(string name_of_person = "john", int member_ID = 0, int number_of_books_bought = 0, float amount_spent = 0) {
        this->name_of_person = name_of_person;
        this->member_ID = member_ID;
        this->number_of_books_bought = number_of_books_bought;
        this->amount_spent = amount_spent;
    }
    void set_name(string name) {
        name_of_person = name;
    }
    void show_name() {
        cout << "Name is: " << name_of_person << endl;
    }
    void update_name() {

    }
};

class Fraction
{
private:
    int numerator, denominator;
public:
    Fraction(int numerator = 0, int denominator = 1)
    {
        int temp;
        temp = numerator / denominator;
        this->numerator = numerator;
        this->denominator = denominator;
    }

    Fraction operator + (const Fraction& f) {
        int above, below;
        above = numerator * f.denominator + denominator * f.numerator;
        below = denominator * f.denominator;
        Fraction temp(above, below);
        return temp;
    }

    Fraction operator - (const Fraction& f) {
        int above, below;
        above = numerator * f.denominator - denominator * f.numerator;
        below = denominator * f.denominator;
        Fraction temp(above, below);
        return temp;
    }

    Fraction operator* (const Fraction& f) {
        int above, below;
        above = numerator * f.numerator;
        below = denominator * f.denominator;
        Fraction temp(above, below);
        return temp;
    }

    Fraction operator / (const Fraction& f) {
        int above, below;
        above = numerator * f.denominator;
        below = denominator / f.numerator;
        Fraction temp(above, below);
        return temp;
    }
    
    friend ostream& operator << (ostream& out, const Fraction& f);
    friend istream& operator >> (istream& in, Fraction& f);
};
ostream& operator <<(ostream& out, const Fraction& f) {
    out << f.numerator << " / " << f.denominator;
    return out;
}
istream& operator >>(istream& in, Fraction& f) {
    cout << "Enter the numerator and denominator, respectively" << endl;
    in >> f.numerator >> f.denominator;
    return in;
}

int main()
{
    /*memberType m;
    m.set_name("baba");
    m.show_name();
    m.set_name("bubu");
    m.show_name();*/
    /*memberType* m1;
    memberType m2;
    m1 = &m2;
    m1->set_name("bebe");
    m1->show_name();*/

    Fraction f1(1, 3), f2(1, 2);
    Fraction f3 = f1 + f2, f4 = f1 - f2, f5 = f1 * f2, f6 = f1 / f2;
    cout << f3 << endl;
    cout << f4 << endl;
    cout << f5 << endl;
    cout << f6 << endl;



    return 0;
}