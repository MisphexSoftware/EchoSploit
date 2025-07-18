#include "pch.h"
#include <Windows.h>

extern "C" __declspec(dllexport) LRESULT CALLBACK NextHook(int code, WPARAM wParam, LPARAM lParam) {
    return CallNextHookEx(NULL, code, wParam, lParam);
}

uintptr_t roblox_base = (uintptr_t)GetModuleHandleA(0);

using print = DWORD64(__cdecl*)(unsigned int type, const char* message, ...);
print roblox_print = reinterpret_cast<print>(roblox_base + 0x12DB520);


void start() {
    MessageBoxA(0, "Echosploit WYN.GG ON TOP", "", MB_TOPMOST);
    roblox_print(1LL, "Echosploit WYN.GG ON TOP");
    roblox_print(2LL, "Echosploit WYN.GG ON TOP");
    roblox_print(3LL, "Echosploit WYN.GG ON TOP");
    roblox_print(0LL, "Echosploit WYN.GG ON TOP");

}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        start();

    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}