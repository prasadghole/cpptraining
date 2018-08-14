#include <iostream>

// C++ receipies

using namespace std;

class MyClass {
    private:
        int m_var ;
        
    public :
        MyClass() = default;
        MyClass(const MyClass& rhs) = default;
        void Echo(void)
        {
            cout << "I am Myclass" << endl;
        }        
};

int main()
{
    MyClass A;
    
    //MyClass B(MyClass());
    MyClass B{MyClass()};
    
    B.Echo();
    return 0;    
}