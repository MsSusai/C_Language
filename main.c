#include <stdio.h>
#include <windows.h>

int main() {
    int i;
    char name[100];
    printf("����������ƣ�");
    scanf("%s", name);
    printf("���������");
    scanf("%d", &i);
    HWND H = FindWindow(0, name);
    while (i > 0) {
        SendMessage(H, WM_PASTE, 0, 0);
        SendMessage(H, WM_KEYDOWN, VK_RETURN, 0);
        Sleep(10);
        i--;
    }

    return 0;
}
