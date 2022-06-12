//
//  main.c
//  com
/*
컴퓨터 프로그래밍 평과 과제
확과 : 컴퓨터공학부             // 평가 항목 1 : 과제 설명
학번 : 202202920
이름 : 이희서
*/
// 국내 코로나 환진자/사망자/완치자 등의 정보를 조회/갱신/기록 하는 프로그램입니다.
// 해당 프로그램 정보들의 초기값은 (https://coronaboard.kr) 의 6월 12일 수치들을 바탕으로 기록되었습니다.


#include <stdio.h>
#include "current.h"
#include "renewal.h"    // 평가항목 8 : 다중 소스 파일 사용
#include "rec.h"

int main()
{
    struct COVID{   //평가 항목 5 : 구조체 사용
        int *convi; // 평가학목 4 : 포인터 사용
        int *death;
        int *cured;
    };

    struct COVID KR = {18218078,24351,969524};
    int repeat=1;
    int menu;
    
    while(repeat==1){
        printf("------------------------------------------\n");
        printf("다음 중 원하는 기능을 선택하세요\n");
        printf("1. 국내 코로나 현황 조회\n");
        printf("2. 국내 코로나 현황 갱신\n");
        printf("3. 국내 코로나 현황 기록\n");
        printf("4. 프로그램 종료\n");
        printf("-->");
        scanf("%d",&menu);
        
        if (menu==1){
            current_KR(&KR.convi, &KR.death, &KR.cured); //평가 항목 2 : 함수 사용
        }
        
        else if (menu==2){
            renewal_KR(&KR.convi, &KR.death, &KR.cured);
        }
        
        else if (menu==3){
            record_KR(&KR.convi, &KR.death, &KR.cured);
        }
        
        else if (menu==4)
            repeat++;
        else
            printf("올바른 값을 입력하세요");
    }
    
    return 0;
}
