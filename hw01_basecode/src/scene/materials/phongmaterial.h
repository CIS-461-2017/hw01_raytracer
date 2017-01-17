#pragma once

#include <scene/materials/material.h>

class PhongMaterial : public Material
{
public:
    PhongMaterial();
    PhongMaterial(const glm::vec3 &color);

    // The outgoing ray is the direction along which the light we are computing is being reflected.
    // The incoming ray is the direction from which light is being received by the point of intersection.
    virtual glm::vec3 EvaluateReflectedEnergy(const Intersection &isx, const glm::vec3 &outgoing_ray, const glm::vec3 &incoming_ray);

    float specular_power;
};
