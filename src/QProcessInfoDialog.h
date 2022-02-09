#pragma once

#include <QtWidgets/QDialog>
#include <QtCore/QString>

#include "ui_QProcessInfoDialog.h"

class QProcessInfoDialog : public QDialog, protected Ui::QProcessInfoDialogForm {

    Q_OBJECT

    public:
        explicit QProcessInfoDialog (QWidget* parent = 0);
       ~QProcessInfoDialog ();

        int                 selectedPid                 () const;
        QString             selectedName                () const;
        QString             selectedCommandLine         () const;

    public slots:
    private slots:
        void                handlePidSelected           ();

    private:
};

