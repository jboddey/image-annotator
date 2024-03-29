#ifndef IMAGEANNOTATOR_H
#define IMAGEANNOTATOR_H

#include <QMainWindow>
#include <QTableWidgetItem>

#include <annotationcontroller.h>
#include <classlabelcontroller.h>
#include <imagecontroller.h>
#include <filecontroller.h>

#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <graphicsimage.h>

#include <thread>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class ImageAnnotator; }
QT_END_NAMESPACE

class ImageAnnotator : public QMainWindow
{
    Q_OBJECT

public:

    ImageAnnotator(QWidget *parent = nullptr);

    GraphicsImage* graphicsImage;

    ~ImageAnnotator();

private slots:

    void on_browseClassButton_clicked();

    void on_removeClassButton_clicked();

    void on_classSortType_currentTextChanged(const QString &arg1);

    void on_actionSaveClasses_triggered();

    void on_browseImageButton_clicked();

    void on_sortImageReset_clicked();

    void on_sortImageButton_clicked();

    void on_imageTableView_cellClicked(int row, int column);

    void on_zoomInButton_clicked();

    void on_zoomOutButton_clicked();

    void on_triangleButton_clicked();

    void on_squareButton_clicked();

    void on_trapeziumButton_clicked();

    void on_polygonButton_clicked();

    void on_selectCursor_clicked();

    void on_actionOpen_triggered();

    void on_actionSave_As_triggered();

    void on_deleteButton_clicked();

    void on_addClassButton_clicked();

    void on_searchImages_textChanged(const QString &arg1);

    void on_actionSave_triggered();

private:

    Ui::ImageAnnotator *ui;

    AnnotationController annotationController;
    ClassLabelController classLabelController;
    ImageController imageController;
    FileController fileController;

    QString openAnnotationsFile;

};
#endif // IMAGEANNOTATOR_H
