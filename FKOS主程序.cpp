#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#include <Tlhelp32.h>
#pragma comment( linker, "/subsystem:windows /entry:mainCRTStartup" )
using namespace std;
#define N 21
int n;
string a, s;
HWND h = GetForegroundWindow();
void down(int &n, int &m) {
	#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode;
	GetConsoleMode(hStdin, &mode);
	mode &= ~ENABLE_QUICK_EDIT_MODE;
	SetConsoleMode(hStdin, mode);
	if (KEY_DOWN(VK_LBUTTON)) {
		POINT p;
		GetCursorPos(&p);
		ScreenToClient(h, &p);
		n = p.x;
		m = p.y;
	}
}void colorout(auto s, int front_color, int back_color) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, BACKGROUND_INTENSITY | back_color * 16 | FOREGROUND_INTENSITY | front_color);
	cout << s;
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
}
char *StringToChar(const string &object) {
	char *result = (char *) object.data();
	return result;
}

void AutoRun(const string &RegName) {
	string temp = R"(REG ADD HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Run /v )";
const string &autorunName = RegName;
}
void full_screen() {
	HWND hwnd = GetForegroundWindow();
	int cx = GetSystemMetrics(SM_CXSCREEN);
	int cy = GetSystemMetrics(SM_CYSCREEN);
	
	LONG l_WinStyle = GetWindowLong(hwnd, GWL_STYLE);
	SetWindowLong(hwnd, GWL_STYLE, (l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);
	
	SetWindowPos(hwnd, HWND_TOP, 0, 0, cx, cy, 0);
}

void O() 
{
	HWND hwnd = GetConsoleWindow();
	LONG Style;	//窗口风格
	Style = GetWindowLong(hwnd, GWL_STYLE);	 // 得到窗口风格   
	Style = Style & ~WS_CAPTION;			 //去掉标题栏
	SetWindowLong(hwnd, GWL_STYLE, Style);	
}
#include <windows.h>

// 定义一个函数，模拟按下win+c按键
void win(char a)
{
	// 获取win键的虚拟键码
	int win_key = VK_LWIN;
	
	// 获取c键的虚拟键码
	int c_key = a;
	
	// 模拟按下win键
	keybd_event(win_key, 0, 0, 0);
	
	// 模拟按下c键
	keybd_event(a, 0, 0, 0);
	
	// 模拟松开c键
	keybd_event(a, 0, KEYEVENTF_KEYUP, 0);
	
	// 模拟松开win键
	keybd_event(win_key, 0, KEYEVENTF_KEYUP, 0);
}
int main() {
	HWND hwndy;
	for(int i=0;i<10000;i++){
		hwndy=FindWindow("ConsoleWindowClass",NULL);	//获取窗口句柄
		if(hwndy)	//如果找到了
		{
			ShowWindow(hwndy,SW_HIDE);	//隐藏之
		}
	}
	char title[100];
	HWND hwnd;
	GetConsoleTitle(title,100);
	hwnd=FindWindow(NULL,title);
	MoveWindow(hwnd,520,0,300,300,TRUE);
	HWND hWnd = ::GetForegroundWindow();
	::SetWindowPos(hWnd, HWND_TOPMOST, 0, 0, 100, 100, SWP_NOMOVE | SWP_NOSIZE);
	O();
	system("mode con cols=30 lines=1");
	cout<<"MCOS [X] v2308";
	Sleep(5000);
	ShowWindow(GetForegroundWindow(),0);//获取最前端窗口的句柄，然后通过ShowWindow隐藏 
//	HWND task;
//	task=FindWindow("Shell_TrayWnd",NULL);
//	ShowWindow(task,SW_HIDE);

	int x=0,y=0,cen=0,x1=0,y1=0;
	cout<<"MCOS x 2.0";
	hwndy=FindWindow("ConsoleWindowClass",NULL);	//获取窗口句柄
	if(hwndy)	//如果找到了
	{
		ShowWindow(hwndy,SW_HIDE);	//隐藏之
	}

	
	while(1){
		down(x,y);
//		cout<<"x:"<<x<<" y:"<<y;
		if(x>(-106) and x<(-52) and y>(-98) and y<(-41)){
			win('\0');
			x=0,y=0; 
			Sleep(1000);
		}
		if(x>(-110) and x<(-79) and y>590 and y<616){
			win('C');
			x=0,y=0; 
			Sleep(1000);
		}
		if(x>(-78) and x<(-47) and y>590 and y<616){
			win('A');
			x=0,y=0; 
			Sleep(1000);
		}
		Sleep(100);
	}
	return 0;
}

