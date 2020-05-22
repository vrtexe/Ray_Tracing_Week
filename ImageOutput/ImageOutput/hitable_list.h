#pragma once
#include "hitable.h"

class hitable_list : public hitable
{
public:
	hitable_list() = default;
	hitable_list(hitable** l, int n) 
	{ 
		list = l; 
		list_size = n;
	}
	virtual bool hit(const ray& r, float t_min, float t_max, hit_record& rec) const;
	virtual bool bounding_box(float t0, float t1, boundary& box) const;
	hitable **list;
	int list_size;
};