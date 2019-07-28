#pragma once
#include "GameObj.h"

class CPlayer : public CGameObj
{
private:
	MovingObjectInfo	m_tMovingObjInfo;
	PlayerInfo			m_tPlayerInfo;

public:
	CPlayer();
	virtual ~CPlayer();

public:
	// CGameObj을(를) 통해 상속됨
	virtual void Initialize() override;
	virtual void Update() override;
	virtual void Render(HDC hdc) override;

private:
	virtual void Release() override;

public:
	//get
	int GetStamina() const;
	int GetMaxStamina() const;
	float GetXVel() const;
	float GetYVel() const;
	float GetXAcc() const;

	//set
	void SetStamina(int stamina);
	void SetMaxStamina(int maxstamina);
	void SetXVel(float xvel);
	void SetYVel(float yvel);
	void SetXAcc(float xacc);
};

