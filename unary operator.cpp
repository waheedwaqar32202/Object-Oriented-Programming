#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // required constructors
    Distance() {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int i) {
        feet = f;
        inches = i;
    }
    void display()
    {
        cout << "Feet  " << feet << endl;
        cout << "Inches  " << inches << endl;
    }
    Distance operator ++()
    {
        ++feet;   //feet=feet+1;
        ++inches; //inches=inches+1;
        return *this;
    }
    Distance operator ++(int)
    {
        Distance obj = *this;
        feet++;   //feet=feet+1;
        inches++; //inches=inches+1;
        return obj;
    }
    Distance operator --()
    {
        --feet;   //feet=feet-1;
        --inches; //inches=inches-1;
        return *this;
    }
    Distance operator --(int)
    {
        Distance obj = *this;
        feet--;   //feet=feet-1;
        inches--; //inches=inches-1;
        return obj;
    }
};

int main() {
    Distance d1(2, 2);
    d1.display();
    cout << endl;

    ++d1;
    d1.display();
    cout << endl;

    d1++;
    d1.display();
    cout << endl;

    d1--;
    d1.display();
    cout << endl;

    Distance d2 = d1++;
    d2.display();
    cout << endl;

    d1.display();
    cout << endl;
    

    return 0;
}
