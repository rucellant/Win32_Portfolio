#include "stdafx.h"
#include "Maingame.h"


CMaingame::CMaingame()
{
	m_hDC = GetDC(g_hWnd);
}


CMaingame::~CMaingame()
{
	Release();
}

void CMaingame::Initialize()
{
}

void CMaingame::Update()
{
}

void CMaingame::Render()
{
}

void CMaingame::Release()
{
	ReleaseDC(g_hWnd, m_hDC);
}
