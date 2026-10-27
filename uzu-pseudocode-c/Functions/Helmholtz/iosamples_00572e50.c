// Function : iosamples
// Namespace: Helmholtz
// Entry    : 00572e50
// Prototype: undefined iosamples(undefined8 param_1_00, undefined8 param_2_00, ulong param_3_00, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, Helmholtz * this, undefined4 * param_10, long param_11, uint param_12)
// Body     : 00572e50 - 00572f25


/* Helmholtz::iosamples(float*, float*, int) */

void __thiscall
Helmholtz::iosamples
          (undefined8 param_1_00,undefined8 param_2_00,ulong param_3_00,ulong param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          Helmholtz *this,undefined4 *param_10,long param_11,uint param_12)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = *(int *)(this + 0x1c);
  if ((*(uint *)(this + 0x18) & iVar2 / *(int *)(this + 0x20) - 1U) == 0) {
    analyzeframe(param_1_00,param_3_00,param_4,param_5,param_6,param_7,param_8,this);
  }
  if (param_12 != 0) {
    uVar6 = iVar2 - 1;
    uVar7 = *(uint *)(this + 0x18);
    lVar3 = *(long *)this;
    lVar4 = *(long *)(this + 0x10);
    if (param_12 == 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      do {
        *(undefined4 *)(lVar3 + (long)(int)uVar7 * 4) = *param_10;
        *(undefined4 *)(param_11 + lVar5 * 4) = *(undefined4 *)(lVar4 + (long)(int)uVar7 * 4);
        uVar7 = uVar7 + 1 & uVar6;
        puVar1 = param_10 + 1;
        param_10 = param_10 + 2;
        *(undefined4 *)(lVar3 + (long)(int)uVar7 * 4) = *puVar1;
        *(undefined4 *)(param_11 + 4 + lVar5 * 4) = *(undefined4 *)(lVar4 + (long)(int)uVar7 * 4);
        lVar5 = lVar5 + 2;
        uVar7 = uVar7 + 1 & uVar6;
      } while ((param_12 & 0xfffffffe) != (uint)lVar5);
    }
    if ((param_12 & 1) != 0) {
      *(undefined4 *)(lVar3 + (long)(int)uVar7 * 4) = *param_10;
      *(undefined4 *)(param_11 + lVar5 * 4) = *(undefined4 *)(lVar4 + (long)(int)uVar7 * 4);
      uVar7 = uVar7 + 1 & uVar6;
    }
    *(uint *)(this + 0x18) = uVar7;
  }
  return;
}


