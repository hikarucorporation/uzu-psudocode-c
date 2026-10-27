// Function : scalar_define_bang
// Namespace: 
// Entry    : 005833a0
// Prototype: undefined scalar_define_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 005833a0 - 0058340c


void scalar_define_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
                       char *param_13,undefined8 param_14,undefined1 param_15)

{
  undefined *puVar1;
  undefined8 extraout_RDX;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 auStack_28 [3];
  
  puVar2 = auStack_28;
  if ((*(long **)(param_9 + 0x30) == (long *)0x0) ||
     (param_12 = (undefined8 *)PTR_scalar_class_00715810,
     **(long **)(param_9 + 0x30) != *(long *)PTR_scalar_class_00715810)) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"scalar_define_bang",
        param_10,param_11,param_12,param_13,param_14,param_15);
    return;
  }
  puVar1 = PTR_scalar_class_00715810;
  uVar3 = gpointer_init(auStack_28);
  uVar3 = gpointer_setglist(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,auStack_28
                            ,param_9,*(undefined8 *)(param_9 + 0x30),puVar1,param_13,param_14);
  outlet_pointer(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long **)(param_9 + 0x18));
  gpointer_unset(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 (long)auStack_28,puVar2,extraout_RDX,puVar1,param_13,param_14);
  return;
}


