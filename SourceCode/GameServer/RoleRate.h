#pragma once
class CRoleEx;
class RoleRate
{
public:
	RoleRate();
	virtual ~RoleRate();

	bool		OnInit(CRoleEx* pRole);
	bool		OnChangeRoleRate(BYTE AddRateIndex);
	bool		IsCanUseRateIndex(BYTE RateIndex);

	void		SetCanUseMinRate(BYTE rate) { m_MinRateIndex = rate; }
	void		SetCanUseMaxRate(BYTE rate) { m_MaxRateIndex = rate; }
	BYTE		GetCanUseMinRate(){ return m_MinRateIndex; }
	BYTE		GetCanUseMaxRate(){ return m_MaxRateIndex; }
	BYTE		GetCanShowMaxRate();

	void		ResetRateInfo();
private:
	void		GetInitRateReward();

private:
	CRoleEx*			m_pRole;
	BYTE			    m_MinRateIndex;
	BYTE				m_MaxRateIndex;
};