#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    auto var = 1;
    
    cout << "Variable type = " << typeid(var).name() << endl;
    
    return 0;
}