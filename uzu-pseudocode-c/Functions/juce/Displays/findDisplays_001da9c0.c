// Function : findDisplays
// Namespace: juce:Displays
// Entry    : 001da9c0
// Prototype: undefined findDisplays(Displays * this, long param_1)
// Body     : 001da9c0 - 001dddfb


/* WARNING: Removing unreachable block (ram,0x001db9cd) */
/* WARNING: Removing unreachable block (ram,0x001db9db) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Displays::findDisplays(juce::Desktop const&) */

void __thiscall juce::Displays::findDisplays(Displays *this,long param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  __pid_t *p_Var9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  __pid_t _Var16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  XWindowSystem *pXVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  double dVar26;
  long lVar27;
  long *plVar28;
  undefined4 *puVar29;
  byte *pbVar30;
  int *piVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  void *pvVar34;
  void *__dest;
  ulong uVar35;
  X11Symbols *pXVar36;
  uint uVar37;
  ulong uVar38;
  long lVar39;
  undefined8 extraout_RDX;
  char *pcVar40;
  uint uVar41;
  byte *pbVar42;
  __pid_t *p_Var43;
  undefined1 *puVar44;
  long *plVar45;
  long *plVar46;
  uint *puVar47;
  ulong uVar48;
  undefined1 *puVar49;
  ulong uVar50;
  byte *pbVar51;
  bool bVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar60;
  undefined1 auVar59 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  ulong uVar67;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar71;
  undefined1 auVar70 [16];
  char *local_298;
  undefined8 uStack_290;
  XWindowSystem *local_280;
  byte *local_278;
  byte *local_270;
  byte local_261;
  undefined8 local_260;
  undefined4 local_254;
  undefined8 local_250;
  double local_248;
  double dStack_240;
  __pid_t *local_238;
  undefined8 local_230;
  undefined2 local_223;
  char local_221;
  ulong local_220;
  float local_214;
  double local_210;
  ulong local_208;
  __pid_t *local_200;
  __pid_t *local_1f8;
  undefined8 local_1f0;
  void *local_1e8;
  ulong local_1e0;
  Displays *local_1d8;
  double local_1d0;
  double local_1c8;
  byte *local_1c0;
  byte *local_1b8 [2];
  stat64 local_1a8;
  undefined4 local_10f;
  undefined3 uStack_10b;
  long local_108;
  uint local_ec;
  ushort local_e8;
  char local_e6;
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
  long local_c8;
  int local_c0 [2];
  undefined8 local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  double local_78;
  undefined4 *local_70 [2];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  pXVar22 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                       XWindowSystem::singletonHolder);
  if (*(long *)(pXVar22 + 0x148) == 0) {
    return;
  }
  local_280 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                        ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                         XWindowSystem::singletonHolder);
  local_214 = *(float *)(param_1 + 0x130);
  local_298 = (char *)0x0;
  uStack_290 = 0;
  uVar33 = *(undefined8 *)(local_280 + 0x148);
                    /* try { // try from 001daa21 to 001daa3a has its CatchHandler @ 001ddbe0 */
  lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  local_108 = (**(code **)(lVar23 + 0x1f0))(uVar33,"_NET_WORKAREA",1);
  local_280 = local_280 + 0x148;
  local_1d8 = this;
  if (local_108 == 0) {
LAB_001dc886:
    iVar11 = uStack_290._4_4_;
    if (uStack_290._4_4_ != 0) goto LAB_001dc949;
LAB_001dc892:
    uVar33 = *(undefined8 *)local_280;
                    /* try { // try from 001dc89a to 001dc8ef has its CatchHandler @ 001ddbce */
    lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar11 = (**(code **)(lVar23 + 0x270))(uVar33,"XINERAMA",&local_1a8,&local_b8);
    if (iVar11 == 0) {
LAB_001dc932:
      __dest = (void *)0x0;
    }
    else {
      lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      iVar11 = (**(code **)(lVar23 + 0x390))(uVar33);
      if (iVar11 == 0) goto LAB_001dc932;
      lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      pvVar34 = (void *)(**(code **)(lVar23 + 0x398))(uVar33);
      if (pvVar34 == (void *)0x0) goto LAB_001dc932;
      uVar12 = (uint)local_278;
      uVar48 = (ulong)local_278 & 0xffffffff;
      if ((int)(uint)local_278 < 1) {
        __dest = (void *)0x0;
      }
      else {
        uVar41 = ((uint)local_278 >> 1) + (uint)local_278 + 8 & 0xfffffff8;
        if ((int)uVar41 < 1) {
          __dest = (void *)0x0;
        }
        else {
          __dest = malloc((ulong)uVar41 * 0xc);
        }
        memcpy(__dest,pvVar34,uVar48 * 0xc);
      }
                    /* try { // try from 001dd2b8 to 001dd2c5 has its CatchHandler @ 001dda09 */
      lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar23 + 0x128))(pvVar34);
      if (0 < (int)uVar12) {
        local_1c8 = (double)local_214;
        uVar38 = 0;
        local_1e8 = __dest;
        local_1e0 = uVar48;
        do {
          local_210 = (double)CONCAT71(local_210._1_7_,(int)uVar38 == 0);
          uVar67 = uVar48;
          local_220 = uVar38;
          do {
            uVar50 = uVar67 - 1;
            if ((uint)uVar50 < (uint)uVar48) {
              uVar35 = uVar50 & 0xffffffff;
              if ((int)uVar38 == *(int *)((long)__dest + uVar35 * 0xc)) {
                lVar23 = *(long *)((long)__dest + uVar35 * 0xc);
                local_248 = (double)(ulong)(uint)((int)((ulong)lVar23 >> 0x10) >> 0x10);
                uVar48 = lVar23 >> 0x30;
                uVar20 = *(undefined4 *)((long)__dest + uVar35 * 0xc + 8);
                local_260 = (double)CONCAT44(local_260._4_4_,uVar20);
                local_250 = CONCAT44(local_250._4_4_,(int)(short)uVar20);
                goto LAB_001dd4d9;
              }
            }
            else if ((int)uVar38 == 0) {
              local_250 = (ulong)local_250._4_4_ << 0x20;
              local_248 = 0.0;
              uVar48 = 0;
              local_260 = (double)((ulong)local_260._4_4_ << 0x20);
LAB_001dd4d9:
              local_1a8.st_size._4_4_ = 0;
              local_1a8.st_size._0_4_ = 0;
              local_1a8.st_rdev._4_4_ = 0;
              local_1a8.st_rdev._0_4_ = 0;
              local_1a8.__pad0._3_1_ = 0;
              local_1a8._32_7_ = 0;
              local_1a8.st_uid = 0;
              local_1a8.st_mode = 0;
              local_1a8.st_nlink._7_1_ = 0;
              local_1a8.st_nlink._0_7_ = 0;
              local_1a8.st_ino._4_4_ = 0;
              local_1a8.st_ino._0_4_ = 0;
              local_1a8.st_dev._4_4_ = 0;
              local_1a8.st_dev._0_4_ = 0;
              uVar33 = *(undefined8 *)local_280;
              pXVar36 = (X11Symbols *)X11Symbols::singletonHolder._40_8_;
              if (X11Symbols::singletonHolder._40_8_ == 0) {
                pthread_mutex_lock((pthread_mutex_t *)X11Symbols::singletonHolder);
                pXVar36 = (X11Symbols *)X11Symbols::singletonHolder._40_8_;
                if (X11Symbols::singletonHolder._40_8_ == 0) {
                  if (SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get()::
                      alreadyInside == '\0') {
                    SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get()::
                    alreadyInside = 1;
                    /* try { // try from 001dd528 to 001dd531 has its CatchHandler @ 001ddb4a */
                    pXVar36 = operator_new(0x430);
                    memset(pXVar36,0,0x430);
                    /* try { // try from 001dd544 to 001dd54b has its CatchHandler @ 001ddb3d */
                    X11Symbols::X11Symbols(pXVar36);
                    LOCK();
                    UNLOCK();
                    SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get()::
                    alreadyInside = '\0';
                    X11Symbols::singletonHolder._40_8_ = pXVar36;
                  }
                  else {
                    pXVar36 = (X11Symbols *)0x0;
                  }
                }
                pthread_mutex_unlock((pthread_mutex_t *)X11Symbols::singletonHolder);
              }
                    /* try { // try from 001dd56c to 001dd588 has its CatchHandler @ 001dddd3 */
              iVar11 = (**(code **)(pXVar36 + 0x108))(uVar33);
              lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
              iVar13 = (**(code **)(lVar23 + 0xf8))(uVar33);
              dVar26 = DAT_005de5e0;
              local_208 = uVar48;
              if ((0 < iVar11) && (0 < iVar13)) {
                pXVar36 = (X11Symbols *)X11Symbols::singletonHolder._40_8_;
                if (X11Symbols::singletonHolder._40_8_ == 0) {
                  pthread_mutex_lock((pthread_mutex_t *)X11Symbols::singletonHolder);
                  pXVar36 = (X11Symbols *)X11Symbols::singletonHolder._40_8_;
                  if (X11Symbols::singletonHolder._40_8_ == 0) {
                    if (SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get()::
                        alreadyInside == '\0') {
                      SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get()::
                      alreadyInside = 1;
                    /* try { // try from 001dd5fb to 001dd604 has its CatchHandler @ 001ddadf */
                      pXVar36 = operator_new(0x430);
                      memset(pXVar36,0,0x430);
                    /* try { // try from 001dd617 to 001dd61e has its CatchHandler @ 001ddad2 */
                      X11Symbols::X11Symbols(pXVar36);
                      LOCK();
                      UNLOCK();
                      SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get()::
                      alreadyInside = '\0';
                      X11Symbols::singletonHolder._40_8_ = pXVar36;
                    }
                    else {
                      pXVar36 = (X11Symbols *)0x0;
                    }
                  }
                  pthread_mutex_unlock((pthread_mutex_t *)X11Symbols::singletonHolder);
                }
                    /* try { // try from 001dd63f to 001dd671 has its CatchHandler @ 001dddd3 */
                iVar14 = (**(code **)(pXVar36 + 0x100))(uVar33,0);
                local_1d0 = (double)iVar14 * _DAT_005de5f0;
                lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
                iVar14 = (**(code **)(lVar23 + 0xf0))(uVar33,0);
                dVar26 = (((double)iVar14 * _DAT_005de5f0) / (double)iVar13 +
                         local_1d0 / (double)iVar11) * DAT_005db338;
              }
              uVar48 = local_1e0;
              __dest = local_1e8;
              uVar38 = local_220;
              iVar11 = (int)local_260 >> 0x10;
              if (uStack_290._4_4_ < (int)(uint)uStack_290) {
                iVar13 = uStack_290._4_4_;
              }
              else {
                uVar12 = uStack_290._4_4_ +
                         ((uStack_290._4_4_ - (uStack_290._4_4_ + 1 >> 0x1f)) + 1 >> 1) + 9;
                uVar41 = uVar12 & 0xfffffff8;
                if ((uint)uStack_290 != uVar41) {
                  local_260 = dVar26;
                  if ((int)uVar41 < 1) {
                    free(local_298);
                    local_298 = (char *)0x0;
                  }
                  else {
                    local_298 = realloc(local_298,(ulong)uVar41 * 0x70);
                  }
                  dVar26 = local_260;
                }
                uStack_290 = CONCAT44(uStack_290._4_4_,uVar12) & 0xfffffffffffffff8;
                iVar13 = uStack_290._4_4_;
              }
              uStack_290 = CONCAT44(iVar13 + 1,(uint)uStack_290);
              lVar23 = (long)iVar13 * 0x70;
              local_298[lVar23] = local_210._0_1_;
              *(ushort *)(local_298 + lVar23 + 1) = local_e8;
              local_298[lVar23 + 3] = local_e6;
              *(int *)(local_298 + lVar23 + 4) = SUB84(local_248,0);
              *(int *)(local_298 + lVar23 + 8) = (int)local_208;
              *(undefined4 *)(local_298 + lVar23 + 0xc) = (undefined4)local_250;
              *(int *)(local_298 + lVar23 + 0x10) = iVar11;
              *(ulong *)(local_298 + lVar23 + 0x14) =
                   CONCAT44(local_1a8.st_dev._4_4_,(uint)local_1a8.st_dev);
              *(ulong *)(local_298 + lVar23 + 0x14 + 8) =
                   CONCAT44(local_1a8.st_ino._4_4_,(undefined4)local_1a8.st_ino);
              *(ulong *)(local_298 + lVar23 + 0x24) =
                   CONCAT17(local_1a8.st_nlink._7_1_,(undefined7)local_1a8.st_nlink);
              *(ulong *)(local_298 + lVar23 + 0x24 + 8) =
                   CONCAT44(local_1a8.st_uid,local_1a8.st_mode);
              *(ulong *)(local_298 + lVar23 + 0x34) =
                   CONCAT17(local_1a8.__pad0._3_1_,local_1a8._32_7_);
              *(ulong *)(local_298 + lVar23 + 0x34 + 8) =
                   CONCAT44(local_1a8.st_rdev._4_4_,(int)local_1a8.st_rdev);
              *(ulong *)(local_298 + lVar23 + 0x40) =
                   CONCAT44((undefined4)local_1a8.st_size,local_1a8.st_rdev._4_4_);
              *(ulong *)(local_298 + lVar23 + 0x40 + 8) =
                   CONCAT44((undefined4)local_1a8.st_blksize,local_1a8.st_size._4_4_);
              *(double *)(local_298 + lVar23 + 0x50) = local_1c8;
              *(double *)(local_298 + lVar23 + 0x58) = dVar26;
              local_298[lVar23 + 0x68] = '\0';
              uVar20 = (undefined4)local_b8;
              *(undefined4 *)(local_298 + lVar23 + 0x69) = uVar20;
              *(undefined4 *)(local_298 + lVar23 + 0x6c) = local_b8._3_4_;
              this = local_1d8;
            }
            bVar52 = 1 < (long)uVar67;
            uVar67 = uVar50;
          } while (bVar52);
          uVar12 = (int)uVar38 + 1;
          uVar38 = (ulong)uVar12;
        } while (uVar12 != (uint)uVar48);
      }
    }
    free(__dest);
    iVar11 = uStack_290._4_4_;
    if (uStack_290._4_4_ != 0) goto LAB_001dc949;
    if (local_108 != 0) {
                    /* try { // try from 001dcc5c to 001dcc6e has its CatchHandler @ 001dda04 */
      lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      iVar11 = (**(code **)(lVar23 + 0x2b8))(*(undefined8 *)local_280);
      if (0 < iVar11) {
        local_210 = (double)local_214;
        iVar13 = 0;
        local_220 = CONCAT44(local_220._4_4_,iVar11);
        do {
          uVar33 = *(undefined8 *)local_280;
                    /* try { // try from 001dccb5 to 001dcd50 has its CatchHandler @ 001ddcf8 */
          lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          uVar24 = (**(code **)(lVar23 + 0x2a8))(*(undefined8 *)local_280,iVar13);
          local_1a8.st_dev._0_4_ = (uint)local_1a8.st_dev & 0xffffff00;
          local_1a8.st_ino._0_4_ = 0;
          local_1a8.st_ino._4_4_ = 0;
          local_1a8.st_nlink._0_7_ = 0;
          local_1a8.st_nlink._7_1_ = 0;
          local_1a8.st_mode = 0;
          local_1a8.st_uid = 0;
          local_1a8.st_rdev._0_4_ = -1;
          lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          iVar14 = (**(code **)(lVar23 + 0x1b8))
                             (uVar33,uVar24,local_108,0,4,0,6,&local_1a8.st_gid,&local_1a8.st_rdev,
                              &local_1a8.st_nlink,&local_1a8.st_mode,&local_1a8.st_ino);
          puVar47 = (uint *)CONCAT44(local_1a8.st_ino._4_4_,(undefined4)local_1a8.st_ino);
          local_1a8.st_dev._0_4_ =
               CONCAT31(local_1a8.st_dev._1_3_,puVar47 != (uint *)0x0 && iVar14 == 0);
          if ((((!(puVar47 != (uint *)0x0 && iVar14 == 0)) ||
               (CONCAT17(local_1a8.__pad0._3_1_,local_1a8._32_7_) != 6)) ||
              ((int)local_1a8.st_rdev != 0x20)) ||
             ((CONCAT17(local_1a8.st_nlink._7_1_,(undefined7)local_1a8.st_nlink) != 4 ||
              (puVar47 == (uint *)0x0)))) {
LAB_001dcf7e:
            if (puVar47 != (uint *)0x0) goto LAB_001dcf87;
          }
          else {
            if ((0 < SUB84(*(double *)(puVar47 + 4),0)) && (0 < SUB84(*(double *)(puVar47 + 6),0)))
            {
              local_208 = (ulong)*puVar47;
              lVar23 = *(long *)(puVar47 + 2);
              local_250 = CONCAT71(local_250._1_7_,uStack_290._4_4_ == 0);
              uVar33 = *(undefined8 *)local_280;
              local_260 = *(double *)(puVar47 + 4);
              local_248 = *(double *)(puVar47 + 6);
                    /* try { // try from 001dcdf0 to 001dce54 has its CatchHandler @ 001ddbed */
              lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
              iVar11 = (**(code **)(lVar25 + 0x108))(uVar33,iVar13);
              lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
              iVar14 = (**(code **)(lVar25 + 0xf8))(uVar33,iVar13);
              dVar60 = 0.0;
              dVar26 = DAT_005de5e0;
              if ((0 < iVar11) && (dVar60 = 0.0, 0 < iVar14)) {
                lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
                iVar15 = (**(code **)(lVar25 + 0x100))(uVar33,iVar13);
                lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
                iVar19 = (**(code **)(lVar25 + 0xf0))(uVar33,iVar13);
                auVar58._0_8_ =
                     (double)iVar15 * (double)s_XShmGetEventBaseXShmQueryVersion_005dcb70._32_8_;
                auVar58._8_8_ =
                     (double)iVar19 * (double)s_XShmGetEventBaseXShmQueryVersion_005dcb70._40_8_;
                auVar65._0_8_ = (double)iVar11;
                auVar65._8_8_ = (double)iVar14;
                auVar63 = divpd(auVar58,auVar65);
                dVar60 = auVar63._8_8_;
                dVar26 = (dVar60 + auVar63._0_8_) * DAT_005db338;
              }
              uVar48 = (ulong)local_260 & 0xffffffff;
              uVar38 = (long)local_248 << 0x20;
              lVar23 = (lVar23 << 0x20) + local_208;
              iVar11 = uStack_290._4_4_;
              if ((int)(uint)uStack_290 <= uStack_290._4_4_) {
                uVar12 = uStack_290._4_4_ +
                         ((uStack_290._4_4_ - (uStack_290._4_4_ + 1 >> 0x1f)) + 1 >> 1) + 9;
                uVar41 = uVar12 & 0xfffffff8;
                if ((uint)uStack_290 != uVar41) {
                  local_248 = dVar26;
                  dStack_240 = dVar60;
                  if ((int)uVar41 < 1) {
                    free(local_298);
                    local_298 = (char *)0x0;
                  }
                  else {
                    local_298 = realloc(local_298,(ulong)uVar41 * 0x70);
                  }
                  dVar26 = local_248;
                }
                uStack_290 = CONCAT44(uStack_290._4_4_,uVar12) & 0xfffffffffffffff8;
                iVar11 = uStack_290._4_4_;
              }
              uStack_290 = CONCAT44(iVar11 + 1,(uint)uStack_290);
              lVar25 = (long)iVar11 * 0x70;
              local_298[lVar25] = (char)local_250;
              *(long *)(local_298 + lVar25 + 4) = lVar23;
              *(ulong *)(local_298 + lVar25 + 0xc) = uVar38 | uVar48;
              pcVar40 = local_298 + lVar25 + 0x34;
              pcVar40[0] = '\0';
              pcVar40[1] = '\0';
              pcVar40[2] = '\0';
              pcVar40[3] = '\0';
              pcVar40[4] = '\0';
              pcVar40[5] = '\0';
              pcVar40[6] = '\0';
              pcVar40[7] = '\0';
              pcVar40[8] = '\0';
              pcVar40[9] = '\0';
              pcVar40[10] = '\0';
              pcVar40[0xb] = '\0';
              pcVar40[0xc] = '\0';
              pcVar40[0xd] = '\0';
              pcVar40[0xe] = '\0';
              pcVar40[0xf] = '\0';
              pcVar40 = local_298 + lVar25 + 0x24;
              pcVar40[0] = '\0';
              pcVar40[1] = '\0';
              pcVar40[2] = '\0';
              pcVar40[3] = '\0';
              pcVar40[4] = '\0';
              pcVar40[5] = '\0';
              pcVar40[6] = '\0';
              pcVar40[7] = '\0';
              pcVar40[8] = '\0';
              pcVar40[9] = '\0';
              pcVar40[10] = '\0';
              pcVar40[0xb] = '\0';
              pcVar40[0xc] = '\0';
              pcVar40[0xd] = '\0';
              pcVar40[0xe] = '\0';
              pcVar40[0xf] = '\0';
              pcVar40 = local_298 + lVar25 + 0x14;
              pcVar40[0] = '\0';
              pcVar40[1] = '\0';
              pcVar40[2] = '\0';
              pcVar40[3] = '\0';
              pcVar40[4] = '\0';
              pcVar40[5] = '\0';
              pcVar40[6] = '\0';
              pcVar40[7] = '\0';
              pcVar40[8] = '\0';
              pcVar40[9] = '\0';
              pcVar40[10] = '\0';
              pcVar40[0xb] = '\0';
              pcVar40[0xc] = '\0';
              pcVar40[0xd] = '\0';
              pcVar40[0xe] = '\0';
              pcVar40[0xf] = '\0';
              pcVar40 = local_298 + lVar25 + 0x44;
              pcVar40[0] = '\0';
              pcVar40[1] = '\0';
              pcVar40[2] = '\0';
              pcVar40[3] = '\0';
              pcVar40[4] = '\0';
              pcVar40[5] = '\0';
              pcVar40[6] = '\0';
              pcVar40[7] = '\0';
              *(double *)(local_298 + lVar25 + 0x50) = local_210;
              *(double *)(local_298 + lVar25 + 0x58) = dVar26;
              local_298[lVar25 + 0x68] = '\0';
              puVar47 = (uint *)CONCAT44(local_1a8.st_ino._4_4_,(undefined4)local_1a8.st_ino);
              iVar11 = (int)local_220;
              goto LAB_001dcf7e;
            }
LAB_001dcf87:
                    /* try { // try from 001dcf87 to 001dcf99 has its CatchHandler @ 001ddbe5 */
            lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
            (**(code **)(lVar23 + 0x128))
                      (CONCAT44(local_1a8.st_ino._4_4_,(undefined4)local_1a8.st_ino));
          }
          iVar13 = iVar13 + 1;
        } while (iVar11 != iVar13);
      }
      this = local_1d8;
      iVar11 = uStack_290._4_4_;
      if (uStack_290._4_4_ != 0) goto LAB_001dc949;
    }
                    /* try { // try from 001dcfcf to 001dd024 has its CatchHandler @ 001ddb65 */
    lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    pXVar22 = local_280;
    pcVar7 = *(code **)(lVar23 + 0x100);
    uVar33 = *(undefined8 *)local_280;
    lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar20 = (**(code **)(lVar23 + 0xb0))(*(undefined8 *)pXVar22);
    uVar20 = (*pcVar7)(uVar33,uVar20);
    lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    pcVar7 = *(code **)(lVar23 + 0xf0);
    uVar33 = *(undefined8 *)pXVar22;
    lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar21 = (**(code **)(lVar23 + 0xb0))(*(undefined8 *)pXVar22);
    uVar21 = (*pcVar7)(uVar33,uVar21);
    uVar33 = *(undefined8 *)pXVar22;
                    /* try { // try from 001dd02c to 001dd084 has its CatchHandler @ 001ddae6 */
    lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar11 = (**(code **)(lVar23 + 0x108))(uVar33,0);
    lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar13 = (**(code **)(lVar23 + 0xf8))(uVar33,0);
    dVar60 = 0.0;
    dVar26 = DAT_005de5e0;
    if ((0 < iVar11) && (0 < iVar13)) {
      lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      iVar14 = (**(code **)(lVar23 + 0x100))(uVar33,0);
      lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      iVar15 = (**(code **)(lVar23 + 0xf0))(uVar33,0);
      auVar59._0_8_ = (double)iVar14 * (double)s_XShmGetEventBaseXShmQueryVersion_005dcb70._32_8_;
      auVar59._8_8_ = (double)iVar15 * (double)s_XShmGetEventBaseXShmQueryVersion_005dcb70._40_8_;
      auVar66._0_8_ = (double)iVar11;
      auVar66._8_8_ = (double)iVar13;
      auVar63 = divpd(auVar59,auVar66);
      dVar60 = auVar63._8_8_;
      dVar26 = (dVar60 + auVar63._0_8_) * DAT_005db338;
    }
    this = local_1d8;
    pXVar22 = (XWindowSystem *)(double)local_214;
    iVar13 = uStack_290._4_4_;
    if ((int)(uint)uStack_290 <= uStack_290._4_4_) {
      uVar12 = uStack_290._4_4_ + ((uStack_290._4_4_ - (uStack_290._4_4_ + 1 >> 0x1f)) + 1 >> 1) + 9
      ;
      uVar41 = uVar12 & 0xfffffff8;
      if ((uint)uStack_290 != uVar41) {
        local_280 = pXVar22;
        local_248 = dVar26;
        dStack_240 = dVar60;
        if ((int)uVar41 < 1) {
          free(local_298);
          local_298 = (char *)0x0;
        }
        else {
          local_298 = realloc(local_298,(ulong)uVar41 * 0x70);
        }
        dVar26 = local_248;
        pXVar22 = local_280;
      }
      uStack_290 = CONCAT44(uStack_290._4_4_,uVar12) & 0xfffffffffffffff8;
      iVar13 = uStack_290._4_4_;
    }
    iVar11 = iVar13 + 1;
    uStack_290 = CONCAT44(iVar11,(uint)uStack_290);
    lVar23 = (long)iVar13 * 0x70;
    local_298[lVar23] = '\x01';
    pcVar40 = local_298 + lVar23 + 4;
    pcVar40[0] = '\0';
    pcVar40[1] = '\0';
    pcVar40[2] = '\0';
    pcVar40[3] = '\0';
    pcVar40[4] = '\0';
    pcVar40[5] = '\0';
    pcVar40[6] = '\0';
    pcVar40[7] = '\0';
    *(undefined4 *)(local_298 + lVar23 + 0xc) = uVar20;
    *(undefined4 *)(local_298 + lVar23 + 0x10) = uVar21;
    pcVar40 = local_298 + lVar23 + 0x34;
    pcVar40[0] = '\0';
    pcVar40[1] = '\0';
    pcVar40[2] = '\0';
    pcVar40[3] = '\0';
    pcVar40[4] = '\0';
    pcVar40[5] = '\0';
    pcVar40[6] = '\0';
    pcVar40[7] = '\0';
    pcVar40[8] = '\0';
    pcVar40[9] = '\0';
    pcVar40[10] = '\0';
    pcVar40[0xb] = '\0';
    pcVar40[0xc] = '\0';
    pcVar40[0xd] = '\0';
    pcVar40[0xe] = '\0';
    pcVar40[0xf] = '\0';
    pcVar40 = local_298 + lVar23 + 0x24;
    pcVar40[0] = '\0';
    pcVar40[1] = '\0';
    pcVar40[2] = '\0';
    pcVar40[3] = '\0';
    pcVar40[4] = '\0';
    pcVar40[5] = '\0';
    pcVar40[6] = '\0';
    pcVar40[7] = '\0';
    pcVar40[8] = '\0';
    pcVar40[9] = '\0';
    pcVar40[10] = '\0';
    pcVar40[0xb] = '\0';
    pcVar40[0xc] = '\0';
    pcVar40[0xd] = '\0';
    pcVar40[0xe] = '\0';
    pcVar40[0xf] = '\0';
    pcVar40 = local_298 + lVar23 + 0x14;
    pcVar40[0] = '\0';
    pcVar40[1] = '\0';
    pcVar40[2] = '\0';
    pcVar40[3] = '\0';
    pcVar40[4] = '\0';
    pcVar40[5] = '\0';
    pcVar40[6] = '\0';
    pcVar40[7] = '\0';
    pcVar40[8] = '\0';
    pcVar40[9] = '\0';
    pcVar40[10] = '\0';
    pcVar40[0xb] = '\0';
    pcVar40[0xc] = '\0';
    pcVar40[0xd] = '\0';
    pcVar40[0xe] = '\0';
    pcVar40[0xf] = '\0';
    pcVar40 = local_298 + lVar23 + 0x44;
    pcVar40[0] = '\0';
    pcVar40[1] = '\0';
    pcVar40[2] = '\0';
    pcVar40[3] = '\0';
    pcVar40[4] = '\0';
    pcVar40[5] = '\0';
    pcVar40[6] = '\0';
    pcVar40[7] = '\0';
    *(XWindowSystem **)(local_298 + lVar23 + 0x50) = pXVar22;
    *(double *)(local_298 + lVar23 + 0x58) = dVar26;
    local_298[lVar23 + 0x68] = '\0';
    lVar23 = (long)iVar11;
    if (lVar23 != 0) goto LAB_001dc954;
    iVar11 = 0;
    pcVar40 = local_298;
    if (this != (Displays *)&local_298) goto LAB_001dc979;
  }
  else {
                    /* try { // try from 001daa5d to 001daa8e has its CatchHandler @ 001ddbc9 */
    lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar11 = (**(code **)(lVar23 + 0x270))(*(undefined8 *)local_280,"RANDR",local_5c,local_60);
    if (iVar11 == 0) goto LAB_001dc886;
                    /* try { // try from 001daa97 to 001daaa9 has its CatchHandler @ 001ddb6a */
    lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar12 = (**(code **)(lVar23 + 0x2b8))(*(undefined8 *)local_280);
                    /* try { // try from 001daaad to 001daadd has its CatchHandler @ 001ddbd3 */
    lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    pcVar7 = *(code **)(lVar23 + 0x3d0);
    uVar33 = *(undefined8 *)local_280;
    lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar24 = (**(code **)(lVar23 + 0x2a8))(*(undefined8 *)local_280,0);
    lVar23 = (*pcVar7)(uVar33,uVar24);
    if (0 < (int)uVar12) {
      local_78 = (double)local_214;
      local_208 = 0;
      local_ec = uVar12;
      do {
                    /* try { // try from 001dab3c to 001dab57 has its CatchHandler @ 001ddd43 */
        lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        pXVar22 = local_280;
        uVar24 = (**(code **)(lVar25 + 0x2a8))(*(undefined8 *)local_280,local_208);
        uVar33 = *(undefined8 *)pXVar22;
        local_e8 = local_e8 & 0xff00;
        local_e0 = 0;
        lStack_d8 = 0;
        local_d0 = 0;
        local_c0[0] = -1;
                    /* try { // try from 001dab83 to 001dabd5 has its CatchHandler @ 001ddd41 */
        lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        puVar47 = (uint *)0x4;
        uVar48 = 0;
        iVar11 = (**(code **)(lVar25 + 0x1b8))
                           (uVar33,uVar24,local_108,0,4,0,6,&local_c8,local_c0,&lStack_d8,&local_d0,
                            &local_e0);
        local_e8 = CONCAT11(local_e8._1_1_,local_e0 != 0 && iVar11 == 0);
        if ((((local_e0 != 0 && iVar11 == 0) && (local_c8 == 6)) && (local_c0[0] == 0x20)) &&
           (lStack_d8 == 4)) {
                    /* try { // try from 001dac2a to 001dac3f has its CatchHandler @ 001ddcfa */
          lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          dVar26 = (double)(**(code **)(lVar25 + 0x3a0))(*(undefined8 *)local_280,uVar24);
          local_250 = lVar23;
          if (dVar26 != 0.0) {
            iVar11 = *(int *)((long)dVar26 + 0x20);
            local_248 = dVar26;
            if (0 < iVar11) {
              lVar23 = 0;
LAB_001dac75:
              lVar25 = *(long *)(*(long *)((long)local_248 + 0x28) + lVar23 * 8);
              if (lVar25 == 0) goto LAB_001dac60;
              if (local_250 != 0) {
                lVar25 = local_250;
              }
              local_250 = lVar25;
                    /* try { // try from 001dac93 to 001dacb2 has its CatchHandler @ 001ddd90 */
              lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
              dVar26 = (double)(**(code **)(lVar25 + 0x3b0))
                                         (*(undefined8 *)local_280,local_248,
                                          *(undefined8 *)
                                           (*(long *)((long)local_248 + 0x28) + lVar23 * 8));
              if (dVar26 != 0.0) {
                local_260 = dVar26;
                if (*(long *)((long)dVar26 + 8) != 0) {
                    /* try { // try from 001daccc to 001dacec has its CatchHandler @ 001ddd4b */
                  lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
                  dVar26 = (double)(**(code **)(lVar25 + 0x3c0))
                                             (*(undefined8 *)local_280,local_248,
                                              *(undefined8 *)((long)local_260 + 8));
                  if (dVar26 == 0.0) goto LAB_001dc2d0;
                  local_261 = (int)local_208 == 0;
                  local_b8 = (long *)0x0;
                  uStack_b0 = 0;
                  local_a8 = 0;
                  uStack_a0 = 0;
                  local_98 = 0;
                  uStack_90 = 0;
                  uStack_8c = 0;
                  local_88 = 0;
                  uStack_84 = 0;
                  local_1d0 = (double)CONCAT44(local_1d0._4_4_,*(undefined4 *)((long)dVar26 + 8));
                  local_1c8 = (double)CONCAT44(local_1c8._4_4_,*(undefined4 *)((long)dVar26 + 0xc));
                  local_1e0 = CONCAT44(local_1e0._4_4_,*(undefined4 *)((long)dVar26 + 0x10));
                  local_1e8 = (void *)CONCAT44(local_1e8._4_4_,*(undefined4 *)((long)dVar26 + 0x14))
                  ;
                  local_220 = CONCAT71(local_220._1_7_,
                                       local_250 ==
                                       *(long *)(*(long *)((long)local_248 + 0x28) + lVar23 * 8));
                  uVar33 = *(undefined8 *)local_280;
                  local_210 = dVar26;
                    /* try { // try from 001dad79 to 001dadd9 has its CatchHandler @ 001ddd58 */
                  lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
                  iVar11 = (**(code **)(lVar25 + 0x108))(uVar33,0);
                  lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
                  iVar13 = (**(code **)(lVar25 + 0xf8))(uVar33,0);
                  auVar63._8_8_ = 0;
                  auVar63._0_8_ = DAT_005de5e0;
                  if ((0 < iVar11) && (auVar63._8_8_ = 0, 0 < iVar13)) {
                    lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
                    iVar14 = (**(code **)(lVar25 + 0x100))(uVar33,0);
                    lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
                    iVar15 = (**(code **)(lVar25 + 0xf0))(uVar33,0);
                    auVar53._0_8_ =
                         (double)iVar14 * (double)s_XShmGetEventBaseXShmQueryVersion_005dcb70._32_8_
                    ;
                    auVar53._8_8_ =
                         (double)iVar15 * (double)s_XShmGetEventBaseXShmQueryVersion_005dcb70._40_8_
                    ;
                    auVar61._0_8_ = (double)iVar11;
                    auVar61._8_8_ = (double)iVar13;
                    auVar53 = divpd(auVar53,auVar61);
                    auVar63._0_8_ = (auVar53._8_8_ + auVar53._0_8_) * DAT_005db338;
                    auVar63._8_8_ = auVar53._8_8_;
                  }
                  lVar25 = *(long *)((long)local_210 + 0x18);
                  if (lVar25 == 0) {
LAB_001daf7b:
                    local_254 = 0;
                    uVar38 = *(ulong *)((long)local_260 + 0x20);
                  }
                  else {
                    plVar46 = *(long **)((long)local_248 + 0x38);
                    lVar27 = (long)*(int *)((long)local_248 + 0x30);
                    uVar38 = lVar27 * 0x50;
                    plVar28 = plVar46;
                    if (0xf0 < (long)uVar38) {
                      lVar39 = uVar38 / 0x140 + 1;
                      do {
                        if (*plVar28 == lVar25) goto LAB_001daeff;
                        if (plVar28[10] == lVar25) {
                          plVar28 = plVar28 + 10;
                          if (plVar28 == plVar46 + lVar27 * 10) goto LAB_001daf7b;
                          goto LAB_001daf07;
                        }
                        if (plVar28[0x14] == lVar25) {
                          plVar28 = plVar28 + 0x14;
                          if (plVar28 == plVar46 + lVar27 * 10) goto LAB_001daf7b;
                          goto LAB_001daf07;
                        }
                        if (plVar28[0x1e] == lVar25) {
                          plVar28 = plVar28 + 0x1e;
                          if (plVar28 == plVar46 + lVar27 * 10) goto LAB_001daf7b;
                          goto LAB_001daf07;
                        }
                        plVar28 = plVar28 + 0x28;
                        lVar39 = lVar39 + -1;
                        uVar38 = uVar38 - 0x140;
                      } while (1 < lVar39);
                    }
                    lVar39 = ((long)uVar38 >> 4) * -0x3333333333333333;
                    if (lVar39 == 1) {
LAB_001daefa:
                      if (*plVar28 != lVar25) goto LAB_001daf7b;
                    }
                    else if (lVar39 == 2) {
LAB_001daef1:
                      if (*plVar28 != lVar25) {
                        plVar28 = plVar28 + 10;
                        goto LAB_001daefa;
                      }
                    }
                    else {
                      if (lVar39 != 3) goto LAB_001daf7b;
                      if (*plVar28 != lVar25) {
                        plVar28 = plVar28 + 10;
                        goto LAB_001daef1;
                      }
                    }
LAB_001daeff:
                    if (plVar28 == plVar46 + lVar27 * 10) goto LAB_001daf7b;
LAB_001daf07:
                    auVar54._0_8_ = (double)CONCAT44(ram0x005dcba0,(int)plVar28[2]);
                    auVar54._8_4_ = (int)((ulong)plVar28[2] >> 0x20);
                    auVar54._12_4_ = _UNK_005dcba4;
                    dVar26 = auVar54._8_8_ - _UNK_005dcbb8;
                    local_58._8_4_ = SUB84(dVar26,0);
                    local_58._0_8_ =
                         (dVar26 + (auVar54._0_8_ - _DAT_005dcbb0)) /
                         ((double)*(uint *)(plVar28 + 6) * (double)*(uint *)(plVar28 + 4));
                    local_58._12_4_ = (int)((ulong)dVar26 >> 0x20);
                    local_254 = (undefined4)CONCAT71((uint7)(uint3)(*(uint *)(plVar28 + 6) >> 8),1);
                    uVar38 = *(ulong *)((long)local_260 + 0x20);
                  }
                  if ((uVar38 != 0) && (uVar67 = *(ulong *)((long)local_260 + 0x28), uVar67 != 0)) {
                    auVar55._0_4_ = (undefined4)*(undefined8 *)((long)local_210 + 0x10);
                    auVar55._4_4_ = DAT_005d9480;
                    auVar55._8_4_ = (int)((ulong)*(undefined8 *)((long)local_210 + 0x10) >> 0x20);
                    auVar55._12_4_ = DAT_005d9484;
                    auVar8._8_8_ = _UNK_005dcbc8;
                    auVar8._0_8_ = _DAT_005dcbc0;
                    auVar56._0_8_ =
                         (SUB168(auVar55 | auVar8,0) - _DAT_005dcbc0) *
                         (double)s_XShmGetEventBaseXShmQueryVersion_005dcb70._32_8_ * _DAT_00651fc0;
                    auVar56._8_8_ =
                         (SUB168(auVar55 | auVar8,8) - _UNK_005dcbc8) *
                         (double)s_XShmGetEventBaseXShmQueryVersion_005dcb70._40_8_ * _UNK_00651fc8;
                    auVar68._0_8_ =
                         ((double)(uVar38 >> 0x20 | _DAT_005dcbd0) - _DAT_005dcbe0) +
                         (double)(uVar38 & _DAT_005d9aa0 | (ulong)_DAT_005dcbc0);
                    auVar68._8_8_ =
                         ((double)(uVar67 >> 0x20 | _UNK_005dcbd8) - _UNK_005dcbe8) +
                         (double)(uVar67 & _UNK_005d9aa8 | (ulong)_UNK_005dcbc8);
                    auVar53 = divpd(auVar56,auVar68);
                    auVar63._0_8_ = auVar53._8_8_ + auVar53._0_8_;
                    auVar63._8_8_ = auVar53._8_8_;
                  }
                  pbVar30 = *(byte **)((long)local_260 + 0x10);
                  pbVar51 = (byte *)&DAT_0061ac58;
                  local_48 = auVar63;
                  if (pbVar30 != (byte *)0x0) {
                    bVar10 = *pbVar30;
                    pbVar51 = (byte *)&DAT_0061ac58;
                    if (bVar10 != 0) {
                      pbVar42 = pbVar30 + 1;
                      lVar25 = 0;
                      pbVar51 = pbVar42;
                      do {
                        lVar27 = lVar25 + (ulong)(bVar10 >> 7);
                        lVar25 = lVar27 + 1;
                        bVar10 = *pbVar51;
                        pbVar51 = pbVar51 + 1;
                      } while (bVar10 != 0);
                      uVar38 = lVar27 + 5U & 0xfffffffffffffffc;
                    /* try { // try from 001db084 to 001db088 has its CatchHandler @ 001ddc1f */
                      puVar29 = operator_new__(uVar38 + 0x17);
                      LOCK();
                      *puVar29 = 0;
                      UNLOCK();
                      *(ulong *)(puVar29 + 2) = uVar38;
                      pbVar51 = (byte *)(puVar29 + 4);
                      bVar10 = *pbVar30;
                      pbVar30 = pbVar51;
                      if (bVar10 != 0) {
                        do {
                          if ((char)bVar10 < '\0') {
                            *pbVar30 = bVar10 >> 6 | 0xc0;
                            pbVar30[1] = bVar10 & 0x3f | 0x80;
                            pbVar30 = pbVar30 + 1;
                          }
                          else {
                            *pbVar30 = bVar10;
                          }
                          pbVar30 = pbVar30 + 1;
                          bVar10 = *pbVar42;
                          pbVar42 = pbVar42 + 1;
                        } while (bVar10 != 0);
                      }
                      *pbVar30 = 0;
                    }
                  }
                  local_1c0 = pbVar51;
                    /* try { // try from 001db0e9 to 001db10e has its CatchHandler @ 001ddd0a */
                  pXVar22 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>
                                        *)XWindowSystem::singletonHolder);
                  lVar25 = *(long *)(pXVar22 + 0x158);
                  if (lVar25 == 0) {
LAB_001db215:
                    if (*pbVar51 == 0) {
LAB_001dbc1b:
                      local_238 = (__pid_t *)0x0;
                    /* try { // try from 001dbc24 to 001dbc2d has its CatchHandler @ 001ddcbf */
                      puVar29 = operator_new__(0x2b);
                      LOCK();
                      *puVar29 = 0;
                      UNLOCK();
                      *(undefined8 *)(puVar29 + 2) = 0x14;
                      uVar33 = s_0EGdk_WindowScalinExpected_____o_005dcbee._42_8_;
                      local_1f8 = puVar29 + 4;
                      *(undefined8 *)(puVar29 + 4) =
                           s_0EGdk_WindowScalinExpected_____o_005dcbee._34_8_;
                      *(undefined8 *)(puVar29 + 6) = uVar33;
                      *(undefined2 *)(puVar29 + 8) = 0x7367;
                      *(undefined1 *)((long)puVar29 + 0x22) = 0;
                    /* try { // try from 001dbc60 to 001dbc71 has its CatchHandler @ 001ddc90 */
                      File::parseAbsolutePath
                                ((File *)&local_278,(uint *)&local_1f8,extraout_RDX,local_1f8,
                                 puVar47,uVar48);
                      pbVar30 = local_278;
                      if (((*local_278 != 0) && (iVar11 = access((char *)local_278,0), iVar11 == 0))
                         && ((*pbVar30 == 0 ||
                             ((iVar11 = stat64((char *)pbVar30,&local_1a8), iVar11 != 0 ||
                              ((local_1a8.st_mode & 0x4000) == 0)))))) {
                    /* try { // try from 001dbd13 to 001dbd1c has its CatchHandler @ 001ddb8a */
                        piVar31 = operator_new__(0x5b);
                        LOCK();
                        *piVar31 = 0;
                        UNLOCK();
                        piVar31[2] = 0x44;
                        piVar31[3] = 0;
                        bVar10 = 0x2f;
                        lVar25 = 0;
                        pbVar30 = (byte *)(piVar31 + 4);
                        while( true ) {
                          if ((char)bVar10 < '\0') {
                            *pbVar30 = bVar10 >> 6 | 0xc0;
                            pbVar30[1] = bVar10 & 0x3f | 0x80;
                            pbVar51 = pbVar30 + 2;
                            pbVar30 = pbVar30 + 1;
                          }
                          else {
                            *pbVar30 = bVar10;
                            pbVar51 = pbVar30 + 1;
                          }
                          if (lVar25 == 0x40) break;
                          bVar10 = "/usr/bin/gsettings get org.gnome.desktop.interface scaling-factor"
                                   [lVar25 + 1];
                          if ((char)bVar10 < '\0') {
                            pbVar30[1] = bVar10 >> 6 | 0xc0;
                            pbVar30[2] = bVar10 & 0x3f | 0x80;
                            pbVar30 = pbVar51;
                          }
                          else {
                            *pbVar51 = bVar10;
                          }
                          pbVar30 = pbVar30 + 2;
                          bVar10 = "/usr/bin/gsettings get org.gnome.desktop.interface scaling-factor"
                                   [lVar25 + 2];
                          lVar25 = lVar25 + 2;
                        }
                        *pbVar51 = 0;
                    /* try { // try from 001dbdbb to 001dbdc9 has its CatchHandler @ 001ddb6f */
                        uVar38 = ChildProcess::start((ChildProcess *)&local_238,
                                                     (byte *)(piVar31 + 4),1);
                        LOCK();
                        iVar11 = *piVar31;
                        *piVar31 = *piVar31 + -1;
                        UNLOCK();
                        if (iVar11 == 0) {
                          operator_delete__(piVar31);
                        }
                        pbVar30 = local_278 + -0x10;
                        if (pbVar30 != (byte *)&emptyString) {
                          LOCK();
                          iVar11 = *(int *)pbVar30;
                          *(int *)pbVar30 = *(int *)pbVar30 + -1;
                          UNLOCK();
                          if (iVar11 == 0) {
                            operator_delete__(pbVar30);
                          }
                        }
                        piVar31 = local_1f8 + -4;
                        if (piVar31 != &emptyString) {
                          LOCK();
                          iVar11 = *piVar31;
                          *piVar31 = *piVar31 + -1;
                          UNLOCK();
                          if (iVar11 == 0) {
                            operator_delete__(piVar31);
                          }
                        }
                    /* try { // try from 001dbe3a to 001dbe48 has its CatchHandler @ 001ddae1 */
                        if (((char)uVar38 == '\0') ||
                           (uVar38 = ChildProcess::waitForProcessToFinish
                                               ((ChildProcess *)&local_238,200),
                           (char)uVar38 == '\0')) goto LAB_001dbfd6;
                    /* try { // try from 001dbe51 to 001dbe5f has its CatchHandler @ 001ddab2 */
                        ChildProcess::readAllProcessOutput((String *)&local_278,&local_238);
                        pbVar30 = local_278;
                        local_1a8.st_dev._0_4_ = 0;
                        local_1a8.st_dev._4_4_ = 0;
                        local_1a8.st_ino._0_4_ = 0;
                        local_1a8.st_ino._4_4_ = 0;
                    /* try { // try from 001dbe72 to 001dbe8f has its CatchHandler @ 001dda11 */
                        StringArray::addTokens
                                  ((StringArray *)&local_1a8,local_278,&DAT_005e5e66,&DAT_006559ef);
                        pbVar30 = pbVar30 + -0x10;
                        if (pbVar30 != (byte *)&emptyString) {
                          LOCK();
                          iVar11 = *(int *)pbVar30;
                          *(int *)pbVar30 = *(int *)pbVar30 + -1;
                          UNLOCK();
                          if (iVar11 == 0) {
                            operator_delete__(pbVar30);
                          }
                        }
                        bVar52 = true;
                        if (1 < (int)local_1a8.st_ino._4_4_) {
                          pcVar40 = *(char **)(CONCAT44(local_1a8.st_dev._4_4_,
                                                        (uint)local_1a8.st_dev) + 8);
                          iVar11 = 0;
                          do {
                            cVar5 = *pcVar40;
                            if (cVar5 < '\0') {
                              do {
                                pbVar30 = (byte *)(pcVar40 + 1);
                                pcVar40 = pcVar40 + 1;
                              } while ((*pbVar30 & 0xc0) == 0x80);
                            }
                            else {
                              pcVar40 = pcVar40 + 1;
                              if (cVar5 == '\0') goto LAB_001dbf24;
                            }
                            iVar11 = iVar11 + 1;
                          } while( true );
                        }
                        goto LAB_001dbf73;
                      }
                      pbVar30 = pbVar30 + -0x10;
                      if (pbVar30 != (byte *)&emptyString) {
                        LOCK();
                        iVar11 = *(int *)pbVar30;
                        *(int *)pbVar30 = *(int *)pbVar30 + -1;
                        UNLOCK();
                        if (iVar11 == 0) {
                          operator_delete__(pbVar30);
                        }
                      }
                      piVar31 = local_1f8 + -4;
                      if (piVar31 != &emptyString) {
                        LOCK();
                        iVar11 = *piVar31;
                        *piVar31 = *piVar31 + -1;
                        UNLOCK();
                        if (iVar11 == 0) {
                          operator_delete__(piVar31);
                        }
                      }
                      goto LAB_001dbfd6;
                    }
                    local_200 = (__pid_t *)0x0;
                    /* try { // try from 001db22b to 001db234 has its CatchHandler @ 001ddc24 */
                    puVar29 = operator_new__(0x27);
                    LOCK();
                    *puVar29 = 0;
                    UNLOCK();
                    *(undefined8 *)(puVar29 + 2) = 0x10;
                    local_238 = puVar29 + 4;
                    *(undefined8 *)(puVar29 + 4) = 0x6e69622f7273752f;
                    puVar29[6] = 0x6f63642f;
                    *(undefined2 *)(puVar29 + 7) = 0x666e;
                    *(undefined1 *)((long)puVar29 + 0x1e) = 0;
                    /* try { // try from 001db26c to 001db27a has its CatchHandler @ 001ddc29 */
                    File::parseAbsolutePath
                              ((File *)&local_278,(uint *)&local_238,0x6e69622f7273752f,local_238,
                               puVar47,uVar48);
                    pbVar30 = local_278;
                    if (((*local_278 == 0) || (iVar11 = access((char *)local_278,0), iVar11 != 0))
                       || ((*pbVar30 != 0 &&
                           ((iVar11 = stat64((char *)pbVar30,&local_1a8), iVar11 == 0 &&
                            ((local_1a8.st_mode & 0x4000) != 0)))))) {
                      pbVar30 = pbVar30 + -0x10;
                      if (pbVar30 != (byte *)&emptyString) {
                        LOCK();
                        iVar11 = *(int *)pbVar30;
                        *(int *)pbVar30 = *(int *)pbVar30 + -1;
                        UNLOCK();
                        if (iVar11 == 0) {
                          operator_delete__(pbVar30);
                        }
                      }
                      pbVar30 = (byte *)(local_238 + -4);
                      if (pbVar30 == (byte *)&emptyString) goto LAB_001dbbec;
                      LOCK();
                      iVar11 = *(int *)pbVar30;
                      *(int *)pbVar30 = *(int *)pbVar30 + -1;
                      UNLOCK();
joined_r0x001dbbe6:
                      if (iVar11 == 0) {
                        operator_delete__(pbVar30);
                      }
LAB_001dbbec:
                      p_Var43 = local_200;
                      if (local_200 != (__pid_t *)0x0) {
                        if (*(FILE **)(local_200 + 4) != (FILE *)0x0) {
                          fclose(*(FILE **)(local_200 + 4));
                        }
                        iVar11 = p_Var43[1];
                        if (iVar11 != 0) {
                    /* try { // try from 001dbc0e to 001dbc12 has its CatchHandler @ 001ddbc1 */
                          close(iVar11);
                        }
                        operator_delete(p_Var43);
                      }
                      goto LAB_001dbc1b;
                    }
                    /* try { // try from 001db366 to 001db36f has its CatchHandler @ 001ddb06 */
                    piVar31 = operator_new__(0x53);
                    LOCK();
                    *piVar31 = 0;
                    UNLOCK();
                    piVar31[2] = 0x3c;
                    piVar31[3] = 0;
                    bVar10 = 0x2f;
                    lVar25 = 2;
                    pbVar30 = (byte *)(piVar31 + 4);
                    while( true ) {
                      if ((char)bVar10 < '\0') {
                        *pbVar30 = bVar10 >> 6 | 0xc0;
                        pbVar30[1] = bVar10 & 0x3f | 0x80;
                        pbVar51 = pbVar30 + 2;
                        pbVar30 = pbVar30 + 1;
                      }
                      else {
                        *pbVar30 = bVar10;
                        pbVar51 = pbVar30 + 1;
                      }
                      if (lVar25 == 0x3c) break;
                      bVar10 = "/usr/bin/gsettings get org.gnome.desktop.interface gtk-theme"
                               [lVar25 + 0x3c];
                      if ((char)bVar10 < '\0') {
                        pbVar30[1] = bVar10 >> 6 | 0xc0;
                        pbVar30[2] = bVar10 & 0x3f | 0x80;
                        pbVar30 = pbVar51;
                      }
                      else {
                        *pbVar51 = bVar10;
                      }
                      pbVar30 = pbVar30 + 2;
                      bVar10 = "/usr/bin/dconf read /com/ubuntu/user-interface/scale-factor"[lVar25]
                      ;
                      lVar25 = lVar25 + 2;
                    }
                    *pbVar51 = 0;
                    /* try { // try from 001db41b to 001db42c has its CatchHandler @ 001ddaeb */
                    uVar38 = ChildProcess::start((ChildProcess *)&local_200,(byte *)(piVar31 + 4),1)
                    ;
                    LOCK();
                    iVar11 = *piVar31;
                    *piVar31 = *piVar31 + -1;
                    UNLOCK();
                    if (iVar11 == 0) {
                      operator_delete__(piVar31);
                    }
                    pbVar30 = local_278 + -0x10;
                    if (pbVar30 != (byte *)&emptyString) {
                      LOCK();
                      iVar11 = *(int *)pbVar30;
                      *(int *)pbVar30 = *(int *)pbVar30 + -1;
                      UNLOCK();
                      if (iVar11 == 0) {
                        operator_delete__(pbVar30);
                      }
                    }
                    piVar31 = local_238 + -4;
                    if (piVar31 != &emptyString) {
                      LOCK();
                      iVar11 = *piVar31;
                      *piVar31 = *piVar31 + -1;
                      UNLOCK();
                      if (iVar11 == 0) {
                        operator_delete__(piVar31);
                      }
                    }
                    /* try { // try from 001db49a to 001db4ab has its CatchHandler @ 001ddab7 */
                    if (((char)uVar38 == '\0') ||
                       (uVar38 = ChildProcess::waitForProcessToFinish
                                           ((ChildProcess *)&local_200,200), (char)uVar38 == '\0'))
                    goto LAB_001dbbec;
                    /* try { // try from 001db4b4 to 001db4c8 has its CatchHandler @ 001dd9ff */
                    ChildProcess::readAllProcessOutput((String *)&local_1a8,&local_200);
                    pbVar30 = (byte *)CONCAT44(local_1a8.st_dev._4_4_,(uint)local_1a8.st_dev);
                    /* try { // try from 001db4d1 to 001db4ea has its CatchHandler @ 001dd9cf */
                    juce::String::replaceCharacter(local_1b8,pbVar30,0x27,0x22);
                    pbVar30 = pbVar30 + -0x10;
                    if (pbVar30 != (byte *)&emptyString) {
                      LOCK();
                      iVar11 = *(int *)pbVar30;
                      *(int *)pbVar30 = *(int *)pbVar30 + -1;
                      UNLOCK();
                      if (iVar11 == 0) {
                        operator_delete__(pbVar30);
                      }
                    }
                    p_Var43 = local_200;
                    if (local_200 != (__pid_t *)0x0) {
                      if (local_200[2] < 0) {
                        if (*local_200 != 0) {
                          local_1a8.st_dev._0_4_ = 0;
                    /* try { // try from 001db583 to 001db594 has its CatchHandler @ 001dd923 */
                          _Var16 = waitpid(*local_200,(int *)&local_1a8,1);
                          if (((-1 < _Var16) && (((uint)local_1a8.st_dev & 0x7f) == 0)) &&
                             (uVar12 = (uint)local_1a8.st_dev >> 8 & 0xff, p_Var43[2] = uVar12,
                             uVar12 != 0)) goto LAB_001dbbc3;
                        }
                        goto LAB_001db5a8;
                      }
                      if (local_200[2] == 0) goto LAB_001db5a8;
LAB_001dbbc3:
                      pbVar30 = local_1b8[0] + -0x10;
                      if (pbVar30 != (byte *)&emptyString) {
                        LOCK();
                        iVar11 = *(int *)pbVar30;
                        *(int *)pbVar30 = *(int *)pbVar30 + -1;
                        UNLOCK();
                        goto joined_r0x001dbbe6;
                      }
                      goto LAB_001dbbec;
                    }
LAB_001db5a8:
                    if (*local_1b8[0] == 0) goto LAB_001dbbc3;
                    local_238 = (__pid_t *)&var::Instance::attributesVoid;
                    local_278 = local_1b8[0];
                    local_270 = local_1b8[0];
                    pbVar30 = local_1b8[0];
LAB_001db5d0:
                    pbVar51 = pbVar30;
                    bVar10 = *pbVar51;
                    uVar12 = (uint)bVar10;
                    if ((char)bVar10 < '\0') {
                      uVar41 = (uint)bVar10;
                      if ((bVar10 & 0x40) == 0) {
                        iVar11 = iswspace(uVar41 & 0x7f);
                      }
                      else {
                        uVar12 = uVar41 & 0x10 ^ 0x1f;
                        if ((bVar10 & 0x20) == 0) {
                          uVar12 = 0x3f;
                        }
                        uVar12 = uVar12 & uVar41;
                        if ((pbVar51[1] & 0xffffffc0) != 0x80) goto LAB_001db690;
                        uVar12 = pbVar51[1] & 0x3f | uVar12 << 6;
                        if (((bVar10 & 0x20) == 0) || ((pbVar51[2] & 0xffffffc0) != 0x80)) {
                          iVar11 = iswspace(uVar12);
                        }
                        else {
                          uVar12 = pbVar51[2] & 0x3f | uVar12 << 6;
                          if (((bVar10 >> 5 & (bVar10 & 0x10) == 0) != 0) ||
                             ((pbVar51[3] & 0xffffffc0) != 0x80)) goto LAB_001db690;
                          iVar11 = iswspace(uVar12 << 6 | pbVar51[3] & 0x3f);
                        }
                      }
                    }
                    else {
LAB_001db690:
                      iVar11 = iswspace(uVar12);
                    }
                    if (iVar11 != 0) {
                      bVar10 = *pbVar51;
                      pbVar30 = pbVar51 + 1;
                      if ((((char)bVar10 < '\0') && ((bVar10 & 0x40) != 0)) &&
                         (pbVar30 = pbVar51 + 2, (bVar10 & 0x20) != 0)) {
                        pbVar30 = pbVar51 + (4 - (ulong)((bVar10 & 0x10) == 0));
                      }
                      goto LAB_001db5d0;
                    }
                    bVar10 = *pbVar51;
                    uVar18 = (uint)bVar10;
                    uVar41 = (uint)bVar10;
                    uVar17 = (uint)bVar10;
                    uVar12 = uVar41;
                    if ((char)bVar10 < '\0') {
                      if ((bVar10 & 0x40) == 0) {
                        uVar37 = uVar41 & 0x7f;
LAB_001db781:
                        if (uVar37 != 0x7b) {
                          if ((char)bVar10 < '\0') {
                            if ((bVar10 & 0x40) != 0) goto LAB_001db7ea;
                            uVar12 = uVar41 & 0x7f;
                          }
                          goto LAB_001db865;
                        }
                        goto LAB_001db786;
                      }
                      bVar52 = (bVar10 & 0x10) == 0;
                      puVar47 = (uint *)CONCAT71((int7)((ulong)puVar47 >> 8),bVar52);
                      if ((pbVar51[1] & 0xffffffc0) == 0x80) {
                        uVar37 = uVar41 & 0x10 ^ 0x1f;
                        if ((bVar10 & 0x20) == 0) {
                          uVar37 = 0x3f;
                        }
                        uVar37 = pbVar51[1] & 0x3f | (uVar37 & uVar41) << 6;
                        if ((((bVar10 & 0x20) != 0) && ((pbVar51[2] & 0xffffffc0) == 0x80)) &&
                           ((uVar37 = pbVar51[2] & 0x3f | uVar37 << 6, (bVar10 >> 5 & bVar52) == 0
                            && ((pbVar51[3] & 0xffffffc0) == 0x80)))) {
                          uVar37 = uVar37 << 6 | pbVar51[3] & 0x3f;
                        }
                        goto LAB_001db781;
                      }
LAB_001db7ea:
                      bVar52 = (bVar10 & 0x10) == 0;
                      puVar47 = (uint *)CONCAT71((int7)((ulong)puVar47 >> 8),bVar52);
                      if ((pbVar51[1] & 0xffffffc0) == 0x80) {
                        uVar12 = uVar17 & 0x10 ^ 0x1f;
                        if ((bVar10 & 0x20) == 0) {
                          uVar12 = 0x3f;
                        }
                        uVar12 = pbVar51[1] & 0x3f | (uVar12 & uVar17) << 6;
                        if ((bVar10 & 0x20) != 0) {
                          if ((pbVar51[2] & 0xffffffc0) == 0x80) {
                            uVar12 = pbVar51[2] & 0x3f | uVar12 << 6;
                            if ((bVar10 >> 5 & bVar52) == 0) {
                              if ((pbVar51[3] & 0xffffffc0) == 0x80) {
                                uVar12 = uVar12 << 6 | pbVar51[3] & 0x3f;
                              }
                            }
                          }
                        }
LAB_001db865:
                        if (uVar12 != 0x5b) {
                          if ((char)bVar10 < '\0') {
                            if ((bVar10 & 0x40) != 0) goto LAB_001db8cd;
                            uVar18 = uVar41 & 0x7f;
                          }
                          goto LAB_001db95d;
                        }
                        local_270 = pbVar51 + 1;
                        bVar10 = *pbVar51;
                        if (((char)bVar10 < '\0') && ((bVar10 & 0x40) != 0)) {
                          lVar25 = 4 - (ulong)((bVar10 & 0x10) == 0);
                          if ((bVar10 & 0x20) == 0) {
                            lVar25 = 2;
                          }
                          local_270 = pbVar51 + lVar25;
                        }
                        JSONParser::parseArray((long *)&local_1a8,(JSONParser *)&local_278);
                      }
                      else {
LAB_001db8cd:
                        uVar18 = uVar17 & 0x10 ^ 0x1f;
                        if ((bVar10 & 0x20) == 0) {
                          uVar18 = 0x3f;
                        }
                        uVar18 = uVar18 & uVar17;
                        if ((((pbVar51[1] & 0xffffffc0) == 0x80) &&
                            (uVar18 = pbVar51[1] & 0x3f | uVar18 << 6, (bVar10 & 0x20) != 0)) &&
                           (((pbVar51[2] & 0xffffffc0) == 0x80 &&
                            ((uVar18 = pbVar51[2] & 0x3f | uVar18 << 6,
                             (bVar10 >> 5 & (bVar10 & 0x10) == 0) == 0 &&
                             ((pbVar51[3] & 0xffffffc0) == 0x80)))))) {
                          uVar18 = uVar18 << 6 | pbVar51[3] & 0x3f;
                        }
LAB_001db95d:
                        local_270 = pbVar51;
                        if (uVar18 != 0) {
                    /* try { // try from 001dc38e to 001dc397 has its CatchHandler @ 001dc46f */
                          puVar29 = operator_new__(0x2b);
                          LOCK();
                          *puVar29 = 0;
                          UNLOCK();
                          *(undefined8 *)(puVar29 + 2) = 0x14;
                          uVar33 = s_0EGdk_WindowScalinExpected_____o_005dcbee._26_8_;
                          local_70[0] = puVar29 + 4;
                          *(undefined8 *)(puVar29 + 4) =
                               s_0EGdk_WindowScalinExpected_____o_005dcbee._18_8_;
                          *(undefined8 *)(puVar29 + 6) = uVar33;
                          puVar29[8] = 0x275b27;
                    /* try { // try from 001dc3cc to 001dc3dd has its CatchHandler @ 001dc43d */
                          uVar33 = JSONParser::throwError
                                             ((JSONParser *)&local_278,local_70,local_270);
                    /* catch() { ... } // from try @ 001dc806 with catch @ 001dd7dc */
                    /* try { // try from 001dd8e9 to 001dd8f0 has its CatchHandler @ 001dd8f3 */
                          (**(code **)(local_238 + 0x16))(&local_230);
                          local_1b8[0] = local_1b8[0] + -0x10;
                          if (local_1b8[0] != (byte *)&emptyString) {
                            LOCK();
                            iVar11 = *(int *)local_1b8[0];
                            *(int *)local_1b8[0] = *(int *)local_1b8[0] + -1;
                            UNLOCK();
                            if (iVar11 == 0) {
                              operator_delete__(local_1b8[0]);
                            }
                          }
                          p_Var43 = local_200;
                          if (local_200 != (__pid_t *)0x0) {
                            if (*(FILE **)(local_200 + 4) != (FILE *)0x0) {
                              fclose(*(FILE **)(local_200 + 4));
                            }
                            iVar11 = p_Var43[1];
                            if (iVar11 != 0) {
                    /* try { // try from 001ddc79 to 001ddc7d has its CatchHandler @ 001ddc80 */
                              close(iVar11);
                            }
                            operator_delete(p_Var43);
                          }
                          pbVar30 = local_1c0 + -0x10;
                          if (pbVar30 != (byte *)&emptyString) {
                            LOCK();
                            iVar11 = *(int *)pbVar30;
                            *(int *)pbVar30 = *(int *)pbVar30 + -1;
                            UNLOCK();
                            if (iVar11 == 0) {
                              operator_delete__(pbVar30);
                            }
                          }
                    /* try { // try from 001ddd5b to 001ddd6d has its CatchHandler @ 001ddd88 */
                          lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::
                                   get();
                          (**(code **)(lVar23 + 0x3c8))(local_210);
                    /* try { // try from 001ddd6e to 001ddd7d has its CatchHandler @ 001ddd80 */
                          lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::
                                   get();
                          (**(code **)(lVar23 + 0x3b8))(local_260);
                    /* try { // try from 001ddd93 to 001ddda2 has its CatchHandler @ 001dddcb */
                          lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::
                                   get();
                          (**(code **)(lVar23 + 0x3a8))(local_248);
                          if (local_e0 != 0) {
                    /* try { // try from 001dddae to 001dddc0 has its CatchHandler @ 001dddc3 */
                            lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::
                                     get();
                            (**(code **)(lVar23 + 0x128))(local_e0);
                          }
                          uStack_290 = uStack_290 & 0xffffffff;
                          free(local_298);
                    /* WARNING: Subroutine does not return */
                          _Unwind_Resume(uVar33);
                        }
                        local_1a8.st_dev._0_4_ = 0x713530;
                        local_1a8.st_dev._4_4_ = 0;
                      }
                    }
                    else {
                      if (uVar41 != 0x7b) goto LAB_001db865;
LAB_001db786:
                      local_270 = pbVar51 + 1;
                      bVar10 = *pbVar51;
                      if (((char)bVar10 < '\0') && ((bVar10 & 0x40) != 0)) {
                        lVar25 = 4 - (ulong)((bVar10 & 0x10) == 0);
                        if ((bVar10 & 0x20) == 0) {
                          lVar25 = 2;
                        }
                        local_270 = pbVar51 + lVar25;
                      }
                    /* try { // try from 001db7be to 001db8b3 has its CatchHandler @ 001dc46f */
                      JSONParser::parseObject((long *)&local_1a8,(JSONParser *)&local_278);
                    }
                    p_Var9 = (__pid_t *)CONCAT44(local_1a8.st_dev._4_4_,(uint)local_1a8.st_dev);
                    uVar33 = CONCAT44(local_1a8.st_ino._4_4_,(undefined4)local_1a8.st_ino);
                    local_1a8.st_dev._0_4_ = (uint)local_238;
                    local_1a8.st_dev._4_4_ = (uint)((ulong)local_238 >> 0x20);
                    local_1a8.st_ino._0_4_ = (undefined4)local_230;
                    local_1a8.st_ino._4_4_ = (uint)((ulong)local_230 >> 0x20);
                    /* try { // try from 001db9a8 to 001db9b2 has its CatchHandler @ 001dd9c7 */
                    p_Var43 = local_238 + 0x16;
                    local_238 = p_Var9;
                    local_230 = uVar33;
                    (**(code **)p_Var43)(&local_1a8.st_ino);
                    local_1f8 = local_238;
                    if (DAT_0061ac58 == '\0') {
                      local_1f0 = local_230;
                      local_238 = (__pid_t *)&var::Instance::attributesVoid;
                    }
                    else {
                      local_1f8 = (__pid_t *)&var::Instance::attributesVoid;
                    }
                    /* try { // try from 001dba19 to 001dba20 has its CatchHandler @ 001dd9bf */
                    (**(code **)(local_238 + 0x16))(&local_230);
                    /* try { // try from 001dba29 to 001dba33 has its CatchHandler @ 001dd9b7 */
                    lVar25 = (**(code **)(local_1f8 + 0xe))(&local_1f0);
                    if ((lVar25 == 0) ||
                       (lVar25 = __dynamic_cast(lVar25,&ReferenceCountedObject::typeinfo,
                                                &DynamicObject::typeinfo), lVar25 == 0)) {
LAB_001dbbb0:
                    /* try { // try from 001dbbb8 to 001dbbc2 has its CatchHandler @ 001dd9af */
                      (**(code **)(local_1f8 + 0x16))(&local_1f0);
                      goto LAB_001dbbc3;
                    }
                    /* try { // try from 001dba61 to 001dba72 has its CatchHandler @ 001dd957 */
                    Identifier::Identifier((Identifier *)&local_278,(long *)&local_1c0);
                    if ((long)*(int *)(lVar25 + 0x1c) != 0) {
                      plVar46 = (long *)(*(long *)(lVar25 + 0x10) + 8);
                      lVar25 = (long)*(int *)(lVar25 + 0x1c) * 0x18;
                      do {
                        if ((byte *)plVar46[-1] == local_278) goto LAB_001dbab6;
                        plVar46 = plVar46 + 3;
                        lVar25 = lVar25 + -0x18;
                      } while (lVar25 != 0);
                    }
                    plVar46 = (long *)&getNullVarRef()::nullVar;
                    if (getNullVarRef()::nullVar == '\0') {
                      iVar11 = __cxa_guard_acquire(&getNullVarRef()::nullVar);
                      plVar46 = (long *)&getNullVarRef()::nullVar;
                      if (iVar11 != 0) {
                        getNullVarRef()::nullVar = &var::Instance::attributesVoid;
                        __cxa_atexit(var::~var,&getNullVarRef()::nullVar,&__dso_handle);
                        __cxa_guard_release(&getNullVarRef()::nullVar);
                        plVar46 = (long *)&getNullVarRef()::nullVar;
                      }
                    }
LAB_001dbab6:
                    lVar25 = *plVar46;
                    local_1a8.st_dev._0_4_ = (uint)lVar25;
                    local_1a8.st_dev._4_4_ = (uint)((ulong)lVar25 >> 0x20);
                    /* try { // try from 001dbac5 to 001dbacf has its CatchHandler @ 001dd92b */
                    (**(code **)(lVar25 + 0x60))(&local_1a8.st_ino,plVar46 + 1);
                    pbVar30 = local_278 + -0x10;
                    if (pbVar30 != (byte *)&emptyString) {
                      LOCK();
                      iVar11 = *(int *)pbVar30;
                      *(int *)pbVar30 = *(int *)pbVar30 + -1;
                      UNLOCK();
                      if (iVar11 == 0) {
                        operator_delete__(pbVar30);
                      }
                    }
                    pcVar40 = (char *)CONCAT44(local_1a8.st_dev._4_4_,(uint)local_1a8.st_dev);
                    if (*pcVar40 != '\0') {
LAB_001dbba5:
                    /* try { // try from 001dbba5 to 001dbbaf has its CatchHandler @ 001dd91b */
                      (**(code **)(pcVar40 + 0x58))(&local_1a8.st_ino);
                      goto LAB_001dbbb0;
                    }
                    /* try { // try from 001dbb08 to 001dbb12 has its CatchHandler @ 001dd913 */
                    dVar26 = (double)(**(code **)(pcVar40 + 0x20))(&local_1a8.st_ino);
                    pcVar40 = (char *)CONCAT44(local_1a8.st_dev._4_4_,(uint)local_1a8.st_dev);
                    if (dVar26 * _DAT_005de5e8 <= DAT_005db340) goto LAB_001dbba5;
                    /* try { // try from 001dbb2d to 001dbb37 has its CatchHandler @ 001dd90b */
                    (**(code **)(pcVar40 + 0x58))(&local_1a8.st_ino);
                    /* try { // try from 001dbb40 to 001dbb4a has its CatchHandler @ 001dd903 */
                    (**(code **)(local_1f8 + 0x16))(&local_1f0);
                    pbVar30 = local_1b8[0] + -0x10;
                    if (pbVar30 != (byte *)&emptyString) {
                      LOCK();
                      iVar11 = *(int *)pbVar30;
                      *(int *)pbVar30 = *(int *)pbVar30 + -1;
                      UNLOCK();
                      if (iVar11 == 0) {
                        operator_delete__(pbVar30);
                      }
                    }
                    p_Var43 = local_200;
                    if (local_200 == (__pid_t *)0x0) goto LAB_001dc002;
                    if (*(FILE **)(local_200 + 4) != (FILE *)0x0) {
                      fclose(*(FILE **)(local_200 + 4));
                    }
                    if (p_Var43[1] != 0) {
                    /* try { // try from 001dbb9b to 001dbb9f has its CatchHandler @ 001dd81b */
                      close(p_Var43[1]);
                    }
                    goto LAB_001dbffa;
                  }
                  piVar31 = operator_new__(0x2f);
                  LOCK();
                  *piVar31 = 0;
                  UNLOCK();
                  piVar31[2] = 0x18;
                  uVar33 = s_0EGdk_WindowScalinExpected_____o_005dcbee._10_8_;
                  piVar31[3] = 0;
                  *(undefined8 *)(piVar31 + 4) = s_0EGdk_WindowScalinExpected_____o_005dcbee._2_8_;
                  *(undefined8 *)(piVar31 + 6) = uVar33;
                  piVar31[8] = 0x63614667;
                  piVar31[9] = 0x726f74;
                  puVar32 = std::
                            _Hashtable<juce::String,std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>,std::__detail::_Select1st,std::equal_to<juce::String>,std::hash<juce::String>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
                            ::find((_Hashtable<juce::String,std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>,std::allocator<std::pair<juce::String_const,juce::XWindowSystemUtilities::XSetting>>,std::__detail::_Select1st,std::equal_to<juce::String>,std::hash<juce::String>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
                                    *)(lVar25 + 0x20),(byte *)(piVar31 + 4));
                  if (puVar32 == (undefined8 *)0x0) {
                    uVar33 = 3;
                    iVar13 = -1;
                    puVar49 = &DAT_0061ac58;
                    puVar44 = &DAT_0061ac58;
                    LOCK();
                    iVar11 = *piVar31;
                    *piVar31 = *piVar31 + -1;
                    UNLOCK();
                  }
                  else {
                    puVar49 = (undefined1 *)puVar32[2];
                    piVar1 = (int *)(puVar49 + -0x10);
                    if (piVar1 != &emptyString) {
                      LOCK();
                      *piVar1 = *piVar1 + 1;
                      UNLOCK();
                    }
                    uVar33 = puVar32[3];
                    puVar44 = (undefined1 *)puVar32[4];
                    iVar13 = (int)((ulong)uVar33 >> 0x20);
                    if (puVar44 != &DAT_0061ac58) {
                      LOCK();
                      *(int *)(puVar44 + -0x10) = *(int *)(puVar44 + -0x10) + 1;
                      UNLOCK();
                    }
                    LOCK();
                    iVar11 = *piVar31;
                    *piVar31 = *piVar31 + -1;
                    UNLOCK();
                  }
                  if (iVar11 == 0) {
                    operator_delete__(piVar31);
                  }
                  piVar31 = (int *)(puVar44 + -0x10);
                  if (piVar31 != &emptyString) {
                    LOCK();
                    iVar11 = *piVar31;
                    *piVar31 = *piVar31 + -1;
                    UNLOCK();
                    if (iVar11 == 0) {
                      operator_delete__(piVar31);
                    }
                  }
                  this = local_1d8;
                  piVar31 = (int *)(puVar49 + -0x10);
                  pbVar51 = local_1c0;
                  if (piVar31 != &emptyString) {
                    LOCK();
                    iVar11 = *piVar31;
                    *piVar31 = *piVar31 + -1;
                    UNLOCK();
                    if (iVar11 == 0) {
                      operator_delete__(piVar31);
                      pbVar51 = local_1c0;
                    }
                  }
                  local_1c0 = pbVar51;
                  if ((int)uVar33 == 3 || iVar13 < 1) goto LAB_001db215;
                  goto LAB_001dc002;
                }
                goto LAB_001dc2d0;
              }
              goto LAB_001dc2e0;
            }
LAB_001dc824:
                    /* try { // try from 001dc824 to 001dc843 has its CatchHandler @ 001ddc88 */
            lVar23 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
            uVar12 = local_ec;
            (**(code **)(lVar23 + 0x3a8))(local_248);
          }
          lVar23 = local_250;
        }
        if (local_e0 != 0) {
                    /* try { // try from 001dc85a to 001dc86c has its CatchHandler @ 001ddd02 */
          lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar25 + 0x128))(local_e0);
        }
        uVar41 = (int)local_208 + 1;
        local_208 = (ulong)uVar41;
      } while (uVar41 != uVar12);
    }
    if ((uStack_290._4_4_ == 0) || (*local_298 != '\0')) goto LAB_001dc886;
    *local_298 = '\x01';
    iVar11 = uStack_290._4_4_;
    if (uStack_290._4_4_ == 0) goto LAB_001dc892;
