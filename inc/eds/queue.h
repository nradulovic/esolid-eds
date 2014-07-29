/* 
 * File:   queue.h
 * Author: nenad
 *
 * Created on July 29, 2014, 12:39 PM
 */

#ifndef QUEUE_H
#define	QUEUE_H

#include <stdbool.h>
#include "base/error.h"
#include "mem/mem_class.h"

#ifdef	__cplusplus
extern "C" {
#endif

struct esEventQ;
struct esEvent;

esError esQueueCreate(struct esMem *, size_t size, struct esEventQ * queue);
esError esQueuePut(struct esEventQ * queue, esEvent *  event);
esError esQueueGet(struct esEventQ * queue, esEvent ** event);
bool    esQueueIsEmpty(struct esEventQ * queue);
esError esQueueDestroy(struct esEventQ * queue);

#ifdef	__cplusplus
}
#endif

#endif	/* QUEUE_H */

