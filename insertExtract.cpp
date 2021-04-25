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

    friend istream& operator >>(istream& in, Distance& d);
    friend ostream& operator <<(ostream& out, Distance& d);
};
istream& operator >>(istream& in, Distance& d)  //insertion 
{
    cout << "Enter Feet ";
    in >> d.feet;
    cout << "Enter Inches ";
    in >> d.inches;

    return in;
}
ostream& operator <<(ostream& out, Distance& d)  //extraction
{
    out << "Feet " << d.feet << endl;
    out << "inches " << d.inches << endl;

    return out;
}

int main(){

    Distance d1;
    cin >> d1;

    cout << d1;
    
    return 0;
}