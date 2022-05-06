#include <iostream>
#include <array>
int max(int a, int b, int c){
    int m= a;
    if(b>m){
        m = b;
    }
    if(c>m){
        m = c;
    }
    return m;
}
int main(){
    std::array<int ,3> math ,eng;/*この場合は math[0],math[1],math[2]
                                            eng[0],eng[1],eng[2]
                                            の2つのリストが出るのか？:*/
    for(std::size_t i = 0; i<math.size();++i ){
        std::cout << "[" << i << "]";
        std::cout << "math: ";
        std::cin >> math[i];
        std::cout << "[" << i << "]";
        std::cout << "eng";
        std::cin >> eng[i];
    }
    int math_highest = max(math[0],math[1],math[2]);
    int eng_higest = max(eng[0],eng[1],eng[2]);
    std::cout << "the math highest score is " << math_highest << std::endl;
    std::cout << "the eng highest score is " << eng_higest << std::endl;

}
//プログラムは上から読み込まれるのでmain関数の前で関数を宣言してしまうとエラーになる