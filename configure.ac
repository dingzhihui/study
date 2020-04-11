#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.63])
AC_INIT(study, 1.0, dingzhihui66@163.com)
AM_INIT_AUTOMAKE(study, 1.0, dingzhihui66@163.com)
AC_CONFIG_SRCDIR([config.h.in])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC
AC_PROG_RANLIB

# Checks for libraries.
# FIXME: Replace `main' with a function in `-lstudy':
AC_CHECK_LIB([study], [main])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile
                 include/Makefile
                 src/Makefile
                 src/test/search/Makefile
                 src/test/sort/Makefile])
AC_OUTPUT
