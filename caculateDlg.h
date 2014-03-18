// caculateDlg.h : header file
//

#if !defined(AFX_CACULATEDLG_H__38F6A85F_393F_4C21_A2BE_C379E136F4FD__INCLUDED_)
#define AFX_CACULATEDLG_H__38F6A85F_393F_4C21_A2BE_C379E136F4FD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCaculateDlg dialog

class CCaculateDlg : public CDialog
{
// Construction
public:
	void sanjiaohanshu();
	int fjie(int n);
	//CString m_display;
	CCaculateDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CCaculateDlg)
	enum { IDD = IDD_CACULATE_DIALOG };
	CString	m_display;
    int m_duType;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCaculateDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	void onButtonN(int n);
	void Calculate(void);
	double fjie(double n);
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CCaculateDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnHudu();
	afx_msg void OnJiaodu();
	afx_msg void OnButton0();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnButton7();
	afx_msg void OnButton8();
	afx_msg void OnButton9();
	afx_msg void OnButtonSign();
	afx_msg void OnButtonPoint();
	afx_msg void OnButtonAdd();
	afx_msg void OnButtonMinus();
	afx_msg void OnButtonMutiply();
	afx_msg void OnButtonDiv();
	afx_msg void OnButtonEqual();
	afx_msg void OnButtonClear();
	afx_msg void OnButtonSqrt();
	afx_msg void OnButtonReci();
	afx_msg void OnExp();
	afx_msg void On10x();
	afx_msg void OnCos();
	afx_msg void OnSin();
	afx_msg void OnLn();
	afx_msg void OnLog();
	afx_msg void OnArccos();
	afx_msg void OnArcsin();
	afx_msg void OnTan();
	afx_msg void OnArctan();
	afx_msg void OnCosh();
	afx_msg void OnSinh();
	afx_msg void OnTanh();
	afx_msg void On2dex();
	afx_msg void OnNjiecheng();
	//}}AFX_MSG
	afx_msg void UpdateDisplay(double dck);
	DECLARE_MESSAGE_MAP()
private:
	double m_PI;
//	CString m_display;
	double m_coff;
	CString m_operator;
	double m_second;
	double m_first;
	
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CACULATEDLG_H__38F6A85F_393F_4C21_A2BE_C379E136F4FD__INCLUDED_)
