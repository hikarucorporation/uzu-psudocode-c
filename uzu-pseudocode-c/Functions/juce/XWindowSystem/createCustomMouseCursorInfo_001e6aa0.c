// Function : createCustomMouseCursorInfo
// Namespace: juce:XWindowSystem
// Entry    : 001e6aa0
// Prototype: long createCustomMouseCursorInfo(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, long param_4, long * param_5, ulong param_6)
// Body     : 001e6aa0 - 001e734e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::XWindowSystem::createCustomMouseCursorInfo(juce::Image const&, juce::Point<int>) const */

long __cdecl
juce::XWindowSystem::createCustomMouseCursorInfo
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,long param_4,long *param_5,
          ulong param_6)

{
  byte *pbVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  Image *pIVar15;
  void *pvVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  byte bVar24;
  ulong uVar25;
  size_t __nmemb;
  ushort uVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  float fVar30;
  int iVar32;
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  uint local_104;
  undefined8 local_100;
  uint local_f4;
  Image *local_f0;
  void *local_e8;
  ulong local_e0;
  undefined1 local_d8 [8];
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long *local_b0;
  ulong local_a0;
  uint local_94;
  Image *local_90;
  Image *local_88;
  ulong local_80;
  code *local_78;
  code *local_70;
  long local_68;
  undefined8 local_60;
  ulong local_58;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined2 local_34;
  
  if (*(long *)(param_4 + 0x148) == 0) {
    return 0;
  }
  if ((singletonHolder._40_8_ != 0) &&
     (lVar13 = *(long *)(singletonHolder._40_8_ + 0x148), lVar13 != 0)) {
    lVar12 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar12 + 0x210))(lVar13);
  }
  lVar13 = *param_5;
  if (lVar13 == 0) {
    uVar21 = 0;
    local_100 = (void *)((ulong)local_100._4_4_ << 0x20);
  }
  else {
    uVar21 = *(uint *)(lVar13 + 0x10);
    local_100 = (void *)CONCAT44(local_100._4_4_,*(undefined4 *)(lVar13 + 0x14));
  }
                    /* try { // try from 001e6b10 to 001e6b20 has its CatchHandler @ 001e7414 */
  lVar13 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  local_f0 = (Image *)(**(code **)(lVar13 + 0x378))(uVar21,(ulong)local_100 & 0xffffffff);
  local_e0 = param_6 >> 0x20;
  local_90 = local_f0;
  local_68 = param_4;
  if (local_f0 != (Image *)0x0) {
    *(ulong *)(local_f0 + 0x10) = param_6;
    local_a0 = param_6;
    if ((0 < (int)(uint)local_100) && (0 < (int)uVar21)) {
      puVar29 = *(uint **)(local_f0 + 0x20);
      uVar27 = 0;
      do {
        uVar28 = 0;
        do {
          plVar2 = (long *)*param_5;
          uVar20 = 0;
          if (((plVar2 != (long *)0x0) && (uVar28 < *(uint *)(plVar2 + 2))) &&
             (uVar27 < *(uint *)((long)plVar2 + 0x14))) {
            local_bc = 1;
            uStack_b8 = 1;
            local_b0 = (long *)0x0;
                    /* try { // try from 001e6be1 to 001e6bf1 has its CatchHandler @ 001e7424 */
            (**(code **)(*plVar2 + 0x38))(plVar2,local_d8,uVar28,uVar27,0);
            if ((int)local_c8 == 1) {
              uVar20 = *(uint3 *)local_d8 | 0xff000000;
            }
            else if ((int)local_c8 == 3) {
              uVar20 = (uint)*(byte *)local_d8 * 0x1010101;
            }
            else {
              uVar20 = 0;
              if ((int)local_c8 == 2) {
                uVar20 = *(uint *)local_d8;
                uVar23 = uVar20 >> 8;
                uVar19 = uVar20 >> 0x10;
                bVar24 = (byte)(uVar20 >> 0x18);
                if (bVar24 == 0xff) {
                  uVar9 = uVar20;
                }
                else if (bVar24 == 0) {
                  uVar19 = 0;
                  uVar23 = 0;
                  uVar9 = 0;
                }
                else {
                  uVar9 = ((uVar20 & 0xff) * 0xff) / (uVar20 >> 0x18);
                  if (0xfe < uVar9) {
                    uVar9 = 0xff;
                  }
                  uVar23 = ((uVar23 & 0xff) * 0xff) / (uint)(ushort)bVar24;
                  uVar8 = (ushort)uVar23;
                  if (0xfe < uVar23) {
                    uVar8 = 0xff;
                  }
                  uVar19 = ((uVar19 & 0xff) * 0xff) / (uint)(ushort)bVar24;
                  uVar26 = 0xff;
                  if (uVar19 < 0xff) {
                    uVar26 = (ushort)uVar19;
                  }
                  uVar23 = (uint)uVar8;
                  uVar19 = (uint)uVar26;
                }
                uVar20 = uVar9 & 0xff |
                         (uVar23 & 0xff) << 8 | (uVar19 & 0xff) << 0x10 | uVar20 & 0xff000000;
              }
            }
            if (local_b0 != (long *)0x0) {
              (**(code **)(*local_b0 + 8))();
            }
          }
          *puVar29 = uVar20;
          puVar29 = puVar29 + 1;
          uVar28 = uVar28 + 1;
        } while (uVar21 != uVar28);
        uVar27 = uVar27 + 1;
      } while (uVar27 != (uint)local_100);
    }
                    /* try { // try from 001e6d1d to 001e6d3f has its CatchHandler @ 001e740d */
    lVar13 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    param_4 = local_68;
    lVar13 = (**(code **)(lVar13 + 0x380))(*(undefined8 *)(local_68 + 0x148),local_f0);
    param_6 = local_a0;
    if (lVar13 != 0) {
      bVar5 = false;
      bVar4 = false;
      goto joined_r0x001e6d64;
    }
  }
  bVar5 = true;
  bVar4 = true;
  lVar13 = 0;
