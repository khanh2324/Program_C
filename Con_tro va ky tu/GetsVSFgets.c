/* ------gets() & fgets()
- GIỐNG NHAU: 1. Cùng chức năng đọc vào xâu ký tự có chứa khoảng trắng.
              2. Trả về xâu ký tự vừa đọc được.
- KHÁC NHAU :                          gets().                                  fgets() Nên dùng
1. Số lượng tham số                 1: (char *str)                             3: (char *str, int n, FILE *stream)
2. Điều kiện dừng                   Khi gặp ký tự newline hoặc end of file.    Khi gặp ký tự newline hoặc n-1 ký tự đã được đọc hoặc end of file
3. Mức độ an toàn tự                Không an toàn                              Có */
#include<stdio.h>
#define N 10
int main(){
    char str[N];
    printf("Enter a message: ");
    fgets(str, N, stdin);
    printf("%s", str);
    return 0;
}

