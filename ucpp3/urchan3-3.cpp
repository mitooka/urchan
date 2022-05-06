#include <iostream>//三項演算子

int main(){
    using namespace std;
    int a,b;
    cout << " a b:";
    cin >> a >> b;
    
    /*
    int min;
    if(a<b){
        min = a;
    }
    else{
        min = b;
    }*/
    int min = a < b ? a : b; //aがbより小さければaを返す 全体が式
    //        式0 ? 式1 : 式2
    //式0が真 ⇒ 式1が全体の値
    //式0が偽  ⇒ 式2が全体の値  
    cout << "min = " << min << endl;
    
    // cout << "min = " << (a < b ? a : b) << endl;
}