// CompIdicChasenDlg.h : ヘッダー ファイル
//

#if !defined(AFX_COMPIDICCHASENDLG_H__5B8644AB_7352_49B2_AD15_14215ABBFC9D__INCLUDED_)
#define AFX_COMPIDICCHASENDLG_H__5B8644AB_7352_49B2_AD15_14215ABBFC9D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCompIdicChasenDlg ダイアログ

class CCompIdicChasenDlg : public CDialog
{
// 構築
public:
	CCompIdicChasenDlg(CWnd* pParent = NULL);	// 標準のコンストラクタ

// ダイアログ データ
	//{{AFX_DATA(CCompIdicChasenDlg)
	enum { IDD = IDD_COMPIDICCHASEN_DIALOG };
		// メモ: この位置に ClassWizard によってデータ メンバが追加されます。
	//}}AFX_DATA

	// ClassWizard は仮想関数のオーバーライドを生成します。
	//{{AFX_VIRTUAL(CCompIdicChasenDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV のサポート
	//}}AFX_VIRTUAL

// インプリメンテーション
protected:
	HICON m_hIcon;

	// 生成されたメッセージ マップ関数
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
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_COMPIDICCHASENDLG_H__5B8644AB_7352_49B2_AD15_14215ABBFC9D__INCLUDED_)
