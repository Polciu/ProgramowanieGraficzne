#ifndef SCENEITEM_H
#define SCENEITEM_H

#include <QObject>
#include <QGraphicsItem>

class SceneItem : QGraphicsPixmapItem
{
public:
    SceneItem();

private:
    QGraphicsPixmapItem* parent = nullptr;
};

#endif // SCENEITEM_H
