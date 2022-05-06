#include <iostream>//多重ループ
#include <iomanip>//ヘッダでは、入出力に使用するフォーマットとマニピュレータの機能を定義する。
int main(){
    for( int i=1; i <= 9; ++i){
        for (int j=1; j<=9;++j){
            std::cout << std::setw(4) << i*j;//setw出力する幅を設定する (function)桁をそろえる　
        }
        std::cout << std::endl;
    }

}