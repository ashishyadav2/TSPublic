#include <iostream>
using namespace std;

class CircleArea {
    private:
    float radius,area,circumference;

    public:
    void getData() {
        cout<<"Enter radius of circle: ";
        cin>>radius;
    }
    void putData() {
        circumference = 2*3.14*radius;
        area = 2*3.14*radius*radius;
        cout<<"Area: "<<area<<"\nCircumference: "<<circumference;
    }
};
int main() {
    CircleArea c;
    c.getData();
    c.putData();
    return 0;
}