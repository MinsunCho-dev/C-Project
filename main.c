//1. 전화번호 관리 프로그램   ( 3명이상)
//- 기능
//  = 새로운 전화번호 입력
//  = 기존 전화번호 삭제
//  = 전화번호 목록중 이름으로 검색
//  = 전화번호 전체 목록 출력
//  = 전화번호 목록 저장
//  = 전화번호 목록 불러오기
//- 데이터 구조
//  = 이름, 전화번호,
//- 관련문법
//  = 구조체
//  = 포인터 배열
//  = 동적메모리 할당
//  = 링크드 리스트, 배열
//  = 파일 입출력
//  = 문자열 비교(검색 , 삭제시 사용)
#include <stdio.h>
#define MAX 300

int isMenu(void);

void inserUser(void)
{
    
}

typedef struct _User {
    char name[20];
    char phoneNum[20];
}User;

int main(void)
{
    int menu;
    menu = isMenu();
    
    switch(menu)
    {
        case 1:
            insertUser();
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        default:
    }
}

int isMenu(void)
{
    int menu;
    
    printf("1. 새로운 전화번호 입력\n");
    printf("2. 기존 전화번호 삭제\n");
    printf("3. 전화번호 목록중 이름으로 검색\n");
    printf("4. 전화번호 전체 목록 출력\n");
    printf("5. 전화번호 목록 저장\n");
    printf("6. 전화번호 목록 불러오기\n");
    scanf("%d", &menu);
    
    return menu;
}

