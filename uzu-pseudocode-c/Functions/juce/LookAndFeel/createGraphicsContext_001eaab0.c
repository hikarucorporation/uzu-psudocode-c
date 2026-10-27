// Function : createGraphicsContext
// Namespace: juce:LookAndFeel
// Entry    : 001eaab0
// Prototype: undefined createGraphicsContext(undefined8 * param_1, undefined8 param_2, long * param_3, undefined8 param_4, undefined8 * param_5)
// Body     : 001eaab0 - 001ead01


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel::createGraphicsContext(juce::Image const&, juce::Point<int>,
   juce::RectangleList<int> const&) */

void __cdecl
juce::LookAndFeel::createGraphicsContext
          (undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
          undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  void *__src;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *__dest;
  uint uVar7;
  long *plVar8;
  int *piVar9;
  long local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  void *local_68;
  
  puVar4 = operator_new(0x28);
                    /* try { // try from 001eaadc to 001eaae5 has its CatchHandler @ 001ead41 */
  puVar5 = operator_new(0x78);
                    /* try { // try from 001eaae9 to 001eaaf7 has its CatchHandler @ 001ead34 */
  puVar6 = operator_new(0x20);
  *puVar6 = &PTR__RectangleListRegion_00711b08;
  puVar6[2] = 0;
  puVar6[3] = 0;
  uVar2 = *(uint *)((long)param_5 + 0xc);
  if (0 < (int)uVar2) {
    __src = (void *)*param_5;
    uVar7 = uVar2 + (uVar2 >> 1) + 8 & 0xfffffff8;
    if ((int)uVar7 < 1) {
      __dest = (void *)0x0;
    }
    else {
      __dest = malloc((ulong)uVar7 << 4);
      puVar6[2] = __dest;
    }
    *(uint *)(puVar6 + 3) = uVar7;
    memcpy(__dest,__src,(ulong)uVar2 << 4);
  }
  *(uint *)((long)puVar6 + 0x1c) = uVar2;
  *puVar5 = puVar6;
  *(undefined4 *)(puVar6 + 1) = 1;
  uVar2 = DAT_005d9038;
  *(undefined1 (*) [16])(puVar5 + 1) = ZEXT416(DAT_005d9038);
  puVar5[3] = 0x3f800000;
  puVar5[4] = param_4;
  *(undefined2 *)(puVar5 + 5) = 1;
  *(undefined4 *)(puVar5 + 6) = 0xff000000;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined1 (*) [16])(puVar5 + 9) = ZEXT416(uVar2);
  puVar5[0xb] = 0x3f800000;
  puVar5[0xc] = 0x3f80000000000001;
  lVar3 = *param_3;
  puVar5[0xd] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
                    /* try { // try from 001eabde to 001eabf1 has its CatchHandler @ 001ead11 */
  FontOptions::FontOptions(DAT_005d9064,(FontOptions *)&local_98,0);
                    /* try { // try from 001eabf9 to 001eac02 has its CatchHandler @ 001ead02 */
  Font::Font((Font *)(puVar5 + 0xe),&local_98);
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
  }
  plVar8 = local_80;
  if (local_80 != local_78) {
    do {
      piVar9 = (int *)(*plVar8 + -0x10);
      if (piVar9 != &emptyString) {
        LOCK();
        iVar1 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar9);
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != local_78);
  }
  if (local_80 != (long *)0x0) {
    operator_delete(local_80);
  }
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar8 = local_88 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  piVar9 = (int *)(local_90 + -0x10);
  if (piVar9 != &emptyString) {
    LOCK();
    iVar1 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar9);
    }
  }
  piVar9 = (int *)(local_98 + -0x10);
  if (piVar9 != &emptyString) {
    LOCK();
    iVar1 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar9);
    }
  }
  puVar4[1] = puVar5;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *puVar4 = &PTR__LowLevelGraphicsSoftwareRenderer_00711660;
  *param_1 = puVar4;
  return;
}


