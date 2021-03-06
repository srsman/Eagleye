#pragma once
#include<string>
#include "EntityClass.h"
#include "SessionSocket.h"
#include "Connection.h"

using namespace std;

/************************************************
Class name: CIO
Create by：林达意 
CreateDate：2013-08-22
Explain：读写模块方法类 
************************************************/ 
class CIO
{
public:
	static void ReadConfigFile();	//读配置文件
	static void WriteConfigFile();	//写配置文件
	static void ReadLogFile();		//读日志文件
	static void WriteLogFile();		//写日志文件
	static void AutoRun();			//读写注册表实现自动运行
};

/************************************************
Class name: CVisual
Create by：林达意 
CreateDate：2013-08-22
Explain：可视化模块 
************************************************/ 
class CVisual
{
public:
	static void Visualization();		//曲线绘制
};

/************************************************
Class name: CServerMessageHandle
Create by：林达意 
CreateDate：2013-08-22
Explain：服务端消息处理模块
************************************************/ 
class CMessage
{
public:
	static void Initial();			//初始化消息响应
	static void Process();			//进程消息响应
};

/************************************************
Class name: CFilter
Create by：林达意 
CreateDate：2013-08-22
Explain：筛选模块
************************************************/ 
class CFilter
{
public:
	static void Filter(CString &, CSessionSocket &, CServerConfig &, CConnection &);			//过滤进程
	static void KillProcess(CString &nPid,CSessionSocket &rSessionSocket);		//构造查杀指令
	static void Command();			//构成CMD指令
};