LAB_001dc949:
    lVar23 = (long)iVar11;
LAB_001dc954:
    pcVar40 = local_298;
    do {
      *(undefined8 *)(pcVar40 + 0x14) = *(undefined8 *)(pcVar40 + 4);
      *(undefined8 *)(pcVar40 + 0x1c) = *(undefined8 *)(pcVar40 + 0xc);
      pcVar40 = pcVar40 + 0x70;
    } while (pcVar40 != local_298 + lVar23 * 0x70);
    pcVar40 = local_298;
    if (this != (Displays *)&local_298) {
LAB_001dc979:
      uVar20 = (uint)uStack_290;
      local_298 = (char *)0x0;
      uStack_290 = 0;
      pvVar34 = *(void **)this;
      *(char **)this = pcVar40;
      *(undefined4 *)(this + 8) = uVar20;
      *(int *)(this + 0xc) = iVar11;
      free(pvVar34);
    }
  }
  uStack_290 = uStack_290 & 0xffffffff;
  free(local_298);
  uVar38 = _UNK_005d9aa8;
  uVar48 = _DAT_005d9aa0;
  dVar60 = _UNK_005d9a98;
  dVar26 = _DAT_005d9a90;
  iVar11 = *(int *)(this + 0xc);
  if ((long)iVar11 == 0) {
    return;
  }
  if (iVar11 == 1) {
    lVar23 = *(long *)this;
    auVar62._0_8_ = (double)*(int *)(lVar23 + 4);
    auVar62._8_8_ = (double)*(int *)(lVar23 + 0xc);
    auVar69._0_8_ = (double)*(int *)(lVar23 + 8);
    auVar69._8_8_ = (double)*(int *)(lVar23 + 0x10);
    auVar57._8_8_ = *(undefined8 *)(lVar23 + 0x50);
    auVar57._0_8_ = *(undefined8 *)(lVar23 + 0x50);
    auVar63 = divpd(auVar62,auVar57);
    auVar53 = divpd(auVar69,auVar57);
    dVar71 = auVar53._8_8_ + _UNK_005d9a98;
    uVar67 = (ulong)(auVar63._8_8_ + _UNK_005d9a98) & _UNK_005d9aa8;
    *(ulong *)(lVar23 + 4) =
         (ulong)(auVar63._0_8_ + _DAT_005d9a90) & _DAT_005d9aa0 |
         (long)(auVar53._0_8_ + _DAT_005d9a90) << 0x20;
    *(ulong *)(lVar23 + 0xc) = uVar67 | (long)dVar71 << 0x20;
    auVar64._0_8_ = (double)*(int *)(lVar23 + 0x14);
    auVar64._8_8_ = (double)*(int *)(lVar23 + 0x1c);
    auVar70._0_8_ = (double)*(int *)(lVar23 + 0x18);
    auVar70._8_8_ = (double)*(int *)(lVar23 + 0x20);
    auVar63 = divpd(auVar64,auVar57);
    auVar53 = divpd(auVar70,auVar57);
    *(ulong *)(lVar23 + 0x14) =
         (ulong)(auVar63._0_8_ + dVar26) & uVar48 | (long)(auVar53._0_8_ + dVar26) << 0x20;
    *(ulong *)(lVar23 + 0x1c) =
         (ulong)(auVar63._8_8_ + dVar60) & uVar38 | (long)(auVar53._8_8_ + dVar60) << 0x20;
    return;
  }
  local_b8 = (long *)0x0;
  uStack_b0 = 0;
  lVar23 = *(long *)this;
  dVar26 = (double)((long)iVar11 * 0x70);
  lVar25 = 0;
  lVar27 = 9;
  plVar46 = (long *)0x0;
  lVar39 = 0;
  uVar12 = 0;
  do {
    local_1a8.st_nlink._7_1_ = 0;
    local_1a8.st_mode = 0;
    local_1a8.st_uid = 0;
    local_1a8._32_7_ = 0;
    local_1a8.st_dev._4_4_ = local_1a8.st_dev._4_4_ & 0xffffff;
    local_1a8.st_ino._0_4_ = 0;
    local_1a8.st_ino._4_4_ = 0;
    local_1a8.st_nlink._0_7_ = 0;
    local_1a8.__pad0._3_1_ = 0;
    local_1a8.st_rdev._0_4_ = 0;
    local_1a8.st_rdev._4_4_ = local_1a8.st_rdev._4_4_ & 0xff000000;
    uVar48 = *(ulong *)(lVar23 + 4);
    if ((int)uVar12 <= lVar39) {
      iVar11 = (int)lVar39;
      uVar41 = ((iVar11 - (iVar11 + 1 >> 0x1f)) + 1 >> 1) + iVar11 + 9U & 0xfffffff8;
      if (uVar12 != uVar41) {
        local_248 = dVar26;
        if ((int)uVar41 < 1) {
          free(plVar46);
          local_b8 = (long *)0x0;
        }
        else {
          local_b8 = realloc(plVar46,(ulong)uVar41 * 0x38);
        }
        dVar26 = local_248;
        plVar46 = local_b8;
        uVar12 = uVar41;
      }
    }
    plVar28 = local_b8;
    *(long *)((long)plVar46 + lVar27 + -9) = lVar23;
    *(bool *)((long)plVar46 + lVar27 + -1) = uVar48 >> 0x20 == 0 && (int)uVar48 == 0;
    *(undefined8 *)((long)plVar46 + lVar27) =
         CONCAT44(local_1a8.st_dev._4_4_,(uint)local_1a8.st_dev);
    ((undefined8 *)((long)plVar46 + lVar27))[1] =
         CONCAT44(local_1a8.st_ino._4_4_,(undefined4)local_1a8.st_ino);
    puVar32 = (undefined8 *)((long)plVar46 + lVar27 + 0x10);
    *puVar32 = CONCAT17(local_1a8.st_nlink._7_1_,(undefined7)local_1a8.st_nlink);
    puVar32[1] = CONCAT44(local_1a8.st_uid,local_1a8.st_mode);
    puVar32 = (undefined8 *)((long)plVar46 + lVar27 + 0x1f);
    *puVar32 = CONCAT71(local_1a8._32_7_,local_1a8.st_uid._3_1_);
    puVar32[1] = CONCAT35(local_1a8.st_rdev._4_3_,
                          CONCAT41((int)local_1a8.st_rdev,local_1a8.__pad0._3_1_));
    lVar23 = lVar23 + 0x70;
    lVar27 = lVar27 + 0x38;
    lVar25 = lVar25 + 0x100000000;
    lVar39 = lVar39 + 1;
    dVar26 = (double)((long)dVar26 + -0x70);
  } while (dVar26 != 0.0);
  iVar11 = (int)lVar39;
  uStack_b0 = CONCAT44(iVar11,uVar12);
  if (iVar11 == 0) {
    bVar52 = true;
  }
  else {
    lVar23 = (long)iVar11 * 0x38;
    plVar46 = local_b8;
    do {
      if ((char)plVar46[1] != '\0') goto LAB_001dcc46;
      plVar46 = plVar46 + 7;
      lVar23 = lVar23 + -0x38;
    } while (lVar23 != 0);
    lVar23 = (long)iVar11 * 0x38;
    iVar11 = 0x7fffffff;
    plVar46 = (long *)0x0;
    plVar45 = local_b8;
    do {
      dVar26 = hypot((double)(int)*(undefined8 *)(*plVar45 + 4),
                     (double)(int)((ulong)*(undefined8 *)(*plVar45 + 4) >> 0x20));
      if ((int)dVar26 < iVar11) {
        iVar11 = (int)dVar26;
        plVar46 = plVar45;
      }
      plVar45 = plVar45 + 7;
      lVar23 = lVar23 + -0x38;
    } while (lVar23 != 0);
    if (plVar46 != (long *)0x0) {
      *(undefined1 *)(plVar46 + 1) = 1;
LAB_001dcc46:
      bVar52 = false;
      goto LAB_001dd140;
    }
    bVar52 = false;
  }
  plVar46 = (long *)0x0;
