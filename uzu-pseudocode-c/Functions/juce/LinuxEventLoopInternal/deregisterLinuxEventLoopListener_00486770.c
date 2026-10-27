// Function : deregisterLinuxEventLoopListener
// Namespace: juce:LinuxEventLoopInternal
// Entry    : 00486770
// Prototype: undefined deregisterLinuxEventLoopListener(long param_1)
// Body     : 00486770 - 00486870


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LinuxEventLoopInternal::deregisterLinuxEventLoopListener(juce::LinuxEventLoopInternal::Listener&)
    */

void __cdecl juce::LinuxEventLoopInternal::deregisterLinuxEventLoopListener(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  
  uVar6 = InternalRunLoop::singletonHolder._40_8_;
  if ((InternalRunLoop::singletonHolder._40_8_ != 0) &&
     (*(int *)(InternalRunLoop::singletonHolder._40_8_ + 0xa8) == 2)) {
    plVar2 = *(long **)(InternalRunLoop::singletonHolder._40_8_ + 0x88);
    uVar1 = *(uint *)((long)plVar2 + 0xc);
    if (0 < (int)uVar1) {
      lVar3 = *plVar2;
      uVar11 = 0;
      do {
        if (*(long *)(lVar3 + uVar11 * 8) == param_1) {
          uVar10 = (uint)uVar11;
          memmove((void *)(lVar3 + uVar11 * 8),(void *)(lVar3 + uVar11 * 8 + 8),
                  (long)(int)(~uVar10 + uVar1) << 3);
          iVar13 = *(int *)((long)plVar2 + 0xc);
          uVar1 = iVar13 - 1;
          *(uint *)((long)plVar2 + 0xc) = uVar1;
          iVar9 = iVar13 * 2 + -2;
          iVar13 = 0;
          if (-1 < iVar9) {
            iVar13 = iVar9;
          }
          if (iVar13 < (int)plVar2[1]) {
            uVar12 = 8;
            if (8 < (int)uVar1) {
              uVar12 = uVar1;
            }
            if ((int)uVar12 < (int)plVar2[1]) {
              pvVar7 = realloc((void *)*plVar2,(ulong)uVar12 << 3);
              *plVar2 = (long)pvVar7;
              *(uint *)(plVar2 + 1) = uVar12;
            }
          }
          if ((int)uVar10 < 0) {
            return;
          }
          puVar4 = (undefined8 *)(*(undefined8 **)(uVar6 + 0x98))[1];
          for (puVar8 = (undefined8 *)**(undefined8 **)(uVar6 + 0x98); puVar8 != puVar4;
              puVar8 = puVar8 + 1) {
            piVar5 = (int *)*puVar8;
            if ((int)uVar10 < piVar5[1]) {
              piVar5[1] = piVar5[1] + -1;
            }
            if ((int)uVar10 <= *piVar5) {
              *piVar5 = *piVar5 + -1;
            }
          }
          return;
        }
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar11);
    }
  }
  return;
}


