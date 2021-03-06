/**
 * @file AppConfig.h
 * @date 18. Aug 2013
 * @brief Define interrupt service routines referenced by the vector table.
 *
 * @note
 * Only "vectors.c" should include this header file.
 *
 */

#ifndef __ISR_H
#define __ISR_H

void PendSV_Handler(void);
void SysTick_Handler(void);
void PIT0_IRQHandler(void);

#undef  VECTOR_014
#define VECTOR_014 PendSV_Handler

#undef  VECTOR_015
#define VECTOR_015 SysTick_Handler

#undef  VECTOR_084
#define VECTOR_084 PIT0_IRQHandler


#endif  //__ISR_H
