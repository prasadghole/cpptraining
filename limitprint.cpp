#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "int :" << endl;    
   
    cout << "Max int = : " << numeric_limits<int>::max() << endl;
    cout << "Min int = : " << numeric_limits<int>::min() << endl;
    cout << "Lowest int = : " << numeric_limits<int>::lowest() << endl;
}
