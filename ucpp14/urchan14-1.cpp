#include <iostream>

int  x = 75; //ここに定義したスコープはファイルスコープといいファイルのどこからでも見える global変数ファイル有効範囲

void printf_x(){
    std::cout << "x = " << x << std::endl;
}
int main(){
    std::cout << "x = " << x << std::endl;

    int x = 999;//ブロック有効範囲
    std::cout << "x = " << x << std::endl;

    for(int i = 0; i<5;++i){
        int x = i*11;//ブロック有効範囲
        std::cout << "x = " << x << std::endl;//0~44
    }

    std::cout << "x = " << x << std::endl;
    std::cout << "::x = " << ::x << std::endl;//::の意味は何？->::名前空間を参照する
                        //  ↑グローバル名前空間を参照する
    printf_x();
}

/* x = 75
x = 999
x = 0
x = 11
x = 22
x = 33
x = 44
x = 999W
::x = 75
x = 75
 */