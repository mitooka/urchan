#include <iostream>
int main(){
    int n;
    std::cout << "n:";
    std::cin >> n;

    if(int mod = n % 10 ; mod > 5){//%はあまり doubleのときは fomd関数
        std::cout <<"nは10で割り切れません(mod > 5)" << std::endl;
        std::cout << "mod = " << mod << std::endl;
    }
    else if (mod >0){//上の;以前の式は下のelse ifにも受け継がれる
        std::cout << "nは10で割り切れます(mod >0)" << std::endl;
    }  
    else {
        std::cout << "nは10で割り切れます。" << std::endl;
    }
    
    //std::cout << mod << std::endl; //ここからはmodが見えない。if文内のみ
}