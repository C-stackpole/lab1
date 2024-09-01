#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter string: ");
    scanf("%99s", str);

    int low = 0;
    int high = strlen(str) - 1;
    int isPalindrome = 1;

    while(low < high){
        if(str[low] != str[high]){
            isPalindrome = 0;
            break;
        }
        low++;
        high--;
    }

    if(isPalindrome){
        printf("Is a palindrome.\n");
    }
    else{
        printf("Not a palindrome.\n");
    }

    return 0;
}