#include <array>
#include <iostream>
int main(){
    std::array<int ,3>math, eng;//数学と英語の定数を格納するintの3つ分の配列を作る
    for(std::size_t i = 0;i<math.size(); ++i){
        std::cout << "[" << i << "]";
        std::cout << "math: ";
        std::cin >> math[i];
        std::cout << "eng: ";
        std::cin >> eng[i];
    }
    int max_math=math[0];
    if(math[1]>max_math){
        max_math = math[1];
    }
    
    int max_eng = eng[0];
    if(eng[1] > max_eng){

        max_eng = eng[1];
    }
    if(eng[2] > max_eng){
        max_eng = eng[2];
    }
    std::cout << "the highest math score is "<< max_math<<std::endl;
    std::cout << "the highest eng score is" << max_eng << std::endl;
}