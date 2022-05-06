#include <iostream>

int max(int a, int b){
    return a > b ? a:b;
}
int max(int a, int b,int c){
    int m = a;
    if(b>m){
        m = b;
    }
    if(c>m){
        m = c;
    }
    return m;
}
double max(double a, double b){//関数の戻り値の型は最初に宣言
    return a > b ? a:b;
}

extern "C"{//アセンブリの名前ファンクが無効になる アセンブリでは目印いちいち関数名が変わる
    int myfunc(int a){
        return 1;
    }
}



int main(){
    int x,y,z;
    std::cin >> x >> y;
    std::cout << "max(x,y) = " << max(x,y) << std::endl;

    std::cin >> z;
    std::cout << "max(x,y,z) = " << max(x,y,z) <<std::endl;
    double a, b;
    std::cin >> a >> b;
    std::cout << "max(a,b) = " << max(a,b) << std::endl;//暗黙キャスト
}