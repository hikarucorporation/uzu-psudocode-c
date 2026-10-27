// Function : ShapedText
// Namespace: juce:detail:ShapedText
// Entry    : 003086a0
// Prototype: undefined ShapedText(ShapedText * this, ulong * param_1, undefined1[16] * param_2)
// Body     : 003086a0 - 0030ad23


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::detail::ShapedText::ShapedText(juce::String, juce::detail::ShapedTextOptions) */

void __thiscall
juce::detail::ShapedText::ShapedText(ShapedText *this,ulong *param_1,undefined1 (*param_2) [16])

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  pthread_mutex_t *ppVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 uVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  String *this_00;
  void *pvVar12;
  ulong *puVar13;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_01;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  RangedValues<float> *this_02;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  TypefaceCache *this_03;
  ulong **ppuVar25;
  float *pfVar26;
  void *pvVar27;
  long lVar28;
  ulong uVar29;
  float *pfVar30;
  ulong **ppuVar31;
  undefined8 *puVar32;
  float *pfVar33;
  ulong uVar34;
  ulong uVar35;
  long *plVar36;
  ulong **ppuVar37;
  undefined1 *puVar38;
  ulong uVar39;
  long *plVar40;
  float *pfVar41;
  long lVar42;
  long lVar43;
  undefined4 *puVar44;
  void *pvVar45;
  SimpleShapedText *this_04;
  undefined1 *puVar46;
  float *pfVar47;
  int *piVar48;
  float *pfVar49;
  uint *puVar50;
  ulong *puVar51;
  ulong ***pppuVar52;
  ulong **ppuVar53;
  float *pfVar54;
  ulong uVar55;
  float *pfVar56;
  bool bVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  float fVar61;
  uint uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined4 uVar66;
  undefined8 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  undefined4 uVar71;
  float fVar72;
  undefined4 uVar73;
  undefined4 in_XMM5_Da;
  undefined4 in_XMM5_Db;
  undefined4 uVar74;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  float *local_2b8;
  float local_2a8;
  ulong **local_298;
  ulong **ppuStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  RangedValues<juce::detail::JustifiedText::DrawType> *local_270;
  float *local_268;
  long local_260;
  undefined1 local_258 [24];
  float *local_240;
  undefined1 local_238 [16];
  float *local_228;
  ulong **local_220;
  ulong **local_218;
  RangedValues<float> *local_210;
  float *local_208;
  ulong *local_200;
  ulong local_1f8;
  undefined1 local_1f0 [8];
  ulong **local_1e8;
  undefined8 *puStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  void *pvStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  long *local_1a8;
  long *plStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 *local_178;
  undefined8 *local_168;
  ShapedText *local_160;
  vector<float,std::allocator<float>> *local_158;
  Ranges *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  long local_138;
  undefined7 uStack_130;
  undefined4 uStack_129;
  undefined4 uStack_125;
  undefined1 uStack_121;
  void *local_120;
  long *local_108;
  long *local_100;
  long local_d8;
  SimpleShapedText *local_c8;
  long local_c0;
  ulong *local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  local_160 = this;
                    /* try { // try from 003086c5 to 003086ce has its CatchHandler @ 0030afbc */
  puVar21 = operator_new(0x2d8);
  puVar21[1] = 0x100000001;
  *puVar21 = &PTR___Sp_counted_base_007125f8;
  local_200 = puVar21 + 2;
  puVar50 = (uint *)*param_1;
  ppuVar53 = (ulong **)&DAT_0061ac58;
  *param_1 = (ulong)&DAT_0061ac58;
  local_88 = *(undefined4 *)param_2[2];
  local_a8 = *(undefined8 *)*param_2;
  uStack_a0 = *(undefined8 *)(*param_2 + 8);
  local_98 = *(undefined8 *)param_2[1];
  uStack_90 = *(undefined8 *)(param_2[1] + 8);
  uVar19 = *(undefined8 *)(param_2[2] + 8);
  uVar20 = *(undefined8 *)param_2[3];
  uVar67 = *(undefined8 *)(param_2[3] + 8);
  fVar72 = 0.0;
  uVar73 = 0;
  *(undefined8 *)(param_2[2] + 8) = 0;
  *(undefined8 *)param_2[3] = 0;
  *(undefined8 *)(param_2[3] + 8) = 0;
  uVar18 = *(undefined8 *)param_2[4];
  uVar16 = *(undefined8 *)(param_2[4] + 8);
  uVar10 = *(undefined8 *)param_2[5];
  *(undefined8 *)param_2[4] = 0;
  *(undefined8 *)(param_2[4] + 8) = 0;
  *(undefined8 *)param_2[5] = 0;
  local_40 = *(undefined8 *)(param_2[6] + 8);
  local_50 = *(undefined8 *)(param_2[5] + 8);
  uStack_48 = *(undefined8 *)param_2[6];
  uVar11 = *(undefined8 *)param_2[7];
  *(undefined1 **)param_2[7] = &DAT_0061ac58;
  *(undefined4 *)(puVar21 + 6) = *(undefined4 *)param_2[2];
  auVar68 = *param_2;
  auVar69 = param_2[1];
  fVar70 = auVar69._0_4_;
  uVar71 = auVar69._4_4_;
  *(undefined1 (*) [16])(puVar21 + 4) = auVar69;
  *(undefined1 (*) [16])(puVar21 + 2) = auVar68;
  puVar21[7] = uVar19;
  puVar21[8] = uVar20;
  puVar21[9] = uVar67;
  local_80 = (void *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  puVar21[10] = uVar18;
  puVar21[0xb] = uVar16;
  puVar21[0xc] = uVar10;
  local_68 = (long *)0x0;
  plStack_60 = (long *)0x0;
  local_58 = 0;
  uVar67 = *(undefined8 *)(param_2[6] + 8);
  puVar21[0xf] = uVar67;
  uVar10 = *(undefined8 *)(param_2[5] + 8);
  uVar16 = *(undefined8 *)param_2[6];
  puVar21[0xd] = uVar10;
  puVar21[0xe] = uVar16;
  puVar21[0x10] = uVar11;
  local_38 = &DAT_0061ac58;
  puVar21[0x11] = puVar50;
  this_04 = (SimpleShapedText *)(puVar21 + 0x12);
  puVar21[0x12] = puVar21 + 0x11;
  puVar21[0x13] = 0;
  puVar21[0x14] = 0;
  puVar21[0x15] = 0;
  puVar21[0x16] = 0;
  puVar21[0x17] = 0;
  puVar21[0x18] = 0;
  puVar21[0x19] = 0;
  puVar21[0x1a] = 0;
  puVar21[0x1b] = 0;
  puVar21[0x1c] = 0;
  puVar21[0x1d] = 0;
  puVar21[0x1e] = 0;
  puVar21[0x1f] = 0;
  puVar21[0x20] = 0;
  puVar21[0x21] = 0;
  puVar21[0x22] = 0;
  puVar21[0x23] = 0;
  puVar21[0x24] = 0;
  puVar21[0x25] = 0;
  puVar21[0x26] = 0;
  puVar21[0x27] = 0;
  puVar21[0x28] = 0;
  puVar21[0x29] = 0;
  puVar21[0x2a] = 0;
                    /* try { // try from 00308855 to 0030886e has its CatchHandler @ 0030af68 */
  SimpleShapedText::shape
            (uVar10,uVar18,auVar68._0_8_,auVar69._0_8_,0,CONCAT44(in_XMM5_Db,in_XMM5_Da),in_XMM6_Qa,
             in_XMM7_Qa,this_04,puVar21 + 0x11,local_200,uVar67,puVar50,(ulong **)&DAT_0061ac58);
  puVar21[0x2b] = this_04;
  local_150 = (Ranges *)(puVar21 + 0x2c);
  puVar21[0x2c] = 0;
  puVar21[0x2d] = 0;
  puVar21[0x2e] = 0;
  puVar21[0x2f] = 0;
  puVar21[0x30] = 0;
  puVar21[0x31] = 0;
  *(undefined1 *)(puVar21 + 0x4b) = 0;
  local_270 = (RangedValues<juce::detail::JustifiedText::DrawType> *)(puVar21 + 0x4c);
  local_210 = (RangedValues<float> *)(puVar21 + 0x52);
  local_158 = (vector<float,std::allocator<float>> *)(puVar21 + 0x58);
  puVar21[0x4c] = 0;
  puVar21[0x4d] = 0;
  puVar21[0x4e] = 0;
  puVar21[0x4f] = 0;
  puVar21[0x50] = 0;
  puVar21[0x51] = 0;
  puVar21[0x52] = 0;
  puVar21[0x53] = 0;
  puVar21[0x54] = 0;
  puVar21[0x55] = 0;
  puVar21[0x56] = 0;
  puVar21[0x57] = 0;
  puVar21[0x58] = 0;
  puVar21[0x59] = 0;
  puVar21[0x5a] = 0;
  pfVar41 = (float *)puVar21[0x16];
  local_208 = (float *)puVar21[0x17];
  local_168 = puVar21;
  local_c8 = this_04;
  if (local_208 != pfVar41) {
    local_1f8 = puVar21[0x19];
    local_268 = (float *)0x0;
    local_240 = (float *)0x0;
    pfVar49 = (float *)0x0;
    local_228 = pfVar41;
    do {
      ppuVar31 = *(ulong ***)pfVar41;
      ppuVar37 = *(ulong ***)(pfVar41 + 2);
                    /* try { // try from 0030899c to 003089ae has its CatchHandler @ 0030afe4 */
      ppuVar25 = ppuVar37;
      RangedValues<juce::Font>::getIntersectionsWith
                ((Ranges *)&local_148,(long *)(this_04 + 0x68),(long)ppuVar31,(long)ppuVar37);
      lVar22 = uStack_140 - (long)local_148;
      if (lVar22 == 0) {
        local_2a8 = 0.0;
        fVar61 = 0.0;
      }
      else {
        lVar43 = CONCAT17((undefined1)uStack_129,uStack_130);
        lVar42 = 0;
        fVar61 = 0.0;
        local_220 = ppuVar37;
        local_218 = ppuVar31;
        do {
          lVar28 = *(long *)(lVar43 + (lVar42 >> 1));
          local_2a8 = *(float *)(lVar28 + 100);
          if (local_2a8 <= DAT_005d9058) {
            plVar36 = (long *)((lVar42 >> 1) + lVar43);
            fVar63 = *(float *)(lVar28 + 0x68);
            ppVar3 = (pthread_mutex_t *)(lVar28 + 0x80);
            pthread_mutex_lock(ppVar3);
            pthread_mutex_lock(ppVar3);
            plVar40 = *(long **)(lVar28 + 0x10);
            if (plVar40 == (long *)0x0) {
              plVar40 = *(long **)(lVar28 + 0x28);
              if (plVar40 == (long *)0x0) {
                    /* try { // try from 00308adb to 00308af2 has its CatchHandler @ 0030b024 */
                lVar23 = SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get();
                TypefaceCache::findTypefaceFor
                          ((long *)&local_1e8,lVar23,plVar36,ppuVar25,puVar50,(ulong)ppuVar53);
              }
              else {
                LOCK();
                *(int *)(plVar40 + 1) = (int)plVar40[1] + 1;
                UNLOCK();
                local_1e8 = *(ulong ***)(lVar28 + 0x28);
                if (local_1e8 != (ulong **)0x0) {
                  LOCK();
                  *(int *)(local_1e8 + 1) = (int)*(float *)(local_1e8 + 1) + 1;
                  UNLOCK();
                }
              }
              ppuVar31 = *(ulong ***)(lVar28 + 0x10);
              *(ulong ***)(lVar28 + 0x10) = local_1e8;
              local_1e8 = ppuVar31;
              if (ppuVar31 != (ulong **)0x0) {
                LOCK();
                ppuVar37 = ppuVar31 + 1;
                *(int *)ppuVar37 = (int)*(float *)ppuVar37 + -1;
                UNLOCK();
                if (*(float *)ppuVar37 == 0.0) {
                  (*(code *)(*ppuVar31)[1])();
                }
              }
              if (plVar40 != (long *)0x0) {
                LOCK();
                plVar14 = plVar40 + 1;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)*plVar14 == 0) {
                  (**(code **)(*plVar40 + 8))(plVar40);
                }
              }
              plVar40 = *(long **)(lVar28 + 0x10);
              if (plVar40 != (long *)0x0) goto LAB_00308b42;
              pthread_mutex_unlock(ppVar3);
              local_258._0_16_ = ZEXT816(0);
            }
            else {
LAB_00308b42:
              LOCK();
              *(int *)(plVar40 + 1) = (int)plVar40[1] + 1;
              UNLOCK();
              pthread_mutex_unlock(ppVar3);
                    /* try { // try from 00308b55 to 00308b5a has its CatchHandler @ 0030b159 */
              lVar23 = (**(code **)(*plVar40 + 0x18))(plVar40);
              uVar58 = *(uint *)(*plVar36 + 0x60);
              ppuVar25 = (ulong **)(ulong)uVar58;
              if (uVar58 == 1) {
                puVar24 = (undefined8 *)(lVar23 + 0x10);
LAB_00308b77:
                uVar60 = (uint)*puVar24;
                uVar62 = (uint)((ulong)*puVar24 >> 0x20);
              }
              else {
                uVar60 = 0;
                uVar62 = 0;
                if (uVar58 == 0) {
                  puVar24 = (undefined8 *)(lVar23 + 8);
                  goto LAB_00308b77;
                }
              }
              fVar64 = (float)*(undefined8 *)(lVar28 + 0x74);
              fVar65 = (float)((ulong)*(undefined8 *)(lVar28 + 0x74) >> 0x20);
              uVar58 = -(uint)(fVar64 < 0.0);
              uVar59 = -(uint)(fVar65 < 0.0);
              local_258._8_8_ = 0;
              local_258._0_8_ =
                   CONCAT44(~uVar59 & (uint)fVar65,~uVar58 & (uint)fVar64) |
                   CONCAT44(uVar62 & uVar59,uVar60 & uVar58);
              LOCK();
              plVar36 = plVar40 + 1;
              *(int *)plVar36 = (int)*plVar36 + -1;
              UNLOCK();
              if ((int)*plVar36 == 0) {
                (**(code **)(*plVar40 + 8))(plVar40);
              }
            }
            pthread_mutex_unlock(ppVar3);
            local_2a8 = fVar63 * ((float)local_258._4_4_ + (float)local_258._0_4_);
          }
          if (local_2a8 <= fVar61) {
            local_2a8 = fVar61;
          }
          lVar42 = lVar42 + 0x10;
          fVar61 = local_2a8;
        } while ((lVar22 >> 4) << 4 != lVar42);
        if (uStack_140 - (long)local_148 == 0) {
          fVar61 = 0.0;
        }
        else {
          uVar34 = CONCAT17((undefined1)uStack_129,uStack_130);
          local_260 = (uStack_140 - (long)local_148 >> 4) << 4;
          fVar61 = 0.0;
          lVar22 = 0;
          do {
            plVar40 = (long *)(uVar34 + (lVar22 >> 1));
            lVar43 = *(long *)(uVar34 + (lVar22 >> 1));
            ppVar3 = (pthread_mutex_t *)(lVar43 + 0x80);
            uVar29 = uVar34;
            pthread_mutex_lock(ppVar3);
            pthread_mutex_lock(ppVar3);
            plVar36 = *(long **)(lVar43 + 0x10);
            if (plVar36 == (long *)0x0) {
              plVar36 = *(long **)(lVar43 + 0x28);
              if (plVar36 == (long *)0x0) {
                this_03 = (TypefaceCache *)TypefaceCache::singletonHolder._40_8_;
                if (TypefaceCache::singletonHolder._40_8_ == 0) {
                  pthread_mutex_lock((pthread_mutex_t *)TypefaceCache::singletonHolder);
                  this_03 = (TypefaceCache *)TypefaceCache::singletonHolder._40_8_;
                  if (TypefaceCache::singletonHolder._40_8_ == 0) {
                    if (SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get()::
                        alreadyInside == '\0') {
                      SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get()::
                      alreadyInside = 1;
                    /* try { // try from 00308d42 to 00308d4b has its CatchHandler @ 0030af45 */
                      this_03 = operator_new(0x120);
                    /* try { // try from 00308d4f to 00308d56 has its CatchHandler @ 0030af38 */
                      TypefaceCache::TypefaceCache(this_03);
                      LOCK();
                      UNLOCK();
                      SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get()::
                      alreadyInside = '\0';
                      TypefaceCache::singletonHolder._40_8_ = this_03;
                    }
                    else {
                      this_03 = (TypefaceCache *)0x0;
                    }
                  }
                  pthread_mutex_unlock((pthread_mutex_t *)TypefaceCache::singletonHolder);
                }
                    /* try { // try from 00308d74 to 00308d86 has its CatchHandler @ 0030b008 */
                TypefaceCache::findTypefaceFor
                          ((long *)&local_1e8,(long)this_03,plVar40,uVar29,puVar50,(ulong)ppuVar53);
              }
              else {
                LOCK();
                *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
                UNLOCK();
                local_1e8 = *(ulong ***)(lVar43 + 0x28);
                if (local_1e8 != (ulong **)0x0) {
                  LOCK();
                  *(int *)(local_1e8 + 1) = (int)*(float *)(local_1e8 + 1) + 1;
                  UNLOCK();
                }
              }
              ppuVar31 = *(ulong ***)(lVar43 + 0x10);
              *(ulong ***)(lVar43 + 0x10) = local_1e8;
              local_1e8 = ppuVar31;
              if (ppuVar31 != (ulong **)0x0) {
                LOCK();
                ppuVar37 = ppuVar31 + 1;
                *(int *)ppuVar37 = (int)*(float *)ppuVar37 + -1;
                UNLOCK();
                if (*(float *)ppuVar37 == 0.0) {
                  (*(code *)(*ppuVar31)[1])();
                }
              }
              if (plVar36 != (long *)0x0) {
                LOCK();
                plVar14 = plVar36 + 1;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)*plVar14 == 0) {
                  (**(code **)(*plVar36 + 8))(plVar36);
                }
              }
              plVar36 = *(long **)(lVar43 + 0x10);
              if (plVar36 != (long *)0x0) goto LAB_00308dd2;
              pthread_mutex_unlock(ppVar3);
              local_258._0_16_ = ZEXT816(0);
            }
            else {
LAB_00308dd2:
              LOCK();
              *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
              UNLOCK();
              pthread_mutex_unlock(ppVar3);
                    /* try { // try from 00308de2 to 00308de7 has its CatchHandler @ 0030b17f */
              lVar42 = (**(code **)(*plVar36 + 0x18))(plVar36);
              uVar58 = *(uint *)(*plVar40 + 0x60);
              uVar29 = (ulong)uVar58;
              if (uVar58 == 1) {
                puVar24 = (undefined8 *)(lVar42 + 0x10);
LAB_00308e04:
                uVar60 = (uint)*puVar24;
                uVar62 = (uint)((ulong)*puVar24 >> 0x20);
              }
              else {
                uVar60 = 0;
                uVar62 = 0;
                if (uVar58 == 0) {
                  puVar24 = (undefined8 *)(lVar42 + 8);
                  goto LAB_00308e04;
                }
              }
              fVar70 = (float)*(undefined8 *)(lVar43 + 0x74);
              fVar63 = (float)((ulong)*(undefined8 *)(lVar43 + 0x74) >> 0x20);
              uVar58 = -(uint)(fVar70 < 0.0);
              uVar59 = -(uint)(fVar63 < 0.0);
              local_258._8_8_ = 0;
              local_258._0_8_ =
                   CONCAT44(~uVar59 & (uint)fVar63,~uVar58 & (uint)fVar70) |
                   CONCAT44(uVar62 & uVar59,uVar60 & uVar58);
              LOCK();
              plVar14 = plVar36 + 1;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)*plVar14 == 0) {
                (**(code **)(*plVar36 + 8))(plVar36);
              }
            }
            pthread_mutex_unlock(ppVar3);
            lVar43 = *plVar40;
            fVar70 = *(float *)(lVar43 + 100);
            if (fVar70 <= DAT_005d9058) {
              fVar70 = *(float *)(lVar43 + 0x68);
              ppVar3 = (pthread_mutex_t *)(lVar43 + 0x80);
              pthread_mutex_lock(ppVar3);
              pthread_mutex_lock(ppVar3);
              plVar36 = *(long **)(lVar43 + 0x10);
              if (plVar36 == (long *)0x0) {
                plVar36 = *(long **)(lVar43 + 0x28);
                if (plVar36 == (long *)0x0) {
                    /* try { // try from 00308ec7 to 00308ede has its CatchHandler @ 0030aff8 */
                  lVar42 = SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get();
                  TypefaceCache::findTypefaceFor
                            ((long *)&local_1e8,lVar42,plVar40,uVar29,puVar50,(ulong)ppuVar53);
                }
                else {
                  LOCK();
                  *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
                  UNLOCK();
                  local_1e8 = *(ulong ***)(lVar43 + 0x28);
                  if (local_1e8 != (ulong **)0x0) {
                    LOCK();
                    *(int *)(local_1e8 + 1) = (int)*(float *)(local_1e8 + 1) + 1;
                    UNLOCK();
                  }
                }
                ppuVar31 = *(ulong ***)(lVar43 + 0x10);
                *(ulong ***)(lVar43 + 0x10) = local_1e8;
                local_1e8 = ppuVar31;
                if (ppuVar31 != (ulong **)0x0) {
                  LOCK();
                  ppuVar37 = ppuVar31 + 1;
                  *(int *)ppuVar37 = (int)*(float *)ppuVar37 + -1;
                  UNLOCK();
                  if (*(float *)ppuVar37 == 0.0) {
                    (*(code *)(*ppuVar31)[1])();
                  }
                }
                if (plVar36 != (long *)0x0) {
                  LOCK();
                  plVar14 = plVar36 + 1;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)*plVar14 == 0) {
                    (**(code **)(*plVar36 + 8))(plVar36);
                  }
                }
                plVar36 = *(long **)(lVar43 + 0x10);
                if (plVar36 != (long *)0x0) goto LAB_00308f2c;
                pthread_mutex_unlock(ppVar3);
                local_238 = ZEXT816(0);
              }
              else {
LAB_00308f2c:
                LOCK();
                *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
                UNLOCK();
                pthread_mutex_unlock(ppVar3);
                    /* try { // try from 00308f3d to 00308f42 has its CatchHandler @ 0030b135 */
                lVar42 = (**(code **)(*plVar36 + 0x18))(plVar36);
                if (*(int *)(*plVar40 + 0x60) == 1) {
                  puVar24 = (undefined8 *)(lVar42 + 0x10);
LAB_00308f5f:
                  uVar58 = (uint)*puVar24;
                  uVar60 = (uint)((ulong)*puVar24 >> 0x20);
                }
                else {
                  uVar58 = 0;
                  uVar60 = 0;
                  if (*(int *)(*plVar40 + 0x60) == 0) {
                    puVar24 = (undefined8 *)(lVar42 + 8);
                    goto LAB_00308f5f;
                  }
                }
                fVar63 = (float)*(undefined8 *)(lVar43 + 0x74);
                fVar64 = (float)((ulong)*(undefined8 *)(lVar43 + 0x74) >> 0x20);
                uVar62 = -(uint)(fVar63 < 0.0);
                uVar59 = -(uint)(fVar64 < 0.0);
                local_238._8_8_ = 0;
                local_238._0_8_ =
                     CONCAT44(~uVar59 & (uint)fVar64,~uVar62 & (uint)fVar63) |
                     CONCAT44(uVar60 & uVar59,uVar58 & uVar62);
                LOCK();
                plVar40 = plVar36 + 1;
                *(int *)plVar40 = (int)*plVar40 + -1;
                UNLOCK();
                if ((int)*plVar40 == 0) {
                  (**(code **)(*plVar36 + 8))(plVar36);
                }
              }
              pthread_mutex_unlock(ppVar3);
              fVar70 = fVar70 * ((float)local_238._4_4_ + (float)local_238._0_4_);
            }
            uVar71 = 0;
            fVar63 = (DAT_005d9038 / (local_258._4_4_ + local_258._0_4_)) * local_258._0_4_ * fVar70
            ;
            if (fVar63 <= fVar61) {
              fVar63 = fVar61;
            }
            fVar61 = fVar63;
            lVar22 = lVar22 + 0x10;
          } while (local_260 != lVar22);
        }
        ppuVar37 = local_220;
        ppuVar31 = local_218;
      }
      lVar22 = *(long *)(puVar21[0x2b] + 8);
      ppuVar53 = (ulong **)(*(long *)(puVar21[0x2b] + 0x10) - lVar22 >> 5);
      if ((long)ppuVar53 < 0) {
        ppuVar53 = (ulong **)0x0;
      }
      ppuVar25 = (ulong **)0x0;
      if (-1 < (long)ppuVar31) {
        ppuVar25 = ppuVar31;
      }
      if ((long)ppuVar37 <= (long)ppuVar53) {
        ppuVar53 = ppuVar37;
      }
      lVar43 = (long)ppuVar25 * 0x20;
      pfVar33 = (float *)(lVar22 + lVar43);
      uVar34 = (long)ppuVar53 - (long)ppuVar25;
      if (uVar34 == 0 || (long)ppuVar53 < (long)ppuVar25) {
        uVar34 = 0;
      }
      if (uVar34 == 0) {
        fVar63 = 0.0;
        fVar64 = 0.0;
      }
      else {
        if ((long)ppuVar53 < (long)ppuVar31) {
          ppuVar53 = ppuVar31;
        }
        if ((long)ppuVar53 < 1) {
          ppuVar53 = (ulong **)0x0;
        }
        fVar63 = 0.0;
        do {
          fVar63 = fVar63 + *(float *)(lVar22 + lVar43);
          lVar43 = lVar43 + 0x20;
        } while ((long)ppuVar53 * 0x20 != lVar43);
        pfVar26 = pfVar33 + uVar34 * 8 + -8;
        fVar64 = 0.0;
        if (pfVar33 <= pfVar26) {
          fVar64 = 0.0;
          do {
            if (*(char *)((long)pfVar26 + 0x1d) == '\0') break;
            fVar64 = fVar64 + *pfVar26;
            pfVar26 = pfVar26 + -8;
          } while (pfVar33 <= pfVar26);
        }
        fVar64 = fVar63 - fVar64;
      }
      local_1f0 = (undefined1  [8])CONCAT44(fVar64,fVar63);
      puVar50 = *(uint **)((long)puVar21 + 0x1c);
      ppuVar53 = *(ulong ***)((long)puVar21 + 0x24);
      getMainAxisLineAlignment
                (CONCAT44(fVar64,fVar63),(float *)&local_1e8,(byte)*(undefined4 *)(puVar21 + 2),
                 uVar34,(ulong)pfVar33,(ulong)puVar50,(ulong)ppuVar53,
                 *(char *)((long)puVar21 + 0x76));
      puVar24 = (undefined8 *)puVar21[0x2b];
      this_00 = (String *)*puVar24;
      lVar22 = puVar24[1];
      uVar58 = juce::String::operator[](this_00,*(int *)((long)ppuVar37 * 0x20 + -0x10 + lVar22));
      if (((uVar58 == 10) ||
          (uVar58 = juce::String::operator[]
                              (this_00,*(int *)(lVar22 + 0x10 + (long)ppuVar31 * 0x20)),
          uVar58 == 10)) ||
         (*(long *)(local_1f8 + ((long)pfVar41 - (long)local_228 >> 4) * 8) ==
          *(long *)(puVar24[8] + -8))) {
        local_1e8 = (ulong **)((ulong)local_1e8 & 0xffffffff);
        local_1d8 = 0;
        uStack_1d0 = 0;
      }
      local_288 = local_1d8;
      uVar67 = local_288;
      uStack_280 = uStack_1d0;
      uVar10 = uStack_280;
      local_298 = local_1e8;
      ppuStack_290 = (ulong **)puStack_1e0;
      if (local_268 == local_240) {
        lVar22 = (long)local_268 - (long)pfVar49;
        if (lVar22 == 0x7ffffffffffffff8) {
                    /* try { // try from 0030ad18 to 0030ad23 has its CatchHandler @ 0030afc4 */
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        lVar43 = lVar22 >> 3;
        uVar29 = lVar43 * -0x3333333333333333;
        uVar34 = uVar29;
        if (lVar22 == 0) {
          uVar34 = 1;
        }
        uVar39 = uVar34 + uVar29;
        if (0x333333333333333 < uVar39) {
          uVar39 = 0x333333333333333;
        }
        if (CARRY8(uVar34,uVar29)) {
          uVar39 = 0x333333333333333;
        }
                    /* try { // try from 00309222 to 00309226 has its CatchHandler @ 0030afcd */
        pfVar26 = operator_new(uVar39 * 0x28);
        pfVar26[lVar43 * 2] = local_2a8;
        pfVar26[lVar43 * 2 + 1] = fVar61;
        *(ulong ***)(pfVar26 + lVar43 * 2 + 2) = local_1e8;
        *(undefined8 **)(pfVar26 + lVar43 * 2 + 2 + 2) = puStack_1e0;
        pfVar33 = pfVar26 + lVar43 * 2 + 6;
        *pfVar33 = (float)local_1d8;
        pfVar33[1] = local_1d8._4_4_;
        pfVar33[2] = (float)uStack_1d0;
        pfVar33[3] = uStack_1d0._4_4_;
        pfVar33 = pfVar26;
        if (pfVar49 != local_268) {
          pfVar30 = pfVar49;
          do {
            *(undefined8 *)(pfVar33 + 8) = *(undefined8 *)(pfVar30 + 8);
            uVar67 = *(undefined8 *)pfVar30;
            uVar10 = *(undefined8 *)(pfVar30 + 2);
            fVar61 = pfVar30[5];
            fVar63 = pfVar30[6];
            fVar64 = pfVar30[7];
            pfVar33[4] = pfVar30[4];
            pfVar33[5] = fVar61;
            pfVar33[6] = fVar63;
            pfVar33[7] = fVar64;
            *(undefined8 *)pfVar33 = uVar67;
            *(undefined8 *)(pfVar33 + 2) = uVar10;
            pfVar30 = pfVar30 + 10;
            pfVar33 = pfVar33 + 10;
          } while (pfVar30 != local_268);
        }
        if (pfVar49 != (float *)0x0) {
          operator_delete(pfVar49);
        }
        local_240 = pfVar26 + uVar39 * 10;
      }
      else {
        *local_268 = local_2a8;
        local_268[1] = fVar61;
        local_288._0_4_ = (float)local_1d8;
        local_288._4_4_ = (float)((ulong)local_1d8 >> 0x20);
        uStack_280._0_4_ = (float)uStack_1d0;
        uStack_280._4_4_ = (float)((ulong)uStack_1d0 >> 0x20);
        *(ulong ***)(local_268 + 2) = local_1e8;
        *(undefined8 **)(local_268 + 4) = puStack_1e0;
        local_268[6] = (float)local_288;
        local_268[7] = local_288._4_4_;
        local_268[8] = (float)uStack_280;
        local_268[9] = uStack_280._4_4_;
        pfVar26 = pfVar49;
        pfVar33 = local_268;
        local_288 = uVar67;
        uStack_280 = uVar10;
      }
      bVar57 = *(char *)((long)puVar21 + 0x76) == '\0';
      puVar24 = (undefined8 *)local_1f0;
      if (bVar57) {
        puVar24 = (undefined8 *)((long)local_1f0 + 4);
      }
      puVar44 = (undefined4 *)puVar21[0x59];
      if (puVar44 == (undefined4 *)puVar21[0x5a]) {
                    /* try { // try from 00309320 to 0030932c has its CatchHandler @ 0030afc6 */
        std::vector<float,std::allocator<float>>::_M_realloc_insert<float_const&>
                  (local_158,puVar44,(undefined4 *)puVar24);
      }
      else {
        *puVar44 = *(undefined4 *)((long)local_1f0 + (ulong)bVar57 * 4);
        puVar21[0x59] = puVar44 + 1;
      }
      plVar40 = (long *)CONCAT17((undefined1)uStack_129,uStack_130);
      plVar36 = (long *)CONCAT17(uStack_121,CONCAT43(uStack_125,uStack_129._1_3_));
      if (plVar40 != plVar36) {
        do {
          plVar14 = (long *)*plVar40;
          if (plVar14 != (long *)0x0) {
            LOCK();
            plVar15 = plVar14 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)(*plVar14 + 8))();
            }
          }
          plVar40 = plVar40 + 1;
        } while (plVar40 != plVar36);
        plVar40 = (long *)CONCAT17((undefined1)uStack_129,uStack_130);
      }
      if (plVar40 != (long *)0x0) {
        operator_delete(plVar40);
      }
      if (local_148 != (void *)0x0) {
        operator_delete(local_148);
      }
      pfVar33 = pfVar33 + 10;
      pfVar41 = pfVar41 + 4;
      if (pfVar41 == local_208) goto LAB_003093ca;
      this_04 = (SimpleShapedText *)puVar21[0x2b];
      pfVar49 = pfVar26;
      local_268 = pfVar33;
    } while( true );
  }
  pfVar33 = (float *)0x0;
  pfVar26 = (float *)0x0;
