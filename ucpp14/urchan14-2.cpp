extern int x;// external = 外部の 
//外部に定義されている変数x
//extern宣言を用いることによって名前さえ分かればどこからでもファイルの読み書きができてしまう

void change_x(int v){
    x = v;
}