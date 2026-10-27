// Function : textfile_bang
// Namespace: 
// Entry    : 0055ac70
// Prototype: undefined textfile_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9)
// Body     : 0055ac70 - 0055ad20


void textfile_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,long param_9)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint *in_R8;
  uint *in_R9;
  undefined8 extraout_XMM0_Qa;
  
  uVar1 = binbuf_getnatom(*(undefined4 **)(param_9 + 0x30));
  uVar6 = *(uint *)(param_9 + 0x58);
  uVar7 = (ulong)(int)uVar6;
  lVar2 = binbuf_getvec(*(long *)(param_9 + 0x30));
  puVar4 = (uint *)(uVar7 * 0x10 + lVar2);
  if ((int)uVar6 < (int)uVar1) {
    do {
      uVar6 = (uint)uVar7;
      if ((*puVar4 & 0xfffffffe) != 4) goto LAB_0055acb7;
      uVar7 = (ulong)(uVar6 + 1);
      puVar4 = puVar4 + 4;
    } while (uVar1 != uVar6 + 1);
  }
  else {
LAB_0055acb7:
    if ((int)uVar6 < (int)uVar1) {
      puVar3 = puVar4;
      uVar5 = uVar6;
      do {
        if ((*puVar3 & 0xfffffffe) == 4) goto LAB_0055acd7;
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 4;
      } while (uVar1 != uVar5);
      uVar5 = uVar1;
LAB_0055acd7:
      if (uVar5 - uVar6 != 0 && (int)uVar6 <= (int)uVar5) {
        *(uint *)(param_9 + 0x58) = uVar5;
        if (*puVar4 == 2) {
          outlet_anything(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          *(long **)(param_9 + 0x18),*(undefined8 **)(puVar4 + 2),uVar5 + ~uVar6,
                          (int *)(puVar4 + 4),in_R8,in_R9);
          return;
        }
        outlet_list(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    *(long **)(param_9 + 0x18),0,uVar5 - uVar6,puVar4,(char *)in_R8,in_R9);
        return;
      }
    }
  }
  *(undefined4 *)(param_9 + 0x58) = 0x7fffffff;
  outlet_bang(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(long **)(param_9 + 0x50));
  return;
}