LAB_001dd140:
                    /* try { // try from 001dd140 to 001dd14f has its CatchHandler @ 001ddabc */
  processDisplay(plVar46,&local_b8);
  uVar38 = _UNK_005d9aa8;
  uVar48 = _DAT_005d9aa0;
  dVar71 = _UNK_005d9a98;
  dVar60 = _DAT_005d9a90;
  dVar26 = DAT_005d9098;
  if (!bVar52) {
    plVar46 = plVar28;
    do {
      lVar23 = *plVar46;
      iVar11 = *(int *)(lVar23 + 0x14);
      iVar13 = *(int *)(lVar23 + 0x18);
      iVar14 = *(int *)(lVar23 + 0x1c);
      iVar15 = *(int *)(lVar23 + 0x20);
      iVar19 = *(int *)(lVar23 + 4);
      iVar6 = *(int *)(lVar23 + 8);
      dVar2 = *(double *)(lVar23 + 0x50);
      *(undefined8 *)(lVar23 + 0x44) = *(undefined8 *)(lVar23 + 4);
      dVar3 = (double)plVar46[5];
      dVar4 = (double)plVar46[6];
      lVar23 = *plVar46;
      *(ulong *)(lVar23 + 4) =
           (long)((double)plVar46[4] + dVar60) << 0x20 |
           (ulong)((double)plVar46[3] + dVar60) & uVar48;
      *(ulong *)(lVar23 + 0xc) = (long)(dVar4 + dVar71) << 0x20 | (ulong)(dVar3 + dVar71) & uVar38;
      lVar23 = *plVar46;
      *(ulong *)(lVar23 + 0x14) =
           (ulong)(((double)iVar11 - (double)iVar19) / dVar2 + (double)plVar46[3] + dVar26) &
           0xffffffff |
           (long)(((double)iVar13 - (double)iVar6) / dVar2 + (double)plVar46[4] + dVar26) << 0x20;
      *(ulong *)(lVar23 + 0x1c) =
           (ulong)((double)iVar14 / dVar2 + dVar26) & 0xffffffff |
           (long)((double)iVar15 / dVar2 + dVar26) << 0x20;
      plVar46 = plVar46 + 7;
    } while (plVar46 != plVar28 + (lVar25 >> 0x20) * 7);
  }
  uStack_b0 = uStack_b0 & 0xffffffff;
  free(plVar28);
  return;
