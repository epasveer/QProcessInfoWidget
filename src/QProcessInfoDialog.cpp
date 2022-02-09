#include "QProcessInfoDialog.h"

QProcessInfoDialog::QProcessInfoDialog (QWidget* parent) : QDialog(parent) {

    // Set up the UI.
    setupUi(this);

    // Setup the widgets

    // Connect things.
    QObject::connect(processInfoWidget, &QProcessInfoWidget::pidSelected,      this, &QProcessInfoDialog::handlePidSelected);
}

QProcessInfoDialog::~QProcessInfoDialog () {
}

int QProcessInfoDialog::selectedPid () const {

    return processInfoWidget->selectedPid();
}

QString QProcessInfoDialog::selectedName () const {

    return processInfoWidget->selectedName();
}

QString QProcessInfoDialog::selectedCommandLine () const {

    return processInfoWidget->selectedCommandLine();
}

void QProcessInfoDialog::handlePidSelected() {

    done(QDialog::Accepted);
}

