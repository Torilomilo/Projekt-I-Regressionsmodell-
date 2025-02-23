/********************************************************************************
 * @brief Implementation details of miscellaneous utility functions.
 ********************************************************************************/
 #include "utils.h"

 // -----------------------------------------------------------------------------
 void delayS(const uint16_t& delayTimeS)
 {
     for (uint16_t i{}; i < delayTimeS; ++i)
     {
         _delay_ms(1000U);
     }
 }

 // -----------------------------------------------------------------------------
 void delayMs(const uint16_t& delayTimeMs)
 {
     for (uint16_t i{}; i < delayTimeMs; ++i)
     {
         _delay_ms(1U);
     }
 }

 // -----------------------------------------------------------------------------
 void delayUs(const uint16_t& delayTimeUs)
 {
     for (uint16_t i{}; i < delayTimeUs; ++i)
     {
         _delay_us(1U);
     }
 }