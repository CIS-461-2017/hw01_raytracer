#pragma once
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>
#include <QList>
#include <raytracing/film.h>
#include <scene/camera.h>
#include <scene/geometry/geometry.h>
#include <raytracing/integrator.h>

class JSONReader
{
public:
    void LoadSceneFromFile(QFile &file, const QStringRef &local_path, Scene &scene, Integrator &integrator);
    Geometry* LoadGeometry(QJsonObject &geometryList, QMap<QString, QList<Geometry*>> &map, const QStringRef &local_path);
    Material* LoadMaterial(QJsonObject &material, const QStringRef &local_path);
    Camera LoadCamera(QJsonObject &camera);
    Transform LoadTransform(QJsonObject &transform);
    Integrator LoadIntegrator(QJsonObject &integratorObj);
    glm::vec3 ToVec3(const QJsonArray &s);
    glm::vec3 ToVec3(const QStringRef &s);
};
