#include "animationHandler.h"

AnimationHandler::AnimationHandler() {
  //ctor
}

AnimationHandler::~AnimationHandler() {
  delete this->movie;
}

void AnimationHandler::play(QLabel* label, QString& path) {
  label->setVisible(true);
  this->movie = new QMovie(path);
  label->setMovie(this->movie);
  this->movie->start();
}

void AnimationHandler::stop(QLabel* label) {
  label->setVisible(false);
}
