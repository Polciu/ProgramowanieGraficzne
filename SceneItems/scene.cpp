#include "scene.h"

Scene::Scene()
{

}

QRect *Scene::getSceneSize()
{
    return sceneSize;
}

void Scene::createIfItem(QString condition)
{
    qDebug() << "Create if Item";
}


