#include <iostream>

using namespace std;

class TPoint {
    private:
    int x, y;
    public:
    TPoint(int ax, int ay);
    void setxy(int ax, int ay);
    void print();
};

TPoint::TPoint(int ax, int ay) {
        setxy(ax, ay);
}

void TPoint::setxy(int ax, int ay) {
    if (ax > 0) { x = ax; }
    else { x = 0; }
    if (ay > 0) { y = ay; }
    else { y = 0; }
}

void TPoint::print() {
    cout << "\n(" << x << ", " << y << ")\n";
}


int main()
{
    TPoint* A = new TPoint(1, 2);
    A->print();
    A->setxy(-1, 3);
    A->print();
    delete A;

    return 0;
}






