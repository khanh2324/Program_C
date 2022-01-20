/*   So sánh malloc vs new
                New                                                     Malloc
        1.Gọi hàm khi khởi tạo                                      Không gọi hàm khi khởi tạo
        2.Là 1 toán tử                                              Là 1 hàm 
        3. Có thể override(ghi đè)                                  Không the override
        4.Cấp phát bộ nhớ từ vùng nhớ trống                         Cap phat bo nhơ tu heap
        5.Việc tính toán lượng bộ nhớ cần cấp phát được             Việc tính toán được thực hiện thủ công
        thực hiện tư động bởi compiler
        6.Trả về chình xác kiểu dữ liệu cần cấp phát                Trả về void *
        7.Khi cấp phát thất bại xây la ngoại liệu                   Thất bại trả về NULL */
#include<iostream>
using namespace std;

int main(){
    int *a = new int(10);
    cout <<"value of a: " << *a << endl;
    return 0;
}
