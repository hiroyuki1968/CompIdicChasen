// CompIdicChasenDlg.h : �w�b�_�[ �t�@�C��
//

#if !defined(AFX_COMPIDICCHASENDLG_H__5B8644AB_7352_49B2_AD15_14215ABBFC9D__INCLUDED_)
#define AFX_COMPIDICCHASENDLG_H__5B8644AB_7352_49B2_AD15_14215ABBFC9D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCompIdicChasenDlg �_�C�A���O

class CCompIdicChasenDlg : public CDialog
{
// �\�z
public:
	CCompIdicChasenDlg(CWnd* pParent = NULL);	// �W���̃R���X�g���N�^

// �_�C�A���O �f�[�^
	//{{AFX_DATA(CCompIdicChasenDlg)
	enum { IDD = IDD_COMPIDICCHASEN_DIALOG };
		// ����: ���̈ʒu�� ClassWizard �ɂ���ăf�[�^ �����o���ǉ�����܂��B
	//}}AFX_DATA

	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL(CCompIdicChasenDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �̃T�|�[�g
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
protected:
	HICON m_hIcon;

	// �������ꂽ���b�Z�[�W �}�b�v�֐�
	//{{AFX_MSG(CCompIdicChasenDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CString GetLastErrorMessage(DWORD dwLastError = NULL);
CString GetExceptionErrorMessage(CException* pEx);
void PumpWaitingMessages();
int CreateGuid(CString& strGuid);

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_COMPIDICCHASENDLG_H__5B8644AB_7352_49B2_AD15_14215ABBFC9D__INCLUDED_)
