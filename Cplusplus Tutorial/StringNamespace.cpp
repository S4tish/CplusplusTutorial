// Omitting Namespace
// You might see sime C++ programs that runs without the standard namespace library.The using 
// namespace std line can be omitted and replaced with the std keyword followed by the ::
// operator for string 

#include <iostream>
#include <string>

int main(){
    std::string greeting="satish";
    std::cout<<greeting;
    return 0;
}