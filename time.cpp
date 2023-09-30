#include <Windows.h>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>
#include <thread>
#include <conio.h>

void clrscr() {    //清空屏幕
	HANDLE hdout = GetStdHandle(STD_OUTPUT_HANDLE);    
	COORD pos = {0, 0};    
	SetConsoleCursorPosition(hdout, pos);    //光标定位到窗口左上角
}
using namespace std;
int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
	HWND hWnd = GetConsoleWindow();
	RECT rect;
	GetWindowRect(hWnd, &rect);
	int width = 70;
	int height = 35;
	
	
	while (true)
	{
		std::time_t t = std::time(nullptr);
		int x = 10;
		int y = GetSystemMetrics(SM_CYSCREEN) - height-10;
		SetWindowLong(hWnd, GWL_STYLE, GetWindowLong(hWnd, GWL_STYLE) & ~WS_CAPTION);
		SetWindowPos(hWnd, HWND_BOTTOM, x, y, width, height, SWP_SHOWWINDOW);
		
		system("cls");
		std::cout << std::put_time(std::localtime(&t), "%H:%M") ;
		Sleep(1000);
		
	}
	return 0;
}

