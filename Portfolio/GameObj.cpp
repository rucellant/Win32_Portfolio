#include "stdafx.h"
#include "GameObj.h"


CGameObject::CGameObject()
{
}


CGameObject::~CGameObject()
{
}

void CGameObject::UpdateRect()
{
	m_tObjInfo.rect.left	= m_tObjInfo.fX - m_tObjInfo.fWdith;
	m_tObjInfo.rect.right	= m_tObjInfo.fX + m_tObjInfo.fWdith;
	m_tObjInfo.rect.top		= m_tObjInfo.fY - m_tObjInfo.fHeight;
	m_tObjInfo.rect.bottom	= m_tObjInfo.fY + m_tObjInfo.fHeight;
}
