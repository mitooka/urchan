#include <iostream>

#define sqr(x)  ((x) * (x))//関数形式マクロ 関数とはかなり性質が異なる
#define sss(x)  (#x)//#は文字列に変換するやつ
#define dbg(...) std::cout << #__VA_ARGS__ << "=" <<(__VA_ARGS__) << std::endl;//なにこれ難すぎんか

int main(){
    std::cout << sqr(4) << std::endl;
    std::cout << sss(abcd) << std::endl;
    dbg(3*4);
}
