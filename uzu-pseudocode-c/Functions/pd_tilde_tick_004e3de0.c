// Function : pd_tilde_tick
// Namespace: 
// Entry    : 004e3de0
// Prototype: undefined pd_tilde_tick(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9)
// Body     : 004e3de0 - 004e3e8b


void pd_tilde_tick(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,long param_9)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *in_R8;
  uint *in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa_01;
  
  uVar1 = binbuf_getnatom(*(undefined4 **)(param_9 + 0x58));
  lVar2 = binbuf_getvec(*(long *)(param_9 + 0x58));
  uVar7 = extraout_XMM0_Qa;
  if (0 < (int)uVar1) {
    uVar6 = 0;
    uVar5 = 0;
    do {
      while (*(int *)(lVar2 + uVar6 * 0x10) == 4) {
        uVar4 = (uint)uVar5;
        if ((long)(int)uVar4 < (long)uVar6) {
          lVar3 = (long)(int)uVar4 * 0x10;
          if (*(int *)(lVar2 + lVar3) == 2) {
            outlet_anything(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            *(long **)(param_9 + 0x38),*(undefined8 **)(lVar2 + 8 + lVar3),
                            ~uVar4 + (int)uVar6,(int *)(lVar3 + lVar2 + 0x10),in_R8,in_R9);
            uVar7 = extraout_XMM0_Qa_01;
          }
          else {
            outlet_list(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(long **)(param_9 + 0x38),0,(int)uVar6 - uVar4,lVar3 + lVar2,(char *)in_R8,
                        in_R9);
            uVar7 = extraout_XMM0_Qa_00;
          }
        }
        uVar6 = uVar6 + 1;
        uVar5 = uVar6 & 0xffffffff;
        if (uVar6 == uVar1) goto LAB_004e3e79;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar1);
  }
LAB_004e3e79:
  binbuf_clear(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(int **)(param_9 + 0x58));
  return;
}


