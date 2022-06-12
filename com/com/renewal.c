//
//  renewal.c
//  com
//
//  
//

#include "renewal.h"

void renewal_KR(int *x, int *y, int *z)
{
    int add_con;
    int add_dea;
    int add_cur;
    
    printf("------------------------------------------\n");
    printf("2번 메뉴를 선택 하셨습니다.\n");
    printf("추가 확진자/사망자/완치자 수를 입력하세요\n");
    printf("추가 확진자 :");
    scanf("%d",&add_con);
    printf("추가 사망자 :");
    scanf("%d",&add_dea);
    printf("추가 완치자 :");
    scanf("%d",&add_cur);
    
    *x += add_con;
    *y += add_dea;
    *z += add_cur;
}
