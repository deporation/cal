
// CalculatorDlg.h : 头文件

#pragma once

//运算符
enum CALCULATOR_FLAG{
	FLAG_ADD = 0,
	FLAG_SUB,
	FLAG_MUL,
	FLAG_DIV,
	FLAG_SIN,
	FLAG_COS,
	FLAG_TAN,
	FLAG_LN,
	FLAG_RAN,
};
class CCalculatorDlg : public CDialogEx
{
public:
	CCalculatorDlg(CWnd* pParent = NULL);

	enum { IDD = IDD_CALCULATOR_DIALOG };

	void SaveFirstValue();		//保存第一个输入值
	void Calculator();			//计算
public:
	afx_msg void OnButtonBack();
	afx_msg void OnButtonClear();
	afx_msg void OnButtonAbout();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnButton7();
	afx_msg void OnButton8();
	afx_msg void OnButton9();
	afx_msg void OnButton0();
	afx_msg void OnButtonPoint();
	afx_msg void OnButtonDiv();
	afx_msg void OnButtonMul();
	afx_msg void OnButtonSub();
	afx_msg void OnButtonAdd();
protected:
	HICON m_hIcon;

	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()

private:
	//编辑框内的字符串
	CString mStr;		
	//输入的2个值  
	double mNum1;
	double mNum2;
	//运算符号
	CALCULATOR_FLAG mFlag;
public:
	afx_msg void OnBnClickedButtonSin();
	afx_msg void OnBnClickedButtonCos();
	afx_msg void OnBnClickedButtonTan();
	afx_msg void OnBnClickedButtonLn();
	afx_msg void OnBnClickedButtonEqual();
	afx_msg void OnBnClickedButtonRandom();
};
