#pragma once

#include <stdint.h>

#include "DestroyableGroundObject.h"

class Tank : public DestroyableGroundObject
{
public:
    Tank() {}

    Tank(const Tank& t)
    {
        x = t.x;
        y = t.y;
        width = t.width;
    }

    Tank* clone() const
    {
        return new Tank(*this);
    }
	bool __fastcall isInside(double x1, double x2) const override;

	inline uint16_t GetScore() const override { return score; }

	void Draw() const override;

    

private:

	const uint16_t score = 30;
};
