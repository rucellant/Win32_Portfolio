#pragma once
class CGameObject
{
protected:
	ObjectInfo m_tObjInfo;

public:
	CGameObject();
	virtual ~CGameObject();

public:
	virtual void Initialize() = 0;
	virtual void Update() = 0;
	virtual void Render(HDC hdc) = 0;

private:
	virtual void Release() = 0;

protected:
	void UpdateRect();
};

