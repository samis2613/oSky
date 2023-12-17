/* oSpy Skype Debug Hook */
/* Author : Ouanilo MEDEGAN (Skype 2.5) */
/* Edited by : samis2613 (Added Skype 1.4, 3.8, 4.2, and 5.5) */

#include "stdafx.h"
#include "hooking.h"
#include "logging.h"

void skype_log(char *str)
{
	if ((str) && (strstr(str, "UI-[") == NULL))
	{
		str[strlen(str) - 1] = 0;
		message_logger_log_message(_T("SkypeLog"), NULL, MESSAGE_CTX_INFO, _T("%hs"), str);
	}
}

void
hook_skype14()
{
	void *func_addr;
	void *var1_addr;
	void *var2_addr;

	int oldProtect;

	if (cur_process_is(_T("Skype14.exe")))
	{
		func_addr = (void *)0xA37BF8;
		var1_addr = (void *)0xA37D80;
		var2_addr = (void *)0xA37D84;
	}
	else
		return ;

	VirtualProtect(func_addr, 4, PAGE_READWRITE, (PDWORD)&oldProtect);
	*(DWORD *)func_addr = (DWORD)skype_log; //Override built-in & empty logging function
	VirtualProtect(func_addr, 4, oldProtect, (PDWORD)&oldProtect);
	VirtualProtect(var1_addr, 8, PAGE_READWRITE, (PDWORD)&oldProtect);
	*(DWORD *)var1_addr = (DWORD)0x01; //Set logging to YES
	*(DWORD *)var2_addr = (DWORD)0x00; //Dont Log Hour ! (~ 0x01)
	VirtualProtect(var1_addr, 8, oldProtect, (PDWORD)&oldProtect);
}

void
hook_skype25()
{
	void *func_addr;
	void *var1_addr;
	void *var2_addr;

	int oldProtect;

	if (cur_process_is(_T("Skype25.exe")))
	{
		func_addr = (void *)0xB9DFC8;
		var1_addr = (void *)0xB9E150;
		var2_addr = (void *)0xB9E154;
	}
	else
		return ;

	VirtualProtect(func_addr, 4, PAGE_READWRITE, (PDWORD)&oldProtect);
	*(DWORD *)func_addr = (DWORD)skype_log; //Override built-in & empty logging function
	VirtualProtect(func_addr, 4, oldProtect, (PDWORD)&oldProtect);
	VirtualProtect(var1_addr, 8, PAGE_READWRITE, (PDWORD)&oldProtect);
	*(DWORD *)var1_addr = (DWORD)0x01; //Set logging to YES
	*(DWORD *)var2_addr = (DWORD)0x00; //Dont Log Hour ! (~ 0x01)
	VirtualProtect(var1_addr, 8, oldProtect, (PDWORD)&oldProtect);
}

void
hook_skype38()
{
	void *func_addr;
	void *var1_addr;
	void *var2_addr;

	int oldProtect;

	if (cur_process_is(_T("Skype38.exe")))
	{
		func_addr = (void *)0xC0DA28;
		var1_addr = (void *)0xC0DA24;
		var2_addr = (void *)0xC0DA20;
	}
	else
		return ;

	VirtualProtect(func_addr, 4, PAGE_READWRITE, (PDWORD)&oldProtect);
	*(DWORD *)func_addr = (DWORD)skype_log; //Override built-in & empty logging function
	VirtualProtect(func_addr, 4, oldProtect, (PDWORD)&oldProtect);
	VirtualProtect(var1_addr, 8, PAGE_READWRITE, (PDWORD)&oldProtect);
	*(DWORD *)var1_addr = (DWORD)0x01; //Set logging to YES
	*(DWORD *)var2_addr = (DWORD)0x00; //Dont Log Hour ! (~ 0x01)
	VirtualProtect(var1_addr, 8, oldProtect, (PDWORD)&oldProtect);
}

void
hook_skype42()
{
	void *func_addr;
	void *var1_addr;
	void *var2_addr;

	int oldProtect;

	if (cur_process_is(_T("Skype42.exe")))
	{
		func_addr = (void *)0xD17EA8;
		var1_addr = (void *)0xD17E88;
		var2_addr = (void *)0xD17EA4;
	}
	else
		return ;

	VirtualProtect(func_addr, 4, PAGE_READWRITE, (PDWORD)&oldProtect);
	*(DWORD *)func_addr = (DWORD)skype_log; //Override built-in & empty logging function
	VirtualProtect(func_addr, 4, oldProtect, (PDWORD)&oldProtect);
	VirtualProtect(var1_addr, 8, PAGE_READWRITE, (PDWORD)&oldProtect);
	*(DWORD *)var1_addr = (DWORD)0x01; //Set logging to YES
	*(DWORD *)var2_addr = (DWORD)0x00; //Dont Log Hour ! (~ 0x01)
	VirtualProtect(var1_addr, 8, oldProtect, (PDWORD)&oldProtect);
}

void
hook_skype55()
{
	void *func_addr;
	void *var1_addr;
	void *var2_addr;

	int oldProtect;

	if (cur_process_is(_T("Skype55.exe")))
	{
		func_addr = (void *)0x1115EE8;
		var1_addr = (void *)0x1115EE4;
		var2_addr = (void *)0x1115BC2;
	}
	else
		return ;

	VirtualProtect(func_addr, 4, PAGE_READWRITE, (PDWORD)&oldProtect);
	*(DWORD *)func_addr = (DWORD)skype_log; //Override built-in & empty logging function
	VirtualProtect(func_addr, 4, oldProtect, (PDWORD)&oldProtect);
	VirtualProtect(var1_addr, 8, PAGE_READWRITE, (PDWORD)&oldProtect);
	*(DWORD *)var1_addr = (DWORD)0x01; //Set logging to YES
	*(DWORD *)var2_addr = (DWORD)0x00; //Dont Log Hour ! (~ 0x01)
	VirtualProtect(var1_addr, 8, oldProtect, (PDWORD)&oldProtect);
}