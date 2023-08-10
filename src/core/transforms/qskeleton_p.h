// Copyright (C) 2017 Klaralvdalens Datakonsult AB (KDAB).
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#ifndef QT3DCORE_QSKELETON_P_H
#define QT3DCORE_QSKELETON_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of other Qt classes.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <Qt3DCore/private/qabstractskeleton_p.h>
#include <Qt3DCore/qskeleton.h>

QT_BEGIN_NAMESPACE

namespace Qt3DCore {

class QJoint;

class Q_3DCORE_PRIVATE_EXPORT QSkeletonPrivate : public QAbstractSkeletonPrivate
{
public:
    QSkeletonPrivate();

    Q_DECLARE_PUBLIC(QSkeleton)

    QJoint *m_rootJoint;
};

struct QSkeletonData
{
    QNodeId rootJointId;
};

} // namespace Qt3DCore

QT_END_NAMESPACE

#endif // QT3DCORE_QSKELETON_P_H
