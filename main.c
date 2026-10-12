#include <stdio.h>

int main(void) {
    /* 課題0301: prinfのカッコの中を記入して、変数iの中身を表示させてください */
    int i;
    i = 100;

    printf("値段を入れてください: ");
    scanf("%d",&i);

    printf("このお菓子は税込み%d円だよ\n",(int)(i * 1.1)); 
    return 0;
}
