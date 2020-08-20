#include <stdio.h>
int main(void)
{
  
  float  B, H, ans;     // ส่วนประกาศตัวแปร : จองหน่วยความจำไว้เก็บข้อมูล

  printf("Enter B : ");
  scanf("%d", &B);		 // รับค่าที่ต้องการ
    printf("Enter H : ");
  scanf("%d", &H);		 // รับค่าที่ต้องการ
  
  ans = 0.5*B*H;		 // คำนวณ ตามสูตร
  printf("Answer is %f", ans); // แสดงผลลัพธ์ที่คำนวณได้
  return 0;
}
