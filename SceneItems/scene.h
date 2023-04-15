#ifndef SCENE_H
#define SCENE_H

#include <QObject>
#include <QGraphicsScene>
#include <QRect>
#include <QDebug>

#include "sceneitem.h"
#include "ifitem.h"

class Scene : public QGraphicsScene
{
public:
    Scene();

    QRect* getSceneSize();

public slots:
    // Tworzenie obiektow
    void createIfItem(QString condition);

private:
    QRect * sceneSize = new QRect(0,0,1450,800);
    std::vector<SceneItem*> sceneItems = {};
};

#endif // SCENE_H
