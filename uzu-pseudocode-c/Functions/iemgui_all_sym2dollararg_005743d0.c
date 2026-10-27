// Function : iemgui_all_sym2dollararg
// Namespace: 
// Entry    : 005743d0
// Prototype: undefined iemgui_all_sym2dollararg(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005743d0 - 00574458


void iemgui_all_sym2dollararg
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  undefined8 uVar1;
  
  uVar1 = iemgui_init_sym2dollararg
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (long *)(param_9 + 0x470),*(int *)(param_9 + 0x488) + 1,
                     *(long *)(param_9 + 0x458),param_13,param_14);
  uVar1 = iemgui_init_sym2dollararg
                    (uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (long *)(param_9 + 0x478),*(int *)(param_9 + 0x488) + 2,
                     *(long *)(param_9 + 0x460),param_13,param_14);
  iemgui_init_sym2dollararg
            (uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             (long *)(param_9 + 0x480),*(int *)(param_9 + 0x48c),*(long *)(param_9 + 0x468),param_13
             ,param_14);
  *param_10 = *(undefined8 *)(param_9 + 0x470);
  param_10[1] = *(undefined8 *)(param_9 + 0x478);
  param_10[2] = *(undefined8 *)(param_9 + 0x480);
  return;
}


