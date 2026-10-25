#include <stdio.h>
#include<string.h>
int main(){
    char str[]={"mom"};
    int i,flag=1,n=strlen(str);
    for(i=0;i<n/2;i++){
        if(str[i]!=str[n-1-i]){
            flag=0;
        }
    }
    if(flag==1){
        printf(" palindrome string  ");
    }
    else{
        printf("Not palindrome string");
    }

    return 0;
}
