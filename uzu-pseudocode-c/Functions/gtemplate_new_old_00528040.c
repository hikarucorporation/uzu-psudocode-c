// Function : gtemplate_new_old
// Namespace: 
// Entry    : 00528040
// Prototype: undefined gtemplate_new_old(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, uint param_10, int * param_11, ulong param_12, long * param_13, long param_14)
// Body     : 00528040 - 0052808b


void gtemplate_new_old(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,uint param_10,int *param_11,ulong param_12,long *param_13,
                      long param_14)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar3;
  
  lVar1 = canvas_getcurrent(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar2 = (undefined8 *)
           canvas_makebindsym(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,*(undefined8 **)(lVar1 + 200));
  uVar3 = extraout_XMM0_Qa_00;
  if (gtemplate_new_old_warned == '\0') {
    uVar3 = post(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 "warning -- \'template\' (%s) is obsolete; replace with \'struct\'");
    gtemplate_new_old_warned = '\x01';
  }
  gtemplate_donew(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar2,
                  (ulong)param_10,param_11,param_12,param_13,param_14);
  return;
}


