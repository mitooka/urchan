#include <iostream>
#include <memory>

int main(){
    std::shared_ptr<int> x = std::make_shared<int>(5);//動的記憶域期間
    /*shared_ptr スマートポインタ xはポインタのようなもの。
    生のポインタと違いブロックを抜けるときにxが破棄されると同時にxが指すオブジェクトも破棄される*/
    std::cout << *x << std::endl;
}