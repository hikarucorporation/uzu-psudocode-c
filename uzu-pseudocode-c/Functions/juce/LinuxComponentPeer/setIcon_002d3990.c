// Function : setIcon
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d3990
// Prototype: undefined setIcon(LinuxComponentPeer * this, long * param_1)
// Body     : 002d3990 - 002d440f


/* juce::LinuxComponentPeer::setIcon(juce::Image const&) */

void __thiscall juce::LinuxComponentPeer::setIcon(LinuxComponentPeer *this,long *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  XWindowSystem *this_00;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint *puVar11;
  void *__ptr;
  int iVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  uint uVar18;
  byte bVar19;
  ushort uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  void *local_b0;
  byte *local_a8;
  long *local_90;
  undefined8 local_78;
  uint *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long *local_48;
  uint local_40;
  uint local_3c;
  undefined8 local_38;
  
  this_00 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                       XWindowSystem::singletonHolder);
  plVar16 = (long *)*param_1;
  if (plVar16 == (long *)0x0) {
    iVar12 = 0;
    iVar6 = 0;
  }
  else {
    iVar12 = (int)plVar16[2];
    iVar6 = *(int *)((long)plVar16 + 0x14);
  }
  uVar2 = *(undefined8 *)(this + 0x120);
  iVar12 = iVar12 * iVar6 + 2;
  if (iVar12 == 0) {
    local_90 = (long *)0x0;
    if (plVar16 != (long *)0x0) goto LAB_002d3a01;
LAB_002d3a1e:
    *local_90 = 0;
    iVar6 = 0;
  }
  else {
    local_90 = malloc((long)iVar12 << 3);
    if (plVar16 == (long *)0x0) goto LAB_002d3a1e;
LAB_002d3a01:
    *local_90 = (long)(int)plVar16[2];
    iVar6 = *(int *)((long)plVar16 + 0x14);
  }
  local_90[1] = (long)iVar6;
  lVar14 = 2;
  uVar22 = 0;
  while( true ) {
    iVar6 = 0;
    if (plVar16 != (long *)0x0) {
      iVar6 = *(int *)((long)plVar16 + 0x14);
    }
    if (iVar6 <= (int)uVar22) break;
    for (uVar15 = 0; (plVar16 != (long *)0x0 && ((int)(uint)uVar15 < (int)plVar16[2]));
        uVar15 = uVar15 + 1) {
      uVar24 = 0;
      if (((uint)uVar15 < *(uint *)(plVar16 + 2)) && (uVar22 < *(uint *)((long)plVar16 + 0x14))) {
        local_54 = 1;
        uStack_50 = 1;
        local_48 = (long *)0x0;
                    /* try { // try from 002d3ac7 to 002d3ad9 has its CatchHandler @ 002d45b6 */
        (**(code **)(*plVar16 + 0x38))(plVar16,&local_70,uVar15 & 0xffffffff,uVar22,0);
        if ((int)local_60 == 1) {
          uVar23 = (uint3)*local_70 | 0xff000000;
joined_r0x002d3b3a:
          uVar24 = (ulong)uVar23;
        }
        else if ((int)local_60 == 3) {
          uVar24 = (ulong)((uint)(byte)*local_70 * 0x1010101);
        }
        else {
          uVar24 = 0;
          if ((int)local_60 == 2) {
            uVar23 = *local_70;
            uVar17 = uVar23 >> 8;
            uVar13 = uVar23 >> 0x10;
            bVar19 = (byte)(uVar23 >> 0x18);
            if (bVar19 == 0xff) {
              uVar18 = uVar23;
            }
            else if (bVar19 == 0) {
              uVar13 = 0;
              uVar17 = 0;
              uVar18 = 0;
            }
            else {
              uVar18 = ((uVar23 & 0xff) * 0xff) / (uVar23 >> 0x18);
              if (0xfe < uVar18) {
                uVar18 = 0xff;
              }
              uVar17 = ((uVar17 & 0xff) * 0xff) / (uint)(ushort)bVar19;
              uVar5 = (ushort)uVar17;
              if (0xfe < uVar17) {
                uVar5 = 0xff;
              }
              uVar17 = ((uVar13 & 0xff) * 0xff) / (uint)(ushort)bVar19;
              uVar13 = 0xff;
              if (uVar17 < 0xff) {
                uVar13 = uVar17;
              }
              uVar17 = (uint)uVar5;
            }
            uVar23 = uVar18 & 0xff |
                     (uVar17 & 0xff) << 8 | (uVar13 & 0xff) << 0x10 | uVar23 & 0xff000000;
            goto joined_r0x002d3b3a;
          }
        }
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 8))();
        }
        plVar16 = (long *)*param_1;
      }
      local_90[(long)(int)lVar14 + uVar15] = uVar24;
    }
    uVar22 = uVar22 + 1;
    lVar14 = (long)(int)lVar14 + uVar15;
  }
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
                    /* try { // try from 002d3c22 to 002d3c2f has its CatchHandler @ 002d442d */
    lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar8 + 0x210))(lVar14);
  }
  uVar9 = *(undefined8 *)(this_00 + 0x148);
                    /* try { // try from 002d3c3c to 002d3c9d has its CatchHandler @ 002d44b5 */
  lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  uVar9 = (**(code **)(lVar14 + 0x1f0))(uVar9,"_NET_WM_ICON",0);
  lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar14 + 0x30))
            (*(undefined8 *)(this_00 + 0x148),uVar2,uVar9,6,0x20,0,local_90,iVar12);
  XWindowSystem::deleteIconPixmaps(this_00,uVar2);
                    /* try { // try from 002d3c9e to 002d3cb9 has its CatchHandler @ 002d448f */
  lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  local_a8 = (byte *)(**(code **)(lVar14 + 0x1a8))(*(undefined8 *)(this_00 + 0x148),uVar2);
  if (local_a8 == (byte *)0x0) {
                    /* try { // try from 002d3cbf to 002d3cc6 has its CatchHandler @ 002d4420 */
    lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_a8 = (byte *)(**(code **)(lVar14 + 0x10))();
    if (local_a8 == (byte *)0x0) {
      local_a8 = (byte *)0x0;
      goto LAB_002d4394;
    }
  }
  *local_a8 = *local_a8 | 0x24;
  local_78 = *(undefined8 *)(this_00 + 0x148);
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
                    /* try { // try from 002d3d04 to 002d3d11 has its CatchHandler @ 002d44bd */
    lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar8 + 0x210))(lVar14);
  }
  lVar14 = *param_1;
  if (lVar14 == 0) {
    uVar22 = 0;
    iVar12 = 0;
LAB_002d3d5b:
    local_b0 = (void *)0x0;
  }
  else {
    iVar12 = *(int *)(lVar14 + 0x10);
    uVar22 = *(uint *)(lVar14 + 0x14);
    if (iVar12 * uVar22 == 0) goto LAB_002d3d5b;
    local_b0 = malloc((ulong)(iVar12 * uVar22) << 2);
  }
  if ((0 < (int)uVar22) && (0 < iVar12)) {
    uVar23 = 0;
    lVar14 = 0;
    do {
      uVar15 = 0;
      do {
        plVar16 = (long *)*param_1;
        uVar13 = 0;
        if (((plVar16 != (long *)0x0) && ((uint)uVar15 < *(uint *)(plVar16 + 2))) &&
           (uVar23 < *(uint *)((long)plVar16 + 0x14))) {
          local_54 = 1;
          uStack_50 = 1;
          local_48 = (long *)0x0;
                    /* try { // try from 002d3df3 to 002d3e02 has its CatchHandler @ 002d4517 */
          (**(code **)(*plVar16 + 0x38))(plVar16,&local_70,uVar15 & 0xffffffff,uVar23,0);
          if ((int)local_60 == 1) {
            uVar13 = (uint3)*local_70 | 0xff000000;
          }
          else if ((int)local_60 == 3) {
            uVar13 = (uint)(byte)*local_70 * 0x1010101;
          }
          else {
            uVar13 = 0;
            if ((int)local_60 == 2) {
              uVar13 = *local_70;
              uVar18 = uVar13 >> 8;
              uVar17 = uVar13 >> 0x10;
              bVar19 = (byte)(uVar13 >> 0x18);
              if (bVar19 == 0xff) {
                uVar21 = uVar13;
              }
              else if (bVar19 == 0) {
                uVar17 = 0;
                uVar18 = 0;
                uVar21 = 0;
              }
              else {
                uVar21 = ((uVar13 & 0xff) * 0xff) / (uVar13 >> 0x18);
                if (0xfe < uVar21) {
                  uVar21 = 0xff;
                }
                uVar18 = ((uVar18 & 0xff) * 0xff) / (uint)(ushort)bVar19;
                uVar5 = (ushort)uVar18;
                if (0xfe < uVar18) {
                  uVar5 = 0xff;
                }
                uVar17 = ((uVar17 & 0xff) * 0xff) / (uint)(ushort)bVar19;
                uVar20 = 0xff;
                if (uVar17 < 0xff) {
                  uVar20 = (ushort)uVar17;
                }
                uVar18 = (uint)uVar5;
                uVar17 = (uint)uVar20;
              }
              uVar13 = uVar21 & 0xff |
                       (uVar18 & 0xff) << 8 | (uVar17 & 0xff) << 0x10 | uVar13 & 0xff000000;
            }
          }
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 8))();
          }
        }
        *(uint *)((long)local_b0 + uVar15 * 4 + (long)(int)lVar14 * 4) = uVar13;
        uVar15 = uVar15 + 1;
      } while (iVar12 != (int)uVar15);
      uVar23 = uVar23 + 1;
      lVar14 = (long)(int)lVar14 + uVar15;
    } while (uVar23 != uVar22);
  }
                    /* try { // try from 002d3f2a to 002d3f5f has its CatchHandler @ 002d4487 */
  lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  uVar9 = local_78;
  lVar14 = (**(code **)(lVar14 + 0x80))(local_78,0,0x18,2,0,local_b0,iVar12,uVar22,0x20,0);
                    /* try { // try from 002d3f63 to 002d3f90 has its CatchHandler @ 002d4491 */
  lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  pcVar3 = *(code **)(lVar8 + 0x88);
  lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  uVar10 = (**(code **)(lVar8 + 0xa8))(uVar9);
  uVar10 = (*pcVar3)(uVar9,uVar10,iVar12,uVar22,0x18);
                    /* try { // try from 002d3f94 to 002d3fa5 has its CatchHandler @ 002d4485 */
  lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  puVar11 = (uint *)(**(code **)(lVar8 + 0x78))(uVar9,uVar10,0,0);
  local_60 = 0;
  local_68 = &local_78;
  uStack_50 = 0x2d5a30;
  uStack_4c = 0;
  uStack_58 = 0x2d5a60;
  local_54 = 0;
  local_70 = puVar11;
                    /* try { // try from 002d3fde to 002d400b has its CatchHandler @ 002d444d */
  lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar8 + 600))(local_78,uVar10,puVar11,lVar14,0,0,0,0,iVar12,uVar22);
                    /* try { // try from 002d400c to 002d401e has its CatchHandler @ 002d4445 */
  lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar8 + 0x140))(local_78,puVar11);
  if (lVar14 != 0) {
                    /* try { // try from 002d4024 to 002d4031 has its CatchHandler @ 002d4435 */
    lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar8 + 0x128))(lVar14);
  }
  free(local_b0);
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
                    /* try { // try from 002d4054 to 002d4061 has its CatchHandler @ 002d4418 */
    lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar8 + 0x360))(lVar14);
  }
  *(undefined8 *)(local_a8 + 0x10) = uVar10;
  uVar9 = *(undefined8 *)(this_00 + 0x148);
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
                    /* try { // try from 002d408f to 002d409c has its CatchHandler @ 002d44bd */
    lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar8 + 0x210))(lVar14);
  }
  lVar14 = *param_1;
  if (lVar14 == 0) {
    uVar22 = 0;
    uVar23 = 0;
  }
  else {
    uVar22 = *(uint *)(lVar14 + 0x10);
    uVar23 = *(uint *)(lVar14 + 0x14);
  }
  local_3c = uVar22 + 7 >> 3;
  if (local_3c * uVar23 == 0) {
    __ptr = (void *)0x0;
  }
  else {
    __ptr = calloc((ulong)(local_3c * uVar23),1);
  }
                    /* try { // try from 002d40dc to 002d40e6 has its CatchHandler @ 002d44c5 */
  lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  iVar12 = (**(code **)(lVar14 + 0x18))(uVar9);
  local_38 = uVar9;
  if ((uVar22 != 0) && (uVar23 != 0)) {
    uVar13 = 0;
    local_40 = uVar23;
    do {
      iVar6 = uVar13 * local_3c;
      uVar23 = 0;
      do {
        bVar4 = (byte)uVar23 & 7;
        bVar19 = bVar4 ^ 7;
        if (iVar12 != 1) {
          bVar19 = bVar4;
        }
        plVar16 = (long *)*param_1;
        if (((plVar16 != (long *)0x0) && (uVar23 < *(uint *)(plVar16 + 2))) &&
           (uVar13 < *(uint *)((long)plVar16 + 0x14))) {
          local_54 = 1;
          uStack_50 = 1;
          local_48 = (long *)0x0;
                    /* try { // try from 002d418e to 002d419d has its CatchHandler @ 002d44ca */
          (**(code **)(*plVar16 + 0x38))(plVar16,&local_70,uVar23,uVar13,0);
          if ((int)local_60 == 1) {
            uVar17 = (uint3)*local_70 | 0xff000000;
          }
          else if ((int)local_60 == 3) {
            uVar17 = (uint)(byte)*local_70 * 0x1010101;
          }
          else {
            uVar17 = 0;
            if ((int)local_60 == 2) {
              uVar17 = *local_70;
              uVar18 = uVar17 >> 8;
              uVar21 = uVar17 >> 0x10;
              bVar4 = (byte)(uVar17 >> 0x18);
              if (bVar4 == 0xff) {
                uVar7 = uVar17;
              }
              else if (bVar4 == 0) {
                uVar21 = 0;
                uVar18 = 0;
                uVar7 = 0;
              }
              else {
                uVar7 = ((uVar17 & 0xff) * 0xff) / (uVar17 >> 0x18);
                if (0xfe < uVar7) {
                  uVar7 = 0xff;
                }
                uVar18 = ((uVar18 & 0xff) * 0xff) / (uint)(ushort)bVar4;
                uVar5 = (ushort)uVar18;
                if (0xfe < uVar18) {
                  uVar5 = 0xff;
                }
                uVar18 = ((uVar21 & 0xff) * 0xff) / (uint)(ushort)bVar4;
                uVar20 = 0xff;
                if (uVar18 < 0xff) {
                  uVar20 = (ushort)uVar18;
                }
                uVar18 = (uint)uVar5;
                uVar21 = (uint)uVar20;
              }
              uVar17 = uVar7 & 0xff |
                       (uVar18 & 0xff) << 8 | (uVar21 & 0xff) << 0x10 | uVar17 & 0xff000000;
            }
          }
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 8))();
          }
          if ((int)uVar17 < 0) {
            pbVar1 = (byte *)((long)__ptr + (ulong)((uVar23 >> 3) + iVar6));
            *pbVar1 = *pbVar1 | (byte)((uint)(0x1000000 << bVar19) >> 0x18);
          }
        }
        uVar23 = uVar23 + 1;
      } while (uVar22 != uVar23);
      uVar13 = uVar13 + 1;
      uVar23 = local_40;
    } while (uVar13 != local_40);
  }
                    /* try { // try from 002d42f4 to 002d4336 has its CatchHandler @ 002d44c5 */
  lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  uVar9 = local_38;
  pcVar3 = *(code **)(lVar14 + 0x98);
  lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  uVar10 = (**(code **)(lVar14 + 0xa8))(uVar9);
  uVar9 = (*pcVar3)(uVar9,uVar10,__ptr,uVar22,uVar23,1,0,1);
  free(__ptr);
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
                    /* try { // try from 002d435c to 002d4369 has its CatchHandler @ 002d4410 */
    lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar8 + 0x360))(lVar14);
  }
  *(undefined8 *)(local_a8 + 0x28) = uVar9;
                    /* try { // try from 002d4373 to 002d43ac has its CatchHandler @ 002d44bd */
  lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar14 + 0x300))(*(undefined8 *)(this_00 + 0x148),uVar2,local_a8);
LAB_002d4394:
  lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar14 + 0x330))(*(undefined8 *)(this_00 + 0x148),0);
  if (local_a8 != (byte *)0x0) {
                    /* try { // try from 002d43b5 to 002d43c4 has its CatchHandler @ 002d443d */
    lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar14 + 0x128))(local_a8);
  }
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
                    /* try { // try from 002d43dd to 002d43ea has its CatchHandler @ 002d4425 */
    lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar8 + 0x360))(lVar14);
  }
  free(local_90);
  return;
}


