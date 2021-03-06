/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to 2013 PrismTech
 *   Limited and its licensees. All rights reserved. See file:
 *
 *                     $OSPL_HOME/LICENSE 
 *
 *   for full copyright notice and license terms. 
 *
 */

#ifndef OS_POSIX_SEMAPHORE_H
#define OS_POSIX_SEMAPHORE_H

#include <pthread.h>
#if defined (__cplusplus)
extern "C" {
#endif

#include <semaphore.h>
typedef sem_t os_sem_t;

#if defined (__cplusplus)
}
#endif
#endif /* OS_POSIX_SEMAPHORE_H */
