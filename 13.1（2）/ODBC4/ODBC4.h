
// ODBC4.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CODBC4App: 
// �йش����ʵ�֣������ ODBC4.cpp
//

class CODBC4App : public CWinApp
{
public:
	CODBC4App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CODBC4App theApp;