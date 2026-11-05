#include <stdio.h>
int main() {
  float dtb,drl;
   scanf("%f %f",&dtb,&drl);
  // xet hoc bong xuat sac
  if (dtb>=9.0 && drl>=90){
    printf ("HOC_BONG_XUAT_SAC\n");
  }
 //xet hoc bong gioi
  else if((8.0 <= dtb < 9.0 && drl >= 80)||( dtb>=90 && drl>=80)){
    printf (" HOC_BONG_GIOI\n");
  }
 //xet hoc bong kha
  else if ((dtb>=70 && drl>=70)||(dtb>=80 && drl>=70)||(dbt>=90 && drl>=70)){
    printf ("HOC_BONG_KHA\n");
  }
  else {
    printf ("KHONG_DAT\n");
  }
  return 0;
}