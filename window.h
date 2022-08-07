#ifndef WINDOW_H_
#define WINDOW_H_

#include <Windows.h>
#include <string>

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

class Window
{
public:
    Window();
    Window(const Window&) = delete;
    Window& operator =(const Window&) = delete;
    ~Window();

    bool ProcessMessages();
private:
    HINSTANCE m_hInstance;
    HWND m_hWnd;
};

#endif