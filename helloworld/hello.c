#include <stdio.h>
 
int main(int argc, char const *argv[])
{
    printf("안녕하세요.\n");
    printf("c언어는 \"처음맨\" 입니다.\n");
    int a;
    a=2;
    printf("a에 입력된 숫자는 %d 입니다.\n",a); 
    int b=3;
    printf("a는 %d, b는 %d 입니다.\n",a,b); 
    printf("a: %d, b: %d, a+b=%d\n",a,b,a+b); 
    // int 변수 → %d : 정수
    // char 변수 → %c : 1byte문자(숫자)
    // char [변수] → %s : 문자열
    // float 변수 → %f : 실수
    char x='a';
    printf("입력된 문자는 %c 입니다.\n",x);

    char y[10]="처음맨"; // list 0~6 빈방을 만들어주고
    // EUC-KR 인코딩: 한글 한 글자는 2바이트
    // UTF-8 인코딩: 한글 한 글자는 3바이트
    printf("안녕하세요. %s 입니다.\n",y);
    
    // gcc hello.c -o hello.exe
    // .\hellowold\hello.exe 파워셀 실행시
    // hello.exe 커맨드프롬프트 실행시
    // Ctrl+Alt+N 실행
    return 0;
}
