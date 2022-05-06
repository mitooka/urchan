#include <iostream>

void PrintArray(int (*a)[2], int height){
    for(int y =0;y <height;++y){
        std::cout << "arr[" << y << "]:";
        for(int x =0;x<2;++x){
            std::cout << " " << a[y][x];  
        }
        std::cout << std::endl;
    }
}
int main(){
    int arr[5][2];//[y][x] y:hight x:width
    for(int y =0; y<5; ++y){
        for(int x = 0; x<2; ++x){
            arr[y][x] = (y+1)*(x+1);
        }
    }
    PrintArray(arr,5);//配列の名前はポインタとして受け取る int f(int* p, int n);
    /* 二次元配列の場合
        *pはarr[0]をさす、*(p+1)arr[1]をさす */
}