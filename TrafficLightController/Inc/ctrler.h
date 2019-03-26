#ifndef __CTRLER_H
#define __CTRLER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx_hal.h"
#include "main.h"

typedef enum {
    NO_EVT, //0
    BUTTON, //1
    TIMEOUT, //2
    MODE_CHANGE //3
} Event_t;

typedef enum {
    RESTART, //0
    THROUGH, //1
    BLOCKED, //2
    WAIT,  //3
    OUT_OF_SERVICE //4
} Ctrler_State_t;

void Ctrler_Init(void);
uint32_t Ctrler_Exec(Event_t evt);


#ifdef __cplusplus
}
#endif

#endif /* __CTRLER_H */
