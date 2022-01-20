#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Luu tru cac phan tu trong mang trong lan sinh ke tiep 
// [0,0,0,0,0] thay cho 0000 vi so 0 khong duoc hien thi trong he so tu nhien
int arrDigit[20];
// Dieu kien dung cua thuat toan sinh
int isStop = 0; // = 1 thi chuong trinh dung

// khoi tao gia tri dau tien [1,0,0,0,0]
void initFirstNumber(int length){
  int i;
  // sinh ra mang [0,0,0,0,0]
  for(i=1;i<=length;i++) arrDigit[i] = 0;
  // gan mang tai vi tri dau tien = 1 ta duoc [1,0,0,0,0]
  if(length > 1) arrDigit[1] = 1;
}

void printNumber(int length){
  int i;
  // kiem tra cac dieu kien cua bai toan, neu dung thi moi in
  if(isPalindrome(arrDigit, length) == 1 && isPrime(arrDigit,length) == 1){
    // in ra tung phan tu trong mang [1,0,0,0,0]
    for(i=1;i<=length;i++) printf("%d", arrDigit[i]);
    // xuong dong
    printf("\n");
  }
}

void genNextNumber(int length){
  int i = length; // duyet tu cuoi mang len
  // neu i > 0 va gia tri tai i = 9
  while(i>0 && arrDigit[i] == 9){
    // gan gia tri tai i = 0
    arrDigit[i] = 0;
    // lui ve vi tri phan tu phia truoc no
    i--;
  }
  if(i>0){
    // tang them mot don vi cho thanh phan nay
    arrDigit[i]++;
  }else{
    isStop = 1;
  }
}
// vd truyen vao mang [3,0,3,0,3] va do dai chuoi do la 5
int isPalindrome(int arrDigit[], int length){
  // i chay tu gia tri dau tien tro di, j chay tu gia tri cuoi cung tro ve
  int i = 1, j = length;
  // khi nao i con nho hon hoac bang j thi con kiem tra
  while(i<=j){
    // neu tai vi tri i ma mang co phan tu khac so voi phan tu tai vi tri j--
    // ta tra ve day khong phai so thuan nghich
    if(arrDigit[i]!=arrDigit[j]) return 0;
    // tang i, giam j de tien sau vao vi tri chinh giua cua mang
    i++;
    j--;
  }
  // mac dinh tra ve so nay la so thuan nghich
  return 1;
}

// Kiem tra xem co phai so nguyen to
int isPrime(int arrDigit[], int length){
  // chuyen doi mang [3,0,3,0,3] thanh so 30303 thuoc kieu "long"
  long longNumber = 0;int k,p=1;
  for(k = length-1; k >= 0; k--){
		// cong don tu cuoi len
		longNumber += arrDigit[k] * p;
		p*=10;
	}
  // check xem n co phai so nguyen to hay khong
  // so nguyen to la so chi chia het cho chinh no va 1, so 0 va 1 k phai so nguyen to
  if(longNumber < 2) return 0;
  int i;
  // kiem tra tu 2 den sqrt cua N, neu co chia het cho so nao thi do k phai so nguyen to
  for(i=2; i <= sqrt(longNumber); i++){
    if(longNumber % i == 0) return 0;
  }
  // mac dinh la so nguyen to, tru khi hai truong hop tren xay ra
  return 1;
}

void genAllNumber(int length){
  // Khoi tao gia tri ban dau
  initFirstNumber(length);
  while(isStop!=1){
    // In ra phan tu trong mang hien tai
    printNumber(length);
    // Sinh day so tiep theo
    genNextNumber(length);
  }
}

int main(int argc, char *argv[]) {
  int n;
  // hien ti ra ngoai man hinh yeu cau
  printf("Nhap vao do dai chuoi can tim\n");
  // lay vao du lieu nguoi dung vua nhap
  scanf("%d",&n);
  // liet ke toan bo cac so thoa man dieu kien cua dau bai
  genAllNumber(n);
  // tra ve cua ham main
	return 0;
}
