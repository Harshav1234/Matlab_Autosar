/*
 * File: swc.h
 *
 * Code generated for Simulink model 'swc'.
 *
 * Model version                  : 7.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sat Aug 16 12:33:07 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_swc_h_
#define RTW_HEADER_swc_h_
#ifndef swc_COMMON_INCLUDES_
#define swc_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_swc.h"
#endif                                 /* swc_COMMON_INCLUDES_ */

#include "swc_types.h"

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  float64 Integrator_DSTATE;           /* '<Root>/Integrator' */
} ARID_DEF;

/* PublicStructure Variables for Internal Data */
extern ARID_DEF rtARID_DEF;            /* '<Root>/Integrator' */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'swc'
 * '<S1>'   : 'swc/Initialize Function'
 * '<S2>'   : 'swc/SS1'
 * '<S3>'   : 'swc/SS1/SS1'
 * '<S4>'   : 'swc/SS1/SS2'
 */
#endif                                 /* RTW_HEADER_swc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