LAB_001dac60:
  lVar23 = lVar23 + 1;
  if (iVar11 <= lVar23) goto LAB_001dc824;
  goto LAB_001dac75;
LAB_001dbf24:
  if (0 < iVar11) {
    if (local_1a8.st_ino._4_4_ < 2) {
      puVar32 = &StringArray::operator[](int)::empty;
      if (StringArray::operator[](int)::empty == '\0') {
        iVar13 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
        puVar32 = &StringArray::operator[](int)::empty;
        if (iVar13 != 0) {
          StringArray::operator[](int)::empty = &DAT_0061ac58;
          __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
          __cxa_guard_release(&StringArray::operator[](int)::empty);
          puVar32 = &StringArray::operator[](int)::empty;
        }
      }
    }
    else {
      puVar32 = (undefined8 *)(CONCAT44(local_1a8.st_dev._4_4_,(uint)local_1a8.st_dev) + 8);
    }
    local_278 = (byte *)*puVar32;
    CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)&local_278);
  }
  bVar52 = iVar11 < 1;
LAB_001dbf73:
  if (0 < (int)local_1a8.st_ino._4_4_) {
    lVar25 = 0;
    do {
      piVar31 = (int *)(*(long *)(CONCAT44(local_1a8.st_dev._4_4_,(uint)local_1a8.st_dev) +
                                 lVar25 * 8) + -0x10);
      if (piVar31 != &emptyString) {
        LOCK();
        iVar11 = *piVar31;
        *piVar31 = *piVar31 + -1;
        UNLOCK();
        if (iVar11 == 0) {
          operator_delete__(piVar31);
        }
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < (int)local_1a8.st_ino._4_4_);
  }
  free((void *)CONCAT44(local_1a8.st_dev._4_4_,(uint)local_1a8.st_dev));
  p_Var43 = local_238;
  if (bVar52) {
LAB_001dbfd6:
    p_Var43 = local_238;
    if (local_238 != (__pid_t *)0x0) {
      if (*(FILE **)(local_238 + 4) != (FILE *)0x0) {
        fclose(*(FILE **)(local_238 + 4));
      }
      if (p_Var43[1] != 0) {
                    /* try { // try from 001dbff5 to 001dbff9 has its CatchHandler @ 001ddbd8 */
        close(p_Var43[1]);
      }
LAB_001dbffa:
      operator_delete(p_Var43);
    }
  }
  else if (local_238 != (__pid_t *)0x0) {
    if (*(FILE **)(local_238 + 4) != (FILE *)0x0) {
      fclose(*(FILE **)(local_238 + 4));
    }
    if (p_Var43[1] != 0) {
                    /* try { // try from 001dc325 to 001dc329 has its CatchHandler @ 001dd9a7 */
      close(p_Var43[1]);
    }
    goto LAB_001dbffa;
  }
LAB_001dc002:
  bVar10 = (byte)local_220 & local_261;
  local_220 = CONCAT71(local_220._1_7_,bVar10);
  pbVar30 = local_1c0 + -0x10;
  if (pbVar30 != (byte *)&emptyString) {
    LOCK();
    iVar11 = *(int *)pbVar30;
    *(int *)pbVar30 = *(int *)pbVar30 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      operator_delete__(pbVar30);
      bVar10 = (byte)local_220;
      goto joined_r0x001dc03c;
    }
  }
