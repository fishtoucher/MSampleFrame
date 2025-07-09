#ifndef MSAMPLEFRAME_H
#define MSAMPLEFRAME_H

#include <QtQuick/QQuickPaintedItem>

class MSampleFrame : public QQuickPaintedItem
{
    Q_OBJECT
    QML_ELEMENT
    Q_DISABLE_COPY(MSampleFrame)
public:
    explicit MSampleFrame(QQuickItem *parent = nullptr);
    void paint(QPainter *painter) override;
    ~MSampleFrame() override;
};

#endif // MSAMPLEFRAME_H
