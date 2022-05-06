#include<iostream> // 画面出力に関するライブラリ,ライブラリの場所はコンパイラが知っているstdとか //
/* #include"iostream" だと同じディレクトないから探そうとする。ファイルを分けて開発する場合に使う */



/*ソース
int main(){
    std::cout <<"Hello World\n";stdとはstdlibのこと
    std::cout <<"画面に出力\n";
}*/
using namespace std;
int main(){
    cout <<"Hello World\n";   /* stream演算子　<<右にあるデータをcoutに流し込まれるイメージ */
    cout <<"画面に出力\n";
}