LAB_003093ca:
  fVar61 = 0.0;
  if ((*(char *)((long)puVar21 + 0x74) == '\0') && ((long)pfVar33 - (long)pfVar26 != 0)) {
    fVar63 = *(float *)((long)puVar21 + 0x6c);
    fVar64 = pfVar26[1];
    fVar61 = fVar63 * fVar64;
    if ((*(ulong *)((long)puVar21 + 0x2c) & 0xff00000000) != 0) {
      fVar65 = (float)*(ulong *)((long)puVar21 + 0x2c);
      fVar70 = 0.0;
      uVar71 = 0;
      lVar22 = 0;
      do {
        uVar73 = 0;
        fVar72 = *(float *)((long)pfVar26 + lVar22) * fVar63;
        fVar70 = fVar70 + fVar72;
        lVar22 = lVar22 + 0x28;
      } while ((((long)pfVar33 - (long)pfVar26) / 0x28) * 0x28 != lVar22);
      if ((*(uint *)(puVar21 + 2) & 0x20) == 0) {
        if ((*(uint *)(puVar21 + 2) & 0x10) != 0) {
          fVar61 = fVar63 * fVar64 + (fVar65 - fVar70);
        }
      }
      else {
        fVar61 = fVar64 + (fVar65 - fVar70) * DAT_005d9044;
      }
    }
  }
  local_298 = (ulong **)0x0;
  ppuStack_290 = (ulong **)0x0;
  local_288 = 0;
  if (pfVar26 != pfVar33) {
    local_c0 = (long)((int)((ulong)((long)pfVar33 - (long)pfVar26) >> 3) * -0x33333333 + -1);
    fVar63 = *(float *)((long)puVar21 + 0x6c);
    bVar57 = true;
    lVar22 = 0;
    pfVar41 = pfVar26;
    do {
      fVar70 = pfVar41[1] * fVar63;
      local_260 = CONCAT44(local_260._4_4_,fVar70);
      if (bVar57) {
        local_2a8 = fVar61 - fVar70;
      }
      local_238._0_4_ = local_2a8;
      lVar43 = *(long *)(puVar21[0x2b] + 0x20);
      ppuVar31 = *(ulong ***)(lVar43 + lVar22 * 0x10);
      local_1f8 = *(ulong *)(lVar43 + 8 + lVar22 * 0x10);
      fVar63 = fVar63 * (*pfVar41 - pfVar41[1]);
      local_2a8 = fVar63 + fVar61 + *(float *)(puVar21 + 0xe);
      local_268 = *(float **)(*(long *)(puVar21[0x2b] + 0x38) + lVar22 * 8);
      fVar64 = pfVar41[2];
      local_240 = (float *)CONCAT44(local_240._4_4_,pfVar41[4] + pfVar41[3]);
                    /* try { // try from 0030951d to 0030959c has its CatchHandler @ 0030b018 */
      local_208 = pfVar41;
      local_b0 = lVar22;
      Ranges::set(local_150,(ulong)ppuVar31,local_1f8,&local_298);
      fVar70 = (float)local_260;
      if (0x5e < ((long)ppuStack_290 - (long)local_298) + 0x2fU) {
        ppuVar37 = local_298 + (((long)ppuStack_290 - (long)local_298) / 0x30) * 6;
        ppuVar53 = local_298;
        local_220 = ppuVar37;
        local_218 = ppuVar31;
        do {
          cVar9 = *(char *)(ppuVar53 + 5);
          if (cVar9 == '\x02') {
            puVar13 = *ppuVar53;
            puVar51 = ppuVar53[1];
            if (puVar13 != puVar51) {
              lVar43 = puVar21[0x2f];
              lVar22 = lVar43 + (long)puVar51 * 0x28;
              uVar34 = puVar21[0x30] - lVar22;
              if (uVar34 == 0) {
                lVar42 = lVar22;
              }
              else if ((long)uVar34 < 1) {
                lVar42 = puVar21[0x30];
              }
              else {
                uVar34 = uVar34 / 0x28 + 1;
                lVar42 = (long)puVar13 * 0x28;
                lVar28 = (long)puVar51 * 0x28;
                lVar23 = lVar43;
                do {
                  *(undefined4 *)(lVar23 + 0x20 + lVar42) = *(undefined4 *)(lVar23 + 0x20 + lVar28);
                  puVar44 = (undefined4 *)(lVar23 + lVar28);
                  uVar71 = *puVar44;
                  uVar74 = puVar44[1];
                  uVar66 = puVar44[2];
                  uVar17 = puVar44[3];
                  puVar24 = (undefined8 *)(lVar23 + 0x10 + lVar28);
                  uVar67 = puVar24[1];
                  puVar32 = (undefined8 *)(lVar23 + 0x10 + lVar42);
                  *puVar32 = *puVar24;
                  puVar32[1] = uVar67;
                  puVar44 = (undefined4 *)(lVar23 + lVar42);
                  *puVar44 = uVar71;
                  puVar44[1] = uVar74;
                  puVar44[2] = uVar66;
                  puVar44[3] = uVar17;
                  uVar34 = uVar34 - 1;
                  lVar23 = lVar23 + 0x28;
                } while (1 < uVar34);
                lVar42 = puVar21[0x30];
              }
              lVar22 = (lVar42 - lVar22) + lVar43 + (long)puVar13 * 0x28;
              if (lVar42 != lVar22) {
                puVar21[0x30] = lVar22;
              }
            }
          }
          else if (cVar9 == '\x01') {
            pvVar12 = (void *)puVar21[0x2f];
            puVar32 = (undefined8 *)puVar21[0x30];
            puVar13 = *ppuVar53;
            puVar24 = (undefined8 *)((long)pvVar12 + (long)puVar13 * 0x28);
            if (puVar32 == (undefined8 *)puVar21[0x31]) {
              lVar22 = (long)puVar32 - (long)pvVar12;
              if (lVar22 == 0x7ffffffffffffff8) {
                    /* try { // try from 0030ad00 to 0030ad17 has its CatchHandler @ 0030b034 */
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              uVar29 = (lVar22 >> 3) * -0x3333333333333333;
              uVar34 = uVar29;
              if (lVar22 == 0) {
                uVar34 = 1;
              }
              local_228 = (float *)(uVar34 + uVar29);
              if ((float *)0x333333333333333 < local_228) {
                local_228 = (float *)0x333333333333333;
              }
              if (CARRY8(uVar34,uVar29)) {
                local_228 = (float *)0x333333333333333;
              }
              if (local_228 == (float *)0x0) {
                pvVar27 = (void *)0x0;
                puVar51 = puVar13;
              }
              else {
                local_b8 = puVar13;
                    /* try { // try from 003099dd to 00309a76 has its CatchHandler @ 0030b022 */
                pvVar27 = operator_new((long)local_228 * 0x28);
                puVar51 = local_b8;
              }
              *(undefined8 *)((long)pvVar27 + (long)puVar13 * 0x28 + 0x20) = puVar24[4];
              uVar71 = *(undefined4 *)puVar24;
              uVar74 = *(undefined4 *)((long)puVar24 + 4);
              uVar66 = *(undefined4 *)(puVar24 + 1);
              uVar17 = *(undefined4 *)((long)puVar24 + 0xc);
              uVar67 = puVar24[3];
              puVar5 = (undefined8 *)((long)pvVar27 + (long)puVar13 * 0x28 + 0x10);
              *puVar5 = puVar24[2];
              puVar5[1] = uVar67;
              puVar44 = (undefined4 *)((long)pvVar27 + (long)puVar13 * 0x28);
              *puVar44 = uVar71;
              puVar44[1] = uVar74;
              puVar44[2] = uVar66;
              puVar44[3] = uVar17;
              pvVar45 = pvVar27;
              if (puVar51 != (ulong *)0x0) {
                lVar22 = 0;
                do {
                  *(undefined8 *)((long)pvVar27 + lVar22 + 0x20) =
                       *(undefined8 *)((long)pvVar12 + lVar22 + 0x20);
                  puVar44 = (undefined4 *)((long)pvVar12 + lVar22);
                  uVar71 = *puVar44;
                  uVar74 = puVar44[1];
                  uVar66 = puVar44[2];
                  uVar17 = puVar44[3];
                  puVar5 = (undefined8 *)((long)pvVar12 + lVar22 + 0x10);
                  uVar67 = puVar5[1];
                  puVar6 = (undefined8 *)((long)pvVar27 + lVar22 + 0x10);
                  *puVar6 = *puVar5;
                  puVar6[1] = uVar67;
                  puVar44 = (undefined4 *)((long)pvVar27 + lVar22);
                  *puVar44 = uVar71;
                  puVar44[1] = uVar74;
                  puVar44[2] = uVar66;
                  puVar44[3] = uVar17;
                  lVar22 = lVar22 + 0x28;
                } while ((long)puVar51 * 0x28 != lVar22);
                pvVar45 = (void *)(lVar22 + (long)pvVar27);
              }
              puVar44 = (undefined4 *)((long)pvVar45 + 0x28);
              local_258._0_8_ = ppuVar53;
              for (; puVar32 != puVar24; puVar24 = puVar24 + 5) {
                *(undefined8 *)(puVar44 + 8) = puVar24[4];
                uVar71 = *(undefined4 *)puVar24;
                uVar74 = *(undefined4 *)((long)puVar24 + 4);
                uVar66 = *(undefined4 *)(puVar24 + 1);
                uVar17 = *(undefined4 *)((long)puVar24 + 0xc);
                uVar67 = puVar24[3];
                *(undefined8 *)(puVar44 + 4) = puVar24[2];
                *(undefined8 *)(puVar44 + 6) = uVar67;
                *puVar44 = uVar71;
                puVar44[1] = uVar74;
                puVar44[2] = uVar66;
                puVar44[3] = uVar17;
                puVar44 = puVar44 + 10;
              }
              if (pvVar12 != (void *)0x0) {
                operator_delete(pvVar12);
              }
              puVar21[0x2f] = pvVar27;
              puVar21[0x30] = puVar44;
              puVar21[0x31] = (void *)((long)pvVar27 + (long)local_228 * 0x28);
              ppuVar53 = (ulong **)local_258._0_8_;
              ppuVar31 = local_218;
              ppuVar37 = local_220;
              fVar70 = (float)local_260;
            }
            else {
              if (puVar32 == puVar24) {
                puVar21[0x30] = puVar21[0x30] + 0x28;
              }
              else {
                uVar8 = *(undefined1 *)puVar24;
                uStack_125 = (undefined4)((ulong)puVar24[4] >> 0x20);
                local_138 = *(long *)((long)puVar24 + 0x11);
                uVar67 = *(undefined8 *)((long)puVar24 + 0x19);
                uStack_130 = (undefined7)uVar67;
                uStack_129._1_3_ = (undefined3)((ulong)puVar24[4] >> 8);
                uStack_129._0_1_ = (undefined1)((ulong)uVar67 >> 0x38);
                pvVar12 = *(void **)((long)puVar24 + 1);
                lVar43 = *(long *)((long)puVar24 + 9);
                puVar32[4] = puVar32[-1];
                puVar32[2] = puVar32[-3];
                puVar32[3] = puVar32[-2];
                *puVar32 = puVar32[-5];
                puVar32[1] = puVar32[-4];
                lVar22 = puVar21[0x30];
                puVar21[0x30] = lVar22 + 0x28;
                puVar32 = (undefined8 *)(lVar22 + -0x28);
                if (0 < (long)puVar32 - (long)puVar24) {
                  uVar34 = (ulong)((long)puVar32 - (long)puVar24) / 0x28 + 1;
                  do {
                    *(undefined4 *)(puVar32 + 4) = *(undefined4 *)(puVar32 + -1);
                    puVar32[2] = puVar32[-3];
                    puVar32[3] = puVar32[-2];
                    *puVar32 = puVar32[-5];
                    puVar32[1] = puVar32[-4];
                    puVar32 = puVar32 + -5;
                    uVar34 = uVar34 - 1;
                  } while (1 < uVar34);
                }
                *(undefined1 *)puVar24 = uVar8;
                *(undefined4 *)(puVar24 + 4) = uStack_129;
                local_148._0_4_ = SUB84(pvVar12,0);
                local_148._4_4_ = (undefined4)((ulong)pvVar12 >> 0x20);
                uStack_140._0_4_ = (undefined4)lVar43;
                uStack_140._4_4_ = (undefined4)((ulong)lVar43 >> 0x20);
                *(long *)((long)puVar24 + 0x11) = local_138;
                *(undefined8 *)((long)puVar24 + 0x19) = uVar67;
                *(float *)((long)puVar24 + 1) = (float)local_148;
                *(undefined4 *)((long)puVar24 + 5) = local_148._4_4_;
                *(undefined4 *)((long)puVar24 + 9) = (undefined4)uStack_140;
                *(undefined4 *)((long)puVar24 + 0xd) = uStack_140._4_4_;
                local_148 = pvVar12;
                uStack_140 = lVar43;
              }
LAB_00309660:
            }
          }
          else if (cVar9 == '\0') {
            pvVar12 = (void *)puVar21[0x2f];
            puVar32 = (undefined8 *)puVar21[0x30];
            puVar13 = *ppuVar53;
            puVar24 = (undefined8 *)((long)pvVar12 + (long)puVar13 * 0x28);
            if (puVar32 != (undefined8 *)puVar21[0x31]) {
              if (puVar32 == puVar24) {
                *puVar24 = local_268;
                *(float *)((long)pvVar12 + (long)puVar13 * 0x28 + 8) = fVar64;
                *(float *)((long)pvVar12 + (long)puVar13 * 0x28 + 0xc) = fVar61;
                *(float *)((long)pvVar12 + (long)puVar13 * 0x28 + 0x10) = fVar70;
                *(float *)((long)pvVar12 + (long)puVar13 * 0x28 + 0x14) = fVar63;
                *(undefined4 *)((long)pvVar12 + (long)puVar13 * 0x28 + 0x18) = local_240._0_4_;
                *(undefined4 *)((long)pvVar12 + (long)puVar13 * 0x28 + 0x1c) = local_238._0_4_;
                *(float *)((long)pvVar12 + (long)puVar13 * 0x28 + 0x20) = local_2a8;
                puVar21[0x30] = puVar21[0x30] + 0x28;
              }
              else {
                puVar32[4] = puVar32[-1];
                puVar32[2] = puVar32[-3];
                puVar32[3] = puVar32[-2];
                *puVar32 = puVar32[-5];
                puVar32[1] = puVar32[-4];
                lVar22 = puVar21[0x30];
                puVar21[0x30] = lVar22 + 0x28;
                puVar32 = (undefined8 *)(lVar22 + -0x28);
                if (0 < (long)puVar32 - (long)puVar24) {
                  uVar34 = (ulong)((long)puVar32 - (long)puVar24) / 0x28 + 1;
                  do {
                    *(undefined4 *)(puVar32 + 4) = *(undefined4 *)(puVar32 + -1);
                    puVar32[2] = puVar32[-3];
                    puVar32[3] = puVar32[-2];
                    *puVar32 = puVar32[-5];
                    puVar32[1] = puVar32[-4];
                    puVar32 = puVar32 + -5;
                    uVar34 = uVar34 - 1;
                  } while (1 < uVar34);
                }
                *puVar24 = local_268;
                *(float *)((long)pvVar12 + (long)puVar13 * 0x28 + 8) = fVar64;
                *(float *)((long)pvVar12 + (long)puVar13 * 0x28 + 0xc) = fVar61;
                *(float *)((long)pvVar12 + (long)puVar13 * 0x28 + 0x10) = fVar70;
                *(float *)((long)pvVar12 + (long)puVar13 * 0x28 + 0x14) = fVar63;
                *(undefined4 *)((long)pvVar12 + (long)puVar13 * 0x28 + 0x18) = local_240._0_4_;
                *(undefined4 *)((long)pvVar12 + (long)puVar13 * 0x28 + 0x1c) = local_238._0_4_;
                *(float *)((long)pvVar12 + (long)puVar13 * 0x28 + 0x20) = local_2a8;
              }
              goto LAB_00309660;
            }
            local_258._0_8_ = ppuVar53;
            lVar22 = (long)puVar32 - (long)pvVar12;
            if (lVar22 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("vector::_M_realloc_insert");
            }
            uVar29 = (lVar22 >> 3) * -0x3333333333333333;
            uVar34 = uVar29;
            if (lVar22 == 0) {
              uVar34 = 1;
            }
            local_228 = (float *)(uVar34 + uVar29);
            if ((float *)0x333333333333333 < local_228) {
              local_228 = (float *)0x333333333333333;
            }
            if (CARRY8(uVar34,uVar29)) {
              local_228 = (float *)0x333333333333333;
            }
            pvVar27 = operator_new((long)local_228 * 0x28);
            *(float **)((long)pvVar27 + (long)puVar13 * 0x28) = local_268;
            *(float *)((long)pvVar27 + (long)puVar13 * 0x28 + 8) = fVar64;
            *(float *)((long)pvVar27 + (long)puVar13 * 0x28 + 0xc) = fVar61;
            *(float *)((long)pvVar27 + (long)puVar13 * 0x28 + 0x10) = (float)local_260;
            *(float *)((long)pvVar27 + (long)puVar13 * 0x28 + 0x14) = fVar63;
            *(undefined4 *)((long)pvVar27 + (long)puVar13 * 0x28 + 0x18) = local_240._0_4_;
            *(undefined4 *)((long)pvVar27 + (long)puVar13 * 0x28 + 0x1c) = local_238._0_4_;
            *(float *)((long)pvVar27 + (long)puVar13 * 0x28 + 0x20) = local_2a8;
            if (puVar13 == (ulong *)0x0) {
              puVar44 = (undefined4 *)((long)pvVar27 + 0x28);
            }
            else {
              lVar22 = 0;
              do {
                lVar43 = lVar22;
                *(undefined8 *)((long)pvVar27 + lVar43 + 0x20) =
                     *(undefined8 *)((long)pvVar12 + lVar43 + 0x20);
                puVar44 = (undefined4 *)((long)pvVar12 + lVar43);
                uVar71 = *puVar44;
                uVar74 = puVar44[1];
                uVar66 = puVar44[2];
                uVar17 = puVar44[3];
                puVar5 = (undefined8 *)((long)pvVar12 + lVar43 + 0x10);
                uVar67 = puVar5[1];
                puVar6 = (undefined8 *)((long)pvVar27 + lVar43 + 0x10);
                *puVar6 = *puVar5;
                puVar6[1] = uVar67;
                puVar44 = (undefined4 *)((long)pvVar27 + lVar43);
                *puVar44 = uVar71;
                puVar44[1] = uVar74;
                puVar44[2] = uVar66;
                puVar44[3] = uVar17;
                lVar22 = lVar43 + 0x28;
              } while ((long)puVar13 * 0x28 != lVar43 + 0x28);
              puVar44 = (undefined4 *)((long)pvVar27 + lVar43 + 0x50);
            }
            for (; puVar32 != puVar24; puVar24 = puVar24 + 5) {
              *(undefined8 *)(puVar44 + 8) = puVar24[4];
              uVar71 = *(undefined4 *)puVar24;
              uVar74 = *(undefined4 *)((long)puVar24 + 4);
              uVar66 = *(undefined4 *)(puVar24 + 1);
              uVar17 = *(undefined4 *)((long)puVar24 + 0xc);
              uVar67 = puVar24[3];
              *(undefined8 *)(puVar44 + 4) = puVar24[2];
              *(undefined8 *)(puVar44 + 6) = uVar67;
              *puVar44 = uVar71;
              puVar44[1] = uVar74;
              puVar44[2] = uVar66;
              puVar44[3] = uVar17;
              puVar44 = puVar44 + 10;
            }
            if (pvVar12 != (void *)0x0) {
              operator_delete(pvVar12);
            }
            puVar21[0x2f] = pvVar27;
            puVar21[0x30] = puVar44;
            puVar21[0x31] = (void *)((long)pvVar27 + (long)local_228 * 0x28);
            ppuVar53 = (ulong **)local_258._0_8_;
            ppuVar31 = local_218;
            ppuVar37 = local_220;
            fVar70 = (float)local_260;
          }
          ppuVar53 = ppuVar53 + 6;
        } while (ppuVar53 != ppuVar37);
      }
      uVar71 = 0;
      ppuVar53 = ppuVar31;
      RangedValues<float>::set<juce::detail::MergeEqualItemsYes>
                (0,local_210,(ulong)ppuVar31,local_1f8,(long *)&local_298);
      puVar46 = (undefined1 *)(*(long *)(local_208 + 6) + (long)ppuVar31);
      puVar38 = (undefined1 *)((long)ppuVar31 + *(long *)(local_208 + 8));
      if ((long)ppuVar31 + *(long *)(local_208 + 8) <= (long)puVar46) {
        puVar38 = puVar46;
      }
                    /* try { // try from 003095bc to 003095ce has its CatchHandler @ 0030aff6 */
      RangedValues<float>::set<juce::detail::MergeEqualItemsYes>
                (local_208[3],local_210,(ulong)puVar46,(ulong)puVar38,(long *)&local_298);
      if (ppuStack_290 != local_298) {
        ppuStack_290 = local_298;
      }
      lVar22 = local_b0 + 1;
      fVar61 = 0.0;
      if (local_b0 < local_c0) {
        fVar61 = pfVar26[lVar22 * 10 + 1];
      }
      fVar63 = *(float *)((long)puVar21 + 0x6c);
      fVar61 = fVar61 * fVar63 + local_2a8;
      pfVar41 = local_208 + 10;
      bVar57 = false;
    } while (pfVar41 != pfVar33);
  }
  uVar74 = 0;
  uVar34 = *(long *)(puVar21[0x2b] + 0x10) - *(long *)(puVar21[0x2b] + 8) >> 5;
  if ((long)uVar34 < 0) {
    uVar34 = 0;
  }
                    /* try { // try from 00309ddc to 00309dee has its CatchHandler @ 0030af60 */
  RangedValues<juce::detail::JustifiedText::DrawType>::set<juce::detail::MergeEqualItemsYes>
            (local_270,0,uVar34,0,(long *)&local_298);
  if (*(char *)((long)puVar21 + 0x77) == '\0') {
    lVar22 = puVar21[0x2c];
    if (lVar22 != puVar21[0x2d]) {
      lVar43 = puVar21[0x2f];
      lVar28 = (puVar21[0x30] - lVar43 >> 3) * -0x3333333333333333 + -1;
      pfVar41 = *(float **)(lVar22 + lVar28 * 0x10);
      lVar42 = *(long *)(puVar21[0x2b] + 8);
      pfVar49 = (float *)(*(long *)(puVar21[0x2b] + 0x10) - lVar42 >> 5);
      if ((long)pfVar49 < 0) {
        pfVar49 = (float *)0x0;
      }
      pfVar33 = (float *)0x0;
      if (-1 < (long)pfVar41) {
        pfVar33 = pfVar41;
      }
      pfVar30 = *(float **)(lVar22 + 8 + lVar28 * 0x10);
      if ((long)pfVar30 <= (long)pfVar49) {
        pfVar49 = pfVar30;
      }
      lVar22 = (long)pfVar33 * 0x20;
      local_260 = (long)pfVar49 - (long)pfVar33;
      if (local_260 == 0 || (long)pfVar49 < (long)pfVar33) {
        local_260 = 0;
      }
      pfVar4 = (float *)(lVar22 + lVar42);
      pfVar54 = pfVar4 + local_260 * 8;
      if (local_260 == 0) {
        local_258._0_16_ = ZEXT816(0);
        cVar9 = *(char *)(puVar21 + 4);
        auVar68 = (undefined1  [16])local_258._0_16_;
      }
      else {
        pfVar56 = pfVar49;
        if ((long)pfVar49 < (long)pfVar41) {
          pfVar56 = pfVar41;
        }
        pfVar47 = (float *)0x0;
        if (0 < (long)pfVar56) {
          pfVar47 = pfVar56;
        }
        local_258._0_4_ = 0.0;
        do {
          local_258._0_4_ = (float)local_258._0_4_ + *(float *)(lVar42 + lVar22);
          lVar22 = lVar22 + 0x20;
        } while ((long)pfVar47 * 0x20 != lVar22);
        pfVar56 = pfVar54 + -8;
        fVar63 = 0.0;
        if (pfVar4 <= pfVar56) {
          fVar63 = 0.0;
          do {
            if (*(char *)((long)pfVar56 + 0x1d) == '\0') break;
            fVar63 = fVar63 + *pfVar56;
            pfVar56 = pfVar56 + -8;
          } while (pfVar4 <= pfVar56);
        }
        local_258._4_4_ = (float)local_258._0_4_ - fVar63;
        local_258._8_8_ = 0;
        cVar9 = *(char *)(puVar21 + 4);
        auVar68 = (undefined1  [16])local_258._0_16_;
      }
      local_258._0_16_ = auVar68;
      if (cVar9 != '\0') {
        if (*(char *)((long)puVar21 + 0x76) == '\0') {
          local_258._4_4_ = auVar68._4_4_;
          local_258._0_4_ = local_258._4_4_;
        }
        else {
          local_258._0_4_ = auVar68._0_4_;
        }
        fVar63 = *(float *)((long)puVar21 + 0x1c);
        bVar57 = DAT_005de558 + fVar63 < (float)local_258._0_4_;
        if (bVar57) {
          local_240 = (float *)(lVar28 * 5);
          fVar64 = *(float *)(lVar43 + 8 + lVar28 * 0x28);
          auVar69 = ZEXT416((uint)DAT_005de55c);
          if (fVar64 < DAT_005de55c) {
            if (local_260 < 1) {
              lVar28 = 0;
              lVar22 = 0;
              fVar65 = fVar64;
            }
            else {
              lVar22 = 0;
              do {
                auVar69._4_12_ = auVar68._4_12_;
                auVar69._0_4_ = auVar68._0_4_ - *(float *)((long)pfVar4 + lVar22);
                uVar71 = auVar68._4_4_;
                fVar70 = auVar69._0_4_ + 0.0;
                if (fVar70 <= fVar63) {
                  lVar28 = (lVar22 >> 5) + 1;
                  lVar22 = lVar28;
                  fVar65 = 0.0;
                  if (lVar28 < local_260) {
                    lVar22 = local_260;
                  }
                  goto LAB_0030a2da;
                }
                lVar28 = lVar22 + 0x20;
                lVar22 = lVar22 + 0x20;
                auVar68 = auVar69;
              } while ((float *)((long)pfVar4 + lVar28) < pfVar54);
LAB_0030a2b2:
              lVar28 = 0;
              lVar22 = 0;
              fVar65 = 0.0;
            }
          }
          else {
            pfVar56 = pfVar49;
            if ((long)pfVar49 < (long)pfVar41) {
              pfVar56 = pfVar41;
            }
            if ((long)pfVar56 < 1) {
              pfVar56 = (float *)0x0;
            }
            pfVar47 = (float *)((long)pfVar56 * 0x20 + lVar42);
            lVar22 = (long)pfVar56 * 0x20 + (long)pfVar33 * -0x20;
            fVar65 = 0.0;
            do {
              pfVar47 = pfVar47 + -8;
              auVar69 = auVar68;
              if (pfVar47 < pfVar4) goto LAB_0030a2b2;
              auVar69._4_12_ = auVar68._4_12_;
              auVar69._0_4_ = auVar68._0_4_ - *pfVar47;
              uVar71 = auVar68._4_4_;
              fVar70 = auVar69._0_4_ + 0.0;
              lVar22 = lVar22 + -0x20;
              auVar68 = auVar69;
            } while (fVar63 < fVar70);
            lVar28 = 0;
            lVar22 = lVar22 >> 5;
            if (lVar22 < 0) {
              lVar22 = 0;
            }
          }
LAB_0030a2da:
          uVar66 = 0;
          uVar29 = lVar28 + (long)pfVar41;
          local_238._0_8_ = uVar29;
          uVar34 = lVar22 + (long)pfVar41;
          if (lVar22 + (long)pfVar41 <= (long)uVar29) {
            uVar34 = uVar29;
          }
          local_268 = pfVar30;
          if (puVar21[0x4c] != puVar21[0x4d]) {
            pfVar33 = *(float **)(puVar21[0x4d] + -8);
            if ((long)pfVar33 <= (long)pfVar41) {
              pfVar33 = pfVar41;
            }
            lVar28 = (long)ppuStack_290 - (long)local_298;
            lVar22 = lVar28 >> 0x3f;
                    /* try { // try from 0030a32d to 0030a341 has its CatchHandler @ 0030aefd */
            Ranges::erase((Ranges *)local_270,(ulong)pfVar41,(ulong)pfVar33,&local_298);
            if ((long)ppuStack_290 - (long)local_298 != 0) {
              uVar39 = (lVar28 / 6 + lVar22 >> 3) - lVar22;
              uVar29 = ((long)ppuStack_290 - (long)local_298) / 0x30;
              if (uVar39 < uVar29) {
                ppuVar31 = local_298 + uVar39 * 6;
                uVar55 = uVar29;
                if (uVar39 < uVar29) {
                  uVar55 = uVar39;
                }
                lVar22 = uVar29 * 0x30 + uVar55 * -0x30;
                do {
                    /* try { // try from 0030a3b0 to 0030a3bc has its CatchHandler @ 0030af33 */
                  RangedValues<juce::detail::JustifiedText::DrawType>::applyOperation
                            (local_270,(long *)ppuVar31);
                  ppuVar31 = ppuVar31 + 6;
                  lVar22 = lVar22 + -0x30;
                } while (lVar22 != 0);
              }
            }
          }
          if (ppuStack_290 != local_298) {
            ppuStack_290 = local_298;
          }
                    /* try { // try from 0030a3d8 to 0030a3f3 has its CatchHandler @ 0030aefd */
          pppuVar52 = &local_298;
          RangedValues<juce::detail::JustifiedText::DrawType>::set<juce::detail::MergeEqualItemsYes>
                    (local_270,local_238._0_8_,uVar34,0,(long *)pppuVar52);
          puVar24 = local_168 + 0x10;
          if (ppuStack_290 != local_298) {
            ppuStack_290 = local_298;
          }
          if (*(char *)*puVar24 != '\0') {
                    /* try { // try from 0030a438 to 0030a447 has its CatchHandler @ 0030aee6 */
            pfVar33 = local_268;
            RangedValues<juce::Font>::getIntersectionsWith
                      ((Ranges *)&local_148,(long *)(puVar21[0x2b] + 0x68),(long)pfVar41,
                       (long)local_268);
            if (fVar64 < DAT_005de55c) {
              pfVar30 = *(float **)CONCAT17((undefined1)uStack_129,uStack_130);
              if (pfVar30 == (float *)0x0) goto LAB_0030a499;
LAB_0030a482:
              LOCK();
              pfVar30[2] = (float)((int)pfVar30[2] + 1);
              UNLOCK();
              local_2b8 = pfVar30;
            }
            else {
              pfVar30 = *(float **)(CONCAT17(uStack_121,CONCAT43(uStack_125,uStack_129._1_3_)) + -8)
              ;
              if (pfVar30 != (float *)0x0) goto LAB_0030a482;
LAB_0030a499:
              local_2b8 = (float *)0x0;
              pfVar30 = pfVar33;
            }
            plVar40 = (long *)CONCAT17((undefined1)uStack_129,uStack_130);
            plVar36 = (long *)CONCAT17(uStack_121,CONCAT43(uStack_125,uStack_129._1_3_));
            if (plVar40 != plVar36) {
              do {
                plVar14 = (long *)*plVar40;
                if (plVar14 != (long *)0x0) {
                  LOCK();
                  plVar15 = plVar14 + 1;
                  *(int *)plVar15 = (int)*plVar15 + -1;
                  UNLOCK();
                  if ((int)*plVar15 == 0) {
                    (**(code **)(*plVar14 + 8))();
                  }
                }
                plVar40 = plVar40 + 1;
              } while (plVar40 != plVar36);
              plVar40 = (long *)CONCAT17((undefined1)uStack_129,uStack_130);
            }
            if (plVar40 != (long *)0x0) {
              operator_delete(plVar40);
            }
            if (local_148 != (void *)0x0) {
              operator_delete(local_148);
            }
            puStack_1e0 = (undefined8 *)0x0;
            pvStack_1c0 = (void *)0x0;
            local_188 = 0;
            uStack_180 = 0;
            local_198 = 0;
            uStack_190 = 0;
            local_1a8 = (long *)0x0;
            plStack_1a0 = (long *)0x0;
            local_1b8 = 0;
            uStack_1b0 = 0;
            local_1d8 = 0;
            uStack_1d0 = 0;
            local_178 = (undefined1 *)0x0;
            local_1e8 = (ulong **)0x9;
            local_1c8 = 0;
                    /* try { // try from 0030a55e to 0030a562 has its CatchHandler @ 0030aee4 */
            ShapedTextOptions::fontsForRange::{lambda()#1}::operator()((_lambda___1_ *)&pvStack_1c0)
            ;
            uStack_190 = _DAT_005dd140;
            local_188 = _UNK_005dd148;
            uStack_180 = 0x7fffffffffffffff;
            local_178 = &DAT_0061ac58;
            if (local_2b8 != (float *)0x0) {
              LOCK();
              local_2b8[2] = (float)((int)local_2b8[2] + 1);
              UNLOCK();
            }
                    /* try { // try from 0030a5a1 to 0030a5c0 has its CatchHandler @ 0030aeb3 */
            local_238._0_8_ = pfVar41;
            ShapedTextOptions::withFont(&local_148,&local_1e8,(long *)local_2b8);
            uVar67 = auVar69._0_8_;
            if (*(char *)(puVar21 + 0x4b) != '\0') {
              *(undefined1 *)(puVar21 + 0x4b) = 0;
              SimpleShapedText::~SimpleShapedText((SimpleShapedText *)(puVar21 + 0x32));
              uVar67 = auVar69._0_8_;
            }
            puVar21[0x32] = puVar24;
            puVar21[0x33] = 0;
            puVar21[0x34] = 0;
            puVar21[0x35] = 0;
            puVar21[0x36] = 0;
            puVar21[0x37] = 0;
            puVar21[0x38] = 0;
            puVar21[0x39] = 0;
            puVar21[0x3a] = 0;
            puVar21[0x3b] = 0;
            puVar21[0x3c] = 0;
            puVar21[0x3d] = 0;
            puVar21[0x3e] = 0;
            puVar21[0x3f] = 0;
            puVar21[0x40] = 0;
            puVar21[0x41] = 0;
            puVar21[0x42] = 0;
            puVar21[0x43] = 0;
            puVar21[0x44] = 0;
            puVar21[0x45] = 0;
            puVar21[0x46] = 0;
            puVar21[0x47] = 0;
            puVar21[0x48] = 0;
            puVar21[0x49] = 0;
            puVar21[0x4a] = 0;
                    /* try { // try from 0030a650 to 0030a662 has its CatchHandler @ 0030ad38 */
            SimpleShapedText::shape
                      (0,CONCAT44(uVar66,fVar65),uVar67,CONCAT44(uVar71,fVar70),
                       CONCAT44(uVar73,fVar72),CONCAT44(uVar74,fVar61),in_XMM6_Qa,in_XMM7_Qa,
                       (SimpleShapedText *)(puVar21 + 0x32),puVar24,&local_148,pfVar30,pppuVar52,
                       ppuVar53);
            *(undefined1 *)(puVar21 + 0x4b) = 1;
            piVar48 = (int *)(local_d8 + -0x10);
            uVar67 = local_238._0_8_;
            if (piVar48 != &emptyString) {
              LOCK();
              iVar7 = *piVar48;
              *piVar48 = *piVar48 + -1;
              UNLOCK();
              if (iVar7 == 0) {
                operator_delete__(piVar48);
              }
            }
            plVar40 = local_108;
            if (local_108 != local_100) {
              do {
                plVar36 = (long *)*plVar40;
                if (plVar36 != (long *)0x0) {
                  LOCK();
                  plVar14 = plVar36 + 1;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)*plVar14 == 0) {
                    (**(code **)(*plVar36 + 8))();
                  }
                }
                plVar40 = plVar40 + 1;
              } while (plVar40 != local_100);
            }
            if (local_108 != (long *)0x0) {
              operator_delete(local_108);
            }
            if (local_120 != (void *)0x0) {
              operator_delete(local_120);
            }
            if (local_2b8 != (float *)0x0) {
              LOCK();
              pfVar41 = local_2b8 + 2;
              *pfVar41 = (float)((int)*pfVar41 + -1);
              UNLOCK();
              if (*pfVar41 == 0.0) {
                (**(code **)(*(long *)local_2b8 + 8))(local_2b8);
              }
            }
            piVar48 = (int *)(local_178 + -0x10);
            plVar40 = local_1a8;
            plVar36 = plStack_1a0;
            if (piVar48 != &emptyString) {
              LOCK();
              iVar7 = *piVar48;
              *piVar48 = *piVar48 + -1;
              UNLOCK();
              if (iVar7 == 0) {
                operator_delete__(piVar48);
                plVar40 = local_1a8;
                plVar36 = plStack_1a0;
              }
            }
            for (; plVar14 = plStack_1a0, plVar40 != plStack_1a0; plVar40 = plVar40 + 1) {
              plVar15 = (long *)*plVar40;
              plStack_1a0 = plVar36;
              if (plVar15 != (long *)0x0) {
                LOCK();
                plVar2 = plVar15 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)(*plVar15 + 8))();
                }
              }
              plVar36 = plStack_1a0;
              plStack_1a0 = plVar14;
            }
            plStack_1a0 = plVar36;
            if (local_1a8 != (long *)0x0) {
              operator_delete(local_1a8);
            }
            if (pvStack_1c0 != (void *)0x0) {
              operator_delete(pvStack_1c0);
            }
            pfVar41 = (float *)puVar21[0x33];
            uVar34 = puVar21[0x34] - (long)pfVar41;
            if (uVar34 == 0) {
              fVar70 = 0.0;
              fVar72 = 0.0;
            }
            else {
              fVar70 = 0.0;
              lVar22 = 0;
              do {
                fVar70 = fVar70 + *(float *)((long)pfVar41 + lVar22);
                lVar22 = lVar22 + 0x20;
              } while (((long)uVar34 >> 5) * 0x20 != lVar22);
              pfVar33 = (float *)((long)pfVar41 + ((uVar34 & 0xffffffffffffffe0) - 0x20));
              fVar72 = 0.0;
              if (pfVar41 <= pfVar33) {
                fVar72 = 0.0;
                do {
                  if (*(char *)((long)pfVar33 + 0x1d) == '\0') break;
                  fVar72 = fVar72 + *pfVar33;
                  pfVar33 = pfVar33 + -8;
                } while (pfVar41 <= pfVar33);
              }
              fVar72 = fVar70 - fVar72;
            }
            if (*(char *)((long)puVar21 + 0x76) == '\0') {
              fVar70 = fVar72;
            }
            if (fVar64 < DAT_005de55c) {
              if (0 < local_260) {
                pfVar41 = pfVar4;
                if (*(char *)(puVar21 + 4) == '\0') {
LAB_0030a94b:
                  lVar42 = ((long)pfVar41 - (long)pfVar4 >> 5) + 1;
                  lVar22 = local_260;
                  if (local_260 <= lVar42) {
                    lVar22 = lVar42;
                  }
                  goto LAB_0030a95d;
                }
                do {
                  local_258._0_4_ = (float)local_258._0_4_ - *pfVar41;
                  if (fVar70 + (float)local_258._0_4_ <= *(float *)((long)puVar21 + 0x1c))
                  goto LAB_0030a94b;
                  pfVar41 = pfVar41 + 8;
                } while (pfVar41 < pfVar54);
              }
LAB_0030a92e:
              lVar42 = 0;
              lVar22 = 0;
            }
            else {
              if (*(char *)(puVar21 + 4) == '\0') {
                pfVar54 = pfVar54 + -8;
                if (pfVar54 < pfVar4) goto LAB_0030a92e;
              }
              else {
                if ((long)pfVar49 < (long)uVar67) {
                  pfVar49 = (float *)uVar67;
                }
                if ((long)pfVar49 < 1) {
                  pfVar49 = (float *)0x0;
                }
                pfVar54 = (float *)((long)pfVar49 * 0x20 + lVar42);
                do {
                  pfVar54 = pfVar54 + -8;
                  if (pfVar54 < pfVar4) goto LAB_0030a92e;
                  local_258._0_4_ = (float)local_258._0_4_ - *pfVar54;
                } while (*(float *)((long)puVar21 + 0x1c) < fVar70 + (float)local_258._0_4_);
              }
              lVar42 = 0;
              lVar22 = (long)pfVar54 - (long)pfVar4 >> 5;
              if (lVar22 < 0) {
                lVar22 = 0;
              }
            }
LAB_0030a95d:
            uVar29 = lVar42 + local_238._0_8_;
            uVar34 = lVar22 + local_238._0_8_;
            if (lVar22 + local_238._0_8_ <= (long)uVar29) {
              uVar34 = uVar29;
            }
            if (puVar21[0x4c] != puVar21[0x4d]) {
              uVar39 = *(ulong *)(puVar21[0x4d] + -8);
              if ((long)uVar39 <= (long)local_238._0_8_) {
                uVar39 = local_238._0_8_;
              }
              lVar42 = (long)ppuStack_290 - (long)local_298;
              lVar22 = lVar42 >> 0x3f;
                    /* try { // try from 0030a9b3 to 0030a9c4 has its CatchHandler @ 0030af02 */
              Ranges::erase((Ranges *)local_270,local_238._0_8_,uVar39,&local_298);
              if ((long)ppuStack_290 - (long)local_298 != 0) {
                uVar55 = (lVar42 / 6 + lVar22 >> 3) - lVar22;
                uVar39 = ((long)ppuStack_290 - (long)local_298) / 0x30;
                if (uVar55 < uVar39) {
                  ppuVar53 = local_298 + uVar55 * 6;
                  uVar35 = uVar39;
                  if (uVar55 < uVar39) {
                    uVar35 = uVar55;
                  }
                  lVar22 = uVar39 * 0x30 + uVar35 * -0x30;
                  do {
                    /* try { // try from 0030aa20 to 0030aa2c has its CatchHandler @ 0030af04 */
                    RangedValues<juce::detail::JustifiedText::DrawType>::applyOperation
                              (local_270,(long *)ppuVar53);
                    ppuVar53 = ppuVar53 + 6;
                    lVar22 = lVar22 + -0x30;
                  } while (lVar22 != 0);
                }
              }
            }
            if (ppuStack_290 != local_298) {
              ppuStack_290 = local_298;
            }
                    /* try { // try from 0030aa48 to 0030aab6 has its CatchHandler @ 0030af02 */
            RangedValues<juce::detail::JustifiedText::DrawType>::
            set<juce::detail::MergeEqualItemsYes>(local_270,uVar29,uVar34,0,(long *)&local_298);
            if (ppuStack_290 != local_298) {
              ppuStack_290 = local_298;
            }
            if (fVar64 < DAT_005de55c) {
              RangedValues<juce::detail::JustifiedText::DrawType>::
              set<juce::detail::MergeEqualItemsYes>
                        (local_270,uVar29 - 1,uVar29,1,(long *)&local_298);
            }
            else {
              RangedValues<juce::detail::JustifiedText::DrawType>::
              set<juce::detail::MergeEqualItemsYes>
                        (local_270,uVar34,uVar34 + 1,1,(long *)&local_298);
            }
            if (ppuStack_290 != local_298) {
              ppuStack_290 = local_298;
            }
            local_1e8 = (ulong **)0x0;
            puStack_1e0 = (undefined8 *)0x0;
            local_1d8 = 0;
            if (fVar64 < DAT_005de55c) {
                    /* try { // try from 0030ab05 to 0030ab13 has its CatchHandler @ 0030ad26 */
              std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>::
              _M_range_insert<juce::detail::ShapedGlyph_const*>
                        (&local_1e8,(undefined8 *)0x0,(undefined8 *)puVar21[0x33],
                         (undefined8 *)puVar21[0x34]);
            }
            lVar22 = *(long *)(puVar21[0x2b] + 8);
            uVar39 = *(long *)(puVar21[0x2b] + 0x10) - lVar22 >> 5;
            if ((long)uVar39 < 0) {
              uVar39 = 0;
            }
            uVar55 = 0;
            if (-1 < (long)uVar29) {
              uVar55 = uVar29;
            }
            if ((long)uVar34 <= (long)uVar39) {
              uVar39 = uVar34;
            }
            puVar24 = (undefined8 *)(uVar55 * 0x20 + lVar22);
            lVar22 = uVar39 - uVar55;
            if (lVar22 == 0 || (long)uVar39 < (long)uVar55) {
              lVar22 = 0;
            }
                    /* try { // try from 0030ab63 to 0030ab6f has its CatchHandler @ 0030ad28 */
            std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>::
            _M_range_insert<juce::detail::ShapedGlyph_const*>
                      (&local_1e8,puStack_1e0,puVar24,puVar24 + lVar22 * 4);
            if (DAT_005de55c <= fVar64) {
                    /* try { // try from 0030ab95 to 0030aba1 has its CatchHandler @ 0030ad24 */
              std::vector<juce::detail::ShapedGlyph,std::allocator<juce::detail::ShapedGlyph>>::
              _M_range_insert<juce::detail::ShapedGlyph_const*>
                        (&local_1e8,local_1e8,(undefined8 *)puVar21[0x33],
                         (undefined8 *)puVar21[0x34]);
            }
            ppuVar53 = local_1e8;
            lVar22 = (long)local_240 * 8;
            uVar34 = (long)puStack_1e0 - (long)local_1e8;
            if (uVar34 == 0) {
              fVar70 = 0.0;
              fVar72 = 0.0;
            }
            else {
              fVar70 = 0.0;
              lVar42 = 0;
              do {
                fVar70 = fVar70 + *(float *)((long)local_1e8 + lVar42);
                lVar42 = lVar42 + 0x20;
              } while (((long)uVar34 >> 5) * 0x20 != lVar42);
              ppuVar31 = (ulong **)((long)local_1e8 + ((uVar34 & 0xffffffffffffffe0) - 0x20));
              fVar72 = 0.0;
              if (local_1e8 <= ppuVar31) {
                fVar72 = 0.0;
                do {
                  if (*(char *)((long)ppuVar31 + 0x1d) == '\0') break;
                  fVar72 = fVar72 + *(float *)ppuVar31;
                  ppuVar31 = ppuVar31 + -4;
                } while (local_1e8 <= ppuVar31);
              }
              fVar72 = fVar70 - fVar72;
            }
            getMainAxisLineAlignment
                      (CONCAT44(fVar72,fVar70),(float *)&local_148,(byte)*local_200,
                       (long)uVar34 >> 5,(ulong)local_1e8,*(ulong *)((long)puVar21 + 0x1c),
                       *(ulong *)((long)puVar21 + 0x24),*(char *)((long)puVar21 + 0x76));
            this_02 = local_210;
            *(float *)(lVar43 + lVar22 + 8) = (float)local_148;
                    /* try { // try from 0030ac74 to 0030acce has its CatchHandler @ 0030aeeb */
            RangedValues<float>::set<juce::detail::MergeEqualItemsYes>
                      (0,local_210,local_238._0_8_,(ulong)local_268,(long *)&local_298);
            uVar34 = local_138 + uVar29;
            uVar29 = uVar29 + CONCAT17((undefined1)uStack_129,uStack_130);
            if ((long)uVar29 <= (long)uVar34) {
              uVar29 = uVar34;
            }
            RangedValues<float>::set<juce::detail::MergeEqualItemsYes>
                      (local_148._4_4_,this_02,uVar34,uVar29,(long *)&local_298);
            if (ppuVar53 != (ulong **)0x0) {
              operator_delete(ppuVar53);
            }
            if (local_2b8 != (float *)0x0) {
              LOCK();
              pfVar41 = local_2b8 + 2;
              *pfVar41 = (float)((int)*pfVar41 + -1);
              UNLOCK();
              if (*pfVar41 == 0.0) {
                (**(code **)(*(long *)local_2b8 + 8))();
              }
            }
          }
        }
      }
    }
  }
  if (local_298 != (ulong **)0x0) {
    operator_delete(local_298);
  }
  if (pfVar26 != (float *)0x0) {
    operator_delete(pfVar26);
  }
  piVar48 = (int *)(local_38 + -0x10);
  if (piVar48 == &emptyString) {
LAB_00309e46:
    plVar40 = local_68;
    plVar36 = plStack_60;
    if (local_68 == plStack_60) goto joined_r0x0030a13b;
  }
  else {
    LOCK();
    iVar7 = *piVar48;
    *piVar48 = *piVar48 + -1;
    UNLOCK();
    if (iVar7 != 0) goto LAB_00309e46;
    operator_delete__(piVar48);
    plVar40 = local_68;
    plVar36 = plStack_60;
    if (local_68 == plStack_60) goto joined_r0x0030a13b;
  }
  do {
    plVar14 = (long *)*plVar40;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar15 = plVar14 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)(*plVar14 + 8))();
      }
    }
    plVar40 = plVar40 + 1;
  } while (plVar40 != plVar36);
joined_r0x0030a13b:
  if (local_68 != (long *)0x0) {
    operator_delete(local_68);
  }
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
  this_01 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(local_160 + 8);
  *(ulong **)local_160 = local_200;
  *(undefined8 **)(local_160 + 8) = puVar21;
  if (this_01 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(this_01 + 8) == 0x100000001) {
      *(undefined8 *)(this_01 + 8) = 0;
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
                    /* WARNING: Could not recover jumptable at 0x00309ee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this_01 + 0x18))(this_01);
      return;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var1 = this_01 + 8;
      iVar7 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar7 = (int)*(long *)(this_01 + 8);
      *(int *)(this_01 + 8) = iVar7 + -1;
    }
    if (iVar7 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_01);
      return;
    }
  }
  return;
}


