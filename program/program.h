#include <windows.h>



int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

    // Create a basic window

    HWND hWnd = CreateWindowEx(0, "STATIC", "My Window", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 300, 200, NULL, NULL, hInstance, NULL);



    // Show the window

    ShowWindow(hWnd, nCmdShow);



    // Message loop to handle window events

    MSG msg;

    while (GetMessage(&msg, NULL, 0, 0)) {

        TranslateMessage(&msg);

        DispatchMessage(&msg);

    }



    return (int)msg.wParam;

}
