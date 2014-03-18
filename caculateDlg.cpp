// caculateDlg.cpp : implementation file
//

#include "stdafx.h"
#include "caculate.h"
#include "caculateDlg.h"
#include"math.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCaculateDlg dialog

CCaculateDlg::CCaculateDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCaculateDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCaculateDlg)
    m_duType=0;
	m_first=0.0;
	m_second=0.0;
    m_operator=_T("+");
	m_coff=1.0;
//	m_displat=_T("0.0");
	m_display = _T("");
	m_PI=3.1415926;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCaculateDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCaculateDlg)
	DDX_Text(pDX, IDC_DISPLAT, m_display);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CCaculateDlg, CDialog)
	//{{AFX_MSG_MAP(CCaculateDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_HUDU, OnHudu)
	ON_BN_CLICKED(IDC_JIAODU, OnJiaodu)
	ON_BN_CLICKED(IDC_BUTTON0, OnButton0)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7)
	ON_BN_CLICKED(IDC_BUTTON8, OnButton8)
	ON_BN_CLICKED(IDC_BUTTON9, OnButton9)
	ON_BN_CLICKED(IDC_BUTTON_SIGN, OnButtonSign)
	ON_BN_CLICKED(IDC_BUTTON_POINT, OnButtonPoint)
	ON_BN_CLICKED(IDC_BUTTON_ADD, OnButtonAdd)
	ON_BN_CLICKED(IDC_BUTTON_MINUS, OnButtonMinus)
	ON_BN_CLICKED(IDC_BUTTON_MUTIPLY, OnButtonMutiply)
	ON_BN_CLICKED(IDC_BUTTON_DIV, OnButtonDiv)
	ON_BN_CLICKED(IDC_BUTTON_EQUAL, OnButtonEqual)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR, OnButtonClear)
	ON_BN_CLICKED(IDC_BUTTON_SQRT, OnButtonSqrt)
	ON_BN_CLICKED(IDC_BUTTON_RECI, OnButtonReci)
	ON_BN_CLICKED(IDC_EXP, OnExp)
	ON_BN_CLICKED(IDC_10X, On10x)
	ON_BN_CLICKED(IDC_COS, OnCos)
	ON_BN_CLICKED(IDC_SIN, OnSin)
	ON_BN_CLICKED(IDC_LN, OnLn)
	ON_BN_CLICKED(IDC_LOG, OnLog)
	ON_BN_CLICKED(IDC_ARCCOS, OnArccos)
	ON_BN_CLICKED(IDC_ARCSIN, OnArcsin)
	ON_BN_CLICKED(IDC_TAN, OnTan)
	ON_BN_CLICKED(IDC_ARCTAN, OnArctan)
	ON_BN_CLICKED(IDC_COSH, OnCosh)
	ON_BN_CLICKED(IDC_SINH, OnSinh)
	ON_BN_CLICKED(IDC_TANH, OnTanh)
	ON_BN_CLICKED(IDC_2DEX, On2dex)
	ON_BN_CLICKED(IDC_NJIECHENG, OnNjiecheng)
	//ON_BN_CLICKED(IDC_XDEY, OnXdey)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCaculateDlg message handlers

BOOL CCaculateDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CCaculateDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCaculateDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCaculateDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CCaculateDlg::OnHudu() 
{
	// TODO: Add your control notification handler code here
	m_duType=0;
}

void CCaculateDlg::OnJiaodu() 
{
	// TODO: Add your control notification handler code here
	m_duType=1;
}

//DEL void CCaculateDlg::OnUpdateDisplat() 
//DEL {
//DEL 	// TODO: If this is a RICHEDIT control, the control will not
//DEL 	// send this notification unless you override the CDialog::OnInitDialog()
//DEL 	// function to send the EM_SETEVENTMASK message to the control
//DEL 	// with the ENM_UPDATE flag ORed into the lParam mask.
//DEL 	
//DEL 	// TODO: Add your control notification handler code here
//DEL 	
//DEL }

void CCaculateDlg::UpdateDisplay(double dck)
{
	m_display.Format(_T("%f"),dck);
	int i=m_display.GetLength();
	while(m_display.GetAt(i-1)=='0')
	{
		m_display.Delete(i-1,1);
		i--;
	}
 UpdateData(false);//更新编辑框变量m_display
}

void CCaculateDlg::Calculate()
{
	switch(m_operator.GetAt(0))
	{
	case'+':m_first+=m_second;break;
	case'-':m_first-=m_second;break;
	case'*':m_first*=m_second;break;
	case'/':if(fabs(m_second)<=0.000001)
		{
		m_display="被除数不能为0";
		UpdateData(false);
		return;
		}
		m_first/=m_second;break;
	}
	m_second=0.0;
	m_coff=1.0;
	m_operator=_T("+");
UpdateDisplay(m_first);//更新编辑框显示内容
}

void CCaculateDlg::onButtonN(int n)
{
	if(m_coff==1.0)
		m_second=m_second*10+n;//作为整数输入数字时
	else
	{
		m_second=m_second+n*m_coff;//作为小数输入数字
	    m_coff*=0.1;
	}
UpdateDisplay(m_second);//更新编辑框的数字显示
}

void CCaculateDlg::OnButton0() 
{
	// TODO: Add your control notification handler code here
	onButtonN(0);
}


void CCaculateDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	onButtonN(1);
}

void CCaculateDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	onButtonN(2);
}

void CCaculateDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	onButtonN(3);
}

void CCaculateDlg::OnButton4() 
{
	// TODO: Add your control notification handler code here
	onButtonN(4);
}

void CCaculateDlg::OnButton5() 
{
	// TODO: Add your control notification handler code here
	onButtonN(5);
}

