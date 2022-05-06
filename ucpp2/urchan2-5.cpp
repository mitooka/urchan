#include <iostream> //if文ほかの書き方
int main(){
    using namespace std;
    int n;
    cout << "整数を入力してください。:";
    cin >> n;
    //bool c{n>0}; //条件式を変巣にいれることができる bool型 True or False
    /*関係演算子 >, <, >=, <=, != ==*/
    if(n > 0){ 
        cout << "n( "<< n <<" )は正です。"<<endl;
        //{}で囲まれた 複文 (block statement)
    }
    else if (n==0)
    {
        cout << "n(" << n << ")は0です."<< endl;
    }
    
    else{
        cout << "n("<< n << ")は負です" << endl; 
    }
    // if (条件式) 文:if文
    //if文 (条件式) 文1 else if(条件式) 文2 else 文 :文3
}