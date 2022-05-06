#include <iostream>
#include <cstring>

int main(){
    char s[10];

    std::cout << "ABCDEとの比較を行います (Xで終了)" << std::endl;

    while(1){
        std::cout << ">";
        std::cin >> s;
        if(std::strcmp(s,"X") == 0){
            break;
        }

    std::cout << std::strcmp("ABCDE",s) << std::endl;
    std::cout << std::strncmp("ABCDE",s,3) << std::endl;
    }
}


/* 
taka@XPS13:~/myprograms/cpp/urchan/ucpp23$ ./a.out
ABCDEとの比較を行います (Xで終了)
>x
-55 AへのASCIIコード:65 - xへのASCIIコード120の値 = -55 
-55
>B
-1
-1
>A
66
66
>ABCDE
0
0
>ABC
68//Dの文字コード
0 //先頭3文字を比較したときに
>X

if(s = "ABCDE"){
    この場合配列が式評価で使われた場合先頭へのポインタになる。また文字列リテラルも先頭へのポインタになる
    そのためメモリ上に同じ位置にあるかという意味になる。これは常に偽になる
}
 */
