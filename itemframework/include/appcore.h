#ifndef APPCORE_H
#define APPCORE_H

#include <QtGlobal>

/**
 * @brief The ITEMFRAMEWORK_EXPORT sets the correct dllexport/dllimport attribute on classes on the core that should be exported.
 * All Classes in the Core which are part of the Public API must have this Macro after the class/struct keyword.
 * Exception: Classes which are header-only and have no Q_OBJECT or Q_GADGET macro
 */
#if defined CORE_BUILD
#define ITEMFRAMEWORK_EXPORT Q_DECL_EXPORT
#else
#define ITEMFRAMEWORK_EXPORT Q_DECL_IMPORT
#endif

#define ITEMFRAMEWORK_TEST_EXPORT ITEMFRAMEWORK_EXPORT


/**
 * @brief The Source/Git Version the core was built with (e.g. v0.3-388-g6b76af).
 * This is the unmodified output of the command `git describe --always --tags`
 */
ITEMFRAMEWORK_EXPORT extern const char* const SourceVersion;

/**
 * @brief The API Version provided by the core (e.g 1.0)
 */
ITEMFRAMEWORK_EXPORT extern const char* const ApiVersion;

#endif // APPCORE_H
