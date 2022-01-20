#include <stdio.h>
#include <string.h>

int WhiteSpace(char c){
    return (c == ' ' || c == '\t');
}

int countWords(char *arr){
    int count = 0;
    int i;
    int size = strlen(arr);
    for(i = 0; i < size - 1; i++){
        if(!WhiteSpace(arr[i]) && WhiteSpace(arr[i+1]) ||
           !WhiteSpace(arr[i]) && !WhiteSpace(arr[i+1]) && i+1 == size-1) {
            count++;
        }
    }
    return count;
}

int main() {
    char input[1000];
    printf("Nhap cau can dem tu: ");
    fgets(input, 999, stdin);

    int result = countWords(input);
    printf("So tu trong cau: %d", result);
    strupr(input);
    printf("\nCau sau khi viet hoa la: %s", input);
    return 0;
}
