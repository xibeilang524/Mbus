//------------------------------------------------------------------------------
// Copyright (C) 2010, Raditex AB
// All rights reserved.
//
// rSCADA 
// http://www.rSCADA.se
// info@rscada.se
//
//------------------------------------------------------------------------------

/**
 * @file   mbus.h
 * 
 * @brief  Main include file for the Freescada libmbus library.
 *
 * Include this file to access the libmbus API:
\verbatim
#include <mbus.h>
\endverbatim
 *
 */

/*! \mainpage libmbus 
 *
 * These pages contain automatically generated documentation for the libmbus
 * API. For examples on how to use the libmbus library, see the applications
 * in the bin directory in the source code distribution.
 *
 * For more information, see http://www.rscada.se/libmbus
 *
 */

#ifndef _MBUS_H_
#define _MBUS_H_

#include "mbusprotocol.h"
#include "mbusprotocolaux.h"
#include "mbusserial.h"
#include "mbus_config.h"
//
//
//
int mbus_init();

#endif /* _MBUS_H_ */
