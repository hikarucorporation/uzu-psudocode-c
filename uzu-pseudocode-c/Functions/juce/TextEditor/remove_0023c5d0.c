// Function : remove
// Namespace: juce:TextEditor
// Entry    : 0023c5d0
// Prototype: undefined remove(undefined8 param_1, float param_2, TextEditor * this, ulong param_4, UndoManager * param_5, uint param_6, vector<long_long,std::allocator<long_long>> * param_7, undefined8 * * * * * * * param_8)
// Body     : 0023c5d0 - 0023e033


/* WARNING: Removing unreachable block (ram,0x0023d3c5) */
/* WARNING: Removing unreachable block (ram,0x0023dca3) */
/* WARNING: Type propagation algorithm not settling */
/* juce::TextEditor::remove(juce::Range<int>, juce::UndoManager*, int,
   juce::TextEditor::TextEditorStorageChunks*) */

void __thiscall
juce::TextEditor::remove
          (undefined8 param_1,float param_2,TextEditor *this,ulong param_4,UndoManager *param_5,
          uint param_6,vector<long_long,std::allocator<long_long>> *param_7,
          undefined8 *******param_8)

{
  Ranges *this_00;
  timespec *ptVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  vector<long_long,std::allocator<long_long>> *pvVar7;
  __time_t *p_Var8;
  char cVar9;
  uint uVar10;
  long *plVar11;
  undefined8 *puVar12;
  _List_node_base *p_Var13;
  _List_node_base *p_Var14;
  timespec *ptVar15;
  timespec *ptVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  _List_node_base *extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  _List_node_base *extraout_RDX_03;
  long extraout_RDX_04;
  long extraout_RDX_05;
  ulong uVar24;
  long extraout_RDX_06;
  _List_node_base *extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  timespec *ptVar25;
  vector<long_long,std::allocator<long_long>> *pvVar26;
  vector<long_long,std::allocator<long_long>> *pvVar27;
  undefined4 uVar28;
  int iVar29;
  long *plVar30;
  ulong uVar31;
  undefined4 *puVar32;
  long lVar33;
  undefined8 *puVar34;
  int *piVar35;
  undefined **ppuVar36;
  vector<long_long,std::allocator<long_long>> *pvVar37;
  timespec *ptVar38;
  timespec *ptVar39;
  long lVar40;
  ulong uVar41;
  undefined8 *puVar42;
  TextEditor *this_01;
  bool bVar43;
  undefined8 uVar44;
  undefined8 extraout_XMM0_Qa;
  _List_node_base *local_5c0;
  _List_node_base *local_5b8;
  ulong local_5b0;
  undefined1 local_5a8 [16];
  undefined8 local_598;
  vector<long_long,std::allocator<long_long>> *local_590;
  undefined8 *************local_588;
  TextEditor *local_580;
  ulong local_578;
  uint local_56c;
  undefined **local_568;
  timespec *local_560;
  timespec *ptStack_558;
  timespec *local_550;
  timespec *ptStack_548;
  timespec *local_540;
  undefined8 *******pppppppuStack_538;
  undefined **local_530;
  undefined8 *************local_528;
  undefined8 *************pppppppppppppuStack_520;
  undefined8 *************local_518;
  undefined8 *************pppppppppppppuStack_510;
  undefined8 *************local_508;
  undefined8 *************pppppppppppppuStack_500;
  undefined **local_4f8;
  undefined8 *******local_4f0;
  undefined8 *******pppppppuStack_4e8;
  undefined8 *******local_4e0;
  undefined8 *******pppppppuStack_4d8;
  undefined8 *******local_4d0;
  vector<long_long,std::allocator<long_long>> *pvStack_4c8;
  timespec local_4c0;
  timespec *local_4b0;
  _List_node_base *local_4a8;
  _List_node_base *p_Stack_4a0;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  ulong local_468;
  vector<long_long,std::allocator<long_long>> *local_460;
  ulong local_458;
  Ranges *local_450;
  timespec local_448;
  timespec tStack_438;
  timespec tStack_428;
  undefined8 *******pppppppuStack_418;
  undefined8 *******local_410;
  undefined8 *************local_408;
  undefined8 *************pppppppppppppuStack_400;
  undefined8 *************local_3f8;
  undefined8 *************pppppppppppppuStack_3f0;
  undefined8 *************local_3e8;
  undefined8 *************pppppppppppppuStack_3e0;
  undefined8 *******local_3d8;
  undefined8 *******local_3d0;
  undefined8 *******pppppppuStack_3c8;
  undefined8 *******local_3c0;
  undefined8 *******pppppppuStack_3b8;
  undefined8 *******local_3b0;
  vector<long_long,std::allocator<long_long>> *pvStack_3a8;
  vector<long_long,std::allocator<long_long>> *local_3a0;
  vector<long_long,std::allocator<long_long>> *local_398;
  vector<long_long,std::allocator<long_long>> *local_390;
  _List_node_base *local_388;
  _List_node_base *p_Stack_380;
  undefined8 *******local_378;
  undefined8 *******local_370;
  undefined8 *******local_368;
  undefined8 *******local_360;
  undefined8 *******local_358;
  undefined8 *******local_350;
  undefined8 *******local_348;
  undefined8 *******local_340;
  undefined8 *******local_338;
  undefined8 *******local_330;
  undefined8 *******local_328;
  undefined8 *******local_320;
  undefined8 *******local_318;
  undefined8 *******local_310;
  undefined8 *******local_308;
  undefined8 *******local_300;
  undefined8 *******local_2f8;
  undefined8 *******local_2f0;
  undefined8 *******local_2e8;
  undefined8 *******local_2e0;
  undefined8 *******local_2d8;
  undefined8 *******local_2d0;
  undefined8 *******local_2c8;
  undefined8 *******local_2c0;
  undefined8 *******local_2b8;
  undefined8 *******local_2b0;
  undefined8 *******local_2a8;
  undefined8 *******local_2a0;
  undefined8 *******local_298;
  undefined8 *******local_290;
  undefined8 *******local_288;
  undefined8 *******local_280;
  undefined8 *******local_278;
  undefined8 *******local_270;
  undefined8 *******local_268;
  undefined8 *******local_260;
  undefined8 *******local_258;
  undefined8 *******local_250;
  undefined8 *******local_248;
  undefined8 *******local_240;
  undefined8 *******local_238;
  undefined8 *******local_230;
  undefined8 *******local_228;
  undefined8 *******local_220;
  undefined8 *******local_218;
  undefined8 *******local_210;
  undefined8 *******local_208;
  undefined8 *******local_200;
  undefined8 *******local_1f8;
  undefined8 *******local_1f0;
  undefined8 *******local_1e8;
  undefined8 *******local_1e0;
  undefined8 *******local_1d8;
  undefined8 *******local_1d0;
  undefined8 *******local_1c8;
  undefined8 *******local_1c0;
  undefined8 *******local_1b8;
  undefined8 *******local_1b0;
  undefined8 *******local_1a8;
  undefined8 *******local_1a0;
  undefined8 *******local_198;
  undefined8 *******local_190;
  undefined8 *******local_188;
  undefined8 *******local_180;
  undefined8 *******local_178;
  undefined8 *******local_170;
  undefined8 *******local_168;
  undefined8 *******local_160;
  undefined8 *******local_158;
  undefined8 *******local_150;
  undefined8 *******local_148;
  undefined8 *******local_140;
  undefined8 *******local_138;
  undefined8 *******local_130;
  undefined8 *******local_128;
  undefined8 *******local_120;
  undefined8 *******local_118;
  undefined8 *******local_110;
  undefined8 *******local_108;
  undefined8 *******local_100;
  undefined8 *******local_f8;
  undefined8 *******local_f0;
  undefined8 *******local_e8;
  undefined8 *******local_e0;
  undefined8 *******local_d8;
  undefined8 *******local_d0;
  undefined8 *******local_c8;
  undefined8 *******local_c0;
  undefined8 *******local_b8;
  undefined8 *******local_b0;
  undefined8 *******local_a8;
  undefined8 *******local_a0;
  undefined8 *******local_98;
  undefined8 *******local_90;
  undefined8 *******local_88;
  undefined8 *******local_80;
  undefined8 *******local_78;
  undefined8 *******local_70;
  undefined8 *******local_68;
  undefined8 *******local_60;
  undefined8 *******local_58;
  undefined8 *******local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((int)param_4 == (int)(param_4 >> 0x20)) {
    return;
  }
  if (param_5 != (UndoManager *)0x0) {
    if ((((param_5[0x88] == (UndoManager)0x0) &&
         (*(int *)(param_5 + 0x84) - 1U < *(uint *)(param_5 + 0x5c))) &&
        (lVar33 = *(long *)(*(long *)(param_5 + 0x50) + -8 + (long)*(int *)(param_5 + 0x84) * 8),
        lVar33 != 0)) && (100 < *(int *)(lVar33 + 0xc))) {
      uVar23 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
      if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
        clock_gettime(1,&local_448);
        auVar4 = SEXT816(local_448.tv_nsec / 1000 + local_448.tv_sec * 1000000) *
                 SEXT816(0x20c49ba5e353f7cf);
        uVar23 = (int)(auVar4._8_8_ >> 7) - (auVar4._12_4_ >> 0x1f);
        if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar23) ||
           (uVar23 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
          LOCK();
          UNLOCK();
          _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar23;
        }
      }
      *(uint *)(this + 0x280) = uVar23;
      this[0x260] = (TextEditor)0x1;
      LOCK();
      lVar33 = *(long *)(this + 0x248);
      *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
      UNLOCK();
      piVar35 = (int *)(lVar33 + -0x10);
      if (piVar35 != &emptyString) {
        LOCK();
        iVar29 = *piVar35;
        *piVar35 = *piVar35 + -1;
        UNLOCK();
        if (iVar29 == 0) {
          operator_delete__(piVar35);
        }
      }
    }
    plVar11 = operator_new(0x80);
    uVar28 = *(undefined4 *)(this + 0x340);
    *plVar11 = (long)&PTR__RemoveAction_00710c80;
    plVar11[1] = (long)this;
    plVar11[2] = param_4;
    *(undefined4 *)(plVar11 + 3) = uVar28;
    *(uint *)((long)plVar11 + 0x1c) = param_6;
    plVar11[0xe] = 0;
    plVar11[0xf] = 0;
    plVar11[0xc] = 0;
    plVar11[0xd] = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    UndoManager::perform(param_5,plVar11);
    return;
  }
  this_00 = *(Ranges **)(this + 0x330);
  local_5b0 = (ulong)(int)param_4;
  uVar22 = (long)param_4 >> 0x20;
  if ((long)param_4 >> 0x20 <= (long)local_5b0) {
    uVar22 = local_5b0;
  }
  local_5a8 = (undefined1  [16])0x0;
  local_598 = 0;
  local_478 = (undefined1  [16])0x0;
  local_488 = (undefined1  [16])0x0;
  local_498 = (undefined1  [16])0x0;
                    /* try { // try from 0023c7b7 to 0023c7d3 has its CatchHandler @ 0023e0a5 */
  pvVar37 = param_7;
  local_56c = param_6;
  local_468 = param_4;
  detail::Ranges::set((Ranges *)local_498,local_5b0,uVar22,(undefined8 *)local_5a8);
  local_580 = this;
  local_578 = uVar22;
  if (local_5a8._8_8_ - local_5a8._0_8_ != 0) {
    plVar30 = (long *)((local_5a8._8_8_ - local_5a8._0_8_) + local_5a8._0_8_);
    plVar11 = (long *)local_5a8._0_8_;
    do {
      local_448.tv_sec = 0;
      if ((char)plVar11[5] == '\0') {
        puVar34 = (undefined8 *)(*plVar11 * 8 + local_488._8_8_);
        if (local_478._0_8_ == local_478._8_8_) {
          std::vector<long_long,std::allocator<long_long>>::_M_realloc_insert<long_long>
                    ((vector<long_long,std::allocator<long_long>> *)(local_488 + 8),puVar34,
                     &local_448.tv_sec);
        }
        else if ((undefined8 *)local_478._0_8_ == puVar34) {
          *puVar34 = 0;
          local_478._0_8_ = puVar34 + 1;
        }
        else {
          puVar12 = (undefined8 *)(local_478._0_8_ + -8);
          *(undefined8 *)local_478._0_8_ = *(undefined8 *)(local_478._0_8_ + -8);
          local_478._0_8_ = (undefined8 *)(local_478._0_8_ + 8);
          if (0 < (long)puVar12 - (long)puVar34) {
            uVar22 = ((ulong)((long)puVar12 - (long)puVar34) >> 3) + 1;
            do {
              *puVar12 = puVar12[-1];
              puVar12 = puVar12 + -1;
              uVar22 = uVar22 - 1;
            } while (1 < uVar22);
          }
          *puVar34 = 0;
        }
      }
      else {
                    /* try { // try from 0023c810 to 0023c8bb has its CatchHandler @ 0023e0b1 */
        detail::RangedValues<long_long>::applyOperation
                  ((RangedValues<long_long> *)local_498,plVar11);
      }
      plVar11 = plVar11 + 6;
    } while (plVar11 != plVar30);
  }
                    /* try { // try from 0023c8d9 to 0023c90e has its CatchHandler @ 0023e0a5 */
  detail::RangedValues<long_long>::mergeEqualItems
            ((RangedValues<long_long> *)local_498,local_5b0,(long *)local_5a8);
  uVar22 = local_578;
  this_01 = local_580;
  detail::RangedValues<long_long>::mergeEqualItems
            ((RangedValues<long_long> *)local_498,local_578,(long *)local_5a8);
  if (param_7 == (vector<long_long,std::allocator<long_long>> *)0x0) goto LAB_0023dd8a;
  local_4f0 = *(undefined8 ********)(this_00 + 0x18);
  pppppppuStack_4e8 = *(undefined8 ********)this_00;
  pvVar37 = *(vector<long_long,std::allocator<long_long>> **)(this_00 + 8);
  pppppppppppppuStack_520 = *(undefined8 **************)(this_00 + 0x30);
  local_528 = *(undefined8 **************)(this_00 + 0x48);
  param_8 = *(undefined8 ********)(this_00 + 0x38);
  local_568 = &PTR__RangedIterator_00710d28;
  local_560 = (timespec *)local_488._8_8_;
  ptStack_558 = (timespec *)local_498._0_8_;
  local_550 = (timespec *)local_498._0_8_;
  ptStack_548 = (timespec *)local_488._8_8_;
  local_540 = (timespec *)local_498._0_8_;
  pppppppuStack_538 = (undefined8 *******)local_498._8_8_;
  local_530 = &PTR__RangedIterator_00712648;
  local_4f8 = &PTR__RangedIterator_00710cd8;
  local_4b0 = (timespec *)0x0;
  local_448.tv_sec = (__time_t)&local_448;
  tStack_438.tv_sec = 0;
  local_518 = pppppppppppppuStack_520;
  pppppppppppppuStack_510 = local_528;
  local_508 = pppppppppppppuStack_520;
  pppppppppppppuStack_500 = (undefined8 *************)param_8;
  local_4e0 = pppppppuStack_4e8;
  pppppppuStack_4d8 = local_4f0;
  local_4d0 = pppppppuStack_4e8;
  pvStack_4c8 = pvVar37;
  local_4c0.tv_sec = (__time_t)&local_4c0;
  local_4c0.tv_nsec = (long)&local_4c0;
  local_448.tv_nsec = local_448.tv_sec;
                    /* try { // try from 0023ca4b to 0023cab2 has its CatchHandler @ 0023e078 */
  p_Var13 = operator_new(0x18);
  *(undefined ****)(p_Var13 + 0x10) = &local_4f8;
  std::__detail::_List_node_base::_M_hook(p_Var13);
  tStack_438.tv_sec = tStack_438.tv_sec + 1;
  p_Var13 = operator_new(0x18);
  *(undefined ****)(p_Var13 + 0x10) = &local_530;
  std::__detail::_List_node_base::_M_hook(p_Var13);
  tStack_438.tv_sec = tStack_438.tv_sec + 1;
  p_Var13 = operator_new(0x18);
  *(undefined ****)(p_Var13 + 0x10) = &local_568;
  std::__detail::_List_node_base::_M_hook(p_Var13);
  tStack_438.tv_sec = tStack_438.tv_sec + 1;
  ptVar15 = (timespec *)local_4c0.tv_sec;
  ptVar25 = (timespec *)local_448.tv_sec;
  ptVar1 = (timespec *)local_448.tv_nsec;
  while( true ) {
    local_448.tv_sec = (__time_t)ptVar25;
    local_448.tv_nsec = (long)ptVar1;
    if (ptVar15 == &local_4c0) break;
    ptVar25 = (timespec *)ptVar15->tv_sec;
    operator_delete(ptVar15);
    ptVar15 = ptVar25;
    ptVar25 = (timespec *)local_448.tv_sec;
    ptVar1 = (timespec *)local_448.tv_nsec;
  }
  local_590 = param_7;
  if (ptVar25 == &local_448) {
    local_4b0 = (timespec *)0x0;
    local_4c0.tv_sec = (__time_t)&local_4c0;
    local_4c0.tv_nsec = (long)&local_4c0;
  }
  else {
    ptVar1->tv_sec = (__time_t)&local_4c0;
    ptVar25->tv_nsec = (long)&local_4c0;
    local_4c0.tv_sec = (__time_t)ptVar25;
    local_4c0.tv_nsec = (long)ptVar1;
    local_4b0 = (timespec *)tStack_438.tv_sec;
    while( true ) {
      if (ptVar25 == &local_4c0) break;
                    /* try { // try from 0023cb87 to 0023cb89 has its CatchHandler @ 0023e0a1 */
      cVar9 = (**(code **)(*(long *)ptVar25[1].tv_sec + 0x18))();
      if (cVar9 == '\0') {
        if (ptVar25 != &local_4c0) goto LAB_0023d590;
        break;
      }
      ptVar25 = (timespec *)ptVar25->tv_sec;
    }
  }
  if ((timespec *)local_4c0.tv_sec == &local_4c0) {
    local_4a8 = (_List_node_base *)0x8000000000000000;
LAB_0023d387:
    p_Stack_4a0 = (_List_node_base *)0x7fffffffffffffff;
LAB_0023d392:
    if ((long)local_4a8 < (long)p_Stack_4a0) goto LAB_0023d590;
  }
  else {
    p_Var13 = (_List_node_base *)0x8000000000000000;
    ptVar25 = (timespec *)local_4c0.tv_sec;
    do {
                    /* try { // try from 0023cbc7 to 0023cbc9 has its CatchHandler @ 0023e0ad */
      p_Var14 = (_List_node_base *)(**(code **)(*(long *)ptVar25[1].tv_sec + 0x10))();
      if ((long)p_Var13 < (long)p_Var14) {
        p_Var13 = p_Var14;
      }
      ptVar25 = (timespec *)ptVar25->tv_sec;
    } while (ptVar25 != &local_4c0);
    local_4a8 = p_Var13;
    if ((timespec *)local_4c0.tv_sec == &local_4c0) goto LAB_0023d387;
    p_Var13 = (_List_node_base *)0x7fffffffffffffff;
    ptVar25 = (timespec *)local_4c0.tv_sec;
    do {
                    /* try { // try from 0023cc07 to 0023cc09 has its CatchHandler @ 0023e0a3 */
      (**(code **)(*(long *)ptVar25[1].tv_sec + 0x10))();
      if ((long)extraout_RDX < (long)p_Var13) {
        p_Var13 = extraout_RDX;
      }
      ptVar25 = (timespec *)ptVar25->tv_sec;
    } while (ptVar25 != &local_4c0);
    p_Stack_4a0 = p_Var13;
    if (((timespec *)local_4c0.tv_sec == &local_4c0) ||
       ((timespec *)*(__time_t *)local_4c0.tv_sec == &local_4c0)) goto LAB_0023d392;
    local_5c0 = (_List_node_base *)&local_5c0;
    local_448.tv_sec = (__time_t)&local_448;
    tStack_438.tv_sec = (__time_t)&tStack_438;
    tStack_428.tv_sec = (__time_t)&tStack_428;
    pppppppuStack_418 = &pppppppuStack_418;
    local_408 = &local_408;
    local_3f8 = &local_3f8;
    local_3e8 = &local_3e8;
    local_3d8 = &local_3d8;
    pppppppuStack_3c8 = &pppppppuStack_3c8;
    pppppppuStack_3b8 = &pppppppuStack_3b8;
    pvStack_3a8 = (vector<long_long,std::allocator<long_long>> *)&pvStack_3a8;
    local_398 = (vector<long_long,std::allocator<long_long>> *)&local_398;
    local_388 = (_List_node_base *)&local_388;
    local_378 = &local_378;
    local_368 = &local_368;
    local_358 = &local_358;
    local_348 = &local_348;
    local_338 = &local_338;
    local_328 = &local_328;
    local_318 = &local_318;
    local_308 = &local_308;
    local_2f8 = &local_2f8;
    local_2e8 = &local_2e8;
    local_2d8 = &local_2d8;
    local_2c8 = &local_2c8;
    local_2b8 = &local_2b8;
    local_2a8 = &local_2a8;
    local_298 = &local_298;
    local_288 = &local_288;
    local_278 = &local_278;
    local_268 = &local_268;
    local_258 = &local_258;
    local_248 = &local_248;
    local_238 = &local_238;
    local_228 = &local_228;
    local_218 = &local_218;
    local_208 = &local_208;
    local_1f8 = &local_1f8;
    local_1e8 = &local_1e8;
    local_1d8 = &local_1d8;
    local_1c8 = &local_1c8;
    local_1b8 = &local_1b8;
    local_1a8 = &local_1a8;
    local_198 = &local_198;
    local_188 = &local_188;
    local_178 = &local_178;
    local_168 = &local_168;
    local_158 = &local_158;
    local_148 = &local_148;
    local_138 = &local_138;
    local_128 = &local_128;
    local_118 = &local_118;
    local_108 = &local_108;
    local_f8 = &local_f8;
    local_e8 = &local_e8;
    local_d8 = &local_d8;
    local_c8 = &local_c8;
    local_b8 = &local_b8;
    local_a8 = &local_a8;
    local_98 = &local_98;
    local_88 = &local_88;
    local_78 = &local_78;
    local_68 = &local_68;
    local_58 = &local_58;
    ptVar25 = (timespec *)local_448.tv_sec;
    local_5b8 = local_5c0;
    local_448.tv_nsec = local_448.tv_sec;
    tStack_438.tv_nsec = tStack_438.tv_sec;
    tStack_428.tv_nsec = tStack_428.tv_sec;
    local_410 = pppppppuStack_418;
    pppppppppppppuStack_400 = local_408;
    pppppppppppppuStack_3f0 = local_3f8;
    pppppppppppppuStack_3e0 = local_3e8;
    local_3d0 = local_3d8;
    local_3c0 = pppppppuStack_3c8;
    local_3b0 = pppppppuStack_3b8;
    local_3a0 = pvStack_3a8;
    local_390 = local_398;
    p_Stack_380 = local_388;
    local_370 = local_378;
    local_360 = local_368;
    local_350 = local_358;
    local_340 = local_348;
    local_330 = local_338;
    local_320 = local_328;
    local_310 = local_318;
    local_300 = local_308;
    local_2f0 = local_2f8;
    local_2e0 = local_2e8;
    local_2d0 = local_2d8;
    local_2c0 = local_2c8;
    local_2b0 = local_2b8;
    local_2a0 = local_2a8;
    local_290 = local_298;
    local_280 = local_288;
    local_270 = local_278;
    local_260 = local_268;
    local_250 = local_258;
    local_240 = local_248;
    local_230 = local_238;
    local_220 = local_228;
    local_210 = local_218;
    local_200 = local_208;
    local_1f0 = local_1f8;
    local_1e0 = local_1e8;
    local_1d0 = local_1d8;
    local_1c0 = local_1c8;
    local_1b0 = local_1b8;
    local_1a0 = local_1a8;
    local_190 = local_198;
    local_180 = local_188;
    local_170 = local_178;
    local_160 = local_168;
    local_150 = local_158;
    local_140 = local_148;
    local_130 = local_138;
    local_120 = local_128;
    local_110 = local_118;
    local_100 = local_108;
    local_f0 = local_f8;
    local_e0 = local_e8;
    local_d0 = local_d8;
    local_c0 = local_c8;
    local_b0 = local_b8;
    local_a0 = local_a8;
    local_90 = local_98;
    local_80 = local_88;
    local_70 = local_78;
    local_60 = local_68;
    local_50 = local_58;
    do {
      ptVar15 = ptVar25;
      ptVar25 = &local_448;
      std::__detail::_List_node_base::_M_transfer
                ((_List_node_base *)&local_5c0,(_List_node_base *)local_4c0.tv_sec);
      if (ptVar25 == ptVar15) {
        uVar22 = 1;
      }
      else {
        do {
          ptVar16 = ptVar25;
          ptVar1 = (timespec *)ptVar16->tv_sec;
          if (ptVar1 == ptVar16) {
            ptVar25 = ptVar16;
            goto LAB_0023d365;
          }
          if (local_5c0 != (_List_node_base *)&local_5c0) {
            ptVar25 = ptVar1;
            p_Var13 = local_5c0;
            do {
                    /* try { // try from 0023d2f8 to 0023d307 has its CatchHandler @ 0023e185 */
              (**(code **)(**(long **)(p_Var13 + 0x10) + 0x10))();
              (**(code **)(*(long *)ptVar25[1].tv_sec + 0x10))();
              if (extraout_RDX_00 < extraout_RDX_01) {
                p_Var14 = *(_List_node_base **)p_Var13;
                std::__detail::_List_node_base::_M_transfer((_List_node_base *)ptVar25,p_Var13);
                p_Var13 = p_Var14;
              }
              else {
                ptVar25 = (timespec *)ptVar25->tv_sec;
              }
            } while ((ptVar25 != ptVar16) && (p_Var13 != (_List_node_base *)&local_5c0));
            if (p_Var13 != (_List_node_base *)&local_5c0) {
              std::__detail::_List_node_base::_M_transfer((_List_node_base *)ptVar16,p_Var13);
            }
          }
          std::__detail::_List_node_base::swap
                    ((_List_node_base *)&local_5c0,(_List_node_base *)ptVar16);
          ptVar25 = ptVar16 + 1;
        } while (ptVar16 + 1 != ptVar15);
        ptVar25 = ptVar15;
LAB_0023d365:
        uVar22 = (ulong)(ptVar1 != ptVar16);
      }
      std::__detail::_List_node_base::swap((_List_node_base *)&local_5c0,(_List_node_base *)ptVar25)
      ;
      ptVar25 = ptVar15 + uVar22;
    } while ((timespec *)local_4c0.tv_sec != &local_4c0);
    local_588 = (undefined8 *************)CONCAT71(local_588._1_7_,(char)uVar22);
    for (ptVar25 = &tStack_438; ptVar25 != ptVar15 + uVar22; ptVar25 = ptVar25 + 1) {
      ptVar1 = ptVar25 + -1;
      ptVar16 = (timespec *)ptVar25->tv_sec;
      ptVar39 = (timespec *)ptVar25[-1].tv_sec;
      while( true ) {
        bVar43 = ptVar39 != ptVar1;
        ptVar38 = ptVar39;
        if (ptVar16 == ptVar25) break;
        while( true ) {
          ptVar39 = ptVar38;
          if (ptVar38 == ptVar1) goto LAB_0023d537;
                    /* try { // try from 0023d4fc to 0023d50b has its CatchHandler @ 0023e114 */
          (**(code **)(*(long *)ptVar38[1].tv_sec + 0x10))();
          (**(code **)(*(long *)ptVar16[1].tv_sec + 0x10))();
          if (extraout_RDX_05 <= extraout_RDX_04) break;
          ptVar39 = (timespec *)ptVar38->tv_sec;
          std::__detail::_List_node_base::_M_transfer
                    ((_List_node_base *)ptVar16,(_List_node_base *)ptVar38);
          bVar43 = ptVar39 != ptVar1;
          ptVar38 = ptVar39;
          if (ptVar16 == ptVar25) goto LAB_0023d537;
        }
        ptVar16 = (timespec *)ptVar16->tv_sec;
      }
LAB_0023d537:
      if (bVar43) {
        std::__detail::_List_node_base::_M_transfer
                  ((_List_node_base *)ptVar25,(_List_node_base *)ptVar39);
      }
    }
    ptVar25 = ptVar15 + -1;
    if ((char)local_588 != '\0') {
      ptVar25 = ptVar15;
    }
    std::__detail::_List_node_base::swap((_List_node_base *)ptVar25,(_List_node_base *)&local_4c0);
    param_7 = local_590;
    if ((long)local_4a8 < (long)p_Stack_4a0) goto LAB_0023d590;
  }
  do {
    p_Stack_4a0 = (_List_node_base *)0x7fffffffffffffff;
    if ((timespec *)local_4c0.tv_sec != &local_4c0) {
      plVar11 = (long *)((timespec *)(local_4c0.tv_sec + 0x10))->tv_sec;
      ptVar25 = (timespec *)local_4c0.tv_sec;
      while( true ) {
        (**(code **)(*plVar11 + 0x20))(plVar11);
        cVar9 = (**(code **)(*plVar11 + 0x18))(plVar11);
        if (cVar9 == '\0') break;
        p_Var13 = (_List_node_base *)(**(code **)(*plVar11 + 0x10))(plVar11);
        if ((long)local_4a8 < (long)p_Var13) {
          local_4a8 = p_Var13;
        }
        do {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          if ((long)extraout_RDX_03 < (long)p_Stack_4a0) {
            p_Stack_4a0 = extraout_RDX_03;
          }
          ptVar25 = (timespec *)ptVar25->tv_sec;
          if (ptVar25 == &local_4c0) goto LAB_0023d45d;
          plVar11 = (long *)ptVar25[1].tv_sec;
        } while ((ptVar25 != (timespec *)local_4c0.tv_sec) &&
                ((**(code **)(*plVar11 + 0x10))(plVar11), (long)local_4a8 < extraout_RDX_02
                    /* try { // try from 0023d3d3 to 0023d425 has its CatchHandler @ 0023e107 */));
      }
      break;
    }
LAB_0023d45d:
                    /* try { // try from 0023d45d to 0023d464 has its CatchHandler @ 0023e03c */
    std::__cxx11::list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>
    ::
    sort<juce::detail::IntersectingRangedValues<juce::Font,juce::Colour,long_long>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
              ((_List_node_base *)&local_4c0);
  } while ((long)p_Stack_4a0 <= (long)local_4a8);
