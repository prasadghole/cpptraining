#include <iostream>

using namespace std;

class Socket 
{
public:

    Socket()
    {
       cout << "I am constructor" << endl; 
    }
    ~Socket()
    {
       cout << "I am destructor" << endl; 
    }
};

int main()
{
   Socket s1; 
   cout << "Main is using Socket" << endl;
}