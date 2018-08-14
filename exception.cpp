#include <iostream>
#include <stdexcept>

using namespace std;


double SafeDevide(double num, double div)
{
    if (div == 0) 
    {
        throw invalid_argument("Devide by zero");
    }
    return num/div;
}
int main()
{
   
   try {
       cout << SafeDevide(9,2) << endl;
       cout << SafeDevide(5,0) << endl;
       cout << SafeDevide(2,2) << endl;
   } 
   catch ( const invalid_argument& e)
   {
       cout << "Caught exception " << e.what() << endl;
   }
   
   return 0;
}