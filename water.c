#include<stdio.h>
int main(void){
    int T;
    scanf("%d", &T);

    for(T; T>0; T--){
        int a, x, b, y;
        scanf("%d %d %d %d", &a, &x, &b, &y);

        if((a/x)>(b/y)){
            printf("Alice\n");
        }else if((a/x)==(b/y)){
            printf("Bob\n");
        }else{
            printf("Equal\n");
        }
    }
}