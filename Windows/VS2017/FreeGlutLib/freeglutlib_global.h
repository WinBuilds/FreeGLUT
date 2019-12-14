#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(FREEGLUTLIB_LIB)
#  define FREEGLUTLIB_EXPORT Q_DECL_EXPORT
# else
#  define FREEGLUTLIB_EXPORT Q_DECL_IMPORT
# endif
#else
# define FREEGLUTLIB_EXPORT
#endif
