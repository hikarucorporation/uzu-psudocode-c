// Function : file_handle_new
// Namespace: 
// Entry    : 0057ad20
// Prototype: long * file_handle_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0057ad20 - 0057ad77


long * file_handle_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,
                      undefined8 param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 extraout_XMM0_Qa;
  
  pcVar4 = (char *)0x1b6;
  plVar1 = do_file_handle_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              *(long *)PTR_file_handle_class_00715dc8,param_10,param_11,1,
                              (char *)0x1b6,param_14);
  puVar2 = gensym("symbol");
  puVar3 = gensym("set");
  inlet_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
            (long)plVar1,(long)puVar2,(long)puVar3,pcVar4,param_14);
  return plVar1;
}


