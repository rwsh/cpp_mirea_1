#include <iostream>

using namespace std;

class TItem {
    private:
    static inline int count{0};
    public:
    TItem() {
        count++;
    }
    
    void hello() {
        cout << "\nI am " << count << "\n";
    }
    static void how(){
        cout << "\nThere are " << count << " of us\n";
    }
};

int main()
{
    TItem::how();
    TItem* A = new TItem();
    A->how();
    TItem* B = new TItem();
    A->how();
    TItem* C = new TItem();
    TItem::how();
    delete A, B, C;
    
    return 0;
}

