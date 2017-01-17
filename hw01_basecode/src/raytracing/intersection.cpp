#include <raytracing/intersection.h>

Intersection::Intersection():
    point(glm::vec3(0)),
    normal(glm::vec3(0)),
    t(-1),
    object_hit(nullptr)
{
}

IntersectionEngine::IntersectionEngine()
    : scene(nullptr)
{
}

Intersection IntersectionEngine::GetIntersection(Ray r)
{
    //TODO
    return Intersection();
}
