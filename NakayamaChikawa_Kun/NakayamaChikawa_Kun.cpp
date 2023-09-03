#include <stdio.h>
#include <Windows.h>
#include<WinUser.h>
#pragma comment(lib, "winmm.lib")   // MSVC 用
int DisplayResourceNAMessageBox()
{
    int msgboxID = MessageBox(
        NULL,
        (LPCWSTR)L"ちいかわとなかやまきんにくんは好きかい？（＾ω＾）",
        (LPCWSTR)L"ちいいいいいいかわああ",
        MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON1
    );
    switch (msgboxID)
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
    return msgboxID;
}
int main() {
    for (int i = 0; i < 5; i++) {
        int msgboxID = MessageBox(
            NULL,
            (LPCWSTR)L"コンピュータでエラーが見つかりました",
            (LPCWSTR)L"致命的なエラー",
            MB_ICONWARNING
        );
        switch (msgboxID)
        {
        case IDNO:
            break;
        case IDYES:
            break;
        }
    }
    int i = DisplayResourceNAMessageBox();
}