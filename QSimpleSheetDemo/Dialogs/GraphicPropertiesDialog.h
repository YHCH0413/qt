// +-------------------------------------------------------------------------+
// | QSimpleSheet simple spreadsheet                                         |
// | Copyright (C) 2008 Shahab <shahab.sh.70@gmail.com>                      |
// +-------------------------------------------------------------------------+
// | License:                                                                |
// |                                                                         |
// | QSimpleSheet is free software; you can redistribute it and/or modify    |
// | it under the terms of the GNU General Public License as published by    |
// | the Free Software Foundation; either version 2 of the License, or       |
// | (at your option) any later version.                                     |
// |                                                                         |
// | QSimpleSheet is distributed in the hope that it will be useful,         |
// | but WITHOUT ANY WARRANTY; without even the implied warranty of          |
// | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the            |
// | GNU General Public License for more details.                            |
// |                                                                         |
// | You should have received a copy of the GNU General Public License       |
// | along with QSimpleSheet; if not, write to the Free Software             |
// | Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA|
// |                                                                         |
// +-------------------------------------------------------------------------+
// | Author:  Shahab Shirazi <shahab.sh.70@gmail.com>                        |
// +-------------------------------------------------------------------------+

#ifndef GRAPHICPROPERTIESDIALOG_H
#define GRAPHICPROPERTIESDIALOG_H

#include <QDialog>
#include <QSize>
#include "MySpinBox.h"
#include "ui_GraphicPropertiesDialog.h"

class GraphicPropertiesDialog : public QDialog, public Ui::GraphicPropertiesDialog
{
    Q_OBJECT

public:
    GraphicPropertiesDialog(const QSize&, const QSize&, QWidget* = 0);
    QSize getModifiedSizeProperty() const;

private slots:
    void keepAspectRatioSlot(int);
    void originalSizeSlot(int);
    void unitChangedSlot(int);

private:
    QSize originalSize;
};

#endif
