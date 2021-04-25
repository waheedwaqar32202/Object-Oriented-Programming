#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;
    int size;
    int* arr;



public:
    // required constructors
    Distance() {
        feet = 0;
        inches = 0;
        size = 0;
        arr = nullptr;

    }
    Distance(int f, int i, int sz) {
        feet = f;
        inches = i;
        size = sz;
        arr = new int[sz];
        inputArr(size);

    }
    void inputArr(int size)
    {
        cout << "Enter Array \n";
        for (int i = 0; i < size; i++)
        {

            cin >> arr[i];
        }
    }
    void display()
    {
        cout << "Feet  " << feet << endl;
        cout << "Inches  " << inches << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
    Distance(const Distance& d)
    {
        feet = d.feet;
        inches = d.inches;
        size = d.size;
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = d.arr[i];
        }
    }
    void operator =(const Distance& d)
    {
        feet = d.feet;
        inches = d.inches;
        size = d.size;
        if (arr != nullptr)
        {
            delete[]arr;
        }

        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = d.arr[i];
        }

    }
    
};
int main() {

    Distance d1(2, 2, 3);
    d1.display();
    cout << endl;

    Distance d2;
    d2 = d1;
    d2.display();
    cout << endl;
        
        
    return 0;
}