// Function : peak_tilde_perform
// Namespace: 
// Entry    : 00565fc0
// Prototype: long peak_tilde_perform(long param_1)
// Body     : 00565fc0 - 005660a4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long peak_tilde_perform(long param_1)

{
  int *piVar1;
  float fVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  
  lVar3 = *(long *)(param_1 + 8);
  fVar7 = *(float *)(lVar3 + 0x5c);
  uVar4 = (uint)*(ulong *)(param_1 + 0x18);
  if (0 < (int)uVar4) {
    lVar5 = (long)(int)uVar4 * 4 + *(long *)(param_1 + 0x10);
    if (uVar4 != 1) {
      uVar6 = uVar4 & 0xfffffffe;
      do {
        fVar2 = *(float *)(lVar5 + -4);
        if (fVar7 < fVar2) {
LAB_00566088:
          fVar7 = fVar2;
        }
        else if (fVar2 < (float)((uint)fVar7 ^ _DAT_006524b0)) {
          fVar2 = (float)((uint)fVar2 ^ _DAT_006524b0);
          goto LAB_00566088;
        }
        fVar2 = *(float *)(lVar5 + -8);
        if (fVar7 < fVar2) {
LAB_00566060:
          fVar7 = fVar2;
        }
        else if (fVar2 < (float)((uint)fVar7 ^ _DAT_006524b0)) {
          fVar2 = (float)((uint)fVar2 ^ _DAT_006524b0);
          goto LAB_00566060;
        }
        lVar5 = lVar5 + -8;
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
      fVar2 = *(float *)(lVar5 + -4);
      if (fVar2 <= fVar7) {
        if ((float)(_DAT_006524b0 ^ (uint)fVar7) <= fVar2) goto LAB_00566010;
        fVar2 = (float)((uint)fVar2 ^ _DAT_006524b0);
      }
      fVar7 = fVar2;
    }
  }
LAB_00566010:
  piVar1 = (int *)(lVar3 + 0x40);
  *piVar1 = *piVar1 - uVar4;
  if (*piVar1 < 0) {
    *(float *)(lVar3 + 0x50) = fVar7;
    *(uint *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x48) - uVar4;
    clock_delay(0.0,*(double **)(lVar3 + 0x38));
    fVar7 = 0.0;
  }
  *(float *)(lVar3 + 0x5c) = fVar7;
  return param_1 + 0x20;
}


