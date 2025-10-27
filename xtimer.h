#ifndef XTIMER_H
#define XTIMER_H

#include <QObject>
#include <QQmlEngine>
#include <QTimer>
#include <QElapsedTimer>

class XTimer : public QTimer
{
    Q_OBJECT
    QML_ELEMENT
public:
    explicit XTimer(QTimer *parent = nullptr);
    QElapsedTimer m_elapsedTimer;
signals:
    void elapsed(int msec);
};

#endif // XTIMER_H
