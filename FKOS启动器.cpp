#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main(){
	HWND hwnd = GetForegroundWindow();
	int cx = GetSystemMetrics(SM_CXSCREEN);           
	int cy = GetSystemMetrics(SM_CYSCREEN);           
	LONG l_WinStyle = GetWindowLong(hwnd,GWL_STYLE);  
	SetWindowLong(hwnd,GWL_STYLE,(l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);
	SetWindowPos(hwnd, HWND_TOP, 0, 0, cx, cy, 0);
	cout<<"MCOS X 2.2308\n";
	cout<<"方块工作室 2023\n";
	cout<<"FKstart << mydock服务启动中...\n";
	system("start C:\\FKOS\\MyDockFinder\\dock.exe");
	cout<<"[mydock任务栏启动完毕]\n";
	Sleep(4000);
	cout<<"FKstart << 正在加载FK GUI ...\n";
	system("start yc.bat");
	system("UI.exe 1");
	cout<<"[预处理完毕]\n";
	cout<<"FKstart << 正在加载时间模块 ...";
	system("start time.exe");
	cout<<"[时间显示模块启动完毕]\n";
	cout<<"FKstart << 正在为主程序预处理 ...";
	cout<<"FKstart << 正在加载主程序代码";
	Sleep(100);
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"                                                                           ____\n";
	cout<<"                                                                         _|__  | MCOS x 2.2308\n";
	cout<<"                                                                        | |__|_| 方块工作室\n";
	cout<<"                                                                        |____|  BLOCK STUDIO\n";
	Sleep(3000);
	for(int i=0;i<10;i++){
		HWND task;
		task=FindWindow("Shell_TrayWnd",NULL);
		ShowWindow(task,SW_HIDE);
	}
	system("start C:\\FKOS\\FKOS主程序.exe");
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"                                                                           ____            \n";
	cout<<"                                                                         _|__  |  ______________________\n";
	cout<<"                                                                        | |__|_| |海内存知己，天涯若比邻|\n";
	cout<<"                                                                        |____|    -------------请稍等...|\n";
	Sleep(4000);
	return 0;
}
