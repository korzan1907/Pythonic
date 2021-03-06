/*
 * This file is part of Pythonic.

 * Pythonic is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * Pythonic is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with Pythonic. If not, see <https://www.gnu.org/licenses/>
 */

#ifndef ELEMENTICONBAR_H
#define ELEMENTICONBAR_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLoggingCategory>
#include <QSizePolicy>

#include "baselabel.h"

#define BTN_SIZE QSize(32, 32)

class EditElementButton : public BaseButton
{
    Q_OBJECT
public:
    explicit EditElementButton(QWidget *parent = nullptr)
        : BaseButton(QUrl("http://localhost:7000/edit.png"), BTN_SIZE, parent)
    {
        qCDebug(logC, "called");
    };
private:
    QLoggingCategory    logC{"EditElementBtn"};
};


class DebugElementButton : public BaseButton
{
    Q_OBJECT
public:
    explicit DebugElementButton(QWidget *parent = nullptr)
        : BaseButton(QUrl("http://localhost:7000/debug.png"), BTN_SIZE, parent)
    {
        qCDebug(logC, "called");
    };
private:
    QLoggingCategory    logC{"DebugElementBtn"};
};


class DeleteElementButton : public BaseButton
{
    Q_OBJECT
public:
    explicit DeleteElementButton(QWidget *parent = nullptr)
        : BaseButton(QUrl("http://localhost:7000/del.png"), BTN_SIZE, parent)
    {
        qCDebug(logC, "called");
    };
private:
    QLoggingCategory    logC{"DeleteElementBtn"};
};



/*! @brief ElementIconBar holds the edit, debug and delete button for each element
 *
 *  Detailed description follows here.
 *  @author Stephan Avenwedde
 *  @date October 2020
 *  @copyright [GPLv3](../../../LICENSE)
 */

class ElementIconBar : public QWidget
{
    Q_OBJECT
public:
    explicit ElementIconBar(QWidget *parent = nullptr);

//signals:
private:

    QLoggingCategory        logC{"ElementIconBar"};

    QVBoxLayout             m_iconBarLayout;

    EditElementButton       m_editBtn;
    DebugElementButton      m_debugBtn;
    DeleteElementButton     m_deleteBtn;

};

#endif // ELEMENTICONBAR_H
