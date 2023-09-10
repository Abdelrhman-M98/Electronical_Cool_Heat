/*
 * EEPROM_Core.h
 *
 * Created: 9/4/2023 7:30:30 PM
 *  Author: abdel
 */ 


#ifndef EEPROM_CORE_H_
#define EEPROM_CORE_H_


/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <Write File Name>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "EEPROM_CFG.h"
#include "MCU.h"
#include "BIT_MATH.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 void EEPROM_write(Uint_16 addr, Uint_8 data);
 Uint_8 EEPROM_read(Uint_16 addr);


#endif /* EEPROM_CORE_H_ */

/**********************************************************************************************************************
 *  END OF FILE: 
 *********************************************************************************************************************/



