// Function : textbuf_addline
// Namespace: 
// Entry    : 005570e0
// Prototype: undefined textbuf_addline(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 005570e0 - 00557138


void textbuf_addline(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,int param_11,int *param_12,char *param_13,
                    undefined8 param_14)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  piVar5 = param_12;
  piVar3 = binbuf_new();
  binbuf_restore(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar3,
                 param_11,param_12,piVar5,param_13,param_14);
  piVar1 = *(int **)(param_9 + 0x30);
  uVar2 = binbuf_getnatom(piVar3);
  puVar4 = (undefined8 *)binbuf_getvec((long)piVar3);
  binbuf_add(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar1,
             uVar2,puVar4,piVar5,param_13,param_14);
  binbuf_free(piVar3);
  return;
}


