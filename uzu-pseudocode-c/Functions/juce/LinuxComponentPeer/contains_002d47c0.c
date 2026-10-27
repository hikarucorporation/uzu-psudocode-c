// Function : contains
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d47c0
// Prototype: ulong contains(LinuxComponentPeer * this, ulong param_1, char param_2)
// Body     : 002d47c0 - 002d4bae


/* juce::LinuxComponentPeer::contains(juce::Point<int>, bool) const */

ulong __thiscall
juce::LinuxComponentPeer::contains(LinuxComponentPeer *this,ulong param_1,char param_2)

{
  double dVar1;
  uint uVar2;
  LinuxComponentPeer *this_00;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  Desktop *this_01;
  XWindowSystem *pXVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined1 local_6c [4];
  ulong local_68;
  ulong local_60;
  long local_58;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [8];
  
  uVar11 = 0;
  if ((((param_1 & 0x8000000080000000) != 0) || (*(int *)(this + 0x138) <= (int)param_1)) ||
     (local_68 = param_1 >> 0x20, *(int *)(this + 0x13c) <= (int)(param_1 >> 0x20)))
  goto LAB_002d4b9e;
  local_60 = param_1;
  if (Desktop::instance == (Desktop *)0x0) {
    this_01 = operator_new(0x1d0);
                    /* try { // try from 002d483f to 002d4846 has its CatchHandler @ 002d4bb7 */
    Desktop::Desktop(this_01);
    uVar2 = *(uint *)(this_01 + 0xcc);
  }
  else {
    uVar2 = *(uint *)(Desktop::instance + 0xcc);
    this_01 = Desktop::instance;
  }
  Desktop::instance = this_01;
  if (0 < (int)uVar2) {
    fVar13 = (float)(int)local_60;
    fVar14 = (float)(int)local_68;
    uVar12 = (ulong)uVar2;
    do {
      if (this_01 == (Desktop *)0x0) {
        this_01 = operator_new(0x1d0);
                    /* try { // try from 002d497d to 002d4984 has its CatchHandler @ 002d4be4 */
        Desktop::Desktop(this_01);
        Desktop::instance = this_01;
        if (*(uint *)(this_01 + 0xcc) <= (int)uVar12 - 1U) goto LAB_002d4999;
LAB_002d494f:
        lVar10 = *(long *)(*(long *)(this_01 + 0xc0) + (uVar12 - 1 & 0xffffffff) * 8);
        if (lVar10 == *(long *)(this + 8)) break;
      }
      else {
        if ((int)uVar12 - 1U < *(uint *)(this_01 + 0xcc)) goto LAB_002d494f;
LAB_002d4999:
        lVar10 = 0;
        if (*(long *)(this + 8) == 0) break;
      }
      if ((*(uint3 *)(lVar10 + 0xe8) & 2) != 0) {
        if ((*(uint3 *)(lVar10 + 0xe8) & 1) == 0) {
          do {
            lVar10 = *(long *)(lVar10 + 0x30);
            if (lVar10 == 0) goto LAB_002d4930;
          } while ((*(ushort *)(lVar10 + 0xe8) & 1) == 0);
        }
        if (this_01 == (Desktop *)0x0) {
                    /* try { // try from 002d4a03 to 002d4a0c has its CatchHandler @ 002d4bcc */
          this_01 = operator_new(0x1d0);
                    /* try { // try from 002d4a10 to 002d4a17 has its CatchHandler @ 002d4bb9 */
          Desktop::Desktop(this_01);
          iVar4 = *(int *)(this_01 + 0xdc);
          Desktop::instance = this_01;
        }
        else {
          iVar4 = *(int *)(this_01 + 0xdc);
        }
        if ((long)iVar4 != 0) {
          lVar9 = 0;
          do {
            this_00 = *(LinuxComponentPeer **)(*(long *)(this_01 + 0xd0) + lVar9);
            if (*(long *)(this_00 + 8) == lVar10) {
              uVar11 = 0;
              uVar5 = getScreenPosition(this,'\0');
              uVar6 = getScreenPosition(this_00,'\0');
              uVar7 = contains(this_00,(ulong)((double)(((float)(int)uVar5 + fVar13) -
                                                       (float)(int)uVar6) + DAT_005d9098) &
                                       0xffffffff |
                                       (long)((double)(((float)(int)((ulong)uVar5 >> 0x20) + fVar14)
                                                      - (float)(int)((ulong)uVar6 >> 0x20)) +
                                             DAT_005d9098) << 0x20,'\x01');
              if ((char)uVar7 != '\0') goto LAB_002d4b9e;
              this_01 = Desktop::instance;
              break;
            }
            lVar9 = lVar9 + 8;
          } while ((long)iVar4 * 8 != lVar9);
        }
      }
LAB_002d4930:
      bVar3 = 1 < (long)uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar3);
  }
  uVar12 = local_60;
  uVar11 = CONCAT71((int7)((ulong)this_01 >> 8),1);
  if (param_2 != '\0') goto LAB_002d4b9e;
  pXVar8 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  uVar5 = *(undefined8 *)(this + 0x120);
  dVar1 = *(double *)(this + 0x158);
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar10 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar10 != 0)) {
    lVar9 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar9 + 0x210))(lVar10);
  }
                    /* try { // try from 002d4abb to 002d4b59 has its CatchHandler @ 002d4bd4 */
  lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  iVar4 = (**(code **)(lVar10 + 0x170))
                    (*(undefined8 *)(pXVar8 + 0x148),uVar5,local_38,local_6c,local_3c,local_40,
                     local_44,local_48,local_4c);
  if (iVar4 == 0) {
LAB_002d4b76:
    uVar11 = 0;
  }
  else {
    lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar4 = (**(code **)(lVar10 + 0x340))
                      (*(undefined8 *)(pXVar8 + 0x148),uVar5,uVar5,
                       (int)((double)(int)uVar12 * dVar1),(int)((double)(int)local_68 * dVar1),
                       local_6c,local_3c,&local_58);
    if (iVar4 == 0) goto LAB_002d4b76;
    uVar11 = CONCAT71((int7)((ulong)uVar5 >> 8),local_58 == 0);
  }
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar10 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar10 != 0)) {
                    /* try { // try from 002d4b90 to 002d4b9d has its CatchHandler @ 002d4baf */
    lVar9 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar9 + 0x360))(lVar10);
  }
LAB_002d4b9e:
  return uVar11 & 0xffffffff;
}


