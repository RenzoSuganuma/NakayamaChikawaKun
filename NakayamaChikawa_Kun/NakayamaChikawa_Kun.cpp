#include <stdio.h>
#include <Windows.h>
#pragma comment(lib, "winmm.lib")   // MSVC 用
void introductionsequence() {
    printf("はーぴー：リラックスできる音楽を流しますね。\n");
    printf("はーぴー：～～～♪\n");
    PlaySound(TEXT("assets\\gb1.wav"), NULL, SND_FILENAME);
    printf("はーぴー：精一杯演奏してみました。\n");
}
int main() {
    introductionsequence();
}