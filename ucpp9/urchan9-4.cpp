#include <iostream>
enum class Animal{//classを書くと
    Dog,
    Cat,
    Monkey,
    Invaild
};
int main(){
    int type;
    
    do{
        std::cout << "0 犬 1 猫 2 猿 3 終了 " << std::endl;
        std::cin >> type;
    }while(type  < static_cast<int>(Animal::Dog));
    if (type != static_cast<int>(Animal::Invaild)){
        Animal selected{static_cast<Animal>(type)};//Animal型の変数を宣言している
        switch (selected)
        {
        case Animal::Dog://ここにAnimalとか書く必要がある わかりやすくなる
            std::cout << "わんわん" << std::endl;
            break;
        case Animal::Cat:
            std::cout << "にゃーお" << std::endl;
            break;
        case Animal::Monkey:
            std::cout << "きっきっ" << std::endl;
            break;
        
        default:
            std::cout << "よくわからない動物" << static_cast<int>(selected) << std::endl;
            break;
        }
    }
}