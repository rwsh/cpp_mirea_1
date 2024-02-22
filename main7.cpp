#include <iostream>

using namespace std;

class TPoint {
    private:
    int x, y;
    public:
    TPoint(int ax, int ay) {
        setxy(ax, ay);
    }
    
    void setxy(int ax, int ay) {
        if (ax > 0) { x = ax; }
        else { x = 0; }
        if (ay > 0) { y = ay; }
        else { y = 0; }
    }

    void print() {
        cout << "\n(" << x << ", " << y << ")\n";
    }
};

int main()
{
    TPoint* A = new TPoint(1, 2);
    TPoint* B = new TPoint(*A);

    B->print();

    delete B;
    delete A;

    return 0;
}






