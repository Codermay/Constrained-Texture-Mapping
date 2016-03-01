
// CG_ProjectDlg.h : ���Y��
//

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include <gl/glut.h>
#include <gl/gl.h>
#include <gl/glu.h>
#include "afxwin.h"

#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace std;
using namespace cv;

// CCG_ProjectDlg ��ܤ��
class CCG_ProjectDlg : public CDialogEx
{
// �غc
public:
	CCG_ProjectDlg(CWnd* pParent = NULL);	// �зǫغc�禡

	//////////////////////////////////////////////////////////////////////
	CRect AreaRect,WinRect;
	HDC m_hDC;           // DC �w��??
	HGLRC m_hRC;         // GLRC �خ�??
	CWnd *qwnd;          // MFC���F��??

	CRect AreaRect2,WinRect2;
	HDC m_hDC2;           // DC �w��??
	HGLRC m_hRC2;         // GLRC �خ�??
	CWnd *qwnd2;          // MFC���F��??

	RECT SHOW_RECT;
	RECT SHOW_RECT2;
	CStatic	m_Show;
	CStatic m_TEXTURE;

	void GLReshapeWindow(GLint w, GLint h);
	bool SetupPixelFormat();
	void GLInit(void *pData);
	void GLDisplay();
	void GLDisplay2();

	GLfloat width, height;
	GLfloat width2, height2;

	vector<vector<float>> v;
	vector<vector<float>> vt;
	vector<vector<int>> fv;
	vector<vector<int>> ft;

	float m_fLastX;
	float m_fLastY;
	float zRot;
	float yRot;
	float xRot;
	float Zoom;
	float xTrans;
	float yTrans;
	float zTrans;

	vector<unsigned char> image;
	

	int whichvt;

	bool show_tex;
	bool show_map;
	bool show_feature;
	bool show_fmesh;
	bool tex;
	//////////////////////////////////////////////////////////////////////

// ��ܤ�����
	enum { IDD = IDD_CG_PROJECT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �䴩


// �{���X��@
protected:
	HICON m_hIcon;

	// ���ͪ��T�������禡
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedLoadfile();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnBnClickedCheck2();
	afx_msg void OnBnClickedCheck3();
	afx_msg void OnBnClickedCheck4();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedCheck5();
};
