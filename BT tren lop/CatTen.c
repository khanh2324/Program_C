#include<stdio.h>
#include<string.h>
int i,j;
void TachTen(char hoten[], char ten[], char lot[]){
    int n = strlen(hoten);
    for(i = n - 1; i > 0; i--){
        if(hoten[i] == ' '){
            break;
        }
    }
    for(j = 0; j < i; j++){
        lot[j] = hoten[j];
        lot[i] = '\0';
    }
    for(j = i + 1; j < n; j++){
        ten[j - i - 1] = hoten[j];
        ten[n - i - 1] = '\0';
    }
}

int main(){
    char hoten[100], ten[100], lot[100];
    printf("Nhap ho ten cua ban: ");
    gets(hoten);
    for(i = 0; i < strlen(hoten); i++){
        if(hoten[i] == ' ' && hoten[i+1]){
            hoten[i+1] = toupper(hoten[i+1]);
            hoten[0] = toupper(hoten[0]);
        }
    }
    printf("Ho ten cua ban sau khi chuan hoa: ");
    for(i = 0; i < strlen(hoten); i++){
        printf("%c", hoten[i]);
    }
    TachTen(hoten, ten, lot);
    printf("\nHo va ten dem cua ban la : ");
    puts(lot);
    printf("Ten cua ban la: ");
    puts(ten);
    getch();
}