#include<stdio.h>
#include<stdlib.h>

int countDigitOne(int n) {
    int i=1;
    if (n < 1){
    return 0;
}
int count = 0;
while(i<=n){
    int num = i;
    while (num > 0){
        if (num % 10 == 1){
            count++;
        }
        num /= 10;
    }
    i++;
}
return count;
}

int main(){
int n=21;
int z=countDigitOne(n);
printf("This is master");
    printf("The numbers of 1's is ");
printf("%d",z);
    printf("The new one in second branch");
    printf("same as above");
    printf("ueah did this");
return 0;
}
