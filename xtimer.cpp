#include "xtimer.h"

XTimer::XTimer(QTimer *parent)
    : QTimer{parent}
{
    connect(this, &QTimer::timeout, this, [this]{
        QTimer::singleShot(1, this, [this]{
            QTimer::singleShot(1, this, [this]{
                QTimer::singleShot(1, this, [this]{
                    QTimer::singleShot(1, this, [this]{
                        emit elapsed(m_elapsedTimer.restart());
                        start();
                    });
                });
            });
        });
    });

    setInterval(1);
    setSingleShot(true);
    m_elapsedTimer.start();
    start();
}
