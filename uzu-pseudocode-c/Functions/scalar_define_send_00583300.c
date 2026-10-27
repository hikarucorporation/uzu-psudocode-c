// Function : scalar_define_send
// Namespace: 
// Entry    : 00583300
// Prototype: undefined scalar_define_send(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00583300 - 0058339b


void scalar_define_send(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 *param_10,undefined8 param_11,undefined8 *param_12,
                       char *param_13,undefined8 param_14,undefined1 param_15)

{
  undefined *puVar1;
  undefined8 extraout_RDX;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_30 [3];
  
  if (param_10[1] == 0) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "scalar_define_send: %s: no such object",*param_10,param_12,param_13,param_14);
    return;
  }
  if ((*(long **)(param_9 + 0x30) == (long *)0x0) ||
     (param_12 = (undefined8 *)PTR_scalar_class_00715810,
     **(long **)(param_9 + 0x30) != *(long *)PTR_scalar_class_00715810)) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"scalar_define_send",
        param_10,param_11,param_12,param_13,param_14,param_15);
    return;
  }
  puVar1 = PTR_scalar_class_00715810;
  uVar3 = gpointer_init(local_30);
  gpointer_setglist(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_30,param_9,
                    *(undefined8 *)(param_9 + 0x30),puVar1,param_13,param_14);
  puVar2 = local_30;
  uVar3 = pd_pointer((long *)param_10[1]);
  gpointer_unset(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)local_30,puVar2
                 ,extraout_RDX,puVar1,param_13,param_14);
  return;
}


