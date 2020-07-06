#ifndef ANIMATIONHANDLER_H
#define ANIMATIONHANDLER_H
#include <QLabel>
#include <QPixmap>
#include <QMovie>
#include <QString>

class AnimationHandler
{
  public:
      AnimationHandler();
      ~AnimationHandler();

      void play(QLabel* label, QString& path);
      void stop(QLabel* label);

  private:
      QMovie* movie;
};

#endif // ANIMATIONHANDLER_H
