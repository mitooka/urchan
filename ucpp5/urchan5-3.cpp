#include <iostream>
int main(){
    char c = 'A';
    int i = 0;
    while (i < 26)
    {
        std::cout << c;
        //std::cout << char(c +i); これにすると文字が出力
        //std::cout << static_cast<char>(c + i);//この形が一般的なキャストの方法
        //std::cout << (c +i); 変数cはchar型 変数iは整数型 この式全体だと整数になる。
        ++c; //A~Zまで表示する ASCIIコード
        ++i;
        std::cout << "\n";
    }
    std::cout << "\n";
    
}



/*  int n;
    n = 2;
    n+2 = 3; 変数じゃないところに値は代入できない。右辺値
    n++ = 1; nは右辺値 nに1が足されるがnに足される前の値が返ってくるからだめ
    ++n = 1; */