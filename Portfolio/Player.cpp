#include "stdafx.h"
#include "Player.h"


CPlayer::CPlayer()
{
}


CPlayer::~CPlayer()
{
}

void CPlayer::Initialize()
{
}

void CPlayer::Update()
{
}

void CPlayer::Render(HDC hdc)
{
}

void CPlayer::Release()
{
}

int CPlayer::GetStamina() const
{
	return m_tMovingObjInfo.iStamina;
}

int CPlayer::GetMaxStamina() const
{
	return m_tMovingObjInfo.iMaxStamina;
}

float CPlayer::GetXVel() const
{
	return m_tMovingObjInfo.fXVel;
}

float CPlayer::GetYVel() const
{
	return m_tMovingObjInfo.fYVel;
}

float CPlayer::GetXAcc() const
{
	return m_tMovingObjInfo.fXAcc;
}

void CPlayer::SetStamina(int stamina)
{
	m_tMovingObjInfo.iStamina = stamina;
}

void CPlayer::SetMaxStamina(int maxstamina)
{
	m_tMovingObjInfo.iMaxStamina = maxstamina;
}

void CPlayer::SetXVel(float xvel)
{
	m_tMovingObjInfo.fXVel = xvel;
}

void CPlayer::SetYVel(float yvel)
{
	m_tMovingObjInfo.fYVel = yvel;
}

void CPlayer::SetXAcc(float xacc)
{
	m_tMovingObjInfo.fXAcc = xacc;
}
