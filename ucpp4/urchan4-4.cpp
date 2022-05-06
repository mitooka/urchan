#include <iostream>
#include <random>
int main(){
    std::random_device seed_gen;
    std::mt19937 engine(seed_gen());
    std::uniform_int_distribution<> dist{0,99};

    const int no = dist(engine);//0~99の乱数を一個生成
    // constant 定数 書き換え禁止っていう意味
    int x,count=0;
    
    
    std::cout << "数あてゲーム開始！" << std::endl;
    std::cout << "0-99の数を当ててください" << std::endl;

    do{
        std::cout << "いくつかな:";
        std::cin >> x;

        if (no < x){
            std::cout << "もっと小さいよ"<< std::endl;
        }
        else if(x < no){
            std::cout << "もっと大きいよ" << std::endl;
        }
        std::cout << ++count << std::endl;
    }while(x != no);
    std::cout << "正解です" << std::endl;

}