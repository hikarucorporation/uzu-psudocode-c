// Function : gtemplate_new
// Namespace: 
// Entry    : 00527ee0
// Prototype: undefined gtemplate_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, int param_10, long param_11, ulong param_12, long * param_13, long param_14)
// Body     : 00527ee0 - 00527f31


void gtemplate_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,int param_10,long param_11,ulong param_12,long *param_13,
                  long param_14)

{
  undefined8 *puVar1;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qa_00;
  
  puVar1 = (undefined8 *)atom_getsymbolarg(0,param_10,param_11);
  uVar2 = extraout_XMM0_Qa;
  if (*(char *)*puVar1 == '-') {
    uVar2 = post(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 "warning: struct \'%s\' initial \'-\' may confuse get/set, etc.");
  }
  puVar1 = (undefined8 *)
           canvas_makebindsym(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar1);
  gtemplate_donew(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar1
                  ,(ulong)(param_10 - (uint)(0 < param_10)),
                  (int *)(param_11 + (ulong)(0 < param_10) * 0x10),param_12,param_13,param_14);
  return;
}


