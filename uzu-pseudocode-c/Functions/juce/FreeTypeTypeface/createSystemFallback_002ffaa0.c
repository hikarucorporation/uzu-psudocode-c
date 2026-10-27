// Function : createSystemFallback
// Namespace: juce:FreeTypeTypeface
// Entry    : 002ffaa0
// Prototype: long * createSystemFallback(long * param_1, long param_2, undefined8 * param_3, undefined8 param_4, undefined8 param_5, ulong param_6)
// Body     : 002ffaa0 - 002ffcb8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::FreeTypeTypeface::createSystemFallback(juce::String const&, juce::String const&) const */

long * __cdecl
juce::FreeTypeTypeface::createSystemFallback
          (long *param_1,long param_2,undefined8 *param_3,undefined8 param_4,undefined8 param_5,
          ulong param_6)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  DeletedAtShutdown *pDVar7;
  long *plVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar11;
  uint *puVar12;
  bool bVar13;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  long *local_40;
  long local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  pDVar7 = SingletonHolder<juce::TypefaceFileCache,juce::DummyCriticalSection,false>::
           getWithoutChecking();
  if (pDVar7 == (DeletedAtShutdown *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  local_38 = param_2;
  local_30 = param_3;
  local_28 = param_4;
  const::{lambda()#1}::operator()((_lambda___1_ *)&local_50,&local_38);
  puVar10 = *(undefined4 **)(*(long *)(*(long *)(param_2 + 0x20) + 0x28) + 0x28);
  lVar3 = CONCAT44(uStack_4c,local_50);
                    /* try { // try from 002ffaf3 to 002ffb16 has its CatchHandler @ 002ffcef */
  puVar12 = (uint *)0x0;
  FcPatternAddWeak(lVar3,"family",3);
  fromPattern((FreeTypeTypeface *)&local_40,lVar3,extraout_RDX,puVar10,puVar12,param_6);
  if (lVar3 != 0) {
                    /* try { // try from 002ffb1c to 002ffb23 has its CatchHandler @ 002ffcd2 */
    FcPatternDestroy(lVar3);
  }
  plVar5 = local_40;
  pbVar2 = (byte *)*param_3;
  bVar1 = *pbVar2;
  uVar11 = (uint)bVar1;
  if (bVar1 == 0) {
    *param_1 = (long)local_40;
    if (local_40 == (long *)0x0) goto LAB_002ffc94;
LAB_002ffc36:
    LOCK();
    plVar5 = plVar5 + 1;
    *(int *)plVar5 = (int)*plVar5 + 1;
    UNLOCK();
  }
  else {
    if ((char)bVar1 < '\0') {
      uVar11 = (uint)bVar1;
      if ((bVar1 & 0x40) == 0) {
        uVar11 = uVar11 & 0x7f;
      }
      else {
        bVar13 = (bVar1 & 0x10) == 0;
        puVar10 = (undefined4 *)CONCAT71((int7)((ulong)puVar10 >> 8),bVar13);
        uVar9 = 0x3f;
        if ((bVar1 & 0x20) != 0) {
          uVar9 = uVar11 & 0x10 ^ 0x1f;
        }
        uVar11 = uVar9 & uVar11;
        if (((((pbVar2[1] & 0xffffffc0) == 0x80) &&
             (uVar11 = pbVar2[1] & 0x3f | uVar11 << 6, (bVar1 & 0x20) != 0)) &&
            ((pbVar2[2] & 0xffffffc0) == 0x80)) &&
           (uVar11 = pbVar2[2] & 0x3f | uVar11 << 6, (bVar1 >> 5 & bVar13) == 0)) {
          uVar9 = pbVar2[3] & 0xffffffc0;
          puVar10 = (undefined4 *)(ulong)uVar9;
          if (uVar9 == 0x80) {
            uVar11 = uVar11 << 6 | pbVar2[3] & 0x3f;
          }
        }
      }
    }
                    /* try { // try from 002ffbec to 002ffc2e has its CatchHandler @ 002ffcda */
    plVar8 = (long *)(**(code **)(*local_40 + 0x18))(local_40);
    lVar3 = *plVar8;
    if (lVar3 != 0) {
      local_50 = 0;
      lVar4 = *(long *)(*(long *)(lVar3 + 0x90) + 0x10);
      if (lVar4 == 0) {
        puVar12 = (uint *)0x0;
      }
      else {
        puVar12 = *(uint **)(lVar4 + 0x10);
      }
      puVar10 = &local_50;
      iVar6 = (**(code **)(*(long *)(lVar3 + 0x90) + 0x30))
                        (lVar3,*(undefined8 *)(lVar3 + 0x98),uVar11);
      if (iVar6 != 0) {
        *param_1 = (long)plVar5;
        goto LAB_002ffc36;
      }
    }
                    /* try { // try from 002ffc3d to 002ffc4b has its CatchHandler @ 002ffcd0 */
    const::{lambda()#1}::operator()((_lambda___1_ *)&local_48,&local_38);
                    /* try { // try from 002ffc51 to 002ffc5d has its CatchHandler @ 002ffcc1 */
    fromPattern((FreeTypeTypeface *)&local_50,local_48,extraout_RDX_00,puVar10,puVar12,param_6);
    if (local_48 != 0) {
                    /* try { // try from 002ffc63 to 002ffc6a has its CatchHandler @ 002ffcb9 */
      FcPatternDestroy(local_48);
    }
    lVar3 = CONCAT44(uStack_4c,local_50);
    *param_1 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      plVar5 = (long *)CONCAT44(uStack_4c,local_50);
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar8 = plVar5 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
LAB_002ffc94:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)(*local_40 + 8))();
    }
  }
  return param_1;
}


