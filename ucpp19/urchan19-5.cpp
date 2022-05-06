#include <iostream>
int seq_search(int* p, int n, int key){
    int* q = p;//自動記憶域機関

    while(n-- > 0){
        if(*q == key){
            return q-p;//ptrdiff_t ポインタと同じサイズの定数
        }else{
            q++;
        }
    }
    return -1;
}

int main(){
    int x[5] = {1,42,3,4,5};

    int i = seq_search(x, 5, 42);//なぜここエラーなるのよ

    std::cout << i << std::endl;
}