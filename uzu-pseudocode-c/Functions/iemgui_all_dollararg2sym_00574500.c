// Function : iemgui_all_dollararg2sym
// Namespace: 
// Entry    : 00574500
// Prototype: undefined iemgui_all_dollararg2sym(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00574500 - 0057456e


void iemgui_all_dollararg2sym
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  puVar1 = (undefined8 *)*param_10;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = canvas_realizedollar
                       (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(long *)(param_9 + 0x30),puVar1,param_11,param_12,param_13,param_14);
    *param_10 = puVar2;
    param_11 = extraout_RDX;
    param_1 = extraout_XMM0_Qa;
  }
  *(undefined8 **)(param_9 + 0x470) = puVar1;
  puVar1 = (undefined8 *)param_10[1];
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = canvas_realizedollar
                       (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(long *)(param_9 + 0x30),puVar1,param_11,param_12,param_13,param_14);
    param_10[1] = puVar2;
    param_11 = extraout_RDX_00;
    param_1 = extraout_XMM0_Qa_00;
  }
  *(undefined8 **)(param_9 + 0x478) = puVar1;
  puVar1 = (undefined8 *)param_10[2];
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = canvas_realizedollar
                       (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(long *)(param_9 + 0x30),puVar1,param_11,param_12,param_13,param_14);
    param_10[2] = puVar2;
  }
  *(undefined8 **)(param_9 + 0x480) = puVar1;
  return;
}


