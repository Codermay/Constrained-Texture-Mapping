
// CG_Project.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�


// CCG_ProjectApp:
// �аѾ\��@�����O�� CG_Project.cpp
//

class CCG_ProjectApp : public CWinApp
{
public:
	CCG_ProjectApp();

// �мg
public:
	virtual BOOL InitInstance();

// �{���X��@

	DECLARE_MESSAGE_MAP()
};

extern CCG_ProjectApp theApp;