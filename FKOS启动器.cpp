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
	cout<<"���鹤���� 2023\n";
	cout<<"FKstart << mydock����������...\n";
	system("start C:\\FKOS\\MyDockFinder\\dock.exe");
	cout<<"[mydock�������������]\n";
	Sleep(4000);
	cout<<"FKstart << ���ڼ���FK GUI ...\n";
	system("start yc.bat");
	system("UI.exe 1");
	cout<<"[Ԥ�������]\n";
	cout<<"FKstart << ���ڼ���ʱ��ģ�� ...";
	system("start time.exe");
	cout<<"[ʱ����ʾģ���������]\n";
	cout<<"FKstart << ����Ϊ������Ԥ���� ...";
	cout<<"FKstart << ���ڼ������������";
	Sleep(100);
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"                                                                           ____\n";
	cout<<"                                                                         _|__  | MCOS x 2.2308\n";
	cout<<"                                                                        | |__|_| ���鹤����\n";
	cout<<"                                                                        |____|  BLOCK STUDIO\n";
	Sleep(3000);
	for(int i=0;i<10;i++){
		HWND task;
		task=FindWindow("Shell_TrayWnd",NULL);
		ShowWindow(task,SW_HIDE);
	}
	system("start C:\\FKOS\\FKOS������.exe");
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"                                                                           ____            \n";
	cout<<"                                                                         _|__  |  ______________________\n";
	cout<<"                                                                        | |__|_| |���ڴ�֪��������������|\n";
	cout<<"                                                                        |____|    -------------���Ե�...|\n";
	Sleep(4000);
	return 0;
}
