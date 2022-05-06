#include <iostream>

void PrintArray(int *a, int height, int width){
    for(int y =0;y <height;++y){
        std::cout << "arr[" << y << "]:";
        for(int x =0;x<width;++x){
            std::cout << " " << a[y *width +x];  
        }
        std::cout << std::endl;
    }
}
#define WIDTH 4
int main(){
    int arr[5 * WIDTH];//y*xで要素数を定義する
    for(int y =0; y<5; ++y){
        for(int x = 0; x<WIDTH; ++x){//y * 幅 * xとする
            arr[y*WIDTH + x] = (y+1)*(x+1);
        }
    }
    PrintArray(arr,5,WIDTH);
}