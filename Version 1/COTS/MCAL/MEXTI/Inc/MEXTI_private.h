/*
 * MEXTI_private.h
 *
 *  Created on: Aug 14, 2023
 *      Author: Ola Raafat
 */

#ifndef MCAL_MEXTI_MEXTI_PRIVATE_H_
#define MCAL_MEXTI_MEXTI_PRIVATE_H_



#define EXTI_BASE_ADDRESS 0x40013C00UL

typedef struct
{
	u32 EXTI_IMR;
	u32 EXTI_EMR;
	u32 EXTI_RTSR;
	u32 EXTI_FTSR;
	u32 EXTI_SWIER;
	u32 EXTI_PR;
}EXTI_MEMMAP_t;

EXTI_MEMMAP_t * EXTI = (volatile EXTI_MEMMAP_t*)(EXTI_BASE_ADDRESS) ;


typedef enum
{
	EXTI0,
	EXTI1,
	EXTI2,
	EXTI3,
	EXTI4,
	EXTI5,
	EXTI6,
	EXTI7,
	EXTI8,
	EXTI9,
	EXTI10,
	EXTI11,
	EXTI12,
	EXTI13,
	EXTI14,
	EXTI15,
}EXTI_SWIER_t;

#endif /* MCAL_MEXTI_MEXTI_PRIVATE_H_ */
