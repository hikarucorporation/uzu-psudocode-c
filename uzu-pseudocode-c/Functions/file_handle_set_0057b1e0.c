// Function : file_handle_set
// Namespace: 
// Entry    : 0057b1e0
// Prototype: undefined file_handle_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057b1e0 - 0057b282


void file_handle_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 unaff_BL;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  
  puVar3 = gensym("");
  piVar1 = (int *)(param_9 + 0x30);
  piVar2 = *(int **)(param_9 + 0x38);
  if ((puVar3 == param_10) || (param_10 == (undefined8 *)0x0)) {
    if ((piVar2 != piVar1) && (-1 < *piVar1)) {
      logpost(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,3,
              "file handle: unshadowing local file descriptor",piVar2,param_13,param_14,unaff_BL);
    }
    *(undefined8 *)(param_9 + 0x40) = 0;
    *(int **)(param_9 + 0x38) = piVar1;
    return;
  }
  uVar5 = extraout_XMM0_Qa;
  if ((piVar2 == piVar1) && (-1 < *piVar2)) {
    uVar5 = pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,"file handle: shadowing local file descriptor with \'%s\'",*param_10,
                     piVar2,param_13,param_14);
  }
  *(undefined8 **)(param_9 + 0x40) = param_10;
  plVar4 = pd_findbyclass(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)param_10,*(long *)PTR_file_define_class_00715550);
  if (plVar4 != (long *)0x0) {
    *(long **)(param_9 + 0x38) = plVar4 + 6;
  }
  return;
}


