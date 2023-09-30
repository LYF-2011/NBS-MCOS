#include <windows.h>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	string s, t = argv[1];
	if (t == "1") {
		s = "C:\\FKOS\\UI.png";
	}
	if(t=="2c"){
		s = "C:\\FKOS\\cui.png";
	}
	if(t=="2s"){
		s = "C:\\FKOS\\sui.png";
	}
	if (t == "3") {
		system("xs.bat");
		s = "C:\\FKOS\\ig.png";
	}
	SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID*)s.c_str(), SPIF_SENDCHANGE);
	return 0;
}
