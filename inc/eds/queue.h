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
#include "base/queue.h"
#include "mem/mem_class.h"

#ifdef	__cplusplus
extern "C" {
#endif


struct esEventQ {
    struct esQp         qp;
    uint32_t            max;
};

typedef struct esEventQ esEventQ;

struct esEvent;

void    esQueueInit(struct esEventQ * queue, void * buff, size_t size);
esError esQueuePut(struct esEventQ * queue, esEvent *  event);
esError esQueueFlush(struct esEventQ * queue);
bool    esQueueIsEmpty(struct esEventQ * queue);

#ifdef	__cplusplus
}
#endif

#endif	/* QUEUE_H */

