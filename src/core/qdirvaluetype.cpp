#include "qdirvaluetype.h"

namespace Core {

/*!
 * \qmltype QDirValueType
 * \brief Wrapper around the \c QDir class.
 * \instantiates Core::QDirValueType
 * \inqmlmodule Script
 * \since Script 1.0
 * \sa Dir
 *
 * The QDirValueType is a wrapper around the \c QDir C++ class, check \c QDir documentation.
 * It can only be created using \c Dir.
 */

/*!
 * \qmlproperty string QDirValueType::path
 */
/*!
 * \qmlproperty string QDirValueType::absolutePath
 */
/*!
 * \qmlproperty string QDirValueType::canonicalPath
 */
/*!
 * \qmlproperty string QDirValueType::dirName
 */
/*!
 * \qmlproperty int QDirValueType::count
 */
/*!
 * \qmlproperty bool QDirValueType::isReadable
 */
/*!
 * \qmlproperty bool QDirValueType::exists
 */
/*!
 * \qmlproperty bool QDirValueType::isRoot
 */
/*!
 * \qmlproperty bool QDirValueType::isRelative
 */
/*!
 * \qmlproperty bool QDirValueType::isAbsolute
 */

QDirValueType::QDirValueType(const QString &path)
    : m_dirValue(path)
{
}

QDirValueType::QDirValueType(const QDir &dir)
    : m_dirValue(dir)
{
}

QString QDirValueType::toString() const
{
    return QStringLiteral("QDir(%1)").arg(m_dirValue.path());
}

QString QDirValueType::path() const
{
    return m_dirValue.path();
}

void QDirValueType::setPath(const QString &path)
{
    m_dirValue.setPath(path);
}

QString QDirValueType::absolutePath() const
{
    return m_dirValue.absolutePath();
}

QString QDirValueType::canonicalPath() const
{
    return m_dirValue.canonicalPath();
}

QString QDirValueType::dirName() const
{
    return m_dirValue.dirName();
}

uint QDirValueType::count() const
{
    return m_dirValue.count();
}

bool QDirValueType::isReadable() const
{
    return m_dirValue.isReadable();
}

bool QDirValueType::exists() const
{
    return m_dirValue.exists();
}

bool QDirValueType::isRoot() const
{
    return m_dirValue.isRoot();
}

bool QDirValueType::isRelative() const
{
    return m_dirValue.isRelative();
}

bool QDirValueType::isAbsolute() const
{
    return m_dirValue.isAbsolute();
}

/*!
 * \qmlmethod bool QDirValueType::cd( string dirName)
 */
bool QDirValueType::cd(const QString &dirName)
{
    return m_dirValue.cd(dirName);
}

/*!
 * \qmlmethod bool QDirValueType::cdUp()
 */
bool QDirValueType::cdUp()
{
    return m_dirValue.cdUp();
}

/*!
 * \qmlmethod string QDirValueType::at( int pos)
 */
QString QDirValueType::at(int pos) const
{
    // We have to check here, as we don't want any errors
    if (pos >= 0 && uint(pos) <= count())
        return m_dirValue[pos];
    return QString();
}

/*!
 * \qmlmethod array<string> QDirValueType::entryList( int filters, int sort)
 * \qmlmethod array<string> QDirValueType::entryList( string nameFilter, int filters, int sort)
 * \qmlmethod array<string> QDirValueType::entryList( array<string> nameFilters, int filters, int sort)
 * \a filters is a combination of (default is Dir.NoFilter):
 * \list
 * \li Dir.Dirs
 * \li Dir.Files
 * \li Dir.Drives
 * \li Dir.NoSymLinks
 * \li Dir.AllEntries
 * \li Dir.TypeMask
 * \li Dir.Readable
 * \li Dir.Writable
 * \li Dir.Executable
 * \li Dir.PermissionMask
 * \li Dir.Modified
 * \li Dir.Hidden
 * \li Dir.System
 * \li Dir.AccessMask
 * \li Dir.AllDirs
 * \li Dir.CaseSensitive
 * \li Dir.NoDot
 * \li Dir.NoDotDot
 * \li Dir.NoDotAndDotDot
 * \li Dir.NoFilter
 * \endlist
 *
 * \a sort is a combination of (default is Dir.NoSort):
 * \list
 * \li Dir.Name
 * \li Dir.Time
 * \li Dir.Size
 * \li Dir.Unsorted
 * \li Dir.SortByMask
 * \li Dir.DirsFirst
 * \li Dir.Reversed
 * \li Dir.IgnoreCase
 * \li Dir.DirsLast
 * \li Dir.LocaleAware
 * \li Dir.Type
 * \li Dir.NoSory
 * \endlist
 */
QStringList QDirValueType::entryList(int filters, int sort) const
{
    return m_dirValue.entryList(static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
}

QStringList QDirValueType::entryList(const QString &nameFilter, int filters, int sort) const
{
    return m_dirValue.entryList({nameFilter}, static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
}

QStringList QDirValueType::entryList(const QStringList &nameFilters, int filters, int sort) const
{
    return m_dirValue.entryList(nameFilters, static_cast<QDir::Filters>(filters), static_cast<QDir::SortFlags>(sort));
}

/*!
 * \qmlmethod bool QDirValueType::mkdir( string dirName)
 */
bool QDirValueType::mkdir(const QString &dirName) const
{
    return m_dirValue.mkdir(dirName);
}

/*!
 * \qmlmethod bool QDirValueType::rmdir( string dirName)
 */
bool QDirValueType::rmdir(const QString &dirName) const
{
    return m_dirValue.rmdir(dirName);
}

/*!
 * \qmlmethod bool QDirValueType::mkpath( string dirPath)
 */
bool QDirValueType::mkpath(const QString &dirPath) const
{
    return m_dirValue.mkpath(dirPath);
}

/*!
 * \qmlmethod bool QDirValueType::rmpath( string dirPath)
 */
bool QDirValueType::rmpath(const QString &dirPath) const
{
    return m_dirValue.rmpath(dirPath);
}

/*!
 * \qmlmethod bool QDirValueType::removeRecursively()
 */
bool QDirValueType::removeRecursively()
{
    return m_dirValue.removeRecursively();
}

/*!
 * \qmlmethod bool QDirValueType::makeAbsolute()
 */
bool QDirValueType::makeAbsolute()
{
    return m_dirValue.makeAbsolute();
}

/*!
 * \qmlmethod bool QDirValueType::remove( string fileName)
 */
bool QDirValueType::remove(const QString &fileName)
{
    return m_dirValue.remove(fileName);
}

/*!
 * \qmlmethod bool QDirValueType::rename( string oldName, string newName)
 */
bool QDirValueType::rename(const QString &oldName, const QString &newName)
{
    return m_dirValue.rename(oldName, newName);
}

/*!
 * \qmlmethod bool QDirValueType::fileExists( string name)
 */
bool QDirValueType::fileExists(const QString &name) const
{
    return m_dirValue.exists(name);
}

}
