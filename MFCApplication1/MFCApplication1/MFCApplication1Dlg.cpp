
// MFCApplication1Dlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "MFCApplication1.h"
#include "MFCApplication1Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCApplication1Dlg dialog



CMFCApplication1Dlg::CMFCApplication1Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCAPPLICATION1_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCApplication1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCApplication1Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCApplication1Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCApplication1Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCApplication1Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFCApplication1Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFCApplication1Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFCApplication1Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CMFCApplication1Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CMFCApplication1Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CMFCApplication1Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CMFCApplication1Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CMFCApplication1Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CMFCApplication1Dlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CMFCApplication1Dlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CMFCApplication1Dlg::OnBnClickedButton15)
	ON_STN_CLICKED(IDC_STATIC_View, &CMFCApplication1Dlg::OnStnClickedStaticView)
	ON_BN_CLICKED(IDC_BUTTON16, &CMFCApplication1Dlg::OnBnClickedButton16)
END_MESSAGE_MAP()


// CMFCApplication1Dlg message handlers

BOOL CMFCApplication1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
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
	PGSTART();
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMFCApplication1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCApplication1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

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
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCApplication1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CMFCApplication1Dlg::PGSTART()
{
	m_font.CreateFontA(40,
		10,
		0,
		0,
		1,
		0,
		0,
		0,
		0,
		OUT_DEFAULT_PRECIS,
		0,
		DEFAULT_QUALITY,
		DEFAULT_PITCH | FF_DONTCARE,
		"굴림");

	GetDlgItem(IDC_STATIC_View)->SetFont(&m_font);
	Reset();

}
void CMFCApplication1Dlg::Reset()
{
	BeforeData = 0;
	AfterData = 0;
	Sign = 0;
	ViewStrData = "";
	ChangeCheck = false;
	ResultViewFn(0, 0);
}

void CMFCApplication1Dlg::OnStnClickedStaticView()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CMFCApplication1Dlg::OnBnClickedButton1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	ResultViewFn(1);
}


void CMFCApplication1Dlg::OnBnClickedButton2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	
	ResultViewFn(2);
}


void CMFCApplication1Dlg::OnBnClickedButton3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	
	ResultViewFn(3);
}


void CMFCApplication1Dlg::OnBnClickedButton4()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	
	ResultViewFn(4);
}


void CMFCApplication1Dlg::OnBnClickedButton5()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	
	ResultViewFn(5);
}


void CMFCApplication1Dlg::OnBnClickedButton6()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	
	ResultViewFn(6);
}


void CMFCApplication1Dlg::OnBnClickedButton7()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	
	ResultViewFn(7);
}


void CMFCApplication1Dlg::OnBnClickedButton8()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	
	ResultViewFn(8);
}


void CMFCApplication1Dlg::OnBnClickedButton9()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	
	ResultViewFn(9);
}


void CMFCApplication1Dlg::OnBnClickedButton10()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	
	ResultViewFn(0);
}


void CMFCApplication1Dlg::ResultViewFn(int numberData , int Mode)

{
	CString Temp;
	if (Mode == 0)
	{
		//처음 시작시
		Temp.Format("%d", numberData);
	}
	else
	{

		
		GetDlgItem(IDC_STATIC_View)->GetWindowTextA(Temp);
		if (Temp == "0" || ChangeCheck == true)
		{
			Temp.Format("%d",numberData);
		}
		else
		{
			Temp.AppendFormat("%d", numberData);
		}
		
	}
	
    GetDlgItem(IDC_STATIC_View)->SetWindowTextA(Temp);

	//글자수 제한
	if (Temp.GetAllocLength() > 11)
	{
		return;
	}
	if (Temp == "0" || ChangeCheck == true)
	{
		ChangeCheck = false;
		Temp.Format("% d", numberData);
	}
	else
	{
		Temp.AppendFormat("%d", numberData);
	}
}

void CMFCApplication1Dlg::OnBnClickedButton11()
{
	// = +
	Sign = 1;
	ChangeCheck = true;
	GetDlgItem(IDC_STATIC_View)->GetWindowTextA(ViewStrData);
}


void CMFCApplication1Dlg::OnBnClickedButton12()
{
	// = -
	Sign = 2;
	ChangeCheck = true;
	GetDlgItem(IDC_STATIC_View)->GetWindowTextA(ViewStrData);
}


void CMFCApplication1Dlg::OnBnClickedButton13()
{
	// = *
	Sign = 3;
	ChangeCheck = true;
	GetDlgItem(IDC_STATIC_View)->GetWindowTextA(ViewStrData);
}


void CMFCApplication1Dlg::OnBnClickedButton14()
{
	// = /
	Sign = 4;
	ChangeCheck = true;
	GetDlgItem(IDC_STATIC_View)->GetWindowTextA(ViewStrData);
}


void CMFCApplication1Dlg::OnBnClickedButton15()
{
	// = 결과출력
	CString temp;
	GetDlgItem(IDC_STATIC_View)->GetWindowTextA(temp);
	int result = 0;
	BeforeData = atoi(ViewStrData);
	AfterData = atoi(temp);

	switch (Sign)
	{
	case 1:
		result = BeforeData + AfterData;
            break;
	case 2:
		result = BeforeData - AfterData;
			break;
	case 3:
		result = BeforeData * AfterData;
			break;
	case 4:
		result = BeforeData / AfterData;
			break;

	}

	temp.Format("%d", result);
	GetDlgItem(IDC_STATIC_View)->SetWindowTextA(temp);


}





void CMFCApplication1Dlg::OnBnClickedButton16()
{
	
	Reset();

}
