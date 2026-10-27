// Function : file_split_symbol
// Namespace: 
// Entry    : 0057c830
// Prototype: undefined file_split_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057c830 - 0057c8b8


void file_split_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  long *plVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  uint local_24;
  void *local_20;
  
  local_24 = 0;
  local_20 = (void *)0x0;
  puVar3 = do_splitpath(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        (char *)*param_10,&local_24,&local_20);
  if (puVar3 == (undefined8 *)0x0) {
    outlet_bang(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x60));
  }
  else {
    outlet_symbol(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long **)(param_9 + 0x60));
  }
  plVar1 = *(long **)(param_9 + 0x58);
  puVar3 = gensym("list");
  pvVar2 = local_20;
  outlet_list(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
              puVar3,local_24,local_20,param_13,param_14);
  freebytes(pvVar2);
  return;
}