LAB_0023d590:
  local_450 = this_00 + 0x60;
  local_460 = param_7 + 0x30;
  local_48 = 0x61ac58;
  uStack_44 = 0;
  uStack_40 = 0x61ac58;
  uStack_3c = 0;
  do {
    local_448.tv_sec = (__time_t)&PTR__RangedIterator_00710d28;
    tStack_428.tv_nsec = (long)local_540;
    pppppppuStack_418 = pppppppuStack_538;
    tStack_438.tv_nsec = (long)local_550;
    tStack_428.tv_sec = (__time_t)ptStack_548;
    local_448.tv_nsec = (long)local_560;
    tStack_438.tv_sec = (__time_t)ptStack_558;
    local_410 = (undefined8 *******)&PTR__RangedIterator_00712648;
    local_3e8 = local_508;
    pppppppppppppuStack_3e0 = pppppppppppppuStack_500;
    local_3f8 = local_518;
    pppppppppppppuStack_3f0 = pppppppppppppuStack_510;
    local_408 = local_528;
    pppppppppppppuStack_400 = pppppppppppppuStack_520;
    local_3d8 = (undefined8 *******)&PTR__RangedIterator_00710cd8;
    local_3b0 = local_4d0;
    pvStack_3a8 = pvStack_4c8;
    local_3c0 = local_4e0;
    pppppppuStack_3b8 = pppppppuStack_4d8;
    local_3d0 = local_4f0;
    pppppppuStack_3c8 = pppppppuStack_4e8;
    local_390 = (vector<long_long,std::allocator<long_long>> *)0x0;
    ptVar25 = (timespec *)local_4c0.tv_sec;
    param_2 = local_4e0._0_4_;
    local_3a0 = (vector<long_long,std::allocator<long_long>> *)&local_3a0;
    local_398 = (vector<long_long,std::allocator<long_long>> *)&local_3a0;
    if ((timespec *)local_4c0.tv_sec == &local_4c0) {
      local_388 = local_4a8;
      p_Stack_380 = p_Stack_4a0;
    }
    else {
      do {
                    /* try { // try from 0023d690 to 0023d699 has its CatchHandler @ 0023e155 */
        p_Var13 = operator_new(0x18);
        *(__time_t *)(p_Var13 + 0x10) = ptVar25[1].tv_sec;
        std::__detail::_List_node_base::_M_hook(p_Var13);
        local_390 = local_390 + 1;
        p_Var8 = &ptVar25->tv_sec;
        ptVar25 = (timespec *)*p_Var8;
      } while ((timespec *)*p_Var8 != &local_4c0);
      local_388 = local_4a8;
      p_Stack_380 = p_Stack_4a0;
      pvVar26 = local_3a0;
      if (local_3a0 != (vector<long_long,std::allocator<long_long>> *)&local_3a0) {
        do {
                    /* try { // try from 0023d6f7 to 0023d6f9 has its CatchHandler @ 0023e120 */
          cVar9 = (**(code **)(*(long *)*(vector<long_long,std::allocator<long_long>> **)
                                         (pvVar26 + 0x10) + 0x18))();
          pvVar7 = local_3a0;
          pvVar27 = pvVar26;
          if (cVar9 == '\0') break;
          pvVar26 = *(vector<long_long,std::allocator<long_long>> **)pvVar26;
          pvVar27 = (vector<long_long,std::allocator<long_long>> *)&local_3a0;
        } while (pvVar26 != (vector<long_long,std::allocator<long_long>> *)&local_3a0);
        while (pvVar7 != (vector<long_long,std::allocator<long_long>> *)&local_3a0) {
          pvVar26 = *(vector<long_long,std::allocator<long_long>> **)pvVar7;
          operator_delete(pvVar7);
          pvVar7 = pvVar26;
        }
        this_01 = local_580;
        uVar22 = local_578;
        ptVar25 = (timespec *)local_4c0.tv_sec;
        if (pvVar27 != (vector<long_long,std::allocator<long_long>> *)&local_3a0) break;
      }
    }
    p_Var13 = local_4a8;
    p_Var14 = p_Stack_4a0;
    if ((long)p_Stack_4a0 <= (long)local_4a8) {
      p_Var14 = local_4a8;
    }
    plVar11 = (long *)(((long)local_4e0 - (long)pppppppuStack_4e8 >> 1) + (long)local_4f0);
    local_588 = local_528;
    lVar33 = (long)local_518 - (long)pppppppppppppuStack_520;
    local_5c0 = local_4a8;
    puVar34 = *(undefined8 **)(param_7 + 8);
    if (puVar34 == *(undefined8 **)(param_7 + 0x10)) {
                    /* try { // try from 0023d7e0 to 0023d7ef has its CatchHandler @ 0023e0b9 */
      std::vector<long_long,std::allocator<long_long>>::_M_realloc_insert<long_long>
                (param_7,puVar34,&local_5c0);
    }
    else {
      *puVar34 = local_4a8;
      *(undefined8 **)(param_7 + 8) = puVar34 + 1;
    }
                    /* try { // try from 0023d7f0 to 0023d805 has its CatchHandler @ 0023e10f */
    ParagraphsModel::getTextInRange
              ((String *)&local_5c0,(long)local_450,(long)p_Var13,(long)p_Var14);
    puVar34 = *(undefined8 **)(param_7 + 0x20);
    if (puVar34 == *(undefined8 **)(param_7 + 0x28)) {
      puVar12 = *(undefined8 **)(param_7 + 0x18);
      lVar40 = (long)puVar34 - (long)puVar12;
      if (lVar40 == 0x7ffffffffffffff8) {
                    /* try { // try from 0023e01c to 0023e027 has its CatchHandler @ 0023e0c3 */
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_realloc_insert");
      }
      uVar31 = lVar40 >> 3;
      uVar22 = uVar31;
      if (lVar40 == 0) {
        uVar22 = 1;
      }
      local_458 = uVar22 + uVar31;
      if (0xfffffffffffffff < local_458) {
        local_458 = 0xfffffffffffffff;
      }
      if (CARRY8(uVar22,uVar31)) {
        local_458 = 0xfffffffffffffff;
      }
      if (local_458 == 0) {
        puVar17 = (undefined8 *)0x0;
      }
      else {
                    /* try { // try from 0023d8ae to 0023d8b2 has its CatchHandler @ 0023e0af */
        puVar17 = operator_new(local_458 * 8);
      }
      puVar17[uVar31] = local_5c0;
      local_5c0 = (_List_node_base *)&DAT_0061ac58;
      puVar42 = puVar17;
      if (puVar12 == puVar34) {
LAB_0023d9b6:
        puVar42 = puVar42 + 1;
        if (puVar12 != (undefined8 *)0x0) goto LAB_0023d9bf;
      }
      else {
        uVar22 = lVar40 - 8;
        puVar18 = puVar12;
        if ((uVar22 < 0x18) ||
           ((puVar17 < (undefined8 *)((long)puVar12 + (uVar22 & 0xfffffffffffffff8) + 8) &&
            (puVar12 < (undefined8 *)((long)puVar17 + (uVar22 & 0xfffffffffffffff8) + 8))))) {
LAB_0023d9a0:
          do {
            *puVar42 = *puVar18;
            *puVar18 = &DAT_0061ac58;
            puVar18 = puVar18 + 1;
            puVar42 = puVar42 + 1;
          } while (puVar18 != puVar34);
          goto LAB_0023d9b6;
        }
        uVar21 = (uVar22 >> 3) + 1;
        uVar22 = uVar21 & 0x3ffffffffffffffc;
        puVar42 = puVar17 + uVar22;
        puVar18 = puVar12 + uVar22;
        uVar31 = 0;
        do {
          uVar44 = (puVar12 + uVar31)[1];
          uVar5 = puVar12[uVar31 + 2];
          uVar6 = (puVar12 + uVar31 + 2)[1];
          puVar17[uVar31] = puVar12[uVar31];
          (puVar17 + uVar31)[1] = uVar44;
          puVar17[uVar31 + 2] = uVar5;
          (puVar17 + uVar31 + 2)[1] = uVar6;
          puVar12[uVar31] = CONCAT44(uStack_44,local_48);
          (puVar12 + uVar31)[1] = CONCAT44(uStack_3c,uStack_40);
          puVar12[uVar31 + 2] = CONCAT44(uStack_44,local_48);
          (puVar12 + uVar31 + 2)[1] = CONCAT44(uStack_3c,uStack_40);
          uVar31 = uVar31 + 4;
        } while (uVar22 != uVar31);
        if (uVar21 != uVar22) goto LAB_0023d9a0;
        puVar42 = puVar42 + 1;
LAB_0023d9bf:
        operator_delete(puVar12);
      }
      param_7 = local_590;
      *(undefined8 **)(local_590 + 0x18) = puVar17;
      *(undefined8 **)(local_590 + 0x20) = puVar42;
      *(undefined8 **)(local_590 + 0x28) = puVar17 + local_458;
      p_Var13 = local_5c0 + -0x10;
      if (p_Var13 == (_List_node_base *)&emptyString) goto LAB_0023da06;
      LOCK();
      iVar29 = *(int *)p_Var13;
      *(int *)p_Var13 = *(int *)p_Var13 + -1;
      UNLOCK();
      if (iVar29 != 0) goto LAB_0023da06;
      operator_delete__(p_Var13);
      plVar30 = *(long **)(param_7 + 0x38);
      if (plVar30 != *(long **)(param_7 + 0x40)) goto LAB_0023da10;
LAB_0023da4f:
                    /* try { // try from 0023da4f to 0023daf8 has its CatchHandler @ 0023e102 */
      std::vector<juce::Font,std::allocator<juce::Font>>::_M_realloc_insert<juce::Font_const&>
                ((vector<juce::Font,std::allocator<juce::Font>> *)local_460,plVar30,plVar11);
    }
    else {
      *puVar34 = local_5c0;
      local_5c0 = (_List_node_base *)&DAT_0061ac58;
      *(long *)(param_7 + 0x20) = *(long *)(param_7 + 0x20) + 8;
LAB_0023da06:
      plVar30 = *(long **)(param_7 + 0x38);
      if (plVar30 == *(long **)(param_7 + 0x40)) goto LAB_0023da4f;
LAB_0023da10:
      lVar40 = *plVar11;
      *plVar30 = lVar40;
      if (lVar40 != 0) {
        LOCK();
        *(int *)(lVar40 + 8) = *(int *)(lVar40 + 8) + 1;
        UNLOCK();
        plVar30 = *(long **)(param_7 + 0x38);
      }
      *(long **)(param_7 + 0x38) = plVar30 + 1;
    }
    lVar33 = lVar33 >> 4;
    puVar2 = *(undefined4 **)(local_590 + 0x50);
    if (puVar2 == *(undefined4 **)(local_590 + 0x58)) {
      puVar3 = *(undefined4 **)(local_590 + 0x48);
      lVar40 = (long)puVar2 - (long)puVar3;
      if (lVar40 == 0x7ffffffffffffffc) {
                    /* try { // try from 0023e028 to 0023e033 has its CatchHandler @ 0023e0be */
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_realloc_insert");
      }
      uVar31 = lVar40 >> 2;
      uVar22 = uVar31;
      if (lVar40 == 0) {
        uVar22 = 1;
      }
      uVar21 = uVar22 + uVar31;
      if (0x1fffffffffffffff < uVar21) {
        uVar21 = 0x1fffffffffffffff;
      }
      if (CARRY8(uVar22,uVar31)) {
        uVar21 = 0x1fffffffffffffff;
      }
      puVar19 = operator_new(uVar21 * 4);
      param_7 = local_590;
      puVar19[uVar31] = *(undefined4 *)((long)local_588 + lVar33 * 4);
      puVar32 = puVar19;
      if (puVar3 != puVar2) {
        puVar20 = puVar3;
        if (0x1b < lVar40 - 4U) {
          uVar41 = (lVar40 - 4U >> 2) + 1;
          uVar22 = uVar41 & 0x7ffffffffffffff8;
          uVar24 = (uVar22 - 8 >> 3) + 1;
          uVar31 = (ulong)((uint)uVar24 & 3);
          if (uVar22 - 8 < 0x18) {
            lVar33 = 0;
          }
          else {
            uVar24 = uVar24 & 0x3ffffffffffffffc;
            lVar33 = 0;
            do {
              uVar44 = *(undefined8 *)((long)(puVar3 + lVar33) + 8);
              uVar5 = *(undefined8 *)(puVar3 + lVar33 + 4);
              uVar6 = *(undefined8 *)((long)(puVar3 + lVar33 + 4) + 8);
              *(undefined8 *)(puVar19 + lVar33) = *(undefined8 *)(puVar3 + lVar33);
              *(undefined8 *)((long)(puVar19 + lVar33) + 8) = uVar44;
              *(undefined8 *)(puVar19 + lVar33 + 4) = uVar5;
              *(undefined8 *)((long)(puVar19 + lVar33 + 4) + 8) = uVar6;
              uVar44 = *(undefined8 *)((long)(puVar3 + lVar33 + 8) + 8);
              uVar5 = *(undefined8 *)(puVar3 + lVar33 + 0xc);
              uVar6 = *(undefined8 *)((long)(puVar3 + lVar33 + 0xc) + 8);
              *(undefined8 *)(puVar19 + lVar33 + 8) = *(undefined8 *)(puVar3 + lVar33 + 8);
              *(undefined8 *)((long)(puVar19 + lVar33 + 8) + 8) = uVar44;
              *(undefined8 *)(puVar19 + lVar33 + 0xc) = uVar5;
              *(undefined8 *)((long)(puVar19 + lVar33 + 0xc) + 8) = uVar6;
              uVar44 = *(undefined8 *)((long)(puVar3 + lVar33 + 0x10) + 8);
              uVar5 = *(undefined8 *)(puVar3 + lVar33 + 0x14);
              uVar6 = *(undefined8 *)((long)(puVar3 + lVar33 + 0x14) + 8);
              *(undefined8 *)(puVar19 + lVar33 + 0x10) = *(undefined8 *)(puVar3 + lVar33 + 0x10);
              *(undefined8 *)((long)(puVar19 + lVar33 + 0x10) + 8) = uVar44;
              *(undefined8 *)(puVar19 + lVar33 + 0x14) = uVar5;
              *(undefined8 *)((long)(puVar19 + lVar33 + 0x14) + 8) = uVar6;
              uVar44 = *(undefined8 *)((long)(puVar3 + lVar33 + 0x18) + 8);
              uVar5 = *(undefined8 *)(puVar3 + lVar33 + 0x1c);
              uVar6 = *(undefined8 *)((long)(puVar3 + lVar33 + 0x1c) + 8);
              *(undefined8 *)(puVar19 + lVar33 + 0x18) = *(undefined8 *)(puVar3 + lVar33 + 0x18);
              *(undefined8 *)((long)(puVar19 + lVar33 + 0x18) + 8) = uVar44;
              *(undefined8 *)(puVar19 + lVar33 + 0x1c) = uVar5;
              *(undefined8 *)((long)(puVar19 + lVar33 + 0x1c) + 8) = uVar6;
              lVar33 = lVar33 + 0x20;
              uVar24 = uVar24 - 4;
            } while (uVar24 != 0);
          }
          if (uVar31 != 0) {
            lVar40 = 0;
            do {
              puVar12 = (undefined8 *)((long)puVar3 + lVar40 + lVar33 * 4);
              uVar44 = puVar12[1];
              puVar34 = (undefined8 *)((long)puVar3 + lVar40 + lVar33 * 4 + 0x10);
              uVar5 = *puVar34;
              uVar6 = puVar34[1];
              puVar34 = (undefined8 *)((long)puVar19 + lVar40 + lVar33 * 4);
              *puVar34 = *puVar12;
              puVar34[1] = uVar44;
              puVar34 = (undefined8 *)((long)puVar19 + lVar40 + lVar33 * 4 + 0x10);
              *puVar34 = uVar5;
              puVar34[1] = uVar6;
              lVar40 = lVar40 + 0x20;
            } while (uVar31 * 0x20 != lVar40);
          }
          puVar32 = puVar19 + uVar22;
          if (uVar41 == uVar22) goto LAB_0023dc42;
          puVar20 = puVar3 + uVar22;
        }
        do {
          *puVar32 = *puVar20;
          puVar20 = puVar20 + 1;
          puVar32 = puVar32 + 1;
        } while (puVar20 != puVar2);
      }
LAB_0023dc42:
      if (puVar3 != (undefined4 *)0x0) {
        operator_delete(puVar3);
      }
      *(undefined4 **)(param_7 + 0x48) = puVar19;
      *(undefined4 **)(param_7 + 0x50) = puVar32 + 1;
      *(undefined4 **)(param_7 + 0x58) = puVar19 + uVar21;
    }
    else {
      *puVar2 = *(undefined4 *)((long)local_588 + lVar33 * 4);
      *(long *)(local_590 + 0x50) = *(long *)(local_590 + 0x50) + 4;
      param_7 = local_590;
    }
    do {
      p_Stack_4a0 = (_List_node_base *)0x7fffffffffffffff;
      if ((timespec *)local_4c0.tv_sec != &local_4c0) {
        plVar11 = (long *)((timespec *)(local_4c0.tv_sec + 0x10))->tv_sec;
        ptVar25 = (timespec *)local_4c0.tv_sec;
        while( true ) {
          (**(code **)(*plVar11 + 0x20))(plVar11);
          cVar9 = (**(code **)(*plVar11 + 0x18))(plVar11);
          if (cVar9 == '\0') break;
          p_Var13 = (_List_node_base *)(**(code **)(*plVar11 + 0x10))(plVar11);
          if ((long)local_4a8 < (long)p_Var13) {
            local_4a8 = p_Var13;
          }
          do {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            if ((long)extraout_RDX_07 < (long)p_Stack_4a0) {
              p_Stack_4a0 = extraout_RDX_07;
            }
            ptVar25 = (timespec *)ptVar25->tv_sec;
            if (ptVar25 == &local_4c0) goto LAB_0023dd40;
            plVar11 = (long *)ptVar25[1].tv_sec;
          } while ((ptVar25 != (timespec *)local_4c0.tv_sec) &&
                  ((**(code **)(*plVar11 + 0x10))(plVar11), (long)local_4a8 < extraout_RDX_06
                    /* try { // try from 0023dcb3 to 0023dd05 has its CatchHandler @ 0023e21a */));
        }
        break;
      }
LAB_0023dd40:
                    /* try { // try from 0023dd40 to 0023dd47 has its CatchHandler @ 0023e11b */
      std::__cxx11::
      list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>::
      sort<juce::detail::IntersectingRangedValues<juce::Font,juce::Colour,long_long>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
                ((_List_node_base *)&local_4c0);
    } while ((long)p_Stack_4a0 <= (long)local_4a8);
  } while( true );
  while( true ) {
    local_580 = this_01;
    local_578 = uVar22;
    if (ptVar25 == &local_4c0) break;
    ptVar15 = (timespec *)ptVar25->tv_sec;
    operator_delete(ptVar25);
    this_01 = local_580;
    uVar22 = local_578;
    ptVar25 = ptVar15;
  }
