#pragma once
#include <QList>
#include <raytracing/film.h>
#include <scene/camera.h>
#include <scene/geometry/geometry.h>

class Geometry;
class Material;

class Scene
{
public:
    Scene();
    QList<Geometry*> objects;
    QList<Material*> materials;
    QList<Geometry*> lights;
    Camera camera;
    Film film;

    void SetCamera(const Camera &c);

    void CreateTestScene();
    void Clear();
};
