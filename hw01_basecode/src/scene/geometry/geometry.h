#pragma once

#include <raytracing/intersection.h>
#include <openGL/drawable.h>
#include <raytracing/ray.h>
#include <scene/materials/material.h>
#include <scene/transform.h>
#include <scene/intersectable.h>

class Intersection;//Forward declaration because Intersection and Geometry cross-include each other
class Material;

//Geometry is an abstract class since it contains a pure virtual function (i.e. a virtual function that is set to 0)
class Geometry : public Drawable, Intersectable
{
public:
    Geometry():
    name("GEOMETRY"), transform(), material(nullptr)
    {}

    virtual ~Geometry(){}
    virtual void SetMaterial(Material* m){material = m;}
    QString name;//Mainly used for debugging purposes
    Transform transform;
    Material* material;
};
