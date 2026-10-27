// Function : qlist_write
// Namespace: 
// Entry    : 0055a940
// Prototype: undefined qlist_write(undefined8 param_1, undefined8 param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined8 * param_14)
// Body     : 0055a940 - 0055a9e6


void qlist_write(undefined8 param_1,undefined8 param_2,double param_3,double param_4,double param_5,
                double param_6,double param_7,undefined8 param_8,long param_9,undefined8 *param_10,
                undefined8 *param_11,undefined8 param_12,char *param_13,undefined8 *param_14)

{
  char *__s1;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa_00;
  char acStack_408 [1000];
  
  uVar2 = 1000;
  canvas_makefilename(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      *(long *)(param_9 + 0x38),(char *)*param_10,acStack_408,1000,param_13,param_14
                     );
  __s1 = (char *)*param_11;
  iVar1 = strcmp(__s1,"cr");
  uVar4 = extraout_XMM0_Qa;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  else if (*__s1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,"qlist_read: unknown flag: %s",__s1,uVar2,param_13,param_14);
  }
  uVar4 = binbuf_write(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(uint **)(param_9 + 0x30),acStack_408,"",(int)uVar3,param_13,param_14);
  if ((int)uVar4 != 0) {
    pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "%s: write failed",*param_10,uVar3,param_13,param_14);
  }
  return;
}