joined_r0x001e6d64:
  if (local_f0 != (Image *)0x0) {
                    /* try { // try from 001e6d66 to 001e6d75 has its CatchHandler @ 001e7405 */
    lVar12 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar12 + 0x388))(local_f0);
    bVar4 = bVar5;
  }
  if (bVar4) {
                    /* try { // try from 001e6d7e to 001e6dac has its CatchHandler @ 001e7412 */
    lVar13 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    pcVar3 = *(code **)(lVar13 + 0x2a8);
    uVar14 = *(undefined8 *)(param_4 + 0x148);
    lVar13 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar10 = (**(code **)(lVar13 + 0xb0))(*(undefined8 *)(param_4 + 0x148));
    uVar14 = (*pcVar3)(uVar14,uVar10);
                    /* try { // try from 001e6db0 to 001e6dd5 has its CatchHandler @ 001e7403 */
    lVar13 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar11 = (**(code **)(lVar13 + 0x268))
                       (*(undefined8 *)(param_4 + 0x148),uVar14,uVar21,(ulong)local_100 & 0xffffffff
                        ,&local_104,&local_f4);
    uVar28 = local_f4;
    uVar27 = local_104;
    if (iVar11 == 0) {
      lVar13 = 0;
    }
    else {
      local_60 = uVar14;
                    /* try { // try from 001e6def to 001e6df8 has its CatchHandler @ 001e73b1 */
      pIVar15 = operator_new(0x60);
      *(long *)(pIVar15 + 8) = 0x200000000;
      *(uint *)(pIVar15 + 0x10) = uVar27;
      *(uint *)(pIVar15 + 0x14) = uVar28;
      *(long *)(pIVar15 + 0x18) = 0;
      *(long *)(pIVar15 + 0x20) = 0;
      *(long *)(pIVar15 + 0x28) = 0;
      *(long *)(pIVar15 + 0x30) = 0;
      *(long *)(pIVar15 + 0x38) = 0;
      *(long *)(pIVar15 + 0x40) = 0;
      *(undefined4 *)(pIVar15 + 0x48) = 0;
      *(undefined ***)pIVar15 = &PTR__SoftwarePixelData_00711df0;
      *(undefined4 *)(pIVar15 + 0x58) = 4;
      if ((int)uVar27 < 1) {
        uVar27 = 1;
      }
      uVar27 = (uVar27 & 0x1fffffff) << 2;
      *(uint *)(pIVar15 + 0x5c) = uVar27;
      uVar25 = 1;
      if (0 < (int)uVar28) {
        uVar25 = (ulong)uVar28;
      }
      __nmemb = uVar25 * uVar27;
      if (__nmemb == 0) {
        pvVar16 = (void *)0x0;
      }
      else {
        pvVar16 = calloc(__nmemb,1);
      }
      *(void **)(pIVar15 + 0x50) = pvVar16;
      LOCK();
      *(int *)(pIVar15 + 8) = *(int *)(pIVar15 + 8) + 1;
      UNLOCK();
                    /* try { // try from 001e6e86 to 001e6e95 has its CatchHandler @ 001e739c */
      local_f0 = pIVar15;
      (**(code **)(*(long *)pIVar15 + 0x10))(&local_90,pIVar15);
      local_88 = local_90;
      local_80 = local_80 & 0xffffffffffffff00;
      if ((local_104 < uVar21) || (local_f4 < (uint)local_100)) {
        param_6 = (long)(int)(local_104 * (int)param_6) / (long)(int)uVar21 & 0xffffffff;
        uVar25 = (long)(int)(local_f4 * (int)local_e0) / (long)(int)(uint)local_100;
        local_e0 = uVar25 & 0xffffffff;
        if (*param_5 != 0) {
          uVar14 = *(undefined8 *)(*param_5 + 0x10);
          iVar22 = (int)uVar14;
          auVar35._0_4_ = -(uint)(iVar22 < _DAT_00654cd0);
          iVar32 = (int)((ulong)uVar14 >> 0x20);
          iVar11 = -(uint)(iVar32 < _UNK_00654cd4);
          auVar35._4_4_ = auVar35._0_4_;
          auVar35._8_4_ = iVar11;
          auVar35._12_4_ = iVar11;
          iVar11 = movmskpd((int)uVar25,auVar35);
          if (iVar11 == 0) {
            auVar33._0_4_ = (float)uVar21;
            auVar34._4_8_ = 0;
            auVar34._0_4_ = auVar33._0_4_;
            auVar34._12_4_ = (int)((ulong)param_3 >> 0x20);
            auVar33._8_8_ = auVar34._8_8_;
            auVar33._4_4_ = (float)((ulong)local_100 & 0xffffffff);
            auVar31._0_4_ = (float)iVar22;
            auVar31._4_4_ = (float)iVar32;
            auVar31._8_8_ = 0;
            auVar35 = divps(auVar33,auVar31);
            fVar30 = auVar35._4_4_;
            if (auVar35._0_4_ <= auVar35._4_4_) {
              fVar30 = auVar35._0_4_;
            }
            local_d8._4_4_ = DAT_005d9038;
            if (fVar30 <= DAT_005d9038) {
              local_d8._4_4_ = fVar30;
            }
            uVar14 = CONCAT44(local_d8._4_4_,local_d8._4_4_);
            local_d8._4_4_ = (float)local_d8._4_4_ * 0.0;
            uStack_d0._0_4_ = 0.0 - (float)local_d8._4_4_;
          }
          else {
            local_d8._4_4_ = 0.0;
            uStack_d0._0_4_ = 0.0;
            uVar14 = _DAT_005dcc70;
          }
          local_d8._0_4_ = (int)uVar14;
          uStack_d0._4_4_ = local_d8._4_4_;
          local_c8 = CONCAT44((float)uStack_d0,(int)((ulong)uVar14 >> 0x20));
          cVar6 = (**(code **)(*(long *)local_90 + 0x68))();
          if (cVar6 == '\0') {
            (**(code **)(*(long *)local_88 + 0xe0))(local_88,param_5,local_d8);
          }
        }
      }
      else {
        _local_d8 = ZEXT416((uint)DAT_005d9038);
        local_c8 = 0x3f800000;
                    /* try { // try from 001e6ee0 to 001e6fed has its CatchHandler @ 001e734f */
        if ((*param_5 != 0) && (cVar6 = (**(code **)(*(long *)local_90 + 0x68))(), cVar6 == '\0')) {
          (**(code **)(*(long *)local_88 + 0xe0))(local_88,param_5,local_d8);
        }
      }
      if (local_90 != (Image *)0x0) {
        (**(code **)(*(long *)local_90 + 8))();
      }
      local_94 = local_104 + 7 >> 3;
      uVar21 = local_f4 * local_94;
      if (uVar21 == 0) {
        local_100 = (void *)0x0;
        local_e8 = (void *)0x0;
      }
      else {
        local_100 = calloc((ulong)uVar21,1);
        local_e8 = calloc((ulong)uVar21,1);
      }
      local_a0 = param_6;
                    /* try { // try from 001e7046 to 001e705a has its CatchHandler @ 001e73f9 */
      lVar13 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      iVar11 = (**(code **)(lVar13 + 0x18))(*(undefined8 *)(param_4 + 0x148));
      if ((0 < (int)local_f4) && (uVar21 = local_f4, 0 < (int)local_104)) {
        do {
          local_58 = (ulong)uVar21;
          uVar21 = uVar21 - 1;
          if (0 < (int)local_104) {
            iVar22 = uVar21 * local_94;
            uVar27 = local_104 + 1;
            do {
              uVar28 = uVar27 - 2;
              bVar7 = (byte)uVar28 & 7;
              bVar24 = bVar7 ^ 7;
              if (iVar11 != 1) {
                bVar24 = bVar7;
              }
                    /* try { // try from 001e70de to 001e70ec has its CatchHandler @ 001e744e */
              uVar20 = Image::getPixelAt(local_f0,uVar28,uVar21);
              uVar28 = (uVar28 >> 3) + iVar22;
              bVar24 = (byte)(1 << bVar24);
              if ((int)uVar20 < 0) {
                pbVar1 = (byte *)((long)local_100 + (ulong)uVar28);
                *pbVar1 = *pbVar1 | bVar24;
              }
              uVar23 = uVar20 >> 0x10 & 0xff;
              uVar19 = uVar20 >> 8 & 0xff;
              if (uVar19 < (uVar20 & 0xff)) {
                uVar19 = uVar20 & 0xff;
              }
              if (uVar19 <= uVar23) {
                uVar19 = uVar23;
              }
              if ((uVar19 != 0) && (DAT_005d9044 <= (float)uVar19 / DAT_005de3b0)) {
                pbVar1 = (byte *)((long)local_e8 + (ulong)uVar28);
                *pbVar1 = *pbVar1 | bVar24;
              }
              uVar27 = uVar27 - 1;
            } while (1 < uVar27);
          }
        } while (1 < (int)local_58);
      }
                    /* try { // try from 001e7179 to 001e71bc has its CatchHandler @ 001e73f7 */
      lVar13 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      uVar14 = local_60;
      lVar12 = local_68;
      uVar17 = (**(code **)(lVar13 + 0x98))
                         (*(undefined8 *)(local_68 + 0x148),local_60,local_e8,local_104,local_f4,
                          0xffff,0,1);
      local_c8 = 0;
      uStack_d0 = lVar12;
      local_d8 = (undefined1  [8])uVar17;
      uStack_b8 = 0x1e74d0;
      uStack_b4 = 0;
      uStack_c0 = 0x1e7500;
      local_bc = 0;
                    /* try { // try from 001e71eb to 001e7223 has its CatchHandler @ 001e73e8 */
      lVar13 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      uVar25 = local_a0;
      pIVar15 = (Image *)(**(code **)(lVar13 + 0x98))
                                   (*(undefined8 *)(lVar12 + 0x148),uVar14,local_100,local_104,
                                    local_f4,0xffff,0,1);
      local_80 = 0;
      local_88 = (Image *)lVar12;
      local_70 = std::
                 _Function_handler<void(unsigned_long&),juce::XWindowSystem::createCustomMouseCursorInfo(juce::Image_const&,juce::Point<int>)const::$_2>
                 ::_M_invoke;
      local_78 = std::
                 _Function_handler<void(unsigned_long&),juce::XWindowSystem::createCustomMouseCursorInfo(juce::Image_const&,juce::Point<int>)const::$_2>
                 ::_M_manager;
      local_44 = 0;
      local_48 = 0;
      local_34 = 0xffff;
      local_38 = 0xffffffff;
      local_90 = pIVar15;
                    /* try { // try from 001e727a to 001e72b3 has its CatchHandler @ 001e73d9 */
      lVar13 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      lVar13 = (**(code **)(lVar13 + 0x90))
                         (*(undefined8 *)(lVar12 + 0x148),uVar17,pIVar15,local_40,local_50,
                          uVar25 & 0xffffffff,local_e0);
                    /* try { // try from 001e72bf to 001e72d3 has its CatchHandler @ 001e73c6 */
      lVar18 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar18 + 0x150))(*(undefined8 *)(lVar12 + 0x148),pIVar15);
                    /* try { // try from 001e72d9 to 001e72ed has its CatchHandler @ 001e73b3 */
      lVar18 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar18 + 0x150))(*(undefined8 *)(lVar12 + 0x148),uVar17);
      free(local_e8);
      free(local_100);
      LOCK();
      pIVar15 = local_f0 + 8;
      *(int *)pIVar15 = *(int *)pIVar15 + -1;
      UNLOCK();
      if (*(int *)pIVar15 == 0) {
        (**(code **)(*(long *)local_f0 + 8))();
      }
    }
  }
  if ((singletonHolder._40_8_ != 0) &&
     (lVar12 = *(long *)(singletonHolder._40_8_ + 0x148), lVar12 != 0)) {
                    /* try { // try from 001e732c to 001e7339 has its CatchHandler @ 001e73fb */
    lVar18 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar18 + 0x360))(lVar12);
  }
  return lVar13;
}


