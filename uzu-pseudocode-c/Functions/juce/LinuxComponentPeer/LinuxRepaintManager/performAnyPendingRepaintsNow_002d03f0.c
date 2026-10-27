// Function : performAnyPendingRepaintsNow
// Namespace: juce:LinuxComponentPeer:LinuxRepaintManager
// Entry    : 002d03f0
// Prototype: undefined performAnyPendingRepaintsNow(LinuxRepaintManager * this)
// Body     : 002d03f0 - 002d166b


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LinuxComponentPeer::LinuxRepaintManager::performAnyPendingRepaintsNow() */

void __thiscall
juce::LinuxComponentPeer::LinuxRepaintManager::performAnyPendingRepaintsNow
          (LinuxRepaintManager *this)

{
  long *plVar1;
  LinuxRepaintManager *pLVar2;
  LinuxRepaintManager LVar3;
  Component CVar4;
  long *plVar5;
  LinuxComponentPeer *this_00;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  XWindowSystem *pXVar17;
  _Rb_tree_node_base *p_Var18;
  ulong *__dest;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  void *pvVar22;
  uint *puVar23;
  int *piVar24;
  Desktop *this_01;
  LookAndFeel_V4 *pLVar25;
  long lVar26;
  X11Symbols *this_02;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 extraout_RDX;
  int *piVar32;
  ulong *puVar33;
  Component *this_03;
  size_t __size;
  ulong uVar34;
  int iVar35;
  long lVar36;
  uint uVar37;
  byte *pbVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  ulong uVar43;
  undefined1 auVar44 [16];
  undefined1 local_1c8 [16];
  int local_1a0;
  long local_198;
  int local_160;
  ulong *local_140;
  long *local_130;
  int *local_128;
  int local_120;
  uint local_11c;
  float local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulong local_108;
  LinuxRepaintManager *local_100;
  ulong local_f8;
  ulong local_f0;
  size_t local_e8;
  int local_e0;
  uint local_dc;
  timespec local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  long *local_b0;
  undefined4 local_74;
  undefined8 local_68;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  pXVar17 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                       XWindowSystem::singletonHolder);
  local_d8.tv_sec._0_4_ = (float)*(undefined8 *)(*(long *)this + 0x120);
  local_d8.tv_sec._4_4_ = (uint)((ulong)*(undefined8 *)(*(long *)this + 0x120) >> 0x20);
  cVar8 = XSHMHelpers::isShmAvailable(*(long *)(pXVar17 + 0x148));
  if ((cVar8 != '\0') &&
     (p_Var18 = std::
                map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
                ::operator[]((map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
                              *)(pXVar17 + 0x160),(ulong *)&local_d8), 0 < *(int *)p_Var18)) {
    return;
  }
  uVar29 = *(uint *)(this + 0x2c);
  lVar36 = (long)(int)uVar29;
  if (lVar36 < 1) {
    *(undefined4 *)(this + 0x2c) = 0;
    __dest = (ulong *)0x0;
    goto LAB_002d15ce;
  }
  pvVar22 = *(void **)(this + 0x20);
  uVar37 = uVar29 + (uVar29 >> 1) + 8 & 0xfffffff8;
  uVar31 = (ulong)uVar37;
  if ((int)uVar37 < 1) {
    __dest = (ulong *)0x0;
  }
  else {
    __dest = malloc(uVar31 << 4);
  }
  local_e8 = (ulong)uVar29 << 4;
  memcpy(__dest,pvVar22,local_e8);
  *(undefined4 *)(this + 0x2c) = 0;
  if (uVar29 == 1) {
    uVar30 = *__dest;
    uVar43 = __dest[1];
    uVar37 = (uint)(uVar30 >> 0x20);
    iVar9 = (int)uVar43;
  }
  else {
    uVar30 = (ulong)(uint)*__dest;
    uVar37 = *(uint *)((long)__dest + 4);
    iVar9 = (uint)__dest[1] + (uint)*__dest;
    iVar11 = *(uint *)((long)__dest + 0xc) + uVar37;
    uVar43 = (ulong)uVar29 + 1;
    do {
      uVar34 = (ulong)((int)uVar43 - 2);
      uVar27 = (uint)__dest[uVar34 * 2];
      uVar16 = *(uint *)((long)__dest + uVar34 * 0x10 + 4);
      if ((int)uVar27 < (int)uVar30) {
        uVar30 = (ulong)uVar27;
      }
      if ((int)uVar16 < (int)uVar37) {
        uVar37 = uVar16;
      }
      iVar13 = uVar27 + (uint)__dest[uVar34 * 2 + 1];
      if (iVar13 <= iVar9) {
        iVar13 = iVar9;
      }
      iVar9 = iVar13;
      iVar13 = uVar16 + *(int *)((long)__dest + uVar34 * 0x10 + 0xc);
      if (iVar13 <= iVar11) {
        iVar13 = iVar11;
      }
      iVar11 = iVar13;
      uVar43 = uVar43 - 1;
    } while (2 < uVar43);
    iVar9 = iVar9 - (int)uVar30;
    uVar43 = CONCAT44(iVar11 - uVar37,iVar9);
  }
  if ((iVar9 < 1) || (iVar9 = (int)(uVar43 >> 0x20), iVar9 < 1)) goto LAB_002d15ce;
  pLVar2 = this + 0x10;
  lVar26 = *(long *)(this + 0x10);
  local_100 = this;
  local_f0 = uVar31;
  if ((lVar26 == 0) ||
     ((*(int *)(lVar26 + 0x10) < (int)uVar43 || (*(int *)(lVar26 + 0x14) < iVar9)))) {
                    /* try { // try from 002d05a3 to 002d0626 has its CatchHandler @ 002d16fb */
    pXVar17 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                        ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                         XWindowSystem::singletonHolder);
    plVar5 = *(long **)(pXVar17 + 0x150);
    lVar21 = plVar5[2];
    local_198 = lVar21;
    if ((local_100[8] == (LinuxRepaintManager)0x0) || (iVar11 = 0x20, lVar21 == 0)) {
      lVar20 = plVar5[1];
      if (lVar20 != 0) {
        local_198 = lVar20;
      }
      if (lVar20 == 0 && lVar21 == 0) {
        local_198 = *plVar5;
        iVar11 = 0x10;
      }
      else {
        iVar11 = (uint)(lVar20 == 0) * 8 + 0x18;
      }
    }
    LVar3 = local_100[0x30];
    puVar19 = operator_new(0xb8);
    uVar27 = (int)uVar43 + 0x1fU & 0xffffffe0;
    uVar31 = (long)iVar9 + 0x1fU & 0xffffffffffffffe0;
    *(undefined4 *)(puVar19 + 1) = 0;
    *(uint *)((long)puVar19 + 0xc) = 2 - (uint)(LVar3 == (LinuxRepaintManager)0x0);
    *(uint *)(puVar19 + 2) = uVar27;
    uVar16 = (uint)uVar31;
    *(uint *)((long)puVar19 + 0x14) = uVar16;
    puVar19[3] = 0;
    puVar19[4] = 0;
    puVar19[5] = 0;
    puVar19[6] = 0;
    puVar19[7] = 0;
    puVar19[8] = 0;
    *(undefined4 *)(puVar19 + 9) = 0;
    *puVar19 = &PTR__XBitmapImage_0070dde0;
    plVar5 = puVar19 + 10;
    puVar19[10] = 0;
    *(int *)(puVar19 + 0xb) = iVar11;
    puVar19[0xc] = 0;
    puVar19[0xd] = 0;
    puVar19[0xf] = 0;
    puVar19[0x10] = 0;
                    /* try { // try from 002d06b4 to 002d06bf has its CatchHandler @ 002d16af */
    pXVar17 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                        ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                         XWindowSystem::singletonHolder);
    puVar19[0x11] = *(undefined8 *)(pXVar17 + 0x148);
    iVar9 = 4 - (uint)(LVar3 == (LinuxRepaintManager)0x0);
    *(int *)(puVar19 + 0xe) = iVar9;
    *(uint *)((long)puVar19 + 0x74) = iVar9 * uVar27;
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar21 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar21 != 0)) {
                    /* try { // try from 002d0707 to 002d0714 has its CatchHandler @ 002d16a3 */
      lVar20 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar20 + 0x210))(lVar21);
    }
    this = local_100;
    *(undefined1 *)(puVar19 + 0x16) = 0;
    if (*(uint *)(puVar19 + 0xb) < 0x11) {
LAB_002d0874:
      __size = (long)*(int *)((long)puVar19 + 0x74) * uVar31;
      free((void *)puVar19[0xc]);
      if ((int)__size == 0) {
        pvVar22 = (void *)0x0;
      }
      else {
        pvVar22 = malloc(__size);
      }
      puVar19[0xc] = pvVar22;
      puVar19[0xf] = pvVar22;
      puVar23 = calloc(1,0x88);
      lVar21 = *plVar5;
      *plVar5 = (long)puVar23;
      if (lVar21 != 0) {
                    /* try { // try from 002d08d5 to 002d08e7 has its CatchHandler @ 002d16a5 */
        lVar20 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar20 + 0xe0))(lVar21);
        puVar23 = (uint *)*plVar5;
        pvVar22 = (void *)puVar19[0xf];
      }
      *puVar23 = uVar27;
      puVar23[1] = uVar16;
      puVar23[2] = 0;
      puVar23[3] = 2;
      *(void **)(puVar23 + 4) = pvVar22;
                    /* try { // try from 002d091f to 002d0a20 has its CatchHandler @ 002d170b */
      lVar21 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      uVar10 = (**(code **)(lVar21 + 0x1d0))(puVar19[0x11]);
      *(undefined4 *)(*plVar5 + 0x18) = uVar10;
      lVar21 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      uVar10 = (**(code **)(lVar21 + 0x20))(puVar19[0x11]);
      *(undefined4 *)(*plVar5 + 0x1c) = uVar10;
      lVar21 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      uVar10 = (**(code **)(lVar21 + 0x18))(puVar19[0x11]);
      lVar21 = puVar19[10];
      *(undefined4 *)(lVar21 + 0x20) = uVar10;
      *(undefined4 *)(lVar21 + 0x24) = 0x20;
      iVar9 = *(int *)(puVar19 + 0xe);
      *(int *)(lVar21 + 0x28) = iVar9 << 3;
      *(undefined4 *)(lVar21 + 0x2c) = *(undefined4 *)((long)puVar19 + 0x74);
      *(int *)(lVar21 + 0x30) = iVar9 << 3;
      uVar6 = _UNK_005dd2a8;
      *(undefined8 *)(lVar21 + 0x38) = _DAT_005dd2a0;
      *(undefined8 *)(lVar21 + 0x40) = uVar6;
      *(undefined8 *)(lVar21 + 0x48) = 0xff;
      if (*(int *)(puVar19 + 0xb) == 0x10) {
        iVar9 = uVar27 * 2 * uVar16;
        free((void *)puVar19[0xd]);
        if (iVar9 == 0) {
          pvVar22 = (void *)0x0;
        }
        else {
          pvVar22 = malloc((long)iVar9);
        }
        puVar19[0xd] = pvVar22;
        *(void **)(puVar19[10] + 0x10) = pvVar22;
        lVar21 = puVar19[10];
        *(undefined8 *)(lVar21 + 0x24) = 0x1000000010;
        *(uint *)(lVar21 + 0x2c) = uVar27 * 2;
        *(undefined4 *)(lVar21 + 0x30) = 0x10;
        uVar6 = *(undefined8 *)(local_198 + 0x20);
        *(undefined8 *)(lVar21 + 0x38) = *(undefined8 *)(local_198 + 0x18);
        *(undefined8 *)(lVar21 + 0x40) = uVar6;
        *(undefined8 *)(lVar21 + 0x48) = *(undefined8 *)(local_198 + 0x28);
      }
      lVar21 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar21 + 0x1d8))(*plVar5);
    }
    else {
                    /* try { // try from 002d0737 to 002d07b0 has its CatchHandler @ 002d170b */
      cVar8 = XSHMHelpers::isShmAvailable(puVar19[0x11]);
      if (cVar8 == '\0') {
LAB_002d0866:
        if (*(char *)(puVar19 + 0x16) == '\0') goto LAB_002d0874;
      }
      else {
        puVar19[0x12] = 0;
        puVar19[0x13] = 0;
        puVar19[0x14] = 0;
        puVar19[0x15] = 0;
        *(undefined4 *)(puVar19 + 0x13) = 0xffffffff;
        puVar19[0x14] = 0xffffffffffffffff;
        lVar21 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        lVar20 = (**(code **)(lVar21 + 0x3e0))
                           (puVar19[0x11],local_198,*(undefined4 *)(puVar19 + 0xb),2,0,
                            puVar19 + 0x12,uVar27,uVar31);
        lVar21 = *plVar5;
        *plVar5 = lVar20;
        if (lVar21 != 0) {
                    /* try { // try from 002d07c0 to 002d07cd has its CatchHandler @ 002d1687 */
          lVar21 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar21 + 0xe0))();
          lVar20 = *plVar5;
        }
        if (lVar20 == 0) goto LAB_002d0866;
        iVar9 = shmget(0,(long)*(int *)(lVar20 + 4) * (long)*(int *)(lVar20 + 0x2c),0x3ff);
        *(int *)(puVar19 + 0x13) = iVar9;
        if (iVar9 < 0) goto LAB_002d0866;
        pvVar22 = shmat(iVar9,(void *)0x0,0);
        puVar19[0x14] = pvVar22;
        if (pvVar22 == (void *)0xffffffffffffffff) {
          shmctl(*(int *)(puVar19 + 0x13),0,(shmid_ds *)0x0);
          goto LAB_002d0866;
        }
        *(undefined4 *)(puVar19 + 0x15) = 0;
        *(void **)(puVar19[10] + 0x10) = pvVar22;
        puVar19[0xf] = pvVar22;
                    /* try { // try from 002d0830 to 002d0844 has its CatchHandler @ 002d170b */
        lVar21 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        iVar9 = (**(code **)(lVar21 + 0x3d8))(puVar19[0x11],puVar19 + 0x12);
        if (iVar9 == 0) goto LAB_002d0866;
        *(undefined1 *)(puVar19 + 0x16) = 1;
      }
    }
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar21 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar21 != 0)) {
                    /* try { // try from 002d0a39 to 002d0a46 has its CatchHandler @ 002d169b */
      lVar20 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar20 + 0x360))(lVar21);
    }
    LOCK();
    *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
    UNLOCK();
    plVar5 = *(long **)pLVar2;
    *(undefined8 **)pLVar2 = puVar19;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    if (lVar26 == 0) {
      this_00 = *(LinuxComponentPeer **)this;
      plVar5 = *(long **)(this_00 + 8);
      if ((float *)plVar5[10] == (float *)0x0) {
        local_1c8 = *(undefined1 (*) [16])(plVar5 + 7);
      }
      else {
        local_1c8 = Rectangle<int>::transformedBy
                              ((Rectangle<int> *)(plVar5 + 7),(float *)plVar5[10]);
      }
                    /* try { // try from 002d0aaf to 002d0ab7 has its CatchHandler @ 002d1691 */
      fVar39 = (float)(**(code **)(*plVar5 + 0x88))(plVar5);
      local_d8.tv_sec._4_4_ = local_1c8._4_4_;
      fVar40 = (float)(_DAT_005d91c0 & (uint)fVar39);
      iVar9 = local_1c8._8_4_;
      local_d8.tv_nsec._4_4_ = local_1c8._12_4_;
      if (fVar40 == DAT_005d94c8) {
        if ((fVar39 != DAT_005d9038) || (NAN(fVar39) || NAN(DAT_005d9038))) {
LAB_002d0b1c:
          local_1c8._0_8_ = (double)((float)local_1c8._0_4_ * fVar39) + _DAT_005d9a90;
          local_1c8._8_8_ = (double)((float)iVar9 * fVar39) + _UNK_005d9a98;
          local_d8.tv_sec._4_4_ =
               SUB84((double)((float)(int)local_d8.tv_sec._4_4_ * fVar39) + _DAT_005d9a90,0);
          local_d8.tv_nsec._4_4_ =
               SUB84((double)((float)(int)local_d8.tv_nsec._4_4_ * fVar39) + _UNK_005d9a98,0);
        }
      }
      else {
        fVar41 = (float)((uint)(fVar39 + DAT_005d9054) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar41) {
          fVar42 = DAT_005d9038;
          if (DAT_005d9038 <= fVar40) {
            fVar42 = fVar40;
          }
          if (fVar42 * DAT_005d94d0 < fVar41) goto LAB_002d0b1c;
        }
      }
      uVar31 = local_1c8._0_8_ & _DAT_005d9aa0;
      uVar43 = local_1c8._8_8_ & _UNK_005d9aa8;
      local_d8.tv_sec._4_4_ = (uint)(uVar31 >> 0x20) | local_d8.tv_sec._4_4_;
      local_d8.tv_nsec._4_4_ = (uint)(uVar43 >> 0x20) | local_d8.tv_nsec._4_4_;
      local_d8.tv_sec._0_4_ = (float)uVar31;
      local_d8.tv_nsec._0_4_ = (undefined4)uVar43;
                    /* try { // try from 002d0ba8 to 002d0bb7 has its CatchHandler @ 002d168f */
      forceSetBounds(this_00,&local_d8.tv_sec,*(LinuxComponentPeer *)(*(long *)this + 0x154));
    }
  }
  local_128 = (int *)0x0;
  iVar9 = (int)local_f0;
  if (0 < iVar9) {
    local_128 = malloc((local_f0 & 0xffffffff) << 4);
  }
  piVar32 = local_128;
  local_120 = iVar9;
  memcpy(local_128,__dest,local_e8);
  piVar24 = piVar32 + lVar36 * 4;
  do {
    iVar9 = (int)uVar30;
    *piVar32 = *piVar32 - iVar9;
    piVar32[1] = piVar32[1] - uVar37;
    piVar32 = piVar32 + 4;
  } while (piVar32 != piVar24);
  local_11c = uVar29;
                    /* try { // try from 002d0c3e to 002d0c51 has its CatchHandler @ 002d1703 */
  pXVar17 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                       XWindowSystem::singletonHolder);
  cVar8 = XWindowSystem::canUseARGBImages(pXVar17);
  if (cVar8 != '\0') {
    puVar33 = __dest;
    do {
      local_d8.tv_sec._0_4_ = (float)((uint)*puVar33 - iVar9);
      local_d8.tv_sec._4_4_ = *(uint *)((long)puVar33 + 4) - uVar37;
      local_d8.tv_nsec._0_4_ = (undefined4)puVar33[1];
      local_d8.tv_nsec._4_4_ = (uint)(puVar33[1] >> 0x20);
                    /* try { // try from 002d0c9b to 002d0ca4 has its CatchHandler @ 002d1790 */
      Image::clear(*(Image **)pLVar2,&local_d8,0);
      puVar33 = puVar33 + 2;
    } while (puVar33 != __dest + lVar36 * 2);
  }
  lVar26 = *(long *)(*(long *)this + 8);
  do {
    if ((*(long *)(lVar26 + 0x68) != 0) &&
       (pLVar25 = *(LookAndFeel_V4 **)(*(long *)(lVar26 + 0x68) + 0x10),
       pLVar25 != (LookAndFeel_V4 *)0x0)) goto LAB_002d0d10;
    lVar26 = *(long *)(lVar26 + 0x30);
  } while (lVar26 != 0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002d0ce9 to 002d0cf2 has its CatchHandler @ 002d167f */
    this_01 = operator_new(0x1d0);
                    /* try { // try from 002d0cf6 to 002d0cfd has its CatchHandler @ 002d166c */
    Desktop::Desktop(this_01);
    Desktop::instance = this_01;
  }
  pLVar25 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002d0d10:
                    /* try { // try from 002d0d28 to 002d0d40 has its CatchHandler @ 002d16bb */
  (**(code **)(*(long *)pLVar25 + 0x88))
            (&local_130,pLVar25,pLVar2,CONCAT44(-uVar37,-iVar9),&local_128);
  local_d8.tv_sec._0_4_ = (float)*(double *)(*(long *)this + 0x158);
  local_d8.tv_sec._4_4_ = 0;
  local_d8.tv_nsec._0_4_ = 0;
  local_d8.tv_nsec._4_4_ = 0;
  local_c8 = (ulong)(uint)(float)local_d8.tv_sec;
                    /* try { // try from 002d0d90 to 002d0d9a has its CatchHandler @ 002d16b6 */
  (**(code **)(*local_130 + 0x20))(local_130,&local_d8);
  plVar5 = *(long **)this;
  local_d8.tv_sec._0_4_ = 0.0;
  local_d8.tv_sec._4_4_ = 0;
  local_d8.tv_nsec._0_4_ = SUB84(local_130,0);
  local_d8.tv_nsec._4_4_ = (uint)((ulong)local_130 >> 0x20);
  local_c8 = local_c8 & 0xffffffffffffff00;
  puVar19 = *(undefined8 **)(plVar5[1] + 0x50);
  if (puVar19 != (undefined8 *)0x0) {
    local_108 = puVar19[2];
    local_118 = (float)*puVar19;
    uStack_114 = (undefined4)((ulong)*puVar19 >> 0x20);
    uStack_110 = (undefined4)puVar19[1];
    uStack_10c = (undefined4)((ulong)puVar19[1] >> 0x20);
                    /* try { // try from 002d0def to 002d0df9 has its CatchHandler @ 002d1699 */
    (**(code **)(*local_130 + 0x20))(local_130,&local_118);
  }
                    /* try { // try from 002d0dfe to 002d0e03 has its CatchHandler @ 002d16b4 */
  (**(code **)(*plVar5 + 0x48))(plVar5);
  this_03 = (Component *)plVar5[1];
  iVar11 = *(int *)(this_03 + 0x44);
  local_38 = *(undefined8 *)(this_03 + 0x40);
  local_40 = 0;
  auVar7._4_8_ = 0;
  auVar7._0_4_ = *(uint *)(this_03 + 0x40);
  auVar7 = auVar7 << 0x40;
  puVar19 = *(undefined8 **)(this_03 + 0x50);
  if (puVar19 != (undefined8 *)0x0) {
    local_108 = puVar19[2];
    local_118 = (float)*puVar19;
    uStack_114 = (undefined4)((ulong)*puVar19 >> 0x20);
    uStack_110 = (undefined4)puVar19[1];
    uStack_10c = (undefined4)((ulong)puVar19[1] >> 0x20);
    auVar44 = Rectangle<int>::transformedBy((Rectangle<int> *)&local_40,&local_118);
    auVar7 = auVar44._0_12_;
    iVar11 = auVar44._12_4_;
  }
  local_40 = auVar7._0_8_;
  iVar13 = (int)((ulong)extraout_RDX >> 0x20);
  if ((auVar7._8_4_ != (int)extraout_RDX) || (iVar11 != iVar13)) {
    local_118 = (float)(int)extraout_RDX / (float)auVar7._8_4_;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    local_108 = (ulong)(uint)((float)iVar13 / (float)iVar11);
    if ((char)local_c8 != '\0') {
      local_c8 = local_c8 & 0xffffffffffffff00;
                    /* try { // try from 002d0ef7 to 002d0f0f has its CatchHandler @ 002d16ad */
      (**(code **)(*(long *)CONCAT44(local_d8.tv_nsec._4_4_,(undefined4)local_d8.tv_nsec) + 0x70))()
      ;
    }
    (**(code **)(*(long *)CONCAT44(local_d8.tv_nsec._4_4_,(undefined4)local_d8.tv_nsec) + 0x20))
              ((long *)CONCAT44(local_d8.tv_nsec._4_4_,(undefined4)local_d8.tv_nsec),&local_118);
    this_03 = (Component *)plVar5[1];
  }
  CVar4 = this_03[0xea];
  if (((byte)CVar4 & 0xc) != 0) {
    *(undefined2 *)(this_03 + 0xe8) = *(undefined2 *)(this_03 + 0xe8);
    this_03[0xea] = (Component)((byte)CVar4 & 0xf3);
                    /* try { // try from 002d0f64 to 002d0f9e has its CatchHandler @ 002d16c8 */
    Component::sendMovedResizedMessages(this_03,(byte)CVar4 >> 2 & 1,(byte)CVar4 >> 3 & 1);
  }
  if (*(EffectState **)(this_03 + 0x80) == (EffectState *)0x0) {
    Component::paintComponentAndChildren(this_03,(long)&local_d8);
  }
  else {
    Component::EffectState::paint(*(EffectState **)(this_03 + 0x80),(long)&local_d8,this_03,1);
  }
  plVar5[0x16] = plVar5[0x16] + 1;
  if ((long *)CONCAT44(local_d8.tv_sec._4_4_,(float)local_d8.tv_sec) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT44(local_d8.tv_sec._4_4_,(float)local_d8.tv_sec) + 8))();
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 8))();
  }
  local_140 = __dest;
  do {
                    /* try { // try from 002d100d to 002d1018 has its CatchHandler @ 002d17ae */
    SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
              ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
               XWindowSystem::singletonHolder);
    plVar5 = *(long **)(this + 0x10);
    uVar6 = *(undefined8 *)(*(long *)this + 0x120);
    if (plVar5 == (long *)0x0) {
      uVar31 = *local_140;
      uVar30 = local_140[1];
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      uVar31 = *local_140;
      uVar30 = local_140[1];
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar26 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar26 != 0)) {
                    /* try { // try from 002d10ca to 002d10d7 has its CatchHandler @ 002d17a5 */
      lVar21 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar21 + 0x210))(lVar26);
    }
    if ((char)plVar5[0x16] != '\0') {
                    /* try { // try from 002d10e5 to 002d112a has its CatchHandler @ 002d17b3 */
      pXVar17 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                          ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                           XWindowSystem::singletonHolder);
      local_d8.tv_sec._0_4_ = (float)uVar6;
      local_d8.tv_sec._4_4_ = (uint)((ulong)uVar6 >> 0x20);
      cVar8 = XSHMHelpers::isShmAvailable(*(long *)(pXVar17 + 0x148));
      if (cVar8 != '\0') {
        p_Var18 = std::
                  map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
                  ::operator[]((map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
                                *)(pXVar17 + 0x160),(ulong *)&local_d8);
        *(int *)p_Var18 = *(int *)p_Var18 + 1;
      }
    }
    if (plVar5[0x10] == 0) {
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8.tv_sec._0_4_ = 4.2039e-45;
      local_d8.tv_nsec._0_4_ = 0xffffffff;
      local_d8.tv_nsec._4_4_ = 0xffffffff;
      local_68 = 0;
      local_74 = 0;
                    /* try { // try from 002d1178 to 002d119b has its CatchHandler @ 002d1798 */
      lVar26 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      lVar26 = (**(code **)(lVar26 + 0x78))(plVar5[0x11],uVar6,0x9000f,&local_d8);
      plVar5[0x10] = lVar26;
    }
    iVar11 = (int)uVar31 - iVar9;
    local_f8 = (ulong)((int)(uVar31 >> 0x20) - uVar37);
    if ((int)plVar5[0xb] == 0x10) {
      lVar26 = plVar5[10];
      uVar29 = *(uint *)(lVar26 + 0x38);
      uVar27 = *(uint *)(lVar26 + 0x40);
      uVar16 = *(uint *)(lVar26 + 0x48);
      uVar12 = XBitmapImage::getShiftNeeded(uVar29);
      uVar28 = 0;
      if (-1 < (int)uVar12) {
        uVar28 = uVar12;
      }
      iVar13 = -uVar12;
      if (iVar13 < 0) {
        iVar13 = 0;
      }
      uVar14 = XBitmapImage::getShiftNeeded(uVar27);
      uVar12 = 0;
      if (-1 < (int)uVar14) {
        uVar12 = uVar14;
      }
      iVar15 = -uVar14;
      if (iVar15 < 0) {
        iVar15 = 0;
      }
      local_f0 = CONCAT44(local_f0._4_4_,iVar15);
      local_e8 = CONCAT44(local_e8._4_4_,uVar16);
      uVar16 = XBitmapImage::getShiftNeeded(uVar16);
      local_dc = 0;
      if (-1 < (int)uVar16) {
        local_dc = uVar16;
      }
      iVar15 = -uVar16;
      if (iVar15 < 0) {
        iVar15 = 0;
      }
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      uStack_c0 = CONCAT44((int)plVar5[2],(int)uStack_c0);
      local_b8 = *(undefined4 *)((long)plVar5 + 0x14);
      local_b0 = (long *)0x0;
                    /* try { // try from 002d1288 to 002d129c has its CatchHandler @ 002d1748 */
      (**(code **)(*plVar5 + 0x38))(plVar5,&local_d8,0,0,0);
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      local_160 = (int)(uVar30 >> 0x20);
      if ((0 < local_160) && (local_1a0 = (int)uVar30, 0 < local_1a0)) {
        local_48 = (long)iVar11;
        local_e0 = local_1a0 + iVar11;
        uVar43 = (ulong)(int)local_f8;
        local_50 = (long)(local_160 + (int)local_f8);
        do {
          uVar34 = (ulong)(int)uStack_c0;
          pbVar38 = (byte *)(uVar34 * local_48 +
                            (long)local_c8._4_4_ * uVar43 +
                            CONCAT44(local_d8.tv_sec._4_4_,(float)local_d8.tv_sec));
          iVar35 = iVar11;
          this_02 = (X11Symbols *)X11Symbols::singletonHolder._40_8_;
          while( true ) {
            X11Symbols::singletonHolder._40_8_ = this_02;
            if (this_02 == (X11Symbols *)0x0) {
              pthread_mutex_lock((pthread_mutex_t *)X11Symbols::singletonHolder);
              this_02 = (X11Symbols *)X11Symbols::singletonHolder._40_8_;
              if (X11Symbols::singletonHolder._40_8_ == 0) {
                if (SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get()::
                    alreadyInside == '\0') {
                  SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get()::
                  alreadyInside = 1;
                    /* try { // try from 002d13ba to 002d13c3 has its CatchHandler @ 002d17c9 */
                  this_02 = operator_new(0x430);
                  memset(this_02,0,0x430);
                    /* try { // try from 002d13d6 to 002d13dd has its CatchHandler @ 002d17bc */
                  X11Symbols::X11Symbols(this_02);
                  LOCK();
                  UNLOCK();
                  SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get()::
                  alreadyInside = '\0';
                  X11Symbols::singletonHolder._40_8_ = this_02;
                }
                else {
                  this_02 = (X11Symbols *)0x0;
                }
              }
              pthread_mutex_unlock((pthread_mutex_t *)X11Symbols::singletonHolder);
            }
                    /* try { // try from 002d1453 to 002d1461 has its CatchHandler @ 002d17e1 */
            (**(code **)(this_02 + 0x260))
                      (plVar5[10],iVar35,uVar43 & 0xffffffff,
                       ((uint)*pbVar38 << ((byte)local_dc & 0x1f)) >> ((byte)iVar15 & 0x1f) &
                       (uint)local_e8 |
                       ((uint)pbVar38[1] << ((byte)uVar12 & 0x1f)) >> ((byte)local_f0 & 0x1f) &
                       uVar27 | ((uint)pbVar38[2] << ((byte)uVar28 & 0x1f)) >> ((byte)iVar13 & 0x1f)
                                & uVar29);
            iVar35 = iVar35 + 1;
            if (local_e0 <= iVar35) break;
            pbVar38 = pbVar38 + (int)uVar34;
            uVar34 = uStack_c0 & 0xffffffff;
            this_02 = (X11Symbols *)X11Symbols::singletonHolder._40_8_;
          }
          uVar43 = uVar43 + 1;
        } while ((long)uVar43 < local_50);
      }
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 8))();
      }
      this = local_100;
    }
    if ((char)plVar5[0x16] == '\0') {
      lVar26 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar26 + 600))
                (plVar5[0x11],uVar6,plVar5[0x10],plVar5[10],iVar11,local_f8,uVar31,uVar31 >> 0x20,
                 uVar30,uVar30 >> 0x20);
    }
    else {
                    /* try { // try from 002d14c2 to 002d1575 has its CatchHandler @ 002d17b3 */
      lVar26 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar26 + 0x3f8))
                (plVar5[0x11],uVar6,plVar5[0x10],plVar5[10],iVar11,local_f8,uVar31,uVar31 >> 0x20,
                 uVar30,uVar30 >> 0x20,1);
    }
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar26 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar26 != 0)) {
                    /* try { // try from 002d158e to 002d159b has its CatchHandler @ 002d179d */
      lVar21 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar21 + 0x360))(lVar26);
    }
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_140 = local_140 + 2;
  } while (local_140 != __dest + lVar36 * 2);
  local_11c = 0;
  free(local_128);
LAB_002d15ce:
  uVar29 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
  if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
    clock_gettime(1,&local_d8);
    auVar44 = SEXT816(CONCAT44(local_d8.tv_nsec._4_4_,(undefined4)local_d8.tv_nsec) / 1000 +
                      CONCAT44(local_d8.tv_sec._4_4_,(float)local_d8.tv_sec) * 1000000) *
              SEXT816(0x20c49ba5e353f7cf);
    uVar29 = (int)(auVar44._8_8_ >> 7) - (auVar44._12_4_ >> 0x1f);
    if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar29) ||
       (uVar29 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
      LOCK();
      UNLOCK();
      _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar29;
    }
  }
  *(uint *)(this + 0x18) = uVar29;
  free(__dest);
  return;
}


