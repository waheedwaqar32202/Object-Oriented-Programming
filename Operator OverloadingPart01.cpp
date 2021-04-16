
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

    Distance operator +(const Distance& d)
    {
        Distance result;
        result.feet = feet + d.feet;
        result.inches = inches + d.inches;

        return result;

    }
    
    Distance operator -(const Distance& d)
    {
        Distance result;
        result.feet = feet - d.feet;
        result.inches = inches - d.inches;

        return result;

    }
    Distance operator *(const Distance& d)
    {
        Distance result;
        result.feet = feet * d.feet;
        result.inches = inches * d.inches;

        return result;

    }
    Distance operator +(int num)
    {
        Distance result;
        result.feet = feet + num;
        result.inches = inches + num;

        return result;

    }

    Distance operator ++()
    {
        
        ++feet;  //feet=feet+1;  //
        ++inches; //inches=inches+1;

        return *this;
    }
    Distance operator ++(int)
    {
        Distance result;
        result.feet = feet;
        result.inches = inches;
        feet++;  //feet=feet+1;  
        inches++; //inches=inches+1

        return result;

    }

   friend  Distance operator +(int num, const Distance& d);
};
Distance operator +(int num, const Distance& d)
{
    Distance result;
    result.feet = num + d.feet;
    result.inches = num + d.inches;

    return result;
}
int main() {

    Distance D1(2, 3), D2(5, 6);

    Distance D3 = D1 + D2;   // int num3=num1+num2;
    D3.display();
    cout << endl;

    Distance D4 = D1 * D2;
    D4.display();
    cout << endl;

    Distance D5 = D1 + 2;

    Distance D6 = 2 + D1;

    D6.display();
    cout << endl;

    Distance D7=D6++;
    D7.display();
    cout << endl;

    D6.display();
    cout << endl;




}
