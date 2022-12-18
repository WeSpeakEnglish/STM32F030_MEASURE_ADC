/*
 * nortos.h
 *
 *  Created on: 18 дек. 2022 г.
 *      Author: Nutzer
 */

#ifndef INC_NORTOS_H_
#define INC_NORTOS_H_

#define Q_SIZE_FAST 16

void pFastQueueIni(void); // initialization of Queue
int F_push(void (*pointerQ)(void) ); // push element from the queue
void (*F_pull(void))(void); // pull element from the queue






#endif /* INC_NORTOS_H_ */
