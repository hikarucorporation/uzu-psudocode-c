// Function : moveValidatedImageSection
// Namespace: juce:ImagePixelData
// Entry    : 0032ce20
// Prototype: undefined moveValidatedImageSection(long * param_1, ulong param_2, ulong param_3, ulong param_4)
// Body     : 0032ce20 - 0032d155


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ImagePixelData::moveValidatedImageSection(juce::Point<int>, juce::Rectangle<int>) */

void __cdecl
juce::ImagePixelData::moveValidatedImageSection
          (long *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  size_t __n;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  long local_70 [2];
  int local_5c;
  int local_58;
  ulong local_54;
  long *local_48;
  ulong local_40;
  ulong local_38;
  
  local_40 = param_3 >> 0x20;
  uVar11 = (uint)(param_4 >> 0x20);
  uVar2 = param_2;
  if ((int)param_3 < (int)param_2) {
    uVar2 = param_3;
  }
  iVar5 = (int)(param_3 >> 0x20);
  iVar3 = (int)(param_2 >> 0x20);
  iVar6 = iVar3;
  if (iVar5 < iVar3) {
    iVar6 = iVar5;
  }
  LOCK();
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  UNLOCK();
  local_48 = (long *)0x0;
                    /* try { // try from 0032ce7e to 0032ce93 has its CatchHandler @ 0032d156 */
  local_54 = param_4;
  local_38 = param_4;
  (**(code **)(*param_1 + 0x38))(param_1,local_70,uVar2 & 0xffffffff,iVar6,2);
  lVar4 = (long)local_5c;
  lVar9 = (long)local_58;
  pvVar12 = (void *)(((int)param_2 - (int)uVar2) * lVar9 + (iVar3 - iVar6) * lVar4 + local_70[0]);
  pvVar7 = (void *)(((int)param_3 - (int)uVar2) * lVar9 +
                   ((int)local_40 - iVar6) * lVar4 + local_70[0]);
  __n = (int)local_38 * lVar9;
  if ((int)local_40 < iVar3) {
    if (uVar11 != 0 && -1 < (long)param_4) {
      uVar8 = uVar11 - 1;
      memmove((void *)((long)pvVar12 + (int)uVar8 * lVar4),
              (void *)((int)uVar8 * lVar4 + (long)pvVar7),__n);
      if (uVar11 != 1) {
        for (uVar10 = uVar8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          uVar8 = uVar8 - 1;
          memmove((void *)((long)pvVar12 + (long)(int)uVar8 * (long)local_5c),
                  (void *)((long)(int)uVar8 * (long)local_5c + (long)pvVar7),__n);
        }
        if (2 < uVar11 - 2) {
          do {
            lVar4 = (long)(int)(uVar8 - 1) * (long)local_5c;
            memmove((void *)((long)pvVar12 + lVar4),(void *)(lVar4 + (long)pvVar7),__n);
            lVar4 = (long)(int)(uVar8 - 2) * (long)local_5c;
            memmove((void *)((long)pvVar12 + lVar4),(void *)(lVar4 + (long)pvVar7),__n);
            uVar11 = uVar8 - 3;
            lVar4 = (long)local_5c * (long)(int)uVar11;
            memmove((void *)((long)pvVar12 + lVar4),(void *)(lVar4 + (long)pvVar7),__n);
            lVar4 = (long)local_5c * (long)(int)(uVar8 - 4);
            memmove((void *)((long)pvVar12 + lVar4),(void *)(lVar4 + (long)pvVar7),__n);
            uVar8 = uVar8 - 4;
          } while (1 < uVar11);
        }
      }
    }
  }
  else if ((pvVar12 != pvVar7) && (uVar11 != 0 && -1 < (long)param_4)) {
    uVar10 = uVar11 - 1;
    uVar8 = uVar11 & 7;
    if ((param_4 & 0x700000000) != 0) {
      do {
        memmove(pvVar12,pvVar7,__n);
        pvVar12 = (void *)((long)pvVar12 + (long)local_5c);
        pvVar7 = (void *)((long)pvVar7 + (long)local_5c);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      uVar11 = uVar11 & 0xfffffff8;
    }
    if (6 < uVar10) {
      uVar11 = uVar11 - 1;
      do {
        memmove(pvVar12,pvVar7,__n);
        pvVar12 = (void *)((long)pvVar12 + (long)local_5c);
        pvVar7 = (void *)((long)pvVar7 + (long)local_5c);
        memmove(pvVar12,pvVar7,__n);
        pvVar12 = (void *)((long)pvVar12 + (long)local_5c);
        pvVar7 = (void *)((long)pvVar7 + (long)local_5c);
        memmove(pvVar12,pvVar7,__n);
        pvVar12 = (void *)((long)pvVar12 + (long)local_5c);
        pvVar7 = (void *)((long)pvVar7 + (long)local_5c);
        memmove(pvVar12,pvVar7,__n);
        pvVar12 = (void *)((long)pvVar12 + (long)local_5c);
        pvVar7 = (void *)((long)pvVar7 + (long)local_5c);
        memmove(pvVar12,pvVar7,__n);
        pvVar12 = (void *)((long)pvVar12 + (long)local_5c);
        pvVar7 = (void *)((long)pvVar7 + (long)local_5c);
        memmove(pvVar12,pvVar7,__n);
        pvVar12 = (void *)((long)pvVar12 + (long)local_5c);
        pvVar7 = (void *)((long)pvVar7 + (long)local_5c);
        memmove(pvVar12,pvVar7,__n);
        pvVar12 = (void *)((long)pvVar12 + (long)local_5c);
        pvVar7 = (void *)((long)pvVar7 + (long)local_5c);
        memmove(pvVar12,pvVar7,__n);
        pvVar12 = (void *)((long)pvVar12 + (long)local_5c);
        pvVar7 = (void *)((long)pvVar7 + (long)local_5c);
        uVar11 = uVar11 - 8;
      } while (uVar11 < 0xfffffffe);
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 8))();
  }
  LOCK();
  plVar1 = param_1 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}


