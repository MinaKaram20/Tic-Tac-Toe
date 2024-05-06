#include <global_functions.h>

void Delay_ND_CLose(QDialog *window)
{
    QTimer *timer = new QTimer(window);
    QObject::connect(timer, &QTimer::timeout, [window, timer]() {
        if (window) {
            window->close();
        }
        timer->deleteLater();
    });
    timer->setInterval(2000);
    timer->start();
}

//---------------------------------------------------------------------------
//void addDelay ()
//{
//    QTimer *timer = new QTimer();   // Create a QTimer object
//    QObject::connect(timer, &QTimer::timeout,[&]() { });
//    timer->setInterval(2000);   // Set the delay in milliseconds
//    timer->start();    // Start the timer (it will emit the timeout signal after the delay)
//}
