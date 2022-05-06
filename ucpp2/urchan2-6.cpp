#include <iostream> 
//これはメモ帳
using namespace std;
int main(){
    //リテラルの評価などについて
    int n = 1;
    n;//int型
    10;//int型
    
    n + 10;// int型
    10.0;//double
    (n + 10); //(式)  作用



    n = 3 // 式文 代入演算子は式だから評価できる
    int x
    (n = 3) = 2;//代入演算子の評価 ⇒ 代入後の左オペランドを返す
    //代入演算子の作用: n=3 ⇒ 3
    //         副作用: nに3を代入,変巣の値が書き変わる




    cout << (n + 10) << endl;
    cout << "x = "<< x << endl;
    //評価
    //expression ; :式文 expression statement
    
}
