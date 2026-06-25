#include <stdio.h>

int main() {
    int num, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int temp=num; temp>0; temp/=10){
    
        rem = temp % 10;
        rev = rev * 10 + rem;
        
    }

    if (num == rev)
        printf("%d is a Palindrome Number\n", num);
    else
        printf("%d is NOT a Palindrome Number\n", num);

    return 0;
}
