/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "swc"
   ARXML schema: "R20-11"
   File generated on: "16-Aug-2025 12:33:24"  */

#ifndef Rte_swc_h
#define Rte_swc_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IRead_swc_Step_In1_1s_In1_1s Rte_IRead_swc_swc_Step_In1_1s_In1_1s

Double Rte_IRead_swc_Step_In1_1s_In1_1s(void);

#define Rte_IWrite_swc_Step_Out1_Out1  Rte_IWrite_swc_swc_Step_Out1_Out1

void Rte_IWrite_swc_Step_Out1_Out1(Double u);

#define Rte_IWriteRef_swc_Step_Out1_Out1 Rte_IWriteRef_swc_swc_Step_Out1_Out1

Double* Rte_IWriteRef_swc_Step_Out1_Out1(void);

#define Rte_IWrite_swc_Step_Out2_Out2  Rte_IWrite_swc_swc_Step_Out2_Out2

void Rte_IWrite_swc_Step_Out2_Out2(Double u);

#define Rte_IWriteRef_swc_Step_Out2_Out2 Rte_IWriteRef_swc_swc_Step_Out2_Out2

Double* Rte_IWriteRef_swc_Step_Out2_Out2(void);

#define Rte_IRead_swc_Step1_In2_2s_In2_2s Rte_IRead_swc_swc_Step1_In2_2s_In2_2s

Double Rte_IRead_swc_Step1_In2_2s_In2_2s(void);

/* IRV functions */
#define Rte_IrvIRead_swc_Step_IRV1     Rte_IrvIRead_swc_swc_Step_IRV1

Double Rte_IrvIRead_swc_Step_IRV1(void);

#define Rte_IrvIWrite_swc_Step1_IRV1   Rte_IrvIWrite_swc_swc_Step1_IRV1

void Rte_IrvIWrite_swc_Step1_IRV1(Double u);

/* Entry point functions */
extern FUNC(void, swc_CODE) swc_Init(void);
extern FUNC(void, swc_CODE) swc_Step(void);
extern FUNC(void, swc_CODE) swc_Step1(void);

#endif
