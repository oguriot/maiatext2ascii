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

#include "maiatext2ascii.h"
#include "ui_maiatext2ascii.h"

MaiaText2Ascii::MaiaText2Ascii(QWidget *parent) : QMainWindow(parent), att_ui(new Ui::MaiaText2Ascii)
{
    att_ui->setupUi(this);
    att_ui->line_text->selectAll();

    att_ui->b_clear->setShortcut(Qt::CTRL+Qt::Key_L);

    connect(att_ui->line_text, SIGNAL(textEdited(QString)), this, SLOT(m_convert_()));
    connect(att_ui->b_clear, SIGNAL(clicked()), this, SLOT(m_clear()));
}
//#############################################################
void MaiaText2Ascii::m_clear()
{
    att_ui->line_hex->clear();
    att_ui->line_bin->clear();
    att_ui->line_text->clear();
    att_ui->line_text->setFocus();
}
//#############################################################
void MaiaText2Ascii::m_convert_()
{
    QString gotText = att_ui->line_text->text().right(1);
//..............LETTER UPPERCASE..............................
    if (gotText == "A")
    {
        att_ui->line_hex->insert("41 ");
        att_ui->line_bin->insert("01000001 ");
    }
    else if (gotText == "B")
    {
        att_ui->line_hex->insert("42 ");
        att_ui->line_bin->insert("01000010 ");
    }
    else if (gotText == "C")
    {
        att_ui->line_hex->insert("43 ");
        att_ui->line_bin->insert("01000011 ");
    }
    else if (gotText == "D")
    {
        att_ui->line_hex->insert("44 ");
        att_ui->line_bin->insert("01000100 ");
    }
    else if (gotText == "E")
    {
        att_ui->line_hex->insert("45 ");
        att_ui->line_bin->insert("01000101 ");
    }
    else if (gotText == "F")
    {
        att_ui->line_hex->insert("46 ");
        att_ui->line_bin->insert("01000110 ");
    }
    else if (gotText == "G")
    {
        att_ui->line_hex->insert("47 ");
        att_ui->line_bin->insert("01000111 ");
    }
    else if (gotText == "H")
    {
        att_ui->line_hex->insert("48 ");
        att_ui->line_bin->insert("01001000 ");
    }
    else if (gotText == "I")
    {
        att_ui->line_hex->insert("49 ");
        att_ui->line_bin->insert("01001001 ");
    }
    else if (gotText == "J")
    {
        att_ui->line_hex->insert("4A ");
        att_ui->line_bin->insert("01001010 ");
    }
    else if (gotText == "K")
    {
        att_ui->line_hex->insert("4B ");
        att_ui->line_bin->insert("01001011 ");
    }
    else if (gotText == "L")
    {
        att_ui->line_hex->insert("4C ");
        att_ui->line_bin->insert("01001100 ");
    }
    else if (gotText == "M")
    {
        att_ui->line_hex->insert("4D ");
        att_ui->line_bin->insert("01001101 ");
    }
    else if (gotText == "N")
    {
        att_ui->line_hex->insert("4E ");
        att_ui->line_bin->insert("01001110 ");
    }
    else if (gotText == "O")
    {
        att_ui->line_hex->insert("4F ");
        att_ui->line_bin->insert("01001111 ");
    }
    else if (gotText == "P")
    {
        att_ui->line_hex->insert("50 ");
        att_ui->line_bin->insert("01010000 ");
    }
    else if (gotText == "Q")
    {
        att_ui->line_hex->insert("51 ");
        att_ui->line_bin->insert("01010001 ");
    }
    else if (gotText == "R")
    {
        att_ui->line_hex->insert("52 ");
        att_ui->line_bin->insert("01010010 ");
    }
    else if (gotText == "S")
    {
        att_ui->line_hex->insert("53 ");
        att_ui->line_bin->insert("01010011 ");
    }
    else if (gotText == "T")
    {
        att_ui->line_hex->insert("54 ");
        att_ui->line_bin->insert("01010100 ");
    }
    else if (gotText == "U")
    {
        att_ui->line_hex->insert("55 ");
        att_ui->line_bin->insert("01010101 ");
    }
    else if (gotText == "V")
    {
        att_ui->line_hex->insert("56 ");
        att_ui->line_bin->insert("01010110 ");
    }
    else if (gotText == "W")
    {
        att_ui->line_hex->insert("57 ");
        att_ui->line_bin->insert("01010111 ");
    }
    else if (gotText == "X")
    {
        att_ui->line_hex->insert("58 ");
        att_ui->line_bin->insert("01011000 ");
    }
    else if (gotText == "Y")
    {
        att_ui->line_hex->insert("59 ");
        att_ui->line_bin->insert("01011001 ");
    }
    else if (gotText == "Z")
    {
        att_ui->line_hex->insert("5A ");
        att_ui->line_bin->insert("01011010 ");
    }
//..............LETTER LOWERCASE..............................
    else if (gotText == "a")
    {
        att_ui->line_hex->insert("61 ");
        att_ui->line_bin->insert("01100001 ");
    }
    else if (gotText == "b")
    {
        att_ui->line_hex->insert("62 ");
        att_ui->line_bin->insert("01100010 ");
    }
    else if (gotText == "c")
    {
        att_ui->line_hex->insert("63 ");
        att_ui->line_bin->insert("01100011 ");
    }
    else if (gotText == "d")
    {
        att_ui->line_hex->insert("64 ");
        att_ui->line_bin->insert("01100100 ");
    }
    else if (gotText == "e")
    {
        att_ui->line_hex->insert("65 ");
        att_ui->line_bin->insert("01100101 ");
    }
    else if (gotText == "f")
    {
        att_ui->line_hex->insert("66 ");
        att_ui->line_bin->insert("01100110 ");
    }
    else if (gotText == "g")
    {
        att_ui->line_hex->insert("67 ");
        att_ui->line_bin->insert("01100111 ");
    }
    else if (gotText == "h")
    {
        att_ui->line_hex->insert("68 ");
        att_ui->line_bin->insert("01101000 ");
    }
    else if (gotText == "i")
    {
        att_ui->line_hex->insert("69 ");
        att_ui->line_bin->insert("01101001 ");
    }
    else if (gotText == "j")
    {
        att_ui->line_hex->insert("6A ");
        att_ui->line_bin->insert("01101010 ");
    }
    else if (gotText == "k")
    {
        att_ui->line_hex->insert("6B ");
        att_ui->line_bin->insert("01101011 ");
    }
    else if (gotText == "l")
    {
        att_ui->line_hex->insert("6C ");
        att_ui->line_bin->insert("01101100 ");
    }
    else if (gotText == "m")
    {
        att_ui->line_hex->insert("6D ");
        att_ui->line_bin->insert("01101101 ");
    }
    else if (gotText == "n")
    {
        att_ui->line_hex->insert("6E ");
        att_ui->line_bin->insert("01101110 ");
    }
    else if (gotText == "o")
    {
        att_ui->line_hex->insert("6F ");
        att_ui->line_bin->insert("01101111 ");
    }
    else if (gotText == "p")
    {
        att_ui->line_hex->insert("70 ");
        att_ui->line_bin->insert("01110000 ");
    }
    else if (gotText == "q")
    {
        att_ui->line_hex->insert("71 ");
        att_ui->line_bin->insert("01110001 ");
    }
    else if (gotText == "r")
    {
        att_ui->line_hex->insert("72 ");
        att_ui->line_bin->insert("01110010 ");
    }
    else if (gotText == "s")
    {
        att_ui->line_hex->insert("73 ");
        att_ui->line_bin->insert("01110011 ");
    }
    else if (gotText == "t")
    {
        att_ui->line_hex->insert("74 ");
        att_ui->line_bin->insert("01110100 ");
    }
    else if (gotText == "u")
    {
        att_ui->line_hex->insert("75 ");
        att_ui->line_bin->insert("01110101 ");
    }
    else if (gotText == "v")
    {
        att_ui->line_hex->insert("76 ");
        att_ui->line_bin->insert("01110110 ");
    }
    else if (gotText == "w")
    {
        att_ui->line_hex->insert("77 ");
        att_ui->line_bin->insert("01110111 ");
    }
    else if (gotText == "x")
    {
        att_ui->line_hex->insert("78 ");
        att_ui->line_bin->insert("01111000 ");
    }
    else if (gotText == "y")
    {
        att_ui->line_hex->insert("79 ");
        att_ui->line_bin->insert("01111001 ");
    }
    else if (gotText == "z")
    {
        att_ui->line_hex->insert("7A ");
        att_ui->line_bin->insert("01111010 ");
    }
//..............numbers..............................
    else if (gotText == "0")
    {
        att_ui->line_hex->insert("30 ");
        att_ui->line_bin->insert("00110001 ");
    }
    else if (gotText == "1")
    {
        att_ui->line_hex->insert("31 ");
        att_ui->line_bin->insert("00110010 ");
    }
    else if (gotText == "2")
    {
        att_ui->line_hex->insert("32 ");
        att_ui->line_bin->insert("00110011 ");
    }
    else if (gotText == "3")
    {
        att_ui->line_hex->insert("33 ");
        att_ui->line_bin->insert("00110100 ");
    }
    else if (gotText == "4")
    {
        att_ui->line_hex->insert("34 ");
        att_ui->line_bin->insert("00110101 ");
    }
    else if (gotText == "5")
    {
        att_ui->line_hex->insert("35 ");
        att_ui->line_bin->insert("00110110 ");
    }
    else if (gotText == "6")
    {
        att_ui->line_hex->insert("36 ");
        att_ui->line_bin->insert("00110111 ");
    }
    else if (gotText == "7")
    {
        att_ui->line_hex->insert("37 ");
        att_ui->line_bin->insert("00111000 ");
    }
    else if (gotText == "8")
    {
        att_ui->line_hex->insert("38 ");
        att_ui->line_bin->insert("00111001 ");
    }
    else if (gotText == "9")
    {
        att_ui->line_hex->insert("39 ");
        att_ui->line_bin->insert("00111010 ");
    }
//..............spec char..............................
    else if (gotText == "!")
    {
        att_ui->line_hex->insert("21 ");
        att_ui->line_bin->insert("00100001 ");
    }
    else if (gotText == "\"")//escape double quote with back slash
    {
        att_ui->line_hex->insert("22 ");
        att_ui->line_bin->insert("00100010 ");
    }
    else if (gotText == "#")
    {
        att_ui->line_hex->insert("23 ");
        att_ui->line_bin->insert("00100011 ");
    }
    else if (gotText == "$")
    {
        att_ui->line_hex->insert("24 ");
        att_ui->line_bin->insert("00100100 ");
    }
    else if (gotText == "%")
    {
        att_ui->line_hex->insert("25 ");
        att_ui->line_bin->insert("00100101 ");
    }
    else if (gotText == "&")
    {
        att_ui->line_hex->insert("26 ");
        att_ui->line_bin->insert("00100110 ");
    }
    else if (gotText == "'")
    {
        att_ui->line_hex->insert("27 ");
        att_ui->line_bin->insert("00100111 ");
    }
    else if (gotText == "(")
    {
        att_ui->line_hex->insert("28 ");
        att_ui->line_bin->insert("00101000 ");
    }
    else if (gotText == ")")
    {
        att_ui->line_hex->insert("29 ");
        att_ui->line_bin->insert("00101001 ");
    }
    else if (gotText == "*")
    {
        att_ui->line_hex->insert("2A ");
        att_ui->line_bin->insert("00101010 ");
    }
    else if (gotText == "+")
    {
        att_ui->line_hex->insert("2B ");
        att_ui->line_bin->insert("00101011 ");
    }
    else if (gotText == ",")
    {
        att_ui->line_hex->insert("2C ");
        att_ui->line_bin->insert("00101100 ");
    }
    else if (gotText == "-")
    {
        att_ui->line_hex->insert("2D ");
        att_ui->line_bin->insert("00101101 ");
    }
    else if (gotText == ".")
    {
        att_ui->line_hex->insert("2E ");
        att_ui->line_bin->insert("00101110 ");
    }
    else if (gotText == "/")
    {
        att_ui->line_hex->insert("2F ");
        att_ui->line_bin->insert("00101111 ");
    }
    else if (gotText == ":")
    {
        att_ui->line_hex->insert("3A ");
        att_ui->line_bin->insert("00111010 ");
    }
    else if (gotText == ";")
    {
        att_ui->line_hex->insert("3B ");
        att_ui->line_bin->insert("00111011 ");
    }
    else if (gotText == "<")
    {
        att_ui->line_hex->insert("3C ");
        att_ui->line_bin->insert("00111100 ");
    }
    else if (gotText == "=")
    {
        att_ui->line_hex->insert("3D ");
        att_ui->line_bin->insert("00111101 ");
    }
    else if (gotText == ">")
    {
        att_ui->line_hex->insert("3E ");
        att_ui->line_bin->insert("00111110 ");
    }
    else if (gotText == "?")
    {
        att_ui->line_hex->insert("3F ");
        att_ui->line_bin->insert("00111111 ");
    }
    else if (gotText == "@")
    {
        att_ui->line_hex->insert("40 ");
        att_ui->line_bin->insert("01000000 ");
    }
    else if (gotText == "[")
    {
        att_ui->line_hex->insert("5B ");
        att_ui->line_bin->insert("01011011 ");
    }
    else if (gotText == "\\")//escape back slash with himself
    {
        att_ui->line_hex->insert("5C ");
        att_ui->line_bin->insert("01011100 ");
    }
    else if (gotText == "]")
    {
        att_ui->line_hex->insert("5D ");
        att_ui->line_bin->insert("01011101 ");
    }
    else if (gotText == "^")
    {
        att_ui->line_hex->insert("5E ");
        att_ui->line_bin->insert("01011110 ");
    }
    else if (gotText == "_")
    {
        att_ui->line_hex->insert("5F ");
        att_ui->line_bin->insert("01011111 ");
    }
    else if (gotText == "{")
    {
        att_ui->line_hex->insert("7B ");
        att_ui->line_bin->insert("01111011 ");
    }
    else if (gotText == "|")
    {
        att_ui->line_hex->insert("7C ");
        att_ui->line_bin->insert("01111100 ");
    }
    else if (gotText == "}")
    {
        att_ui->line_hex->insert("7D ");
        att_ui->line_bin->insert("01111101 ");
    }
    else if (gotText == "~")
    {
        att_ui->line_hex->insert("7E ");
        att_ui->line_bin->insert("01111110 ");
    }
}
//#############################################################
MaiaText2Ascii::~MaiaText2Ascii()
{
    delete att_ui;
}
