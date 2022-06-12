//
//  rec.c
//  com
//
//  
#include "rec.h"


void record_KR (int *x, int *y, int *z)
{
    char date[10];
    
   
    printf("작성 일자를 입력하세요(YYYYMMDD)\n");
    printf("-->");
    scanf("%s",&date);
    
    
    FILE *cp; // 평가 항목 7 : 파일 입출력
    cp = fopen(date, "w");
    fprintf(cp,"%s %d\n","누적 확진자 수 :",*x);
    fprintf(cp,"%s %d\n","누적 사망자 수 :",*y);
    fprintf(cp,"%s %d\n","누적 완치자 수 :",*z);
    
    fclose(cp);
}

