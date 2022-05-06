#include <iostream>//ラムダ式
#include <array>
//int max3(int a, int b, int c);//ここがないとlmaxがない

/*int max3(int a, int b, int c){
    int m = a;
    if(b>m){
        m = b;
    }
    if(c>m){
        m = c;
    }
    return m;//関数の戻り値
} */

//関数定義は文ではないからmain関数の中には書けない。
int main(){
    auto lmax3 = [](int a, int b, int c){
        int m = a;//式としての関数宣言
        if(b>m){
            m = b;
        }
        if(c>m){
            m = c;
        }
        return m;
        };//変数定義の分である。ラムダ式はmain関数の中に定義できる。
        //動作速度は基本的には同じだが、ラムダ式のほうが最適化がかかりやすいから少し早いかも。
    std::array<int ,3>math, eng;
    for(int i =0;i < static_cast<int>(math.size());++i){
        std::cout << "[" << i << "]";
        std::cout << "math";
        std::cin >> math[i];
        std::cout << "eng: ";
        std::cin >> eng[i];
    }

    int highest_math = lmax3(/*argument 引数*/math[0],math[1],math[2]);
    int highest_eng = lmax3(eng[0],eng[1],eng[2]);//関数呼び出し function call
    // max3( ) ←この括弧は実は演算子(関数呼出演算子)  
    std::cout << "the highest math score is "<< highest_math << std::endl;
    std::cout << "the highest eng score is " << highest_eng << std::endl;
    //正常終了は関数末尾に0
    //return0のあとは完全にプログラムが終了されるわけではなく、もろもろの後処理が終わった後に
    //終了する
}