//配列のsort
#include <iostream>
#include <array>
#include <algorithm>
int main(){
    std::array<int ,7> arr{3,8,1,444,55,6,5};
    std::sort(arr.begin(), arr.end());

    for(int x: arr){
        std::cout << x << std::endl;
    }
}