#include "stdafx.h"
#include "GameObj.h"


CGameObj::CGameObj()
{
}


CGameObj::~CGameObj()
{
}

ObjectInfo CGameObj::GetObjInfo() const
{
	return m_tObjInfo;
}

void CGameObj::SetPosX(float x)
{
	m_tObjInfo.fX = x;
}

void CGameObj::SetPosY(float y)
{
	m_tObjInfo.fY = y;
}

void CGameObj::SetTheta(float theta)
{
	m_tObjInfo.fTheta = theta;
}

void CGameObj::SetWidth(float width)
{
	m_tObjInfo.fWidth = width;
}

void CGameObj::SetHeight(float height)
{
	m_tObjInfo.fHeight = height;
}

void CGameObj::SetRect(RECT rect)
{
	m_tObjInfo.rect = rect;
}

void CGameObj::SetIsDead(bool isdead)
{
	m_tObjInfo.isDead = isdead;
}

void CGameObj::UpdateRect()
{
	m_tObjInfo.rect.left	= LONG(m_tObjInfo.fX - m_tObjInfo.fWidth);
	m_tObjInfo.rect.right	= LONG(m_tObjInfo.fX + m_tObjInfo.fWidth);
	m_tObjInfo.rect.top		= LONG(m_tObjInfo.fY - m_tObjInfo.fHeight);
	m_tObjInfo.rect.bottom	= LONG(m_tObjInfo.fY + m_tObjInfo.fHeight);
}
