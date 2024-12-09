#include<stdio.h>
	int prime(int a){
 int count=0;
 int n;
    for (int i = 1; i <=n; i++) {
        if (n % i == 0) {  
            count++;  
        }
    return count;
}
      }
int main(){
	int n;
       int count = n;
    printf("Nhap so tu nhien bat ky: ");
    scanf("%d", &n);
    if (count == 2) {
        printf("so nay la so nguyen to\n");
    } else {
        printf("so nay ko phai so nguyen to\n");
    }
    
    return 0;
}
