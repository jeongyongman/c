#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int num;
    // puts("숫자입력");
    // scanf("%d",&num); // 입력 받기 위해 멈춰라
    // printf("입력한 숫자: %d",num);
    // ===============================
    // char ch1;
    // int num1;
    // puts("첫번째 알파벳 →");
    // scanf("%c",&ch1);
    // puts("첫번째 숫자 →");
    // scanf("%d",&num1);
    // printf("입력된 알파벳: %c, 입력된 숫자: %d",ch1,num1);
    // ===============================
    char mw;
    char name[10];
    int age;
    puts("성별(남:m,여:w):");
    scanf("%c",&mw); // 입력 받기 위해 멈춰라
    puts("이름:");
    scanf("%s",&name); // 입력 받기 위해 멈춰라
    puts("나이:");
    scanf("%d",&age); // 입력 받기 위해 멈춰라
    printf("이름: %s, 성별: %c, 나이: %d",name,mw,age);

    //한글깨짐 UTF-8 더블 클릭, 화면 상단 Reopen with Encoding 클릭 Korean (EUC-KR)
    // gcc c2.c -o c2.exe
    // .\c2.exe powershell실행시 - 해당폴더에서
    // c2.exe command prompt실행시 - 해당폴더에서
    // Ctrl+Alt+N 실행
    return 0;
}
