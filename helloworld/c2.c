#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int num;
    // puts("�����Է�");
    // scanf("%d",&num); // �Է� �ޱ� ���� �����
    // printf("�Է��� ����: %d",num);
    // ===============================
    // char ch1;
    // int num1;
    // puts("ù��° ���ĺ� ��");
    // scanf("%c",&ch1);
    // puts("ù��° ���� ��");
    // scanf("%d",&num1);
    // printf("�Էµ� ���ĺ�: %c, �Էµ� ����: %d",ch1,num1);
    // ===============================
    char mw;
    char name[10];
    int age;
    puts("����(��:m,��:w):");
    scanf("%c",&mw); // �Է� �ޱ� ���� �����
    puts("�̸�:");
    scanf("%s",&name); // �Է� �ޱ� ���� �����
    puts("����:");
    scanf("%d",&age); // �Է� �ޱ� ���� �����
    printf("�̸�: %s, ����: %c, ����: %d",name,mw,age);

    //�ѱ۱��� UTF-8 ���� Ŭ��, ȭ�� ��� Reopen with Encoding Ŭ�� Korean (EUC-KR)
    // gcc c2.c -o c2.exe
    // .\c2.exe powershell����� - �ش���������
    // c2.exe command prompt����� - �ش���������
    // Ctrl+Alt+N ����
    return 0;
}
