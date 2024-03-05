//**********************************************************************************************************************
//
//                                                 nvm_bs_i.h
//
//**********************************************************************************************************************
//
//                                       Copyrights(c) by KNORR-BREMSE,
//                                        Rail Vehicle Systems, Munich
//
//! @project CBK
//! @date 2018-09-07
//! @author K. Gade
//!
//**********************************************************************************************************************
//!
//! @file nvm_bs_i.h
//! @brief NVM_SVL - Board specific dependencies.
//!
//**********************************************************************************************************************
//
// History
// Date         Author         Changes
// 2018-09-07   K. Gade        BC0025-59: Start
//
//**********************************************************************************************************************

#ifndef NVM_BS_I_H
#define NVM_BS_I_H

//**************************************** Header / include files ( #include ) *****************************************

//**************************************** Constant / macro definitions ( #define ) ************************************
//! Device identifiers,
//! New device name can be defined here and used in 'cfg_nvm.c' or it can be used while accessing 'nvm_s.h' interfaces
#define NVM_SVL_DEVICE_FRAM             ((U8) 0)        //!< FRAM
#define NVM_SVL_DEVICE_FLASH            ((U8) 1)        //!< Flash

//**************************************** Type definitions ( typedef ) ************************************************

//**************************************** Global data declarations ( extern ) *****************************************

//**************************************** External parameter / constant declarations ( extern const )	****************

//**************************************** Global func/proc prototypes *************************************************

#endif // NVM_BS_I_H */

// EndOfFile nvm_bs_i.h ****************************************************************************************************
