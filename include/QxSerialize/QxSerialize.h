/****************************************************************************
**
** http://www.qxorm.com/
** http://sourceforge.net/projects/qxorm/
** Original file by Lionel Marty
**
** This file is part of the QxOrm library
**
** This software is provided 'as-is', without any express or implied
** warranty. In no event will the authors be held liable for any
** damages arising from the use of this software.
**
** GNU Lesser General Public License Usage
** This file must be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file 'license.lgpl.txt' included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** If you have questions regarding the use of this file, please contact :
** contact@qxorm.com
**
****************************************************************************/

#ifndef _QX_SERIALIZE_H_
#define _QX_SERIALIZE_H_

#ifdef _MSC_VER
#pragma once
#endif

#include "../../include/QxCommon/QxConfig.h"

#include "../../include/QxSerialize/QxSerializeFastCompil.h"
#include "../../include/QxSerialize/boost/QxSerializeInclude.h"

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/extended_type_info_typeid.hpp>
#include <boost/serialization/type_info_implementation.hpp>
#include <boost/serialization/void_cast.hpp>
#include <boost/serialization/array.hpp>
#include <boost/serialization/complex.hpp>
#include <boost/serialization/deque.hpp>
#include <boost/serialization/list.hpp>
#include <boost/serialization/map.hpp>
#include <boost/serialization/scoped_ptr.hpp>
#include <boost/serialization/set.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/variant.hpp>
#include <boost/serialization/vector.hpp>

#include <boost/ptr_container/serialize_ptr_array.hpp>
#include <boost/ptr_container/serialize_ptr_circular_buffer.hpp>
#include <boost/ptr_container/serialize_ptr_container.hpp>
#include <boost/ptr_container/serialize_ptr_deque.hpp>
#include <boost/ptr_container/serialize_ptr_list.hpp>
#include <boost/ptr_container/serialize_ptr_map.hpp>
#include <boost/ptr_container/serialize_ptr_set.hpp>
#include <boost/ptr_container/serialize_ptr_unordered_map.hpp>
#include <boost/ptr_container/serialize_ptr_unordered_set.hpp>
#include <boost/ptr_container/serialize_ptr_vector.hpp>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4189)
#endif // _MSC_VER

#include "../../include/QxSerialize/boost/QxExportDllMacroHpp.h"
#include "../../include/QxSerialize/boost/QxExportDllMacroCpp.h"
#include "../../include/QxSerialize/boost/QxExportDllBoostArchive.h"
#include "../../include/QxSerialize/boost/QxImportDllBoostArchive.h"
#include "../../include/QxSerialize/boost/QxSerialize_shared_ptr.h"
#include "../../include/QxSerialize/boost/QxSerialize_tuple.h"
#include "../../include/QxSerialize/boost/QxSerialize_unordered_map.h"
#include "../../include/QxSerialize/boost/QxSerialize_unordered_set.h"

#include "../../include/QxSerialize/Qt/QxSerialize_QBrush.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QByteArray.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QColor.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QDate.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QDateTime.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QFont.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QHash.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QImage.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QLinkedList.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QList.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QMap.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QMatrix.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QObject.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QPair.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QPicture.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QPixmap.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QPoint.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QRect.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QRegExp.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QRegion.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QScopedPointer.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QSharedPointer.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QSize.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QString.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QStringList.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QTime.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QUrl.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QVariant.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QVector.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QWeakPointer.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QMultiHash.h"
#include "../../include/QxSerialize/Qt/QxSerialize_QMultiMap.h"

#include "../../include/QxSerialize/Qx/QxSerialize_QxCollection.h"
#include "../../include/QxSerialize/Qx/QxSerialize_QxXmlReader.h"
#include "../../include/QxSerialize/Qx/QxSerialize_QxXmlWriter.h"

#include "../../include/QxSerialize/QxBoostSerializeHelper/IxBoostSerializeRegisterHelper.h"
#include "../../include/QxSerialize/QxBoostSerializeHelper/QxBoostInitGuid.h"
#include "../../include/QxSerialize/QxBoostSerializeHelper/QxBoostSerializeHelper.h"
#include "../../include/QxSerialize/QxBoostSerializeHelper/QxBoostSerializeRegisterHelper.h"
#include "../../include/QxSerialize/QxBoostSerializeHelper/QxBoostSerializeRegisterHelperX.h"

#include "../../include/QxSerialize/QxArchive.h"
#include "../../include/QxSerialize/QxClone.h"
#include "../../include/QxSerialize/QxDump.h"
#include "../../include/QxSerialize/QxSerializeInvoker.h"

#ifdef _MSC_VER
#pragma warning(pop)
#endif // _MSC_VER

#endif // _QX_SERIALIZE_H_