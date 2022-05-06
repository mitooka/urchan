#include <iostream>

// const : constant 定数
int maxof(const int a[], int n){//
    int m = a[0];
    for(int i = 1;i < n; ++i){
        if(m < a[i]){
            m = a[i];
            //a[i] = 0 constｄから書き換えはできない。読み取り専用
        }
    }
    return m;
}

int main(){
    int array[5] = {10, 20, 4, 50, 3};
    const int* p = &array[0];//指す先がconstantである
    int* const q = &array[0];

    //p  = &array[0];これは合法 変数pはconstではなく、指す先はconst
    std::cout << (p == q) << std::endl;//const int*とint* const の違いについて
    //p[1] = 3;この場合は違法
    q[1] = 4;
    //なにがconstなのか？
    //q = &array[1]; これは違法
    //qはconstだけど指す先はconstではない

    std::cout << maxof(array, 5) << std::endl;
}