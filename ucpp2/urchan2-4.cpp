#include <iostream>
int main(){
    using namespace std;
    int n;
    cout << "整数を入力してください。:";
    cin >> n;
    if(n > 0){
        cout << "n( "<< n <<" )は正です。"<<endl;
    }
    else{
        cout << "n("<< n << ")は 0 または負です" << endl; 
    }
    // if(条件式) 文
    // 条件式が真なら, 文を実行

}