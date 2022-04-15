#include <iostream>
using namespace std;

class polygon {
    public:
    int square(int side) {
        return side*side;
    }

    int rect(int len,int bred) {
        return len*bred;
    }

    float tri(int base,int height) {
        return (float) 0.5*base*height;
    }
};

int main() {
    int sqAns,rectAns,sqSide,rectLen,rectBred,triBase,triHeight;
    float triAns;
    polygon poly;
    cout<<"Enter side of a square: ";
    cin>>sqSide;
    cout<<"Enter length and breadth of a rectangle: ";
    cin>>rectLen>>rectBred;
    cout<<"Enter base and height of a triangle: ";
    cin>>triBase>>triHeight;
    sqAns = poly.square(sqSide);
    rectAns = poly.rect(rectLen,rectBred);
    triAns = poly.tri(triBase,triHeight);
    cout<<sqAns<<"\n"<<rectAns<<"\n"<<triAns;
    return 0;
}