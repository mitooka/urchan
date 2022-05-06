#include <iostream>//列挙型
enum Animal{
    Dog,
    Cat,
    Monkey,
    Invalid
};
int main(){
    Animal animal{Cat};//Animal型の変数animalをセットして初期値をCatとする
    //animal = 3;列挙した要素以外のものは代入できない,今回は動物の名前
    std::cout << animal << std::endl;
}