#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> data {1,2,5,3};
   
    std::sort(data.begin(),data.end());
    
    for(auto &d : data)
    {
        std::cout << d;
    } 
    return 0;
}