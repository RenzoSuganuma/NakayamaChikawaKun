#include <stdio.h>
#include <Windows.h>
#include<WinUser.h>
#pragma comment(lib, "winmm.lib")   // MSVC 用
// なかやまちいかわくん ver 0.0.2
int ChikawaSequence(char c)
{
    for (int i = 0; i < 10; i++) {
        int msgboxID = MessageBox(
            NULL,
            (LPCWSTR)L"コンピュータでエラーが見つかりました",
            (LPCWSTR)L"致命的なエラー",
            MB_ICONERROR
        );
    }
    int msgboxID1 = MessageBox(
        NULL,
        (LPCWSTR)L"｜｜｜｜｜",
        (LPCWSTR)L"＃＃＃＃＃",
        MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON1
    );
    if (c == getchar()) return 1;
    PlaySound(TEXT("assets\\muscle_arnorld.wav"), NULL, SND_FILENAME);
    switch (msgboxID1)
    {
    case IDNO:
        PlaySound(TEXT("assets\\chikawa_yah.wav"), NULL, SND_FILENAME);
        PlaySound(TEXT("assets\\muscle_dah.wav"), NULL, SND_FILENAME);
        break;
    case IDYES:
        PlaySound(TEXT("assets\\chikawa_wa.wav"), NULL, SND_FILENAME);
        PlaySound(TEXT("assets\\muscle_power.wav"), NULL, SND_FILENAME);
        break;
    }
    return msgboxID1;
}
int main() {
    char c;
    ChikawaSequence('a');
}