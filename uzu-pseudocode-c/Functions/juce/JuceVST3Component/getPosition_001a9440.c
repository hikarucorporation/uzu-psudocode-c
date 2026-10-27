// Function : getPosition
// Namespace: juce:JuceVST3Component
// Entry    : 001a9440
// Prototype: undefined getPosition(ulong * param_1, long param_2)
// Body     : 001a9440 - 001a9686


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JuceVST3Component::getPosition() const */

void __cdecl juce::JuceVST3Component::getPosition(ulong *param_1,long param_2)

{
  double dVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  ulong uVar11;
  double dVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar7 = *(ulong *)(param_2 + 0x98);
  uVar8 = 0;
  if ((long)uVar7 < 0) {
    uVar7 = 0;
  }
  uVar2 = *(uint *)(param_2 + 0x88);
  if ((uVar2 & 0x4000) == 0) {
    uVar6 = 0x10000000018;
  }
  else {
    uVar6 = (ulong)(*(uint *)(param_2 + 0xec) & 1) << 0x28 |
            (ulong)(*(uint *)(param_2 + 0xec) & 2) << 0x1f | (ulong)*(uint *)(param_2 + 0xe8);
    uVar8 = 4;
  }
  uVar11 = 0;
  if (uVar8 == 0) {
    uVar9 = 0;
    dVar12 = 0.0;
  }
  else {
    dVar12 = (double)(int)uVar6;
    if (uVar6 >> 0x28 != 0) {
      dVar12 = dVar12 / _DAT_005db350;
    }
    dVar12 = (double)*(int *)(param_2 + 0xe4) / (dVar12 * _DAT_005db358);
    uVar9 = 0x40;
  }
  uVar13 = 0;
  if ((uVar2 & 0x800) != 0) {
    uVar13 = *(ulong *)(param_2 + 0xb8);
  }
  uVar14 = 0;
  if ((uVar2 & 0x200) != 0) {
    uVar14 = *(ulong *)(param_2 + 0xb0);
  }
  uVar15 = 0;
  uVar16 = 0;
  if ((uVar2 & 0x1000) != 0) {
    uVar15 = *(ulong *)(param_2 + 0xc0);
    uVar16 = *(ulong *)(param_2 + 200);
  }
  dVar1 = *(double *)(param_2 + 0x90);
  bVar10 = (uVar2 & 0x2000) != 0;
  uVar5 = 0x400000000;
  if (bVar10) {
    uVar5 = (ulong)*(uint *)(param_2 + 0xdc) << 0x20;
  }
  uVar4 = (ulong)*(uint *)(param_2 + 0xd8);
  if (!bVar10) {
    uVar4 = 4;
  }
  if ((uVar2 & 0x400) != 0) {
    uVar11 = *(ulong *)(param_2 + 0xd0);
  }
  uVar3 = *(ulong *)(param_2 + 0xa0);
  *param_1 = uVar5 | uVar4;
  param_1[1] = uVar15;
  param_1[2] = uVar16;
  param_1[3] = uVar6;
  param_1[4] = (ulong)((double)(long)uVar7 / dVar1);
  param_1[5] = uVar13;
  param_1[6] = uVar14;
  param_1[7] = (ulong)dVar12;
  param_1[8] = uVar11;
  param_1[9] = uVar7;
  param_1[10] = 0;
  param_1[0xb] = (long)((ulong)uVar2 << 0x37) >> 0x3f & uVar3;
  param_1[0xc] = ((ulong)(uVar2 >> 0xd & 1 | (uVar2 & 0x400) >> 3 | (uVar2 & 0x1000) >> 0xb |
                          (uVar2 & 0x200) >> 4 | (uVar2 & 0x800) >> 7) |
                  (ulong)(uVar2 & 4) * 0x800 + ((ulong)(uVar2 & 2) << 10 | (ulong)(uVar2 & 8) << 9)
                  + 0x108 | uVar8) + (ulong)(uVar2 & 0x100) * 4 | uVar9;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return;
}


