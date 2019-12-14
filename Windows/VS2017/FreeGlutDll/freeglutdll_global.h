#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(FREEGLUTDLL_LIB)
#  define FREEGLUTDLL_EXPORT Q_DECL_EXPORT
# else
#  define FREEGLUTDLL_EXPORT Q_DECL_IMPORT
# endif
#else
# define FREEGLUTDLL_EXPORT
#endif
