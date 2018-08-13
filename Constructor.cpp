#include <iostream>

using namespace std;

class Socket 
{
public:

    Socket()
    {
       cout << "Socket Opened" << endl; 
    }
    ~Socket()
    {
       cout << "Socket closed" << endl; 
    }
};

int main()
{
   Socket s1; 
   cout << "Main is using Socket" << endl;
}