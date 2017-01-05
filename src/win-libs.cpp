#pragma comment(lib, "user32")
#pragma comment(lib, "advapi32")
#pragma comment(lib, "shlwapi")
#pragma comment(lib, "crypt32")
#pragma comment(lib, "ws2_32")
#pragma comment(lib, "shell32")
#pragma comment(lib, "iphlpapi")


#pragma comment(lib, "bdb")
#pragma comment(lib, "leveldb")
#pragma comment(lib, "mpir")
#pragma comment(lib, "openssl")
#pragma comment(lib, "libevent")

#ifdef USE_UPNP
#	pragma comment(lib, "miniupnpc")
#endif

#ifdef USE_QT
#	pragma comment(lib, "imm32")
#	pragma comment(lib, "winmm")

#	pragma comment(lib, "protobuf")

#	include <QtPlugin>

Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)

#if 1
#	pragma comment(lib, "Qt5Core")
#	pragma comment(lib, "Qt5Network")
#	pragma comment(lib, "Qt5Gui")
#	pragma comment(lib, "qtpng")
#	pragma comment(lib, "Qt5Widgets")
#	pragma comment(lib, "qtharfbuzzng")
#	pragma comment(lib, "qtmain")
#	pragma comment(lib, "qtpcre")
#	pragma comment(lib, "qwindows")
#	pragma comment(lib, "Qt5PlatformSupport")

#else

#	pragma comment(lib, "Qt5Cored")			//!!!T
#	pragma comment(lib, "Qt5Networkd")
#	pragma comment(lib, "Qt5Guid")
#	pragma comment(lib, "Qt5Widgetsd")
#	pragma comment(lib, "qtharfbuzzngd")
#	pragma comment(lib, "qtmaind")
#	pragma comment(lib, "qtpcred")
#	pragma comment(lib, "qwindowsd")
#	pragma comment(lib, "Qt5PlatformSupportd")

#endif

#ifndef _WINDLL
#	pragma comment(lib, "groestlcoin")
#endif



#include <windows.h>
#undef WinMain

extern "C" {

	int WINAPI WinMain(
		_In_ HINSTANCE hInstance,
		_In_ HINSTANCE hPrevInstance,
		_In_ LPSTR     lpCmdLine,
		_In_ int       nCmdShow
		);

	int WINAPI wWinMain(
		_In_ HINSTANCE hInstance,
		_In_ HINSTANCE hPrevInstance,
		_In_ LPWSTR     lpCmdLine,
		_In_ int       nCmdShow
		) {

		return WinMain(hInstance, hPrevInstance, 0, nCmdShow);


	}
} // "C"

#endif // USE_QT
