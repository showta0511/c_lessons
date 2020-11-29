#include <stdio.h>
int main(void)
{
  int a;
  a = 10;
  /*
    ポインタはアドレスを確認するための変数として*をつける
     値につける名前は任意
     paという新しいデータの枠を作る
  */
  int *pa;
  /*
    aの変数のアドレスにpaという名前をつける
    そこに&a（aという名前がついているデータのアドレスを入れる)
    （もともとアドレスを確認するための変数として定義しているので&a(aという名前の変数のアドレス)をとってくる）
  */
  pa = &a;
  /*
  ここで使う *は関接演算子と言って関接的に宣言したポインタの変数の値をとってくるという意味
  */
  /* paという名前がついているアドレスからデータを参照*/
  printf("%d\n", *pa);
  return 0;
}
