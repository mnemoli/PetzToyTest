// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "Sprite_Brus_D2.h"

void* operator new (size_t size) { return PetzNew(size); };
void* operator new[](size_t size) { return PetzNew(size); };
void operator delete(void* ptr) { PetzDelete(ptr); };
void operator delete[](void* ptr) { PetzDelete(ptr); };

typedef BOOL(*GET_DEFAULT_LOAD_INFO_PROC)(void*, UINT32, char const*, void*);
typedef UINT32** (*PETZ_NEW)(UINT32);
typedef UINT32* (*SPRITE_BRUSH)();
typedef UINT32* (*INIT_DOWNLOAD)(UINT32*, UINT32*);
typedef VOID(*CLEANUP)(BYTE);
typedef UINT32* (*GET_FILMSTRIP_FROM_DLL)(char const*, void*);

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    DisableThreadLibraryCalls(hModule);
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

bool GetLoadInfo(pfvector<LoadInfo>& loadInfoVector, ELoadType loadType, char const* someString, XLibraryList* xLibraryList) {
    return XDownload::GetDefaultLoadInfoFromDLL(loadInfoVector, loadType, someString, xLibraryList);
}

void GetFilmstrip(void* param1, XLibraryList* xLibraryList) {
    XDownload::GetFilmstripFromDLL("Sprite_Brus_D2", xLibraryList);
}

long GetDLLVersion() {
    return 0x44000007;
}

Sprite_Brus* GetSprite(const LoadInfo &loadInfo, XLibraryList *xLibraryList) {
    int something = loadInfo.vars[194];
    Sprite_Brus_D2* the_result = 0x0;
    HINSTANCE dll = LoadLibrary(L"Petz 4.exe");
    switch (something) {
    case 0: {
        the_result = new Sprite_Brus_D2();
        break;
    }
    default: {
        return 0x0;
        break;
    }
    }
    if (the_result != 0x0) {
        the_result->InitDownload(loadInfo, xLibraryList);
    }
    return the_result;
    }