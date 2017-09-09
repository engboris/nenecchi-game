#ifndef PROJECTILE_H
#define PROJECTILE_H

#include"../headers/movableEntity.hpp"


class Projectile : public MovableEntity
{
    public:
        Projectile();
        virtual ~Projectile();
        virtual float getDepth();
        virtual float getDrawDepth();

    protected:
        float depth;

    private:
};

#endif // PROJECTILE_H