joined_r0x001dc03c:
  if (bVar10 == 0) {
    iVar11 = uStack_290._4_4_;
    if ((int)(uint)uStack_290 <= uStack_290._4_4_) {
      uVar12 = uStack_290._4_4_ + ((uStack_290._4_4_ - (uStack_290._4_4_ + 1 >> 0x1f)) + 1 >> 1) + 9
      ;
      uVar41 = uVar12 & 0xfffffff8;
      if ((uint)uStack_290 != uVar41) {
        if ((int)uVar41 < 1) {
          free(local_298);
          local_298 = (char *)0x0;
        }
        else {
          local_298 = realloc(local_298,(ulong)uVar41 * 0x70);
        }
      }
      uStack_290 = CONCAT44(uStack_290._4_4_,uVar12) & 0xfffffffffffffff8;
      iVar11 = uStack_290._4_4_;
    }
    uStack_290 = CONCAT44(iVar11 + 1,(uint)uStack_290);
    lVar25 = (long)iVar11 * 0x70;
    local_298[lVar25] = (byte)local_220;
    *(undefined2 *)(local_298 + lVar25 + 1) = local_223;
    local_298[lVar25 + 3] = local_221;
    *(undefined4 *)(local_298 + lVar25 + 4) = local_1d0._0_4_;
    *(undefined4 *)(local_298 + lVar25 + 8) = local_1c8._0_4_;
    *(undefined4 *)(local_298 + lVar25 + 0xc) = (undefined4)local_1e0;
    *(undefined4 *)(local_298 + lVar25 + 0x10) = local_1e8._0_4_;
    *(long **)(local_298 + lVar25 + 0x14) = local_b8;
    *(ulong *)(local_298 + lVar25 + 0x14 + 8) = uStack_b0;
    *(undefined8 *)(local_298 + lVar25 + 0x24) = local_a8;
    *(undefined8 *)(local_298 + lVar25 + 0x24 + 8) = uStack_a0;
    *(undefined8 *)(local_298 + lVar25 + 0x34) = local_98;
    *(ulong *)(local_298 + lVar25 + 0x34 + 8) = CONCAT44(uStack_8c,uStack_90);
    *(ulong *)(local_298 + lVar25 + 0x40) = CONCAT44(local_88,uStack_8c);
    *(ulong *)(local_298 + lVar25 + 0x40 + 8) = CONCAT44(uStack_80,uStack_84);
    *(double *)(local_298 + lVar25 + 0x50) = local_78;
    *(undefined8 *)(local_298 + lVar25 + 0x58) = local_48._0_8_;
    *(undefined8 *)(local_298 + lVar25 + 0x60) = local_58._0_8_;
    local_298[lVar25 + 0x68] = (char)local_254;
    *(undefined4 *)(local_298 + lVar25 + 0x69) = local_10f;
    *(uint *)(local_298 + lVar25 + 0x6c) = CONCAT31(uStack_10b,local_10f._3_1_);
  }
  else {
    iVar11 = uStack_290._4_4_;
    if ((int)(uint)uStack_290 <= uStack_290._4_4_) {
      uVar12 = uStack_290._4_4_ + ((uStack_290._4_4_ - (uStack_290._4_4_ + 1 >> 0x1f)) + 1 >> 1) + 9
      ;
      uVar41 = uVar12 & 0xfffffff8;
      if ((uint)uStack_290 != uVar41) {
        if ((int)uVar41 < 1) {
          free(local_298);
          local_298 = (char *)0x0;
        }
        else {
          local_298 = realloc(local_298,(ulong)uVar41 * 0x70);
        }
      }
      uStack_290 = CONCAT44(uStack_290._4_4_,uVar12) & 0xfffffffffffffff8;
      iVar11 = uStack_290._4_4_;
    }
    pcVar40 = local_298;
    if (iVar11 != 0) {
      memmove(local_298 + 0x70,local_298,(long)iVar11 * 0x70);
    }
    *pcVar40 = (byte)local_220;
    *(undefined2 *)(pcVar40 + 1) = local_223;
    pcVar40[3] = local_221;
    *(undefined4 *)(pcVar40 + 4) = local_1d0._0_4_;
    *(undefined4 *)(pcVar40 + 8) = local_1c8._0_4_;
    *(undefined4 *)(pcVar40 + 0xc) = (undefined4)local_1e0;
    *(undefined4 *)(pcVar40 + 0x10) = local_1e8._0_4_;
    *(ulong *)(pcVar40 + 0x40) = CONCAT44(local_88,uStack_8c);
    *(ulong *)(pcVar40 + 0x48) = CONCAT44(uStack_80,uStack_84);
    *(undefined8 *)(pcVar40 + 0x34) = local_98;
    *(ulong *)(pcVar40 + 0x3c) = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(pcVar40 + 0x24) = local_a8;
    *(undefined8 *)(pcVar40 + 0x2c) = uStack_a0;
    *(long **)(pcVar40 + 0x14) = local_b8;
    *(ulong *)(pcVar40 + 0x1c) = uStack_b0;
    *(double *)(pcVar40 + 0x50) = local_78;
    *(undefined8 *)(pcVar40 + 0x58) = local_48._0_8_;
    *(undefined8 *)(pcVar40 + 0x60) = local_58._0_8_;
    pcVar40[0x68] = (char)local_254;
    *(undefined4 *)(pcVar40 + 0x69) = local_10f;
    *(uint *)(pcVar40 + 0x6c) = CONCAT31(uStack_10b,local_10f._3_1_);
    uStack_290 = CONCAT44(uStack_290._4_4_ + 1,(uint)uStack_290);
  }
                    /* try { // try from 001dc2bd to 001dc2cf has its CatchHandler @ 001ddd39 */
  lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar25 + 0x3c8))(local_210);
LAB_001dc2d0:
                    /* try { // try from 001dc2d0 to 001dc2df has its CatchHandler @ 001ddd50 */
  lVar25 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar25 + 0x3b8))(local_260);
LAB_001dc2e0:
  iVar11 = *(int *)((long)local_248 + 0x20);
  lVar23 = lVar23 + 1;
  if (iVar11 <= lVar23) goto LAB_001dc824;
  goto LAB_001dac75;
}


