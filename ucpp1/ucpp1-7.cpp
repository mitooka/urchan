#include <iostream>
#include <random>
int main(){
    std::random_device seed_gen;
    std::mt19937 engine(seed_gen());
    std::uniform_int_distribution<> dist{-10,10};
    
    int lucky = dist(engine);
    std::cout << "ラッキーナンバー = "<< lucky << std::endl;

}