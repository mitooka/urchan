#include <iostream>
void f(int* p){
    delete p;
}
int v; //静的記憶域期間
/* プログラムが開始してからプログラムが終了するまでの存在,main関数より長い*/
int main(){
    //int a = 0;

    int* x = new int{5};//自動記憶域期間でも静的記憶域期間でもローカル変数でもグローバル変数でもない特殊な記憶域期間をもつ
    std::cout << *x << std::endl;
    //delete x;
    int flag;
    std::cin >> flag;
    if(flag){
        f(x);
    }
    std::cout << *x << std::endl;
}
/* わざとdeleteしないものにはサーバーなどがある。 */