LAB_0023dd8a:
  local_568 = (undefined **)&DAT_0061ac58;
                    /* try { // try from 0023dd9f to 0023ddb0 has its CatchHandler @ 0023e041 */
  ParagraphsModel::set((undefined8 *)(this_00 + 0x60),local_5b0,uVar22,(String *)&local_568);
  ppuVar36 = local_568 + -2;
  if (ppuVar36 != (undefined **)&emptyString) {
    LOCK();
    iVar29 = *(int *)ppuVar36;
    *(int *)ppuVar36 = *(int *)ppuVar36 + -1;
    UNLOCK();
    if (iVar29 == 0) {
      operator_delete__(ppuVar36);
    }
  }
  local_5a8._8_8_ = local_5a8._0_8_;
                    /* try { // try from 0023dde2 to 0023de12 has its CatchHandler @ 0023e0a5 */
  detail::Ranges::erase(this_00,local_5b0,uVar22,(undefined8 *)local_5a8);
  detail::Ranges::shift(this_00,uVar22,local_5b0 - uVar22,(undefined8 *)local_5a8);
  if (local_5a8._8_8_ - local_5a8._0_8_ != 0) {
    uVar22 = SUB168(SEXT816((long)(local_5a8._8_8_ - local_5a8._0_8_)) * SEXT816(0x2aaaaaaaaaaaaaab)
                    ,8);
    lVar33 = ((uVar22 >> 3) - ((long)uVar22 >> 0x3f)) * 0x30;
    plVar11 = (long *)local_5a8._0_8_;
    do {
                    /* try { // try from 0023de50 to 0023de5c has its CatchHandler @ 0023e0fa */
      detail::RangedValues<juce::Font>::applyOperation((RangedValues<juce::Font> *)this_00,plVar11);
      plVar11 = plVar11 + 6;
      lVar33 = lVar33 + -0x30;
    } while (lVar33 != 0);
  }
                    /* try { // try from 0023de67 to 0023de97 has its CatchHandler @ 0023e0a5 */
  detail::RangedValues<juce::Font>::mergeEqualItems
            ((RangedValues<juce::Font> *)this_00,local_5b0,(long *)local_5a8);
  plVar11 = (long *)local_5a8;
  uVar22 = local_5b0;
  detail::RangedValues<juce::Colour>::drop<juce::detail::MergeEqualItemsYes>
            ((RangedValues<juce::Colour> *)(this_00 + 0x30),local_5b0,local_578,plVar11);
  if ((void *)local_488._8_8_ != (void *)0x0) {
    operator_delete((void *)local_488._8_8_);
  }
  if ((void *)local_498._0_8_ != (void *)0x0) {
    operator_delete((void *)local_498._0_8_);
  }
  if ((long *)local_5a8._0_8_ != (long *)0x0) {
    operator_delete((void *)local_5a8._0_8_);
  }
  uVar10 = (**(code **)(**(long **)(this_01 + 0x338) + 0x50))();
  uVar23 = *(uint *)(this_01 + 0x340);
  uVar28 = 0;
  if ((int)uVar23 < 0) {
    uVar23 = 0;
  }
  if (uVar10 < uVar23) {
    uVar23 = uVar10;
  }
  uVar44 = extraout_RDX_08;
  if (uVar23 != 0) {
    ParagraphsModel::getText(&local_448.tv_sec,*(long *)(*(long *)(this_01 + 0x338) + 0x330) + 0x60)
    ;
    uVar22 = (ulong)(uVar23 - 1);
    uVar10 = juce::String::operator[]((String *)&local_448,uVar23 - 1);
    ppuVar36 = (undefined **)(local_448.tv_sec + -0x10);
    uVar44 = extraout_RDX_09;
    if (ppuVar36 != (undefined **)&emptyString) {
      LOCK();
      iVar29 = *(int *)ppuVar36;
      *(int *)ppuVar36 = *(int *)ppuVar36 + -1;
      UNLOCK();
      if (iVar29 == 0) {
        operator_delete__(ppuVar36);
        uVar44 = extraout_RDX_10;
      }
    }
    this_01 = local_580;
    if (uVar10 != 10) {
      uVar10 = (**(code **)(**(long **)(local_580 + 0x338) + 0x50))();
      uVar28 = 1;
      uVar44 = extraout_RDX_11;
      if (uVar23 != uVar10) {
        uVar28 = *(undefined4 *)(this_01 + 0x348);
      }
    }
  }
  *(undefined4 *)(this_01 + 0x344) = uVar28;
  *(undefined4 *)(this_01 + 0x290) = 0xffffffff;
  this_01[0x1d4] = (TextEditor)0x1;
  uVar44 = checkLayout(this_01,uVar22,uVar44,(long)plVar11,(uint *)pvVar37,(ulong)param_8);
  *(undefined4 *)(this_01 + 0x2f0) = 0;
  repaintText(uVar44,param_2,this_01,*(long *)(this_01 + 0x270),extraout_RDX_12,plVar11,
              (uint *)pvVar37,(ulong)param_8);
  moveCaret(this_01,local_56c);
  uVar23 = (**(code **)(*(long *)this_01 + 0x40))(this_01);
  uVar22 = (ulong)uVar23;
  if (*(long *)(this_01 + 0x270) != CONCAT44(uVar23,uVar23)) {
    *(long *)(this_01 + 0x270) = CONCAT44(uVar23,uVar23);
                    /* try { // try from 0023dfdb to 0023dfdf has its CatchHandler @ 0023e034 */
    Component::getAccessibilityHandler((Component *)(this_01 + 8));
  }
  uVar31 = local_468;
  iVar29 = (int)local_468;
  uVar24 = local_468 & 0xffffffff;
  uVar23 = (**(code **)(*(long *)this_01 + 0x50))(this_01);
  uVar21 = (ulong)uVar23;
  if ((int)uVar23 <= iVar29) {
    uVar21 = uVar31 & 0xffffffff;
  }
  repaintText(extraout_XMM0_Qa,param_2,this_01,uVar24 | uVar21 << 0x20,extraout_RDX_13,uVar22,
              (uint *)pvVar37,(ulong)param_8);
  return;
}


