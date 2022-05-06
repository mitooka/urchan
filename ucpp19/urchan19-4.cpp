#include <iostream>
#include <algorithm>
int  seq_search(int *p,int n, int key){
    for(int i = 0; i<n; ++i){
        if(*p++ == key){
            return i ;
        }
    }
    return -1;
}

int main(){
    int x[5] = {1,42,3,4,5};
    int i = seq_search(x, 5,42);
    int* it = std::find(x, x + 5, 4);
    std::cout << it - x << std::endl;
    std::cout << i << std::endl;
}