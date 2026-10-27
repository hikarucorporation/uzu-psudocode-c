// Function : canvas_rename_method
// Namespace: 
// Entry    : 00502140
// Prototype: undefined canvas_rename_method(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00502140 - 00502220


void canvas_rename_method
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,undefined8 param_10,undefined8 param_11,int *param_12,char *param_13,
               undefined8 param_14,undefined1 param_15)

{
  undefined8 *puVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 unaff_RBX;
  long lVar4;
  long *plVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qa_00;
  
  if ((int)param_11 != 0) {
    if (*param_12 == 9) {
      piVar2 = param_12;
      if (param_9 == (long *)0x0) {
        param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "canvas_getenv",param_10,param_11,param_12,param_13,param_14,(char)unaff_RBX);
        param_11 = extraout_RDX;
        lVar4 = lRam00000000000000e0;
      }
      else {
        lVar4 = param_9[0x1c];
      }
      if (lVar4 == 0) {
        plVar5 = param_9;
        do {
          plVar5 = (long *)plVar5[9];
          if (plVar5 == (long *)0x0) {
            param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          "t_canvasenvironment",param_10,param_11,piVar2,param_13,param_14,
                          (char)unaff_RBX);
            param_11 = extraout_RDX_01;
          }
          lVar4 = plVar5[0x1c];
        } while (lVar4 == 0);
      }
      uVar6 = pd_pushsym(param_9);
      pcVar3 = (char *)0x1;
      puVar1 = binbuf_realizedollsym
                         (uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          *(undefined8 **)(param_12 + 2),*(int *)(lVar4 + 8),*(long *)(lVar4 + 0x10)
                          ,1,param_13,param_14);
      uVar6 = canvas_rename(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,param_9,puVar1,(char *)0x0,pcVar3,param_13,param_14);
      pd_popsym(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,puVar1,
                extraout_RDX_00,pcVar3,param_13,param_14,param_15);
      return;
    }
    if (*param_12 == 2) {
      puVar1 = *(undefined8 **)(param_12 + 2);
      goto LAB_0050217a;
    }
  }
  puVar1 = gensym("Pd");
  param_1 = extraout_XMM0_Qa;
LAB_0050217a:
  canvas_rename(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,puVar1,
                (char *)0x0,(char *)param_12,param_13,param_14);
  return;
}


