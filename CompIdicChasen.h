// CompIdicChasen.h : COMPIDICCHASEN �A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C���ł��B
//

#if !defined(AFX_COMPIDICCHASEN_H__2F580F27_D5BD_4964_9C7F_B37A7E504D83__INCLUDED_)
#define AFX_COMPIDICCHASEN_H__2F580F27_D5BD_4964_9C7F_B37A7E504D83__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// ���C�� �V���{��

/////////////////////////////////////////////////////////////////////////////
// CCompIdicChasenApp:
// ���̃N���X�̓���̒�`�Ɋւ��Ă� CompIdicChasen.cpp �t�@�C�����Q�Ƃ��Ă��������B
//

class CCompIdicChasenApp : public CWinApp
{
public:
	CCompIdicChasenApp();

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL(CCompIdicChasenApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����

	//{{AFX_MSG(CCompIdicChasenApp)
		// ���� - ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ��܂��͍폜���܂��B
		//        ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_COMPIDICCHASEN_H__2F580F27_D5BD_4964_9C7F_B37A7E504D83__INCLUDED_)
