#include <stdio.h>
int main() {
  double dtb,drl;
   scanf("%lf %lf",&dtb,&drl);
  // xet hoc bong xuat sac
  if (dtb>=9.0 && drl>=90){
    printf ("HOC_BONG_XUAT_SAC\n");
  }
 //xet hoc bong gioi
  else if((8.0 <= dtb < 9.0 && (80 <= drl < 90)||(drl >= 90))||( dtb>=90 && 80 <= drl < 90)){
    printf (" HOC_BONG_GIOI\n");
  }
 //xet hoc bong kha
  else if ((7.0 <= dtb < 8.0 && drl >=70)||(8.0 <= dtb < 9.0 && 80 <= drl < 90)||(dtb >= 9.0 && dtb >= 9.0)){
    printf ("HOC_BONG_KHA\n");
  }
  else (dtb < 7.0 && drl < 70){
    printf ("KHONG_DAT\n");
  }
  return 0;
}