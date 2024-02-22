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
    TPoint A(3, 5);
    A.print();
    
    A.x = 7;

    return 0;
}



