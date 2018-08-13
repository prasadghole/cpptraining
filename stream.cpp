#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   bool mybool = true;
   
   cout << boolalpha << mybool << endl;
   cout << noboolalpha << mybool << endl;
   cout << hex << 15 << endl; 
}