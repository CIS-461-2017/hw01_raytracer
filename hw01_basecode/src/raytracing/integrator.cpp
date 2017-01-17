#include <raytracing/integrator.h>


Integrator::Integrator():
    max_depth(5), scene(nullptr), intersection_engine(nullptr)
{
}

//Basic ray trace
glm::vec3 Integrator::TraceRay(Ray r, unsigned int depth)
{
    return glm::vec3(0,0,0);
}

void Integrator::SetDepth(unsigned int depth)
{
    max_depth = depth;
}
