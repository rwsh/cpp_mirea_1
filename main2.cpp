#include <iostream>

using namespace std;

class TPoint {
    private:
    int x, y;
    public:
    TPoint(int ax, int ay) {
        x = ax;
        y = ay;
    }
    
    void print() {
        cout << "(" << x << ", " << y << ")";
    }
};

int main()
{
    TPoint* A = new TPoint(4, 6);
    A->print();

    return 0;
}


