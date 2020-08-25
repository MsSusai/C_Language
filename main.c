#include <stdio.h>
#include <windows.h>

int main() {
    int i;
    char name[100];
    printf("输入对象名称：");
    scanf("%s", name);
    printf("输入次数：");
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
