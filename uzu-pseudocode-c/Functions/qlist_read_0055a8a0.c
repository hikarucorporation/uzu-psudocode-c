// Function : qlist_read
// Namespace: 
// Entry    : 0055a8a0
// Prototype: undefined qlist_read(undefined8 param_1, undefined8 param_2, long param_3, long param_4, long param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055a8a0 - 0055a930


void qlist_read(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
               undefined8 *param_10,undefined8 *param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  char *__s1;
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa_00;
  
  __s1 = (char *)*param_11;
  iVar2 = strcmp(__s1,"cr");
  uVar4 = extraout_XMM0_Qa;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  else if (*__s1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,"qlist_read: unknown flag: %s",__s1,param_12,param_13,param_14);
  }
  bVar1 = binbuf_read_via_canvas
                    (uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(uint **)(param_9 + 0x30),(char *)*param_10,*(long *)(param_9 + 0x38),
                     (int)uVar3);
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "%s: read failed",*param_10,uVar3,param_13,param_14);
  }
  *(undefined4 *)(param_9 + 0x58) = 0x7fffffff;
  *(undefined4 *)(param_9 + 0x7c) = 1;
  return;
}


