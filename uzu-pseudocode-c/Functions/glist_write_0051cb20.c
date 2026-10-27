// Function : glist_write
// Namespace: 
// Entry    : 0051cb20
// Prototype: undefined glist_write(undefined8 param_1, undefined8 param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined8 * param_14)
// Body     : 0051cb20 - 0051cbe4


void glist_write(undefined8 param_1,undefined8 param_2,double param_3,double param_4,double param_5,
                double param_6,double param_7,undefined8 param_8,long param_9,undefined8 *param_10,
                undefined8 *param_11,undefined8 param_12,char *param_13,undefined8 *param_14)

{
  char *__s1;
  int iVar1;
  long lVar2;
  uint *puVar3;
  undefined8 uVar4;
  void **ppvVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  char acStack_408 [1000];
  
  lVar2 = glist_getcanvas(param_9);
  ppvVar5 = (void **)0x3e8;
  canvas_makefilename(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar2
                      ,(char *)*param_10,acStack_408,1000,param_13,param_14);
  __s1 = (char *)*param_11;
  iVar1 = strcmp(__s1,"cr");
  uVar4 = extraout_RDX;
  uVar7 = extraout_XMM0_Qa_00;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  else if (*__s1 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar7 = pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                     "qlist_read: unknown flag: %s",__s1,ppvVar5,param_13,param_14);
    uVar4 = extraout_RDX_00;
  }
  puVar3 = (uint *)glist_writetobinbuf(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                       ,param_9,1,uVar4,ppvVar5,param_13,param_14);
  if (puVar3 != (uint *)0x0) {
    uVar4 = binbuf_write(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,puVar3,acStack_408,"",(int)uVar6,param_13,param_14);
    if ((int)uVar4 != 0) {
      pd_error(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
               "%s: write failed",*param_10,uVar6,param_13,param_14);
    }
    binbuf_free(puVar3);
  }
  return;
}


