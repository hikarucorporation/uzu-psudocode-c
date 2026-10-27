// Function : biquads_list
// Namespace: 
// Entry    : 00566e80
// Prototype: undefined biquads_list(long param_1, undefined8 param_2, int param_3, long param_4)
// Body     : 00566e80 - 00566f85


void biquads_list(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar3 = 0x32;
  if (param_3 / 5 < 0x32) {
    uVar3 = param_3 / 5;
  }
  *(uint *)(param_1 + 0x688) = uVar3;
  if (4 < param_3) {
    uVar4 = 1;
    if (1 < (int)uVar3) {
      uVar4 = (ulong)uVar3;
    }
    lVar6 = 0;
    do {
      iVar5 = (int)lVar6;
      fVar7 = (float)atom_getfloatarg(iVar5,param_3,param_4);
      fVar8 = (float)atom_getfloatarg(iVar5 + 1,param_3,param_4);
      fVar9 = (float)atom_getfloatarg(iVar5 + 2,param_3,param_4);
      fVar10 = (float)atom_getfloatarg(iVar5 + 3,param_3,param_4);
      fVar11 = (float)atom_getfloatarg(iVar5 + 4,param_3,param_4);
      auVar1._8_4_ = SUB84((double)fVar8,0);
      auVar1._0_8_ = (double)fVar7;
      auVar1._12_4_ = (int)((ulong)(double)fVar8 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x690 + lVar6 * 8) = auVar1;
      auVar2._8_4_ = SUB84((double)fVar10,0);
      auVar2._0_8_ = (double)fVar9;
      auVar2._12_4_ = (int)((ulong)(double)fVar10 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x6a0 + lVar6 * 8) = auVar2;
      *(double *)(param_1 + 0x6b0 + lVar6 * 8) = (double)fVar11;
      lVar6 = lVar6 + 5;
    } while (uVar4 * 5 != lVar6);
  }
  return;
}


