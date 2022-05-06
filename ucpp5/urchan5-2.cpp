#include <iostream> 

int main(){
    int n;

    std::cout << "何個表示しますか？:";
    std::cin >> n;

    if(n > 0){
        int i = 0;
        while (i < n)
        {
            std::cout << " * ";// << std::endl;
            i++;
        }
        
    }
    std::cout << "\n";
}   
/* C++では文字リテラルと文字リテラルが区別されている。 
*/