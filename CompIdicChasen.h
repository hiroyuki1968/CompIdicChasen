// CompIdicChasen.h : COMPIDICCHASEN アプリケーションのメイン ヘッダー ファイルです。
//

#if !defined(AFX_COMPIDICCHASEN_H__2F580F27_D5BD_4964_9C7F_B37A7E504D83__INCLUDED_)
#define AFX_COMPIDICCHASEN_H__2F580F27_D5BD_4964_9C7F_B37A7E504D83__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// メイン シンボル

/////////////////////////////////////////////////////////////////////////////
// CCompIdicChasenApp:
// このクラスの動作の定義に関しては CompIdicChasen.cpp ファイルを参照してください。
//

class CCompIdicChasenApp : public CWinApp
{
public:
	CCompIdicChasenApp();

// オーバーライド
	// ClassWizard は仮想関数のオーバーライドを生成します。
	//{{AFX_VIRTUAL(CCompIdicChasenApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// インプリメンテーション

	//{{AFX_MSG(CCompIdicChasenApp)
		// メモ - ClassWizard はこの位置にメンバ関数を追加または削除します。
		//        この位置に生成されるコードを編集しないでください。
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_COMPIDICCHASEN_H__2F580F27_D5BD_4964_9C7F_B37A7E504D83__INCLUDED_)
