#include <iostream>
using namespace std;

class cla {
public:
    int a,b;
    void s(int o, int t)
    {
        a = o;
        b = t;
        cout << a+b << endl;
    }
};

int main()
{
    char hw[] = "Hello, world!";
    cout << hw << endl;
    cla ne{};
    ne.s(1,2);
}
