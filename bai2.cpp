//Trần Hoàng Vĩ
#include <stdio.h>

int isSoChinhPhuong(int n)
{
    for(int i = 1; i*i<= n; i++)
    {
        if(i*i == n)
        {
            return 1;
        }
    }
    return 0;
}

int main(void){
   int n = 50;
   int count = 0;
   for (int i = 0; i<n; i++)
   {
       if(isSoChinhPhuong(i) == 1)
       {
           count++;
           printf("%d ", i);
       }
   }
   printf("\nSo luong so chinh phuong la %d", count);
}
