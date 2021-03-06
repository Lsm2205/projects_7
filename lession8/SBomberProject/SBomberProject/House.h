#pragma once

#include <stdint.h>

#include "DestroyableGroundObject.h"

class House : public DestroyableGroundObject
{
public:

	
	House() {}
	House(const House& h)
	{
		x = h.x;
		y = h.y;
		width = h.width;
	}

	House* clone() const
	{
		return new House(*this);
	}

	bool __fastcall isInside(double x1, double x2) const override;

	inline uint16_t GetScore() const override { return score; }

	void Draw() const override;

	

private:

	const uint16_t score = 40;
};
