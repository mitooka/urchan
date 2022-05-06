#include <iostream>
int main(){
    int hand;
    do{
        std::cout << "手を選んでね (0:グー, 1:チョキ, 2:パー)" << std::endl;
        std::cin >> hand;
    }while(hand < 0 || hand >2);
    // !(0 <= hand && hand <= 2)
    // A || B
    // !(!A && !B)

    //!(!A || !B)
    // A && B

    switch (hand)
    {
    case 0:
        std::cout << "グー" << std::endl;
        break; //fall - through
    
    case 1:
        std::cout << "チョキ"<< std::endl;
        break;
    
    case 2:
        std::cout << "パー" << std::endl;
        break;
    default:
    std::cout << "わからない数字でした" << std::endl;
    }

    //if((x == 1 ||( y == 2 && z == 4))) &&演算子が優先順位が高い

    
//switchはbreakが出てくるまで実行される
}
//1.5とか入力されると小数点は勝手に無視される