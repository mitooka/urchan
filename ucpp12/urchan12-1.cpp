#include <iostream>

void put_stars(int n){
    while (n-- > 0)
    {
        std::cout << "*";//副作用 戻り値じゃないところで表示などが行われる。
    }//voidのみの関数は副作用のみを目的とした関数
    //値を返さない関数。なかで仕事をする。
}

/* int add(int a, int b){
    return a + b;//作用 入力して出力される
} */
int main(){
    int n;
    std::cout << "段数: ";
    std::cin >> n;
    
    for(int i = 1; i<=n;++i){
        put_stars(i);
        std::cout << std::endl;
    }
}