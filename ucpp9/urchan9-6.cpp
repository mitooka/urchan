#include <iostream>
#include <array>
int main(){
    std::array<int ,3> arr{3,8,1};

    for(int x: arr){
        std::cout << x << std::endl;
    }
}