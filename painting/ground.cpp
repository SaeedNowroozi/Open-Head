#include "ground.h"

Ground::Ground()
{
    shapes.emplace_back(std::make_unique<Circle>());
    shapes.emplace_back(std::make_unique<Triangle>());
    shapes.emplace_back(std::make_unique<Rectangle>());

}
