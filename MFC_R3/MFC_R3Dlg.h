﻿
// MFC_R3Dlg.h: 头文件
//

#pragma once


// CMFCR3Dlg 对话框
class CMFCR3Dlg : public CDialogEx
{
// 构造
public:
	CMFCR3Dlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_R3_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnNMDblclkTree1(NMHDR* pNMHDR, LRESULT* pResult);
};
