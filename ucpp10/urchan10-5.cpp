#include <iostream>
#include <set>
#include <functional>
int main(){
    std::set<int, std::greater<int>> s{2, 5, 1, 7};/*std::set 順序付けされたデータ
                                            を複数保持することができる順序付集合のコンテナクラス
                                            常にソートされている状態*/

    for(int x :s){
        std::cout << x <<" ";
    }
    std::cout << std::endl;

    s.insert(10);
    for(int x :s){
        std::cout << x << " ";
    }
    std::cout << std::endl;

    s.insert(5);
    for(int x : s){
        std::cout << x << " ";
    }
    std::cout << std::endl;

    s.insert(4);
    for(int x :s){
        std::cout << x << " ";
    }
    std::cout << std::endl;
}