#pragma once
#include "CR3R0.h"

class CMyView
{
public:
	CData* pcData;
	CDialogEx* pcDlg;
	CTreeCtrl* pvTree;
	CListCtrl* pvList;
	CEditView* pvEdit;
	CButton* pvBttn;

	map<HTREEITEM, MyTreeInfo> m_tLeafs;	//�������ڵ�����
public:
	CMyView(CDialogEx* pDlg);
	~CMyView();

	void InitTree(HTREEITEM hTree);
	void InitList(DWORD ID);
	void InitList(vector<MyProcess3>& vPIDs, DWORD ID, DWORD PID);
private:
	DWORD mListLastId;
	CString mStr;
};
