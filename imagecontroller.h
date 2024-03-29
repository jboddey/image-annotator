#ifndef IMAGECONTROLLER_H
#define IMAGECONTROLLER_H

#include <image.h>

#include <QList>
#include <QDir>
#include <QTableWidget>

class ImageController
{

private:

    QList<Image*> images;

public:

    ImageController();

    QList<Image*>* getImages();

    Image* getImage(QString name);

    void loadImages(QDir dir);

    void addImage(Image* image);
    void removeImage(Image* image);

    QList<Image*>* searchImages(QString term);

    void displayImages(QTableWidget* widget, QList<Image*>* im);

    QList<Image*>* sortByDate(QString sortType);
    QList<Image*>* sortByName(QString sortType);

};

#endif // IMAGECONTROLLER_H
