#include <iostream>
#include <array>
int max3(int a, int b, int c);//関数プロトタイプ宣言 関数の中身はわからないけど宣言されてるからよい。この場いいは
//                             この場合はここで関数本体にジャンプするのか?
int main(){
    std::array<int ,3> math ,eng;/*この場合は math[0],math[1],math[2]
                                            eng[0],eng[1],eng[2]
                                            の2つのリストが出るのか？:*/
    for(std::size_t i = 0; i<math.size();++i ){
        std::cout << "[" << i << "]";
        std::cout << "math: ";
        st::cin >> math[i];
        std::cout << "[" << i << "]";
        std::cout << "eng";
        std::cin >> eng[i];
    }
    int math_highest = max(math[0],math[1],math[2]);
    int eng_higest = max(eng[0],eng[1],eng[2]);
    std::cout << "the math highest score is " << math_highest << std::endl;
    std::cout << "the eng highest score is " << eng_higest << std::endl;

}
int max3(int a, int b, int c){
    int m= a;
    if(b>m){
        m = b;
    }
    if(c>m){
        m = c;
    }
    return m;
}
