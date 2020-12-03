#pragma once

#include <embree3/rtcore.h>
#include <stdio.h>
#include <math.h>
#include <limits>
#include <stdio.h>
#include <Eigen/Dense>
#include <vector>

#if defined(_WIN32)
#  include <conio.h>
#  include <windows.h>
#endif


#include "model.h"

#if defined(RTC_NAMESPACE_USE)
RTC_NAMESPACE_USE
#endif





class M_embree
{

private:
	RTCDevice device{};
	RTCScene scene;
private:
	void initializeDevice();
	
public:
	RTCRayHit castRay(Eigen::Vector3f origin,Eigen::Vector3f dir)const;
	unsigned int addMesh(std::vector<Eigen::Vector3f>& vertices, std::vector<uint32_t> indices);
	void endAdd();

	M_embree();

};