#include <iostream>
enum Animal{
    Dog,
    Cat,
    Monkey,
    Invalid,
};
int main(){
    int type;

    do
    {
        std::cout << "0 犬 1猫 2猿 3終了"<<std::endl;
        std::cin >> type;
    } while (type < Dog );

    if(type != Invalid){
        Animal selected{static_cast<Animal>(type)};
        switch(selected)
        {
        case Dog:
            std::cout << "わんわん" << std::endl;
            break;
        case Cat:
            std::cout << "にゃーお" << std::endl;
            break;
        case Monkey:
            std::cout <<"きっきっ" << std::endl;
            break;
        default:
            std::cout << "よくわからない動物" << selected << std::endl;
        }
    }
    
}