void CCaculateDlg::OnButton6() 
{
	// TODO: Add your control notification handler code here
	onButtonN(6);
}

void CCaculateDlg::OnButton7() 
{
	// TODO: Add your control notification handler code here
	onButtonN(7);
}

void CCaculateDlg::OnButton8() 
{
	// TODO: Add your control notification handler code here
	onButtonN(8);
}

void CCaculateDlg::OnButton9() 
{
	// TODO: Add your control notification handler code here
	onButtonN(9);
}

void CCaculateDlg::OnButtonSign() 
{
	// TODO: Add your control notification handler code here
	m_second=-m_second;
    UpdateDisplay(m_second);
}

void CCaculateDlg::OnButtonPoint() 
{
	// TODO: Add your control notification handler code here
	m_coff =0.1;
}

void CCaculateDlg::OnButtonAdd() 
{
	// TODO: Add your control notification handler code here
	Calculate();
    m_operator="+";
}

void CCaculateDlg::OnButtonMinus() 
{
	// TODO: Add your control notification handler code here
	Calculate();
    m_operator="-";
}

void CCaculateDlg::OnButtonMutiply() 
{
	// TODO: Add your control notification handler code here
	Calculate();
    m_operator="*";
}

void CCaculateDlg::OnButtonDiv() 
{
	// TODO: Add your control notification handler code here
	Calculate();
	m_operator.Format(_T("%s"),"/");
}

void CCaculateDlg::OnButtonEqual() 
{
	// TODO: Add your control notification handler code here
	Calculate();
}

void CCaculateDlg::OnButtonClear() 
{
	// TODO: Add your control notification handler code here
	m_first=0.0;
	m_second=0.0;
	m_operator="+";
	m_coff=1.0;
    UpdateDisplay(0.0);
}

void CCaculateDlg::OnButtonSqrt() 
{
	// TODO: Add your control notification handler code here
	if(m_second==0)
	{
		m_first=sqrt(m_first);
	    UpdateDisplay(m_first);
	}
	else
	{
		m_second=sqrt(m_second);
       UpdateDisplay(m_second);
	}
}

void CCaculateDlg::OnButtonReci() 
{
	// TODO: Add your control notification handler code here
	if(fabs(m_second)<0.000001&&fabs(m_first)<0.000001)
	{
	m_display="除数不能为零";
	UpdateData(false);
	return; 
	}
	if(fabs(m_second)<0.000001)
	{
	m_first=1.0/m_first;
	UpdateDisplay(m_first);
	}
	else
	{
	m_second=1.0/m_second;
	UpdateDisplay(m_second);
	}
}

void CCaculateDlg::sanjiaohanshu()
{
	switch(m_duType)
	{
		case 0:m_second=m_second;break;
		case 1:m_second=m_second*m_PI/180;break;
        default:break;
	}
}

void CCaculateDlg::OnExp() 
{
	// TODO: Add your control notification handler code here
	m_second=exp(m_second);
    UpdateDisplay(m_second);
}

void CCaculateDlg::On10x() 
{
	// TODO: Add your control notification handler code here
	m_second=pow(10,m_second);
    UpdateDisplay(m_second);
}

void CCaculateDlg::OnCos() 
{
	// TODO: Add your control notification handler code here
	sanjiaohanshu();
	m_second=cos(m_second);
    UpdateDisplay(m_second);
}

void CCaculateDlg::OnSin() 
{
	// TODO: Add your control notification handler code here
	sanjiaohanshu();
	m_second=sin(m_second);
    UpdateDisplay(m_second);
}

void CCaculateDlg::OnLn() 
{
	// TODO: Add your control notification handler code here
	m_second=log(m_second);
    UpdateDisplay(m_second);
}

void CCaculateDlg::OnLog() 
{
	// TODO: Add your control notification handler code here
	m_second=log10(m_second);
    UpdateDisplay(m_second);
}

void CCaculateDlg::OnArccos() 
{
	// TODO: Add your control notification handler code here
	sanjiaohanshu();
	m_second=acos(m_second);
    UpdateDisplay(m_second);
}

void CCaculateDlg::OnArcsin() 
{
	// TODO: Add your control notification handler code here
	sanjiaohanshu();
	m_second=asin(m_second);
	UpdateDisplay(m_second);
}


void CCaculateDlg::OnTan() 
{
	// TODO: Add your control notification handler code here
	sanjiaohanshu();
	m_second=tan(m_second);
    UpdateDisplay(m_second);	
}

void CCaculateDlg::OnArctan() 
{
	// TODO: Add your control notification handler code here
	sanjiaohanshu();
	m_second=atan(m_second);
    UpdateDisplay(m_second);
}

void CCaculateDlg::OnCosh() 
{
	// TODO: Add your control notification handler code here
	sanjiaohanshu();
	m_second=cosh(m_second);
    UpdateDisplay(m_second);
}

void CCaculateDlg::OnSinh() 
{
	// TODO: Add your control notification handler code here
	m_second=sinh(m_second);
    UpdateDisplay(m_second);
}

void CCaculateDlg::OnTanh() 
{
	// TODO: Add your control notification handler code here
	sanjiaohanshu();
	m_second=tanh(m_second);
    UpdateDisplay(m_second);
}

void CCaculateDlg::On2dex() 
{
	// TODO: Add your control notification handler code here
	m_second=pow(2,m_second);
    UpdateDisplay(m_second);	
}

void CCaculateDlg::OnNjiecheng() 
{
	// TODO: Add your control notification handler code here
       m_second = fjie(m_second);
       UpdateDisplay(m_second);
}
double CCaculateDlg::fjie(double n)
{
    double result = 0.0;
    if(n == 1)
	{ 
	  return 1;
	}
	else if(n>1)
	{
	   result = n*fjie(n-1);
      
	}
    return result;
}

