// Function : iemgui_init_sym2dollararg
// Namespace: 
// Entry    : 00574460
// Prototype: undefined iemgui_init_sym2dollararg(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, int param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00574460 - 005744f6


void iemgui_init_sym2dollararg
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long *param_10,int param_11,long param_12,char *param_13,
               undefined8 param_14)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  char *__s1;
  undefined8 extraout_XMM0_Qa;
  char acStack_f8 [128];
  undefined1 in_stack_ffffffffffffff88;
  
  if (*param_10 == 0) {
    if (*(int *)(*(long *)(param_9 + 0x48) + 0x40) != 0) {
      puVar1 = *(undefined4 **)(param_9 + 0x10);
      iVar2 = binbuf_getnatom(puVar1);
      if (param_11 < iVar2) {
        lVar3 = binbuf_getvec((long)puVar1);
        __s1 = acStack_f8 + 0x80;
        lVar5 = (long)param_11 * 0x10;
        if (*(int *)(lVar3 + lVar5) == 2) {
          puVar4 = (undefined8 *)atom_getsymbol((int *)(lVar3 + lVar5));
          __s1 = (char *)*puVar4;
        }
        else {
          atom_string(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (int *)(lVar3 + lVar5),acStack_f8 + 0x80,(uint *)0x50,lVar5,param_13,param_14,
                      in_stack_ffffffffffffff88);
        }
        iVar2 = strcmp(__s1,"empty");
        if (iVar2 != 0) {
          puVar4 = gensym(__s1);
          *param_10 = (long)puVar4;
        }
      }
    }
    if (*param_10 == 0) {
      *param_10 = param_12;
    }
  }
  return;
}


