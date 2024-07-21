/****************************************************************************
 ** This file is part of the MAIA® (Malagasy Artificial Intelligence Art) Open Project.
 **
 ** Copyright (C) 2012, 2013, 2014 ANDRIAMILAMINA Monge.
 ** All rights reserved.
 **
 ** License: GNU GENERAL PUBLIC LICENSE Version 3, 29 June 2007.
 ** Author:  ANDRIAMILAMINA Monge.
 ** Contact: mongemilamina@gmail.com / +261 34 45 062 85.
 ** Year:    2014.
 ** Status:  MAIA® Senior Engineer, Madagasikara, Antananarivo.
 ** Domain:  Automatic.
 **
 ** Commercial Usage
 ** Please contact MAIA®.
 **
 ** GNU General Public License Usage
 ** This file may be used under the terms of the GNU
 ** General Public License version 3.0 as published by the Free Software
 ** Foundation and appearing in the file LICENSE.GPL included in the
 ** packaging of this file.  Please review the following information to
 ** ensure the GNU General Public License version 3.0 requirements will be
 ** met: http://www.gnu.org/copyleft/gpl.html.
 **
 ** If you have questions regarding the use of this file, please contact
 ** the Author.
 **
 ****************************************************************************/

#ifndef PORTTOHEX_H
#define PORTTOHEX_H

#include <QMainWindow>
#include <QAction>

namespace Ui {
    class MaiaText2Ascii;
}

class MaiaText2Ascii : public QMainWindow
{
    Q_OBJECT

public:
    explicit MaiaText2Ascii(QWidget *parent = 0);
    ~MaiaText2Ascii();

public slots:
    void m_convert_();
    void m_clear();

private:
    QAction* att_ActionClear;
    Ui::MaiaText2Ascii* att_ui;
};

#endif // PORTTOHEX_H
