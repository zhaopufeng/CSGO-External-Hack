#include "GameData.h"

// 当前开发版本
const std::wstring devVersion = L"0.6a";

// 目标进程ID
DWORD targetPID;
// 目标进程名称
const std::wstring targetProcName = L"csgo.exe";
// 目标窗口名称
const std::wstring targetWndName = L"Counter-Strike: Global Offensive";

// 目标窗口句柄
HWND hTargetWnd;
HWND hOverlayWnd;
// 目标窗口Rect
RECT targetRect;
// 目标窗口宽度
unsigned int targetWndWidth;
// 目标窗口长度
unsigned int targetWndHeight;

// 本地玩家（天师苍邪）
std::unique_ptr<Player> localPlayer = std::make_unique<Player>();
// 所有的队友
std::vector<std::unique_ptr<Player>> teammates;
// 所有的敌人
std::vector<std::unique_ptr<Player>> enemy;

namespace FunctionEnableFlag
{
	bool bHealthReader = false;
	bool bTriggerBot = false;
	bool bOverlay = false;
	bool bESP = false;
	bool bNULL = false;
}

namespace ThreadExistFlag
{
	bool 
}
