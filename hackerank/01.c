#include <stdio.h>

int main(){
	char s[9];
    for(int i=0;i<9;i++){
        scanf("%c",&s[i]);
    }
    char vowel[6] = {'A','E','I','o','U','Y'};

    for (int i=0;i<6;i++){
        if (s[2]==vowel[i]){
            printf("invalid");
            return 0;
        }
    }
    if (s[0]+s[1] % 2 != 0){
        printf("invalid");
        return 0;
    }
    if (s[3]+s[4] % 2 != 0){
        printf("invalid");
        return 0;
    }
    if (s[4]+s[5] % 2 != 0){
        printf("invalid");
        return 0;
    }
    if (s[7]+s[8] % 2 != 0){
        printf("invalid");
        return 0;
    }
        printf("valid");

}
