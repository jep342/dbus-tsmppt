/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c VBusItemAdaptor -a v_busitem_adaptor.h:v_busitem_adaptor.cpp com.victron.busitem.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "v_busitem_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class VBusItemAdaptor
 */

VBusItemAdaptor::VBusItemAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

VBusItemAdaptor::~VBusItemAdaptor()
{
    // destructor
}

QString VBusItemAdaptor::text() const
{
    // get the value of property Text
    return qvariant_cast< QString >(parent()->property("Text"));
}

QDBusVariant VBusItemAdaptor::value() const
{
    // get the value of property Value
    return qvariant_cast< QDBusVariant >(parent()->property("Value"));
}

void VBusItemAdaptor::setValue(const QDBusVariant &value)
{
    // set the value of property Value
    parent()->setProperty("Value", QVariant::fromValue(value.variant()));
}

QDBusVariant VBusItemAdaptor::GetDefault()
{
    // handle method call com.victronenergy.BusItem.GetDefault
    QDBusVariant value;
    QMetaObject::invokeMethod(parent(), "GetDefault", Q_RETURN_ARG(QDBusVariant, value));
    return value;
}

QDBusVariant VBusItemAdaptor::GetMax()
{
    // handle method call com.victronenergy.BusItem.GetMax
    QDBusVariant value;
    QMetaObject::invokeMethod(parent(), "GetMax", Q_RETURN_ARG(QDBusVariant, value));
    return value;
}

QDBusVariant VBusItemAdaptor::GetMin()
{
    // handle method call com.victronenergy.BusItem.GetMin
    QDBusVariant value;
    QMetaObject::invokeMethod(parent(), "GetMin", Q_RETURN_ARG(QDBusVariant, value));
    return value;
}

QString VBusItemAdaptor::GetText()
{
    // handle method call com.victronenergy.BusItem.GetText
    QString value;
    QMetaObject::invokeMethod(parent(), "GetText", Q_RETURN_ARG(QString, value));
    return value;
}

QDBusVariant VBusItemAdaptor::GetValue()
{
    // handle method call com.victronenergy.BusItem.GetValue
    QDBusVariant value;
    QMetaObject::invokeMethod(parent(), "GetValue", Q_RETURN_ARG(QDBusVariant, value));
    return value;
}

int VBusItemAdaptor::SetDefault()
{
    // handle method call com.victronenergy.BusItem.SetDefault
    int retval;
    QMetaObject::invokeMethod(parent(), "SetDefault", Q_RETURN_ARG(int, retval));
    return retval;
}

int VBusItemAdaptor::SetValue(const QDBusVariant &value)
{
    // handle method call com.victronenergy.BusItem.SetValue
    int retval;
    QMetaObject::invokeMethod(parent(), "SetValue", Q_RETURN_ARG(int, retval), Q_ARG(QDBusVariant, value));
    return retval;
}

