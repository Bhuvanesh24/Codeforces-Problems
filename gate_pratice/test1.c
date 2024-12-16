#include<stdio.h>

int main(){
    char ch[10] = "abcdefghij";
    int ans = 0;
    for(int i=0;i<10;i++){
        ans += (ch[i] - 'a');
    }
    printf("%d",ans);
}