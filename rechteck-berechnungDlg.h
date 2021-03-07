
// rechteck-berechnungDlg.h: Headerdatei
//

#pragma once


// CrechteckberechnungDlg-Dialogfeld
class CrechteckberechnungDlg : public CDialogEx
{
// Konstruktion
public:
	CrechteckberechnungDlg(CWnd* pParent = nullptr);	// Standardkonstruktor

// Dialogfelddaten
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RECHTECKBERECHNUNG_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV-Unterstützung


// Implementierung
protected:
	HICON m_hIcon;

	// Generierte Funktionen für die Meldungstabellen
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	float V_Length;
	float V_Width;
	float V_Volume;
	float V_Perimeter;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedCalc();
};
