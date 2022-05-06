#include <iostream>
#include <array>
#include <random>
//配列の入れ替え
int main(){
    std::random_device seed_gen;
    std::mt19937 engine{seed_gen()};
    std::uniform_int_distribution<> dist{0,99};//乱数生成

    std::array<int ,7>arr;//初期値
    for(int i=0; i<static_cast<int>(arr.size()); ++i){
        arr[i] = dist(engine);
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
        
    }
    for(int i=0; i < static_cast<int>(arr.size()/2);++i){
            std::swap(arr[i], arr[arr.size()-i-1]);//二つの値を入替
        }


    for(int i=0; i< static_cast<int>(arr.size()); ++i){
            std::cout << "a[" << i << "]="<< arr[i] << std::endl;
        }
}