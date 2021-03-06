//////////////////////////////////////////////////////////////////////////
//FileName:	Header.h
//Data:		2009-04-11
//Remark:	项目所需头文件、全局变量及函数声明
//////////////////////////////////////////////////////////////////////////
#pragma once

//////////////////////////////////////////////////////////////////////////
//包含头文件
//////////////////////////////////////////////////////////////////////////
#include <WinSock2.h>
#include <commctrl.h>

//Winpcap头文件
#include <stdio.h>
#include <pcap.h>
#include "remote-ext.h"
//各种网络协议声明
#include "Protocol.h"

//////////////////////////////////////////////////////////////////////////
//宏定义部分
//////////////////////////////////////////////////////////////////////////
extern HWND hDlg;

extern arp_hdr ArpHead;

extern BOOL Sending;

extern ether_hdr EtherHead;

BOOL SendArpPacket(void);

BOOL MacStrToMac(WCHAR *MacStr,unsigned char *Mac);

BOOL FillHeaders();