// Function : createStandardLayout
// Namespace: juce:TextLayout
// Entry    : 003c24e0
// Prototype: undefined createStandardLayout(TextLayout * this, ulong * param_1)
// Body     : 003c24e0 - 003c754b


/* WARNING: Removing unreachable block (ram,0x003c4834) */
/* WARNING: Removing unreachable block (ram,0x003c7135) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::TextLayout::createStandardLayout(juce::AttributedString const&) */

void __thiscall juce::TextLayout::createStandardLayout(TextLayout *this,ulong *param_1)

{
  long ******pppppplVar1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  pthread_mutex_t *ppVar4;
  float *pfVar5;
  undefined4 uVar6;
  long ******pppppplVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *****pppppuVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  char cVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  undefined8 *puVar31;
  undefined8 *******pppppppuVar32;
  _List_node_base *p_Var33;
  undefined8 *******pppppppuVar34;
  long lVar35;
  uint ******ppppppuVar36;
  _List_node_base *p_Var37;
  TypefaceCache *pTVar38;
  ulong uVar39;
  Font *this_00;
  Font *pFVar40;
  void *pvVar41;
  ulong uVar42;
  undefined8 ******ppppppuVar43;
  undefined8 *******pppppppuVar44;
  long lVar45;
  long *plVar46;
  TypefaceCache *pTVar47;
  ulong uVar48;
  undefined4 *puVar49;
  undefined4 *puVar50;
  undefined8 *******extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  undefined8 *******extraout_RDX_03;
  long extraout_RDX_04;
  long extraout_RDX_05;
  long extraout_RDX_06;
  long extraout_RDX_07;
  long *plVar51;
  TypefaceCache *pTVar52;
  long lVar53;
  long lVar54;
  long extraout_RDX_08;
  undefined8 *******extraout_RDX_09;
  uint uVar55;
  long lVar56;
  long *******ppppppplVar57;
  long *plVar58;
  long ******pppppplVar59;
  long *******ppppppplVar60;
  undefined8 *******pppppppuVar61;
  _List_node_base *p_Var62;
  _List_node_base *p_Var63;
  long lVar64;
  char *pcVar65;
  long *******ppppppplVar66;
  undefined8 *puVar67;
  ulong uVar68;
  ulong *puVar69;
  _List_node_base *p_Var70;
  int *piVar71;
  ulong uVar72;
  ulong uVar73;
  uint ******ppppppuVar74;
  uint *****pppppuVar75;
  TypefaceCache *pTVar76;
  undefined4 *puVar77;
  ulong *puVar78;
  undefined4 uVar79;
  ulong uVar80;
  undefined8 *puVar81;
  bool bVar82;
  bool bVar83;
  uint uVar84;
  float fVar85;
  undefined8 uVar86;
  float fVar87;
  undefined1 auVar88 [16];
  float fVar89;
  _List_node_base *local_a50;
  undefined8 *local_a40;
  undefined1 local_a38 [8];
  ulong uStack_a30;
  uint *****local_a18;
  undefined8 local_a08;
  long local_9f8;
  undefined1 local_9e8 [8];
  float fStack_9e0;
  float fStack_9dc;
  float local_9c8;
  float fStack_9c4;
  undefined8 local_9a8;
  long *local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  long *plStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  void *local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined4 *puStack_950;
  undefined4 *local_948;
  undefined4 *puStack_940;
  long local_930;
  TypefaceCache *local_928;
  long *local_920;
  void *local_918;
  void *pvStack_910;
  undefined8 local_908;
  long local_8f8;
  uint *****local_8f0;
  _List_node_base *local_8e8;
  ulong local_8e0;
  long *local_8d8;
  undefined4 local_8cc;
  _List_node_base *local_8c8;
  _List_node_base *local_8c0;
  _List_node_base *p_Stack_8b8;
  _List_node_base *local_8b0;
  _List_node_base *p_Stack_8a8;
  _List_node_base *local_8a0;
  _List_node_base *p_Stack_898;
  long *local_890;
  long *plStack_888;
  long *plStack_880;
  undefined8 *local_878;
  undefined8 *puStack_870;
  undefined8 *local_868;
  long lStack_860;
  _List_node_base *local_858 [3];
  long local_840;
  long lStack_838;
  undefined8 *local_830;
  undefined8 *puStack_828;
  undefined8 *local_820;
  _List_node_base *local_818;
  _List_node_base *p_Stack_810;
  _List_node_base *local_808;
  long local_800;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_7f8;
  undefined4 local_7f0;
  undefined4 uStack_7ec;
  undefined4 uStack_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined8 ******local_7c8;
  undefined8 ******ppppppuStack_7c0;
  undefined8 *******local_7b8;
  long *******local_7b0;
  long *******ppppppplStack_7a8;
  long *******local_7a0;
  long *******local_798;
  undefined8 *******pppppppuStack_790;
  undefined8 *******local_788;
  undefined8 *******pppppppuStack_780;
  undefined **local_778;
  long *plStack_770;
  long *local_768;
  long *plStack_760;
  long *local_758;
  long *plStack_750;
  undefined8 local_748;
  undefined **ppuStack_740;
  long *local_738;
  long *plStack_730;
  long *local_728;
  long *plStack_720;
  long *local_718;
  undefined8 uStack_710;
  undefined1 *local_708;
  undefined **local_6f8;
  undefined4 local_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined8 *local_6d0;
  undefined8 *puStack_6c8;
  undefined **local_6c0;
  long ******local_6b8;
  long ******pppppplStack_6b0;
  long ******local_6a8;
  long *******ppppppplStack_6a0;
  undefined8 *******pppppppuStack_698;
  undefined8 *******pppppppuStack_690;
  undefined8 *******local_688;
  undefined8 ******local_680;
  undefined8 ******ppppppuStack_678;
  undefined8 ******local_670;
  undefined8 ******ppppppuStack_668;
  undefined8 ******local_660;
  undefined8 ******ppppppuStack_658;
  undefined **local_650;
  uint ******local_648;
  undefined8 ******ppppppuStack_640;
  undefined8 ******local_638;
  uint ******ppppppuStack_630;
  undefined8 ******local_628;
  undefined8 uStack_620;
  undefined **local_618;
  undefined8 ******local_610;
  undefined8 ******ppppppuStack_608;
  undefined8 ******local_600;
  undefined8 ******ppppppuStack_5f8;
  undefined8 ******local_5f0;
  undefined8 uStack_5e8;
  _List_node_base *local_5e0;
  _List_node_base *local_5d8;
  undefined8 *local_5d0;
  undefined8 *******local_5c8;
  undefined8 *******pppppppuStack_5c0;
  undefined1 local_5b8 [16];
  long *******local_5a8;
  undefined8 *******pppppppuStack_5a0;
  undefined8 *******local_598;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined1 local_560 [8];
  undefined8 *******pppppppuStack_558;
  undefined8 *******local_550;
  long *******local_548;
  long *******ppppppplStack_540;
  long *******local_538;
  long *******ppppppplStack_530;
  undefined8 *******pppppppuStack_528;
  undefined8 *******pppppppuStack_520;
  undefined8 *******pppppppuStack_518;
  undefined8 *******local_510;
  undefined8 *******pppppppuStack_508;
  undefined8 *******local_500;
  undefined8 *******pppppppuStack_4f8;
  undefined8 *******local_4f0;
  undefined8 *******pppppppuStack_4e8;
  undefined8 *******local_4e0;
  uint *******local_4d8;
  uint *******pppppppuStack_4d0;
  undefined8 *******local_4c8;
  undefined8 *******pppppppuStack_4c0;
  undefined8 *******local_4b8;
  undefined8 *******pppppppuStack_4b0;
  undefined8 *******local_4a8;
  undefined8 *******local_4a0;
  undefined8 *******pppppppuStack_498;
  undefined8 *******local_490;
  undefined8 *******pppppppuStack_488;
  undefined1 local_480 [8];
  long ******pppppplStack_478;
  long *******local_470;
  long *******local_468;
  long *******local_460;
  undefined8 *******local_458;
  undefined8 *******pppppppuStack_450;
  undefined8 *******local_448;
  undefined8 *******local_440;
  undefined8 *******local_438;
  undefined8 *******local_430;
  undefined8 *******local_428;
  undefined8 *******local_420;
  undefined8 *******local_418;
  undefined8 *******local_410;
  undefined8 *******local_408;
  undefined8 *******local_400;
  undefined8 *******local_3f8;
  undefined8 *******local_3f0;
  undefined8 *******local_3e8;
  undefined8 *******local_3e0;
  undefined8 *******local_3d8;
  undefined8 *******local_3d0;
  undefined8 *******local_3c8;
  undefined8 *******local_3c0;
  undefined8 *******local_3b8;
  undefined8 *******local_3b0;
  undefined8 *******local_3a8;
  undefined8 *******local_3a0;
  undefined8 *******local_398;
  undefined8 *******local_390;
  undefined8 *******local_388;
  undefined8 *******local_380;
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
  void *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  long *plStack_170;
  long *local_168;
  undefined8 uStack_160;
  undefined8 *******local_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 *local_120;
  undefined8 *puStack_118;
  undefined8 *local_110;
  long *local_108;
  long *plStack_100;
  long *local_f8;
  long *******local_f0;
  undefined8 *******pppppppuStack_e8;
  undefined8 *******local_e0;
  undefined8 *******local_d8;
  undefined **local_c8;
  _List_node_base *local_c0;
  _List_node_base *p_Stack_b8;
  _List_node_base *local_b0;
  _List_node_base *p_Stack_a8;
  _List_node_base *local_a0;
  _List_node_base *p_Stack_98;
  undefined **local_90;
  long *local_88;
  long *plStack_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined1 local_68 [16];
  long *******local_58;
  long *******local_50;
  long local_48;
  long local_40;
  long lStack_38;
  
  pvStack_910 = (void *)0x0;
  local_908 = 0;
  local_168 = (long *)0x0;
  uStack_160 = 0;
  local_178 = 0;
  plStack_170 = (long *)0x0;
  local_188 = (void *)0x0;
  uStack_180 = 0;
  local_948 = (undefined4 *)0x0;
  puStack_940 = (undefined4 *)0x0;
  local_958 = 0;
  puStack_950 = (undefined4 *)0x0;
  local_968 = (void *)0x0;
  uStack_960 = 0;
  uVar55 = *(uint *)((long)param_1 + 0x24);
  if (0 < (int)uVar55) {
    uVar42 = 0;
    do {
      uVar26 = param_1[3];
      uVar25 = (ulong)*(int *)(uVar26 + uVar42 * 0x18);
      uVar48 = (ulong)*(int *)(uVar26 + 4 + uVar42 * 0x18);
      if ((long)uVar48 <= (long)uVar25) {
        uVar48 = uVar25;
      }
      local_8d8 = *(long **)(uVar26 + 8 + uVar42 * 0x18);
      if (local_8d8 != (long *)0x0) {
        LOCK();
        *(int *)(local_8d8 + 1) = (int)local_8d8[1] + 1;
        UNLOCK();
      }
                    /* try { // try from 003c25ac to 003c25cd has its CatchHandler @ 003c7742 */
      local_918 = pvStack_910;
      detail::RangedValues<juce::Font>::set<juce::detail::MergeEqualItemsYes>
                ((RangedValues<juce::Font> *)&local_188,uVar25,uVar48,(long *)&local_8d8,
                 (long *)&local_918);
      if (local_8d8 != (long *)0x0) {
        LOCK();
        plVar58 = local_8d8 + 1;
        *(int *)plVar58 = (int)*plVar58 + -1;
        UNLOCK();
        if ((int)*plVar58 == 0) {
          (**(code **)(*local_8d8 + 8))();
        }
      }
      uVar79 = *(undefined4 *)(uVar26 + 0x10 + uVar42 * 0x18);
      lVar56 = (long)pvStack_910 - (long)local_918;
                    /* try { // try from 003c2600 to 003c2619 has its CatchHandler @ 003c7810 */
      detail::Ranges::set((Ranges *)&local_968,uVar25,uVar48,&local_918);
      if ((long)pvStack_910 - (long)local_918 != 0) {
        lVar56 = lVar56 >> 4;
        uVar26 = ((long)pvStack_910 - (long)local_918 >> 4) * -0x5555555555555555;
        bVar82 = uVar26 < (ulong)(lVar56 * -0x5555555555555555);
        lVar27 = uVar26 + lVar56 * 0x5555555555555555;
        if (!bVar82 && lVar27 != 0) {
          if (bVar82) {
            lVar27 = 0;
          }
          puVar78 = (ulong *)((long)local_918 + lVar56 * 0x10);
          puVar69 = puVar78 + lVar27 * 6;
          local_a38 = (undefined1  [8])puVar69;
          do {
            puVar49 = local_948;
            puVar77 = puStack_950;
            cVar23 = (char)puVar78[5];
            if (cVar23 == '\x02') {
              uVar26 = *puVar78;
              uVar68 = puVar78[1];
              if (uVar26 != uVar68) {
                puVar77 = puStack_950 + uVar26;
                puVar49 = puStack_950 + uVar68;
                uVar39 = (long)local_948 - (long)puVar49;
                if (uVar39 == 0) {
                  if (puVar49 != puVar77) goto LAB_003c2ab1;
                }
                else {
                  if (0 < (long)uVar39) {
                    uVar72 = uVar39 >> 2;
                    pppppuVar75 = (uint *****)(uVar72 + (uVar39 < 4));
                    if ((pppppuVar75 < (uint *****)0x8) ||
                       ((puVar77 < puStack_950 + ((uVar68 + uVar72) - (ulong)(3 < uVar39)) + 1 &&
                        (puVar49 < puStack_950 + ((uVar72 + uVar26) - (ulong)(3 < uVar39)) + 1)))) {
                      puVar28 = puVar77;
                    }
                    else {
                      local_a18 = (uint *****)((ulong)pppppuVar75 & 0xfffffffffffffff8);
                      uVar73 = ((ulong)(local_a18 + -1) >> 3) + 1;
                      uVar80 = (ulong)((uint)uVar73 & 3);
                      if (local_a18 + -1 < (uint *****)0x18) {
                        lVar56 = 0;
                      }
                      else {
                        uVar73 = uVar73 & 0x3ffffffffffffffc;
                        lVar56 = 0;
                        do {
                          uVar86 = *(undefined8 *)((long)(puStack_950 + uVar68 + lVar56) + 8);
                          uVar18 = *(undefined8 *)(puStack_950 + uVar68 + lVar56 + 4);
                          uVar19 = *(undefined8 *)((long)(puStack_950 + uVar68 + lVar56 + 4) + 8);
                          *(undefined8 *)(puStack_950 + uVar26 + lVar56) =
                               *(undefined8 *)(puStack_950 + uVar68 + lVar56);
                          *(undefined8 *)((long)(puStack_950 + uVar26 + lVar56) + 8) = uVar86;
                          *(undefined8 *)(puStack_950 + uVar26 + lVar56 + 4) = uVar18;
                          *(undefined8 *)((long)(puStack_950 + uVar26 + lVar56 + 4) + 8) = uVar19;
                          uVar86 = *(undefined8 *)((long)(puStack_950 + uVar68 + lVar56 + 8) + 8);
                          uVar18 = *(undefined8 *)(puStack_950 + uVar68 + lVar56 + 0xc);
                          uVar19 = *(undefined8 *)((long)(puStack_950 + uVar68 + lVar56 + 0xc) + 8);
                          *(undefined8 *)(puStack_950 + uVar26 + lVar56 + 8) =
                               *(undefined8 *)(puStack_950 + uVar68 + lVar56 + 8);
                          *(undefined8 *)((long)(puStack_950 + uVar26 + lVar56 + 8) + 8) = uVar86;
                          *(undefined8 *)(puStack_950 + uVar26 + lVar56 + 0xc) = uVar18;
                          *(undefined8 *)((long)(puStack_950 + uVar26 + lVar56 + 0xc) + 8) = uVar19;
                          uVar86 = *(undefined8 *)((long)(puStack_950 + uVar68 + lVar56 + 0x10) + 8)
                          ;
                          uVar18 = *(undefined8 *)(puStack_950 + uVar68 + lVar56 + 0x14);
                          uVar19 = *(undefined8 *)((long)(puStack_950 + uVar68 + lVar56 + 0x14) + 8)
                          ;
                          *(undefined8 *)(puStack_950 + uVar26 + lVar56 + 0x10) =
                               *(undefined8 *)(puStack_950 + uVar68 + lVar56 + 0x10);
                          *(undefined8 *)((long)(puStack_950 + uVar26 + lVar56 + 0x10) + 8) = uVar86
                          ;
                          *(undefined8 *)(puStack_950 + uVar26 + lVar56 + 0x14) = uVar18;
                          *(undefined8 *)((long)(puStack_950 + uVar26 + lVar56 + 0x14) + 8) = uVar19
                          ;
                          uVar86 = *(undefined8 *)((long)(puStack_950 + uVar68 + lVar56 + 0x18) + 8)
                          ;
                          uVar18 = *(undefined8 *)(puStack_950 + uVar68 + lVar56 + 0x1c);
                          uVar19 = *(undefined8 *)((long)(puStack_950 + uVar68 + lVar56 + 0x1c) + 8)
                          ;
                          *(undefined8 *)(puStack_950 + uVar26 + lVar56 + 0x18) =
                               *(undefined8 *)(puStack_950 + uVar68 + lVar56 + 0x18);
                          *(undefined8 *)((long)(puStack_950 + uVar26 + lVar56 + 0x18) + 8) = uVar86
                          ;
                          *(undefined8 *)(puStack_950 + uVar26 + lVar56 + 0x1c) = uVar18;
                          *(undefined8 *)((long)(puStack_950 + uVar26 + lVar56 + 0x1c) + 8) = uVar19
                          ;
                          lVar56 = lVar56 + 0x20;
                          uVar73 = uVar73 - 4;
                        } while (uVar73 != 0);
                      }
                      if (uVar80 != 0) {
                        lVar27 = 0;
                        do {
                          puVar31 = (undefined8 *)
                                    ((long)puStack_950 + lVar27 + (uVar68 + lVar56) * 4);
                          uVar86 = puVar31[1];
                          puVar67 = (undefined8 *)
                                    ((long)puStack_950 + lVar27 + (uVar68 + lVar56) * 4 + 0x10);
                          uVar18 = *puVar67;
                          uVar19 = puVar67[1];
                          puVar67 = (undefined8 *)
                                    ((long)puStack_950 + lVar27 + (uVar26 + lVar56) * 4);
                          *puVar67 = *puVar31;
                          puVar67[1] = uVar86;
                          puVar67 = (undefined8 *)
                                    ((long)puStack_950 + lVar27 + (uVar26 + lVar56) * 4 + 0x10);
                          *puVar67 = uVar18;
                          puVar67[1] = uVar19;
                          lVar27 = lVar27 + 0x20;
                        } while (uVar80 * 0x20 != lVar27);
                      }
                      if (pppppuVar75 == local_a18) goto LAB_003c2884;
                      uVar72 = uVar72 - (long)local_a18;
                      puVar28 = puVar77 + (long)local_a18;
                      puVar49 = puVar49 + (long)local_a18;
                    }
                    uVar72 = uVar72 + 1;
                    lVar56 = 0;
                    do {
                      *(undefined4 *)((long)puVar28 + lVar56) =
                           *(undefined4 *)((long)puVar49 + lVar56);
                      uVar72 = uVar72 - 1;
                      lVar56 = lVar56 + 4;
                    } while (1 < uVar72);
                  }
LAB_003c2884:
                  puVar77 = (undefined4 *)((long)puVar77 + uVar39);
                  if (local_948 != puVar77) {
LAB_003c2ab1:
                    local_948 = puVar77;
                  }
                }
              }
            }
            else if (cVar23 == '\x01') {
              pppppuVar75 = (uint *****)*puVar78;
              puVar28 = puStack_950 + (long)pppppuVar75;
              if (local_948 == puStack_940) {
                lVar56 = (long)local_948 - (long)puStack_950;
                if (lVar56 == 0x7ffffffffffffffc) {
                    /* WARNING: Subroutine does not return */
                  std::__throw_length_error("vector::_M_realloc_insert");
                }
                uVar68 = lVar56 >> 2;
                uVar26 = uVar68;
                if (lVar56 == 0) {
                  uVar26 = 1;
                }
                uVar39 = uVar26 + uVar68;
                if (0x1fffffffffffffff < uVar39) {
                  uVar39 = 0x1fffffffffffffff;
                }
                if (CARRY8(uVar26,uVar68)) {
                  uVar39 = 0x1fffffffffffffff;
                }
                    /* try { // try from 003c28fc to 003c29f0 has its CatchHandler @ 003c77da */
                puVar29 = operator_new(uVar39 * 4);
                puVar29[(long)pppppuVar75] = *puVar28;
                puVar30 = puVar29;
                if (pppppuVar75 != (uint *****)0x0) {
                  uVar26 = (long)pppppuVar75 + 0x3fffffffffffffffU & 0x3fffffffffffffff;
                  puVar50 = puVar77;
                  if (6 < uVar26) {
                    uVar26 = uVar26 + 1;
                    uVar73 = uVar26 & 0x7ffffffffffffff8;
                    uVar72 = (uVar73 - 8 >> 3) + 1;
                    uVar68 = (ulong)((uint)uVar72 & 3);
                    if (uVar73 - 8 < 0x18) {
                      lVar27 = 0;
                    }
                    else {
                      uVar72 = uVar72 & 0x3ffffffffffffffc;
                      lVar27 = 0;
                      do {
                        uVar86 = *(undefined8 *)((long)(puVar77 + lVar27) + 8);
                        uVar18 = *(undefined8 *)(puVar77 + lVar27 + 4);
                        uVar19 = *(undefined8 *)((long)(puVar77 + lVar27 + 4) + 8);
                        *(undefined8 *)(puVar29 + lVar27) = *(undefined8 *)(puVar77 + lVar27);
                        *(undefined8 *)((long)(puVar29 + lVar27) + 8) = uVar86;
                        *(undefined8 *)(puVar29 + lVar27 + 4) = uVar18;
                        *(undefined8 *)((long)(puVar29 + lVar27 + 4) + 8) = uVar19;
                        uVar86 = *(undefined8 *)((long)(puVar77 + lVar27 + 8) + 8);
                        uVar18 = *(undefined8 *)(puVar77 + lVar27 + 0xc);
                        uVar19 = *(undefined8 *)((long)(puVar77 + lVar27 + 0xc) + 8);
                        *(undefined8 *)(puVar29 + lVar27 + 8) =
                             *(undefined8 *)(puVar77 + lVar27 + 8);
                        *(undefined8 *)((long)(puVar29 + lVar27 + 8) + 8) = uVar86;
                        *(undefined8 *)(puVar29 + lVar27 + 0xc) = uVar18;
                        *(undefined8 *)((long)(puVar29 + lVar27 + 0xc) + 8) = uVar19;
                        uVar86 = *(undefined8 *)((long)(puVar77 + lVar27 + 0x10) + 8);
                        uVar18 = *(undefined8 *)(puVar77 + lVar27 + 0x14);
                        uVar19 = *(undefined8 *)((long)(puVar77 + lVar27 + 0x14) + 8);
                        *(undefined8 *)(puVar29 + lVar27 + 0x10) =
                             *(undefined8 *)(puVar77 + lVar27 + 0x10);
                        *(undefined8 *)((long)(puVar29 + lVar27 + 0x10) + 8) = uVar86;
                        *(undefined8 *)(puVar29 + lVar27 + 0x14) = uVar18;
                        *(undefined8 *)((long)(puVar29 + lVar27 + 0x14) + 8) = uVar19;
                        uVar86 = *(undefined8 *)((long)(puVar77 + lVar27 + 0x18) + 8);
                        uVar18 = *(undefined8 *)(puVar77 + lVar27 + 0x1c);
                        uVar19 = *(undefined8 *)((long)(puVar77 + lVar27 + 0x1c) + 8);
                        *(undefined8 *)(puVar29 + lVar27 + 0x18) =
                             *(undefined8 *)(puVar77 + lVar27 + 0x18);
                        *(undefined8 *)((long)(puVar29 + lVar27 + 0x18) + 8) = uVar86;
                        *(undefined8 *)(puVar29 + lVar27 + 0x1c) = uVar18;
                        *(undefined8 *)((long)(puVar29 + lVar27 + 0x1c) + 8) = uVar19;
                        lVar27 = lVar27 + 0x20;
                        uVar72 = uVar72 - 4;
                      } while (uVar72 != 0);
                    }
                    if (uVar68 != 0) {
                      lVar35 = 0;
                      do {
                        puVar31 = (undefined8 *)((long)puVar77 + lVar35 + lVar27 * 4);
                        uVar86 = puVar31[1];
                        puVar67 = (undefined8 *)((long)puVar77 + lVar35 + lVar27 * 4 + 0x10);
                        uVar18 = *puVar67;
                        uVar19 = puVar67[1];
                        puVar67 = (undefined8 *)((long)puVar29 + lVar35 + lVar27 * 4);
                        *puVar67 = *puVar31;
                        puVar67[1] = uVar86;
                        puVar67 = (undefined8 *)((long)puVar29 + lVar35 + lVar27 * 4 + 0x10);
                        *puVar67 = uVar18;
                        puVar67[1] = uVar19;
                        lVar35 = lVar35 + 0x20;
                      } while (uVar68 * 0x20 != lVar35);
                    }
                    puVar30 = puVar29 + uVar73;
                    if (uVar26 == uVar73) goto LAB_003c2bc1;
                    puVar50 = puVar77 + uVar73;
                  }
                  do {
                    *puVar30 = *puVar50;
                    puVar50 = puVar50 + 1;
                    puVar30 = puVar30 + 1;
                  } while (puVar50 != puVar28);
                }
LAB_003c2bc1:
                puVar50 = puVar30 + 1;
                if (puVar49 != puVar28) {
                  uVar26 = (lVar56 + (long)pppppuVar75 * -4) - 4;
                  if (0x1b < uVar26) {
                    uVar73 = (uVar26 >> 2) + 1;
                    uVar72 = uVar73 & 0x7ffffffffffffff8;
                    uVar68 = (uVar72 - 8 >> 3) + 1;
                    uVar26 = (ulong)((uint)uVar68 & 3);
                    if (uVar72 - 8 < 0x18) {
                      lVar56 = 0;
                    }
                    else {
                      uVar68 = uVar68 & 0x3ffffffffffffffc;
                      lVar56 = 0;
                      do {
                        uVar86 = *(undefined8 *)((long)(puVar77 + (long)pppppuVar75 + lVar56) + 8);
                        uVar18 = *(undefined8 *)(puVar77 + (long)pppppuVar75 + lVar56 + 4);
                        uVar19 = *(undefined8 *)
                                  ((long)(puVar77 + (long)pppppuVar75 + lVar56 + 4) + 8);
                        *(undefined8 *)(puVar30 + lVar56 + 1) =
                             *(undefined8 *)(puVar77 + (long)pppppuVar75 + lVar56);
                        *(undefined8 *)((long)(puVar30 + lVar56 + 1) + 8) = uVar86;
                        *(undefined8 *)(puVar30 + lVar56 + 5) = uVar18;
                        *(undefined8 *)((long)(puVar30 + lVar56 + 5) + 8) = uVar19;
                        uVar86 = *(undefined8 *)
                                  ((long)(puVar77 + (long)pppppuVar75 + lVar56 + 8) + 8);
                        uVar18 = *(undefined8 *)(puVar77 + (long)pppppuVar75 + lVar56 + 0xc);
                        uVar19 = *(undefined8 *)
                                  ((long)(puVar77 + (long)pppppuVar75 + lVar56 + 0xc) + 8);
                        *(undefined8 *)(puVar30 + lVar56 + 9) =
                             *(undefined8 *)(puVar77 + (long)pppppuVar75 + lVar56 + 8);
                        *(undefined8 *)((long)(puVar30 + lVar56 + 9) + 8) = uVar86;
                        *(undefined8 *)(puVar30 + lVar56 + 0xd) = uVar18;
                        *(undefined8 *)((long)(puVar30 + lVar56 + 0xd) + 8) = uVar19;
                        uVar86 = *(undefined8 *)
                                  ((long)(puVar77 + (long)pppppuVar75 + lVar56 + 0x10) + 8);
                        uVar18 = *(undefined8 *)(puVar77 + (long)pppppuVar75 + lVar56 + 0x14);
                        uVar19 = *(undefined8 *)
                                  ((long)(puVar77 + (long)pppppuVar75 + lVar56 + 0x14) + 8);
                        *(undefined8 *)(puVar30 + lVar56 + 0x11) =
                             *(undefined8 *)(puVar77 + (long)pppppuVar75 + lVar56 + 0x10);
                        *(undefined8 *)((long)(puVar30 + lVar56 + 0x11) + 8) = uVar86;
                        *(undefined8 *)(puVar30 + lVar56 + 0x15) = uVar18;
                        *(undefined8 *)((long)(puVar30 + lVar56 + 0x15) + 8) = uVar19;
                        uVar86 = *(undefined8 *)
                                  ((long)(puVar77 + (long)pppppuVar75 + lVar56 + 0x18) + 8);
                        uVar18 = *(undefined8 *)(puVar77 + (long)pppppuVar75 + lVar56 + 0x1c);
                        uVar19 = *(undefined8 *)
                                  ((long)(puVar77 + (long)pppppuVar75 + lVar56 + 0x1c) + 8);
                        *(undefined8 *)(puVar30 + lVar56 + 0x19) =
                             *(undefined8 *)(puVar77 + (long)pppppuVar75 + lVar56 + 0x18);
                        *(undefined8 *)((long)(puVar30 + lVar56 + 0x19) + 8) = uVar86;
                        *(undefined8 *)(puVar30 + lVar56 + 0x1d) = uVar18;
                        *(undefined8 *)((long)(puVar30 + lVar56 + 0x1d) + 8) = uVar19;
                        lVar56 = lVar56 + 0x20;
                        uVar68 = uVar68 - 4;
                      } while (uVar68 != 0);
                    }
                    if (uVar26 != 0) {
                      lVar27 = 0;
                      do {
                        puVar31 = (undefined8 *)
                                  ((long)puVar77 + lVar27 + ((long)pppppuVar75 + lVar56) * 4);
                        uVar86 = puVar31[1];
                        puVar67 = (undefined8 *)
                                  ((long)puVar77 + lVar27 + ((long)pppppuVar75 + lVar56) * 4 + 0x10)
                        ;
                        uVar18 = *puVar67;
                        uVar19 = puVar67[1];
                        puVar67 = (undefined8 *)((long)puVar30 + lVar27 + lVar56 * 4 + 4);
                        *puVar67 = *puVar31;
                        puVar67[1] = uVar86;
                        puVar67 = (undefined8 *)((long)puVar30 + lVar27 + lVar56 * 4 + 0x14);
                        *puVar67 = uVar18;
                        puVar67[1] = uVar19;
                        lVar27 = lVar27 + 0x20;
                      } while (uVar26 * 0x20 != lVar27);
                    }
                    puVar50 = puVar50 + uVar72;
                    if (uVar73 == uVar72) goto LAB_003c2d03;
                    puVar28 = puVar28 + uVar72;
                  }
                  do {
                    *puVar50 = *puVar28;
                    puVar28 = puVar28 + 1;
                    puVar50 = puVar50 + 1;
                  } while (puVar28 != puVar49);
                }
LAB_003c2d03:
                if (puVar77 != (undefined4 *)0x0) {
                  operator_delete(puVar77);
                }
                puStack_940 = puVar29 + uVar39;
                local_a18 = pppppuVar75;
                puStack_950 = puVar29;
                local_948 = puVar50;
LAB_003c269c:
              }
              else if (local_948 == puVar28) {
                local_948 = puVar28 + 1;
              }
              else {
                uVar6 = *puVar28;
                puVar77 = local_948 + -1;
                *local_948 = local_948[-1];
                if (0 < (long)puVar77 - (long)puVar28) {
                  uVar26 = ((ulong)((long)puVar77 - (long)puVar28) >> 2) + 1;
                  do {
                    *puVar77 = puVar77[-1];
                    puVar77 = puVar77 + -1;
                    uVar26 = uVar26 - 1;
                  } while (1 < uVar26);
                }
                *puVar28 = uVar6;
                local_948 = local_948 + 1;
              }
            }
            else if (cVar23 == '\0') {
              pppppuVar75 = (uint *****)*puVar78;
              puVar28 = puStack_950 + (long)pppppuVar75;
              if (local_948 == puStack_940) {
                lVar56 = (long)local_948 - (long)puStack_950;
                if (lVar56 == 0x7ffffffffffffffc) {
                    /* try { // try from 003c7502 to 003c7519 has its CatchHandler @ 003c77e2 */
                    /* WARNING: Subroutine does not return */
                  std::__throw_length_error("vector::_M_realloc_insert");
                }
                uVar68 = lVar56 >> 2;
                uVar26 = uVar68;
                if (lVar56 == 0) {
                  uVar26 = 1;
                }
                uVar39 = uVar26 + uVar68;
                if (0x1fffffffffffffff < uVar39) {
                  uVar39 = 0x1fffffffffffffff;
                }
                if (CARRY8(uVar26,uVar68)) {
                  uVar39 = 0x1fffffffffffffff;
                }
                puVar29 = operator_new(uVar39 * 4);
                puVar29[(long)pppppuVar75] = uVar79;
                puVar30 = puVar29;
                if (pppppuVar75 != (uint *****)0x0) {
                  uVar26 = (long)pppppuVar75 + 0x3fffffffffffffffU & 0x3fffffffffffffff;
                  puVar50 = puVar77;
                  if (6 < uVar26) {
                    uVar26 = uVar26 + 1;
                    uVar73 = uVar26 & 0x7ffffffffffffff8;
                    uVar72 = (uVar73 - 8 >> 3) + 1;
                    uVar68 = (ulong)((uint)uVar72 & 3);
                    if (uVar73 - 8 < 0x18) {
                      lVar27 = 0;
                    }
                    else {
                      uVar72 = uVar72 & 0x3ffffffffffffffc;
                      lVar27 = 0;
                      do {
                        uVar86 = *(undefined8 *)((long)(puVar77 + lVar27) + 8);
                        uVar18 = *(undefined8 *)(puVar77 + lVar27 + 4);
                        uVar19 = *(undefined8 *)((long)(puVar77 + lVar27 + 4) + 8);
                        *(undefined8 *)(puVar29 + lVar27) = *(undefined8 *)(puVar77 + lVar27);
                        *(undefined8 *)((long)(puVar29 + lVar27) + 8) = uVar86;
                        *(undefined8 *)(puVar29 + lVar27 + 4) = uVar18;
                        *(undefined8 *)((long)(puVar29 + lVar27 + 4) + 8) = uVar19;
                        uVar86 = *(undefined8 *)((long)(puVar77 + lVar27 + 8) + 8);
                        uVar18 = *(undefined8 *)(puVar77 + lVar27 + 0xc);
                        uVar19 = *(undefined8 *)((long)(puVar77 + lVar27 + 0xc) + 8);
                        *(undefined8 *)(puVar29 + lVar27 + 8) =
                             *(undefined8 *)(puVar77 + lVar27 + 8);
                        *(undefined8 *)((long)(puVar29 + lVar27 + 8) + 8) = uVar86;
                        *(undefined8 *)(puVar29 + lVar27 + 0xc) = uVar18;
                        *(undefined8 *)((long)(puVar29 + lVar27 + 0xc) + 8) = uVar19;
                        uVar86 = *(undefined8 *)((long)(puVar77 + lVar27 + 0x10) + 8);
                        uVar18 = *(undefined8 *)(puVar77 + lVar27 + 0x14);
                        uVar19 = *(undefined8 *)((long)(puVar77 + lVar27 + 0x14) + 8);
                        *(undefined8 *)(puVar29 + lVar27 + 0x10) =
                             *(undefined8 *)(puVar77 + lVar27 + 0x10);
                        *(undefined8 *)((long)(puVar29 + lVar27 + 0x10) + 8) = uVar86;
                        *(undefined8 *)(puVar29 + lVar27 + 0x14) = uVar18;
                        *(undefined8 *)((long)(puVar29 + lVar27 + 0x14) + 8) = uVar19;
                        uVar86 = *(undefined8 *)((long)(puVar77 + lVar27 + 0x18) + 8);
                        uVar18 = *(undefined8 *)(puVar77 + lVar27 + 0x1c);
                        uVar19 = *(undefined8 *)((long)(puVar77 + lVar27 + 0x1c) + 8);
                        *(undefined8 *)(puVar29 + lVar27 + 0x18) =
                             *(undefined8 *)(puVar77 + lVar27 + 0x18);
                        *(undefined8 *)((long)(puVar29 + lVar27 + 0x18) + 8) = uVar86;
                        *(undefined8 *)(puVar29 + lVar27 + 0x1c) = uVar18;
                        *(undefined8 *)((long)(puVar29 + lVar27 + 0x1c) + 8) = uVar19;
                        lVar27 = lVar27 + 0x20;
                        uVar72 = uVar72 - 4;
                      } while (uVar72 != 0);
                    }
                    if (uVar68 != 0) {
                      lVar35 = 0;
                      do {
                        puVar31 = (undefined8 *)((long)puVar77 + lVar35 + lVar27 * 4);
                        uVar86 = puVar31[1];
                        puVar67 = (undefined8 *)((long)puVar77 + lVar35 + lVar27 * 4 + 0x10);
                        uVar18 = *puVar67;
                        uVar19 = puVar67[1];
                        puVar67 = (undefined8 *)((long)puVar29 + lVar35 + lVar27 * 4);
                        *puVar67 = *puVar31;
                        puVar67[1] = uVar86;
                        puVar67 = (undefined8 *)((long)puVar29 + lVar35 + lVar27 * 4 + 0x10);
                        *puVar67 = uVar18;
                        puVar67[1] = uVar19;
                        lVar35 = lVar35 + 0x20;
                      } while (uVar68 * 0x20 != lVar35);
                    }
                    puVar30 = puVar29 + uVar73;
                    if (uVar26 == uVar73) goto LAB_003c2df1;
                    puVar50 = puVar77 + uVar73;
                  }
                  do {
                    *puVar30 = *puVar50;
                    puVar50 = puVar50 + 1;
                    puVar30 = puVar30 + 1;
                  } while (puVar50 != puVar28);
                }
LAB_003c2df1:
                puVar50 = puVar30 + 1;
                if (puVar49 != puVar28) {
                  uVar26 = (lVar56 + (long)pppppuVar75 * -4) - 4;
                  if (0x1b < uVar26) {
                    uVar73 = (uVar26 >> 2) + 1;
                    uVar72 = uVar73 & 0x7ffffffffffffff8;
                    uVar68 = (uVar72 - 8 >> 3) + 1;
                    uVar26 = (ulong)((uint)uVar68 & 3);
                    if (uVar72 - 8 < 0x18) {
                      lVar56 = 0;
                    }
                    else {
                      uVar68 = uVar68 & 0x3ffffffffffffffc;
                      lVar56 = 0;
                      do {
                        uVar86 = *(undefined8 *)((long)(puVar77 + (long)pppppuVar75 + lVar56) + 8);
                        uVar18 = *(undefined8 *)(puVar77 + (long)pppppuVar75 + lVar56 + 4);
                        uVar19 = *(undefined8 *)
                                  ((long)(puVar77 + (long)pppppuVar75 + lVar56 + 4) + 8);
                        *(undefined8 *)(puVar30 + lVar56 + 1) =
                             *(undefined8 *)(puVar77 + (long)pppppuVar75 + lVar56);
                        *(undefined8 *)((long)(puVar30 + lVar56 + 1) + 8) = uVar86;
                        *(undefined8 *)(puVar30 + lVar56 + 5) = uVar18;
                        *(undefined8 *)((long)(puVar30 + lVar56 + 5) + 8) = uVar19;
                        uVar86 = *(undefined8 *)
                                  ((long)(puVar77 + (long)pppppuVar75 + lVar56 + 8) + 8);
                        uVar18 = *(undefined8 *)(puVar77 + (long)pppppuVar75 + lVar56 + 0xc);
                        uVar19 = *(undefined8 *)
                                  ((long)(puVar77 + (long)pppppuVar75 + lVar56 + 0xc) + 8);
                        *(undefined8 *)(puVar30 + lVar56 + 9) =
                             *(undefined8 *)(puVar77 + (long)pppppuVar75 + lVar56 + 8);
                        *(undefined8 *)((long)(puVar30 + lVar56 + 9) + 8) = uVar86;
                        *(undefined8 *)(puVar30 + lVar56 + 0xd) = uVar18;
                        *(undefined8 *)((long)(puVar30 + lVar56 + 0xd) + 8) = uVar19;
                        uVar86 = *(undefined8 *)
                                  ((long)(puVar77 + (long)pppppuVar75 + lVar56 + 0x10) + 8);
                        uVar18 = *(undefined8 *)(puVar77 + (long)pppppuVar75 + lVar56 + 0x14);
                        uVar19 = *(undefined8 *)
                                  ((long)(puVar77 + (long)pppppuVar75 + lVar56 + 0x14) + 8);
                        *(undefined8 *)(puVar30 + lVar56 + 0x11) =
                             *(undefined8 *)(puVar77 + (long)pppppuVar75 + lVar56 + 0x10);
                        *(undefined8 *)((long)(puVar30 + lVar56 + 0x11) + 8) = uVar86;
                        *(undefined8 *)(puVar30 + lVar56 + 0x15) = uVar18;
                        *(undefined8 *)((long)(puVar30 + lVar56 + 0x15) + 8) = uVar19;
                        uVar86 = *(undefined8 *)
                                  ((long)(puVar77 + (long)pppppuVar75 + lVar56 + 0x18) + 8);
                        uVar18 = *(undefined8 *)(puVar77 + (long)pppppuVar75 + lVar56 + 0x1c);
                        uVar19 = *(undefined8 *)
                                  ((long)(puVar77 + (long)pppppuVar75 + lVar56 + 0x1c) + 8);
                        *(undefined8 *)(puVar30 + lVar56 + 0x19) =
                             *(undefined8 *)(puVar77 + (long)pppppuVar75 + lVar56 + 0x18);
                        *(undefined8 *)((long)(puVar30 + lVar56 + 0x19) + 8) = uVar86;
                        *(undefined8 *)(puVar30 + lVar56 + 0x1d) = uVar18;
                        *(undefined8 *)((long)(puVar30 + lVar56 + 0x1d) + 8) = uVar19;
                        lVar56 = lVar56 + 0x20;
                        uVar68 = uVar68 - 4;
                      } while (uVar68 != 0);
                    }
                    if (uVar26 != 0) {
                      lVar27 = 0;
                      do {
                        puVar31 = (undefined8 *)
                                  ((long)puVar77 + lVar27 + ((long)pppppuVar75 + lVar56) * 4);
                        uVar86 = puVar31[1];
                        puVar67 = (undefined8 *)
                                  ((long)puVar77 + lVar27 + ((long)pppppuVar75 + lVar56) * 4 + 0x10)
                        ;
                        uVar18 = *puVar67;
                        uVar19 = puVar67[1];
                        puVar67 = (undefined8 *)((long)puVar30 + lVar27 + lVar56 * 4 + 4);
                        *puVar67 = *puVar31;
                        puVar67[1] = uVar86;
                        puVar67 = (undefined8 *)((long)puVar30 + lVar27 + lVar56 * 4 + 0x14);
                        *puVar67 = uVar18;
                        puVar67[1] = uVar19;
                        lVar27 = lVar27 + 0x20;
                      } while (uVar26 * 0x20 != lVar27);
                    }
                    puVar50 = puVar50 + uVar72;
                    if (uVar73 == uVar72) goto LAB_003c2f34;
                    puVar28 = puVar28 + uVar72;
                  }
                  do {
                    *puVar50 = *puVar28;
                    puVar28 = puVar28 + 1;
                    puVar50 = puVar50 + 1;
                  } while (puVar28 != puVar49);
                }
LAB_003c2f34:
                if (puVar77 != (undefined4 *)0x0) {
                  operator_delete(puVar77);
                }
                puStack_940 = puVar29 + uVar39;
                local_a18 = pppppuVar75;
                puStack_950 = puVar29;
                local_948 = puVar50;
                goto LAB_003c269c;
              }
              if (local_948 == puVar28) {
                *puVar28 = uVar79;
                local_948 = puVar28 + 1;
              }
              else {
                puVar77 = local_948 + -1;
                *local_948 = local_948[-1];
                if (0 < (long)puVar77 - (long)puVar28) {
                  uVar26 = ((ulong)((long)puVar77 - (long)puVar28) >> 2) + 1;
                  do {
                    *puVar77 = puVar77[-1];
                    puVar77 = puVar77 + -1;
                    uVar26 = uVar26 - 1;
                  } while (1 < uVar26);
                }
                *puVar28 = uVar79;
                local_948 = local_948 + 1;
              }
            }
            puVar78 = puVar78 + 6;
          } while (puVar78 != puVar69);
        }
      }
                    /* try { // try from 003c3080 to 003c30b1 has its CatchHandler @ 003c7810 */
      detail::RangedValues<juce::Colour>::mergeEqualItems
                ((RangedValues<juce::Colour> *)&local_968,uVar25,(long *)&local_918);
      detail::RangedValues<juce::Colour>::mergeEqualItems
                ((RangedValues<juce::Colour> *)&local_968,uVar48,(long *)&local_918);
      pvStack_910 = local_918;
      uVar42 = uVar42 + 1;
    } while (uVar42 != uVar55);
  }
  plStack_770 = (long *)0x0;
  plStack_750 = (long *)0x0;
  local_718 = (long *)0x0;
  uStack_710 = 0;
  local_728 = (long *)0x0;
  plStack_720 = (long *)0x0;
  local_738 = (long *)0x0;
  plStack_730 = (long *)0x0;
  local_748 = 0;
  ppuStack_740 = (undefined **)0x0;
  local_768 = (long *)0x0;
  plStack_760 = (long *)0x0;
  local_708 = (undefined1 *)0x0;
  local_778 = (undefined **)0x9;
  local_758 = (long *)0x0;
  local_918 = pvStack_910;
                    /* try { // try from 003c314b to 003c314f has its CatchHandler @ 003c759b */
  detail::ShapedTextOptions::fontsForRange::{lambda()#1}::operator()((_lambda___1_ *)&plStack_750);
  plStack_720 = _DAT_005dd140;
  local_718 = _UNK_005dd148;
  uStack_710 = 0x7fffffffffffffff;
  local_708 = &DAT_0061ac58;
                    /* try { // try from 003c3180 to 003c319c has its CatchHandler @ 003c7593 */
  detail::ShapedTextOptions::withFonts
            (&local_c8,&local_778,
             (vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> *)&local_188);
                    /* try { // try from 003c319d to 003c31b3 has its CatchHandler @ 003c758b */
  detail::ShapedTextOptions::withTrailingWhitespacesShouldFit(&local_8c8,&local_c8,0);
                    /* try { // try from 003c31b7 to 003c31cb has its CatchHandler @ 003c7583 */
  detail::ShapedTextOptions::withJustification
            ((undefined4 *)&local_6f8,&local_8c8,*(undefined4 *)(this + 0x18));
  puVar67 = local_6d0;
  if (*(int *)((long)param_1 + 0x14) == 1) {
    local_a50 = (_List_node_base *)0x0;
    uVar79 = 1;
  }
  else if (*(int *)((long)param_1 + 0x14) == 2) {
    local_a50 = (_List_node_base *)0x1;
    uVar79 = 1;
  }
  else {
    local_a50 = (_List_node_base *)0x0;
    uVar79 = 0;
  }
  local_998 = (long *)CONCAT44(uStack_6e8,uStack_6ec);
  uStack_990 = CONCAT44(uStack_6e0,uStack_6e4);
  local_988 = CONCAT44(uStack_6d8,uStack_6dc);
  uVar42 = (long)puStack_6c8 - (long)local_6d0 >> 4;
  if ((long)puStack_6c8 - (long)local_6d0 == 0) {
    puVar31 = (undefined8 *)0x0;
  }
  else {
    auVar88._8_8_ = 0;
    auVar88._0_8_ = uVar42;
    if (SUB168(auVar88 * ZEXT816(0x10),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003c7538 to 003c753c has its CatchHandler @ 003c760b */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 003c325c to 003c3263 has its CatchHandler @ 003c760b */
    puVar31 = operator_new(SUB168(auVar88 * ZEXT816(0x10),0));
  }
  pppppplVar1 = pppppplStack_6b0;
  pppppplVar59 = local_6b8;
  puVar81 = puVar31;
  if (puVar67 != puStack_6c8) {
    do {
      uVar86 = puVar67[1];
      *puVar81 = *puVar67;
      puVar81[1] = uVar86;
      puVar67 = puVar67 + 2;
      puVar81 = puVar81 + 2;
    } while (puVar67 != puStack_6c8);
  }
  uVar26 = (long)pppppplStack_6b0 - (long)local_6b8 >> 3;
  if ((long)pppppplStack_6b0 - (long)local_6b8 == 0) {
    local_548 = (long *******)0x0;
  }
  else {
    local_a38 = (undefined1  [8])puVar31;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar26;
    if (SUB168(auVar9 * ZEXT816(8),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003c753d to 003c7541 has its CatchHandler @ 003c75f4 */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 003c32cc to 003c32d3 has its CatchHandler @ 003c75f4 */
    local_548 = operator_new(SUB168(auVar9 * ZEXT816(8),0));
  }
  ppppppplStack_540 = local_548;
  if (pppppplVar59 != pppppplVar1) {
    do {
      pppppplVar7 = (long ******)*pppppplVar59;
      *ppppppplStack_540 = pppppplVar7;
      if (pppppplVar7 != (long ******)0x0) {
        LOCK();
        *(int *)(pppppplVar7 + 1) = *(int *)(pppppplVar7 + 1) + 1;
        UNLOCK();
      }
      pppppplVar59 = pppppplVar59 + 1;
      ppppppplStack_540 = ppppppplStack_540 + 1;
    } while (pppppplVar59 != pppppplVar1);
  }
  local_550 = (undefined8 *******)(puVar31 + uVar42 * 2);
  local_538 = local_548 + uVar26;
  local_598 = pppppppuStack_690;
  local_5a8 = ppppppplStack_6a0;
  pppppppuStack_5a0 = pppppppuStack_698;
  pppppppuVar61 = local_688 + -2;
  if (pppppppuVar61 != (undefined8 *******)&emptyString) {
    LOCK();
    *(int *)pppppppuVar61 = *(int *)pppppppuVar61 + 1;
    UNLOCK();
  }
  local_588._0_4_ = local_6f8._0_4_;
  local_588._4_4_ = SUB84(local_a50,0);
  uStack_580._4_4_ = SUB84(local_998,0);
  uStack_578._0_4_ = (undefined4)((ulong)local_998 >> 0x20);
  uStack_578._4_4_ = (undefined4)uStack_990;
  uStack_570._0_4_ = (undefined4)((ulong)uStack_990 >> 0x20);
  uStack_570._4_4_ = (undefined4)local_988;
  uStack_568._0_4_ = (undefined4)((ulong)local_988 >> 0x20);
  pppppppuStack_558 = (undefined8 *******)puVar81;
  local_560 = (undefined1  [8])puVar31;
  ppppppplStack_530 = ppppppplStack_6a0;
  pppppppuStack_528 = pppppppuStack_698;
  pppppppuStack_520 = pppppppuStack_690;
  pppppppuStack_518 = local_688;
                    /* try { // try from 003c3411 to 003c3428 has its CatchHandler @ 003c756e */
  uStack_580._0_4_ = uVar79;
  detail::ShapedTextOptions::withAdditiveLineSpacing
            ((int)param_1[1],(undefined8 *)&local_7f0,&local_588);
  if (pppppppuVar61 == (undefined8 *******)&emptyString) {
LAB_003c344e:
    ppppppplVar60 = local_548;
    ppppppplVar66 = ppppppplStack_540;
    if (local_548 != ppppppplStack_540) {
LAB_003c4929:
      do {
        pppppplVar59 = *ppppppplVar60;
        if (pppppplVar59 != (long ******)0x0) {
          LOCK();
          pppppplVar1 = pppppplVar59 + 1;
          *(int *)pppppplVar1 = *(int *)pppppplVar1 + -1;
          UNLOCK();
          if (*(int *)pppppplVar1 == 0) {
            (*(code *)(*pppppplVar59)[1])();
          }
        }
        ppppppplVar60 = ppppppplVar60 + 1;
      } while (ppppppplVar60 != ppppppplVar66);
    }
  }
  else {
    LOCK();
    iVar24 = *(int *)pppppppuVar61;
    *(int *)pppppppuVar61 = *(int *)pppppppuVar61 + -1;
    UNLOCK();
    if (iVar24 != 0) goto LAB_003c344e;
    operator_delete__(pppppppuVar61);
    ppppppplVar60 = local_548;
    ppppppplVar66 = ppppppplStack_540;
    if (local_548 != ppppppplStack_540) goto LAB_003c4929;
  }
  if (local_548 != (long *******)0x0) {
    operator_delete(local_548);
  }
  if (local_560 != (undefined1  [8])0x0) {
    operator_delete((void *)local_560);
  }
  pppppppuVar61 = local_688 + -2;
  if (pppppppuVar61 == (undefined8 *******)&emptyString) {
LAB_003c34af:
    pppppplVar59 = local_6b8;
    if (local_6b8 != pppppplStack_6b0) {
LAB_003c4989:
      do {
        plVar58 = (long *)*pppppplVar59;
        if (plVar58 != (long *)0x0) {
          LOCK();
          plVar46 = plVar58 + 1;
          *(int *)plVar46 = (int)*plVar46 + -1;
          UNLOCK();
          if ((int)*plVar46 == 0) {
            (**(code **)(*plVar58 + 8))();
          }
        }
        pppppplVar59 = pppppplVar59 + 1;
      } while (pppppplVar59 != pppppplStack_6b0);
    }
  }
  else {
    LOCK();
    iVar24 = *(int *)pppppppuVar61;
    *(int *)pppppppuVar61 = *(int *)pppppppuVar61 + -1;
    UNLOCK();
    if (iVar24 != 0) goto LAB_003c34af;
    operator_delete__(pppppppuVar61);
    pppppplVar59 = local_6b8;
    if (local_6b8 != pppppplStack_6b0) goto LAB_003c4989;
  }
  if (local_6b8 != (long ******)0x0) {
    operator_delete(local_6b8);
  }
  if (local_6d0 != (undefined8 *)0x0) {
    operator_delete(local_6d0);
  }
  p_Var70 = local_858[0] + -0x10;
  if (p_Var70 == (_List_node_base *)&emptyString) {
LAB_003c3510:
    plVar58 = plStack_888;
    plVar46 = plStack_880;
    if (plStack_888 != plStack_880) {
LAB_003c49e9:
      do {
        plVar51 = (long *)*plVar58;
        if (plVar51 != (long *)0x0) {
          LOCK();
          plVar8 = plVar51 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)(*plVar51 + 8))();
          }
        }
        plVar58 = plVar58 + 1;
      } while (plVar58 != plVar46);
    }
  }
  else {
    LOCK();
    iVar24 = *(int *)p_Var70;
    *(int *)p_Var70 = *(int *)p_Var70 + -1;
    UNLOCK();
    if (iVar24 != 0) goto LAB_003c3510;
    operator_delete__(p_Var70);
    plVar58 = plStack_888;
    plVar46 = plStack_880;
    if (plStack_888 != plStack_880) goto LAB_003c49e9;
  }
  if (plStack_888 != (long *)0x0) {
    operator_delete(plStack_888);
  }
  if (local_8a0 != (_List_node_base *)0x0) {
    operator_delete(local_8a0);
  }
  ppppppplVar60 = local_58 + -2;
  if (ppppppplVar60 == (long *******)&emptyString) {
LAB_003c3571:
    plVar58 = local_88;
    plVar46 = plStack_80;
    if (local_88 != plStack_80) {
LAB_003c4a49:
      do {
        plVar51 = (long *)*plVar58;
        if (plVar51 != (long *)0x0) {
          LOCK();
          plVar8 = plVar51 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)(*plVar51 + 8))();
          }
        }
        plVar58 = plVar58 + 1;
      } while (plVar58 != plVar46);
    }
  }
  else {
    LOCK();
    iVar24 = *(int *)ppppppplVar60;
    *(int *)ppppppplVar60 = *(int *)ppppppplVar60 + -1;
    UNLOCK();
    if (iVar24 != 0) goto LAB_003c3571;
    operator_delete__(ppppppplVar60);
    plVar58 = local_88;
    plVar46 = plStack_80;
    if (local_88 != plStack_80) goto LAB_003c4a49;
  }
  if (local_88 != (long *)0x0) {
    operator_delete(local_88);
  }
  if (local_a0 != (_List_node_base *)0x0) {
    operator_delete(local_a0);
  }
  piVar71 = (int *)(local_708 + -0x10);
  if (piVar71 == &emptyString) {
LAB_003c35d2:
    plVar58 = local_738;
    plVar46 = plStack_730;
    if (local_738 != plStack_730) {
LAB_003c4aa9:
      do {
        plVar51 = (long *)*plVar58;
        if (plVar51 != (long *)0x0) {
          LOCK();
          plVar8 = plVar51 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)(*plVar51 + 8))();
          }
        }
        plVar58 = plVar58 + 1;
      } while (plVar58 != plVar46);
    }
  }
  else {
    LOCK();
    iVar24 = *piVar71;
    *piVar71 = *piVar71 + -1;
    UNLOCK();
    if (iVar24 != 0) goto LAB_003c35d2;
    operator_delete__(piVar71);
    plVar58 = local_738;
    plVar46 = plStack_730;
    if (local_738 != plStack_730) goto LAB_003c4aa9;
  }
  if (local_738 != (long *)0x0) {
    operator_delete(local_738);
  }
  if (plStack_750 != (long *)0x0) {
    operator_delete(plStack_750);
  }
  if ((int)param_1[2] != 0) {
                    /* try { // try from 003c361f to 003c3633 has its CatchHandler @ 003c7554 */
    detail::ShapedTextOptions::withWordWrapWidth
              (*(undefined4 *)(this + 0x10),&local_588,(undefined8 *)&local_7f0);
    ppppppuVar43 = local_7c8;
    local_7f0 = (undefined4)local_588;
    uStack_7ec = local_588._4_4_;
    uStack_7e8 = (undefined4)uStack_580;
    uStack_7e4 = uStack_580._4_4_;
    uStack_7e0 = (undefined4)uStack_578;
    uStack_7dc = uStack_578._4_4_;
    uStack_7d8 = (undefined4)uStack_570;
    uStack_7d4 = uStack_570._4_4_;
    uStack_7d0 = (undefined4)uStack_568;
    local_7c8 = (undefined8 ******)local_560;
    ppppppuStack_7c0 = pppppppuStack_558;
    local_7b8 = local_550;
    _local_560 = (undefined1  [16])0x0;
    local_550 = (undefined8 *******)0x0;
    if (ppppppuVar43 != (undefined8 ******)0x0) {
      operator_delete(ppppppuVar43);
    }
    ppppppplVar66 = ppppppplStack_7a8;
    ppppppplVar60 = local_7b0;
    local_7b0 = local_548;
    ppppppplStack_7a8 = ppppppplStack_540;
    local_7a0 = local_538;
    local_548 = (long *******)0x0;
    ppppppplStack_540 = (long *******)0x0;
    local_538 = (long *******)0x0;
    if (ppppppplVar60 != ppppppplVar66) {
      ppppppplVar57 = ppppppplVar60;
      do {
        pppppplVar59 = *ppppppplVar57;
        if (pppppplVar59 != (long ******)0x0) {
          LOCK();
          pppppplVar1 = pppppplVar59 + 1;
          *(int *)pppppplVar1 = *(int *)pppppplVar1 + -1;
          UNLOCK();
          if (*(int *)pppppplVar1 == 0) {
            (*(code *)(*pppppplVar59)[1])();
          }
        }
        ppppppplVar57 = ppppppplVar57 + 1;
      } while (ppppppplVar57 != ppppppplVar66);
    }
    if (ppppppplVar60 != (long *******)0x0) {
      operator_delete(ppppppplVar60);
    }
    pppppppuVar32 = pppppppuStack_518;
    pppppppuVar61 = pppppppuStack_780;
    local_798 = ppppppplStack_530;
    pppppppuStack_790 = pppppppuStack_528;
    local_788 = pppppppuStack_520;
    pppppppuStack_780 = pppppppuStack_518;
    pppppppuStack_518 = pppppppuVar61;
    pppppppuVar34 = pppppppuVar61 + -2;
    ppppppplVar60 = local_548;
    ppppppplVar66 = ppppppplStack_540;
    if (pppppppuVar34 != (undefined8 *******)&emptyString) {
      LOCK();
      iVar24 = *(int *)pppppppuVar34;
      *(int *)pppppppuVar34 = *(int *)pppppppuVar34 + -1;
      UNLOCK();
      if (iVar24 == 0) {
        operator_delete__(pppppppuVar34);
        ppppppplVar60 = local_548;
        ppppppplVar66 = ppppppplStack_540;
      }
    }
    for (; ppppppplVar57 = ppppppplStack_540, ppppppplVar60 != ppppppplStack_540;
        ppppppplVar60 = ppppppplVar60 + 1) {
      pppppplVar59 = *ppppppplVar60;
      ppppppplStack_540 = ppppppplVar66;
      if (pppppplVar59 != (long ******)0x0) {
        LOCK();
        pppppplVar1 = pppppplVar59 + 1;
        *(int *)pppppplVar1 = *(int *)pppppplVar1 + -1;
        UNLOCK();
        if (*(int *)pppppplVar1 == 0) {
          (*(code *)(*pppppplVar59)[1])();
        }
      }
      ppppppplVar66 = ppppppplStack_540;
      ppppppplStack_540 = ppppppplVar57;
    }
    ppppppplStack_540 = ppppppplVar66;
    if (local_548 != (long *******)0x0) {
      operator_delete(local_548);
    }
    if (local_560 != (undefined1  [8])0x0) {
      operator_delete((void *)local_560);
    }
    if ((int)param_1[2] == 2) {
                    /* try { // try from 003c37cc to 003c37e0 has its CatchHandler @ 003c754c */
      detail::ShapedTextOptions::withAllowBreakingInsideWord
                ((ShapedTextOptions *)&local_588,(undefined8 *)&local_7f0);
      ppppppuVar43 = local_7c8;
      local_7f0 = (undefined4)local_588;
      uStack_7dc = uStack_578._4_4_;
      uStack_7d8 = (undefined4)uStack_570;
      uStack_7d4 = uStack_570._4_4_;
      uStack_7d0 = (undefined4)uStack_568;
      uStack_7ec = local_588._4_4_;
      uStack_7e8 = (undefined4)uStack_580;
      uStack_7e4 = uStack_580._4_4_;
      uStack_7e0 = (undefined4)uStack_578;
      local_7c8 = (undefined8 ******)local_560;
      ppppppuStack_7c0 = pppppppuStack_558;
      local_7b8 = local_550;
      _local_560 = (undefined1  [16])0x0;
      local_550 = (undefined8 *******)0x0;
      if (ppppppuVar43 != (undefined8 ******)0x0) {
        operator_delete(ppppppuVar43);
      }
      ppppppplVar66 = ppppppplStack_7a8;
      ppppppplVar60 = local_7b0;
      local_7b0 = local_548;
      ppppppplStack_7a8 = ppppppplStack_540;
      local_7a0 = local_538;
      local_548 = (long *******)0x0;
      ppppppplStack_540 = (long *******)0x0;
      local_538 = (long *******)0x0;
      if (ppppppplVar60 != ppppppplVar66) {
        ppppppplVar57 = ppppppplVar60;
        do {
          pppppplVar59 = *ppppppplVar57;
          if (pppppplVar59 != (long ******)0x0) {
            LOCK();
            pppppplVar1 = pppppplVar59 + 1;
            *(int *)pppppplVar1 = *(int *)pppppplVar1 + -1;
            UNLOCK();
            if (*(int *)pppppplVar1 == 0) {
              (*(code *)(*pppppplVar59)[1])();
            }
          }
          ppppppplVar57 = ppppppplVar57 + 1;
        } while (ppppppplVar57 != ppppppplVar66);
      }
      if (ppppppplVar60 != (long *******)0x0) {
        operator_delete(ppppppplVar60);
      }
      pppppppuVar32 = pppppppuStack_518;
      pppppppuVar61 = pppppppuStack_780;
      local_788 = pppppppuStack_520;
      local_798 = ppppppplStack_530;
      pppppppuStack_790 = pppppppuStack_528;
      pppppppuStack_780 = pppppppuStack_518;
      pppppppuStack_518 = pppppppuVar61;
      pppppppuVar34 = pppppppuVar61 + -2;
      if (pppppppuVar34 == (undefined8 *******)&emptyString) {
LAB_003c3973:
        ppppppplVar60 = local_548;
        ppppppplVar66 = ppppppplStack_540;
        if (local_548 != ppppppplStack_540) {
LAB_003c72b9:
          do {
            pppppplVar59 = *ppppppplVar60;
            if (pppppplVar59 != (long ******)0x0) {
              LOCK();
              pppppplVar1 = pppppplVar59 + 1;
              *(int *)pppppplVar1 = *(int *)pppppplVar1 + -1;
              UNLOCK();
              if (*(int *)pppppplVar1 == 0) {
                (*(code *)(*pppppplVar59)[1])();
              }
            }
            ppppppplVar60 = ppppppplVar60 + 1;
          } while (ppppppplVar60 != ppppppplVar66);
        }
      }
      else {
        LOCK();
        iVar24 = *(int *)pppppppuVar34;
        *(int *)pppppppuVar34 = *(int *)pppppppuVar34 + -1;
        UNLOCK();
        if (iVar24 != 0) goto LAB_003c3973;
        operator_delete__(pppppppuVar34);
        ppppppplVar60 = local_548;
        ppppppplVar66 = ppppppplStack_540;
        if (local_548 != ppppppplStack_540) goto LAB_003c72b9;
      }
      if (local_548 != (long *******)0x0) {
        operator_delete(local_548);
      }
      if (local_560 != (undefined1  [8])0x0) {
        operator_delete((void *)local_560);
      }
    }
  }
  local_8e0 = *param_1;
  piVar71 = (int *)(local_8e0 - 0x10);
  if (piVar71 != &emptyString) {
    LOCK();
    *piVar71 = *piVar71 + 1;
    UNLOCK();
  }
  local_128 = uStack_7d0;
  local_148._4_4_ = uStack_7ec;
  local_148._0_4_ = local_7f0;
  local_148._12_4_ = uStack_7e4;
  local_148._8_4_ = uStack_7e8;
  local_138 = CONCAT44(uStack_7dc,uStack_7e0);
  uStack_130 = CONCAT44(uStack_7d4,uStack_7d8);
  uVar42 = (long)ppppppuStack_7c0 - (long)local_7c8 >> 4;
  local_120 = (undefined8 *)0x0;
  puStack_118 = (undefined8 *)0x0;
  local_110 = (undefined8 *)0x0;
  if ((long)ppppppuStack_7c0 - (long)local_7c8 == 0) {
    local_120 = (undefined8 *)0x0;
  }
  else {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar42;
    if (SUB168(auVar10 * ZEXT816(0x10),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003c7542 to 003c7546 has its CatchHandler @ 003c75ba */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 003c3a47 to 003c3a4e has its CatchHandler @ 003c75ba */
    local_120 = operator_new(SUB168(auVar10 * ZEXT816(0x10),0));
  }
  local_110 = local_120 + uVar42 * 2;
  puStack_118 = local_120;
  if (local_7c8 != ppppppuStack_7c0) {
    ppppppuVar43 = local_7c8;
    do {
      pppppuVar20 = ppppppuVar43[1];
      *puStack_118 = *ppppppuVar43;
      puStack_118[1] = pppppuVar20;
      ppppppuVar43 = ppppppuVar43 + 2;
      puStack_118 = puStack_118 + 2;
    } while (ppppppuVar43 != ppppppuStack_7c0);
  }
  uVar42 = (long)ppppppplStack_7a8 - (long)local_7b0 >> 3;
  local_108 = (long *)0x0;
  plStack_100 = (long *)0x0;
  local_f8 = (long *)0x0;
  if ((long)ppppppplStack_7a8 - (long)local_7b0 == 0) {
    local_108 = (long *)0x0;
  }
  else {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar42;
    if (SUB168(auVar11 * ZEXT816(8),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003c7547 to 003c754b has its CatchHandler @ 003c75a8 */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 003c3af5 to 003c3afc has its CatchHandler @ 003c75a8 */
    local_108 = operator_new(SUB168(auVar11 * ZEXT816(8),0));
  }
  local_f8 = local_108 + uVar42;
  plStack_100 = local_108;
  for (ppppppplVar60 = local_7b0; ppppppplVar60 != ppppppplStack_7a8;
      ppppppplVar60 = ppppppplVar60 + 1) {
    pppppplVar59 = *ppppppplVar60;
    *plStack_100 = (long)pppppplVar59;
    if (pppppplVar59 != (long ******)0x0) {
      LOCK();
      *(int *)(pppppplVar59 + 1) = *(int *)(pppppplVar59 + 1) + 1;
      UNLOCK();
    }
    plStack_100 = plStack_100 + 1;
  }
  local_f0 = local_798;
  pppppppuStack_e8 = pppppppuStack_790;
  local_e0 = local_788;
  local_d8 = pppppppuStack_780;
  pppppppuVar61 = pppppppuStack_780 + -2;
  if (pppppppuVar61 != (undefined8 *******)&emptyString) {
    LOCK();
    *(int *)pppppppuVar61 = *(int *)pppppppuVar61 + 1;
    UNLOCK();
  }
                    /* try { // try from 003c3bab to 003c3bc7 has its CatchHandler @ 003c755c */
  detail::ShapedText::ShapedText((ShapedText *)&local_800,&local_8e0,&local_148);
  pppppppuVar61 = local_d8 + -2;
  if (pppppppuVar61 == (undefined8 *******)&emptyString) {
LAB_003c3bf1:
    plVar58 = local_108;
    plVar46 = plStack_100;
    if (local_108 != plStack_100) {
LAB_003c4b09:
      do {
        plVar51 = (long *)*plVar58;
        if (plVar51 != (long *)0x0) {
          LOCK();
          plVar8 = plVar51 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)(*plVar51 + 8))();
          }
        }
        plVar58 = plVar58 + 1;
      } while (plVar58 != plVar46);
    }
  }
  else {
    LOCK();
    iVar24 = *(int *)pppppppuVar61;
    *(int *)pppppppuVar61 = *(int *)pppppppuVar61 + -1;
    UNLOCK();
    if (iVar24 != 0) goto LAB_003c3bf1;
    operator_delete__(pppppppuVar61);
    plVar58 = local_108;
    plVar46 = plStack_100;
    if (local_108 != plStack_100) goto LAB_003c4b09;
  }
  if (local_108 != (long *)0x0) {
    operator_delete(local_108);
  }
  if (local_120 != (undefined8 *)0x0) {
    operator_delete(local_120);
  }
  piVar71 = (int *)(local_8e0 - 0x10);
  if (piVar71 != &emptyString) {
    LOCK();
    iVar24 = *piVar71;
    *piVar71 = *piVar71 + -1;
    UNLOCK();
    if (iVar24 == 0) {
      operator_delete__(piVar71);
    }
  }
  lVar27 = local_800;
  lVar56 = *(long *)(local_800 + 0x148);
  ppppppuStack_640 = *(undefined8 *******)(local_800 + 0x150);
  local_610 = *(undefined8 *******)(lVar56 + 0x80);
  ppppppuStack_608 = *(undefined8 *******)(lVar56 + 0x68);
  uStack_5e8 = *(undefined8 *)(lVar56 + 0x70);
  local_648 = *(uint *******)(local_800 + 0x168);
  uStack_620 = *(undefined8 *)(local_800 + 0x158);
  ppppppuStack_678 = *(undefined8 *******)(local_800 + 0x250);
  local_680 = *(undefined8 *******)(local_800 + 0x268);
  ppppppuStack_658 = *(undefined8 *******)(local_800 + 600);
  pppppplStack_6b0 = *(long *******)(local_800 + 0x280);
  local_6b8 = *(long *******)(local_800 + 0x298);
  pppppppuStack_690 = *(undefined8 ********)(local_800 + 0x288);
  local_6f8 = &PTR__RangedIterator_00712648;
  local_6f0 = SUB84(puStack_950,0);
  uStack_6ec = (undefined4)((ulong)puStack_950 >> 0x20);
  uStack_6e8 = SUB84(local_968,0);
  uStack_6e4 = (undefined4)((ulong)local_968 >> 0x20);
  local_6d0 = local_968;
  puStack_6c8 = (undefined8 *)uStack_960;
  local_6c0 = &PTR__RangedIterator_00712200;
  local_688 = (undefined8 *******)&PTR__RangedIterator_007121b0;
  local_650 = &PTR__RangedIterator_00712160;
  local_618 = &PTR__RangedIterator_00712100;
  local_5d0 = (undefined8 *)0x0;
  uStack_578._0_4_ = 0;
  uStack_578._4_4_ = 0;
  uStack_6e0 = uStack_6e8;
  uStack_6dc = uStack_6e4;
  uStack_6d8 = local_6f0;
  uStack_6d4 = uStack_6ec;
  local_6a8 = pppppplStack_6b0;
  ppppppplStack_6a0 = (long *******)local_6b8;
  pppppppuStack_698 = (undefined8 *******)pppppplStack_6b0;
  local_670 = ppppppuStack_678;
  ppppppuStack_668 = local_680;
  local_660 = ppppppuStack_678;
  local_638 = ppppppuStack_640;
  ppppppuStack_630 = local_648;
  local_628 = ppppppuStack_640;
  local_600 = ppppppuStack_608;
  ppppppuStack_5f8 = local_610;
  local_5f0 = ppppppuStack_608;
  local_5e0 = (_List_node_base *)&local_5e0;
  local_5d8 = (_List_node_base *)&local_5e0;
  uStack_580 = (_List_node_base *)&local_588;
  local_588 = (_List_node_base *)&local_588;
                    /* try { // try from 003c3e48 to 003c3f0d has its CatchHandler @ 003c7682 */
  p_Var70 = operator_new(0x18);
  *(undefined ****)(p_Var70 + 0x10) = &local_618;
  std::__detail::_List_node_base::_M_hook(p_Var70);
  uStack_578 = (undefined8 *)(CONCAT44(uStack_578._4_4_,(undefined4)uStack_578) + 1);
  p_Var70 = operator_new(0x18);
  *(undefined ****)(p_Var70 + 0x10) = &local_650;
  std::__detail::_List_node_base::_M_hook(p_Var70);
  uStack_578 = (undefined8 *)((long)uStack_578 + 1);
  p_Var70 = operator_new(0x18);
  *(undefined8 *********)(p_Var70 + 0x10) = &local_688;
  std::__detail::_List_node_base::_M_hook(p_Var70);
  uStack_578 = (undefined8 *)((long)uStack_578 + 1);
  p_Var70 = operator_new(0x18);
  *(undefined ****)(p_Var70 + 0x10) = &local_6c0;
  std::__detail::_List_node_base::_M_hook(p_Var70);
  uStack_578 = (undefined8 *)((long)uStack_578 + 1);
  p_Var70 = operator_new(0x18);
  *(undefined ****)(p_Var70 + 0x10) = &local_6f8;
  std::__detail::_List_node_base::_M_hook(p_Var70);
  uStack_578 = (undefined8 *)((long)uStack_578 + 1);
  p_Var70 = local_5e0;
  while (p_Var70 != (_List_node_base *)&local_5e0) {
    p_Var33 = *(_List_node_base **)p_Var70;
    operator_delete(p_Var70);
    p_Var70 = p_Var33;
  }
  if (local_588 == (_List_node_base *)&local_588) {
    local_5d0 = (undefined8 *)0x0;
    local_5e0 = (_List_node_base *)&local_5e0;
    local_5d8 = (_List_node_base *)&local_5e0;
  }
  else {
    *(_List_node_base **)uStack_580 = (_List_node_base *)&local_5e0;
    *(_List_node_base **)(local_588 + 8) = (_List_node_base *)&local_5e0;
    local_5d0 = uStack_578;
    local_5d8 = uStack_580;
    p_Var70 = local_588;
    local_5e0 = local_588;
    while( true ) {
      if (p_Var70 == (_List_node_base *)&local_5e0) break;
                    /* try { // try from 003c3fc7 to 003c3fc9 has its CatchHandler @ 003c76b5 */
      cVar23 = (**(code **)(**(long **)(p_Var70 + 0x10) + 0x18))();
      if (cVar23 == '\0') {
        if (p_Var70 != (_List_node_base *)&local_5e0) goto LAB_003c4c3a;
        break;
      }
      p_Var70 = *(_List_node_base **)p_Var70;
    }
  }
  if (local_5e0 == (_List_node_base *)&local_5e0) {
    local_5c8 = (undefined8 *******)0x8000000000000000;
LAB_003c47ef:
    pppppppuStack_5c0 = (undefined8 *******)0x7fffffffffffffff;
LAB_003c47f7:
    if ((long)local_5c8 < (long)pppppppuStack_5c0) goto LAB_003c4c3a;
  }
  else {
    pppppppuVar61 = (undefined8 *******)0x8000000000000000;
    p_Var70 = local_5e0;
    do {
                    /* try { // try from 003c4017 to 003c4019 has its CatchHandler @ 003c773d */
      pppppppuVar32 = (undefined8 *******)(**(code **)(**(long **)(p_Var70 + 0x10) + 0x10))();
      if ((long)pppppppuVar61 < (long)pppppppuVar32) {
        pppppppuVar61 = pppppppuVar32;
      }
      p_Var70 = *(_List_node_base **)p_Var70;
    } while (p_Var70 != (_List_node_base *)&local_5e0);
    pppppppuVar32 = (undefined8 *******)0x7fffffffffffffff;
    p_Var70 = local_5e0;
    local_5c8 = pppppppuVar61;
    if (local_5e0 == (_List_node_base *)&local_5e0) goto LAB_003c47ef;
    do {
                    /* try { // try from 003c4057 to 003c4059 has its CatchHandler @ 003c76ba */
      (**(code **)(**(long **)(p_Var70 + 0x10) + 0x10))();
      if ((long)extraout_RDX < (long)pppppppuVar32) {
        pppppppuVar32 = extraout_RDX;
      }
      p_Var70 = *(_List_node_base **)p_Var70;
    } while (p_Var70 != (_List_node_base *)&local_5e0);
    pppppppuStack_5c0 = pppppppuVar32;
    if ((local_5e0 == (_List_node_base *)&local_5e0) ||
       (*(_List_node_base **)local_5e0 == (_List_node_base *)&local_5e0)) goto LAB_003c47f7;
    local_8c8 = (_List_node_base *)&local_8c8;
    uStack_580 = (_List_node_base *)&local_588;
    uStack_570 = &uStack_578;
    uStack_568 = &uStack_568;
    local_550 = &pppppppuStack_558;
    pppppppuStack_558 = local_550;
    local_560 = (undefined1  [8])uStack_568;
    local_548 = (long *******)&local_548;
    local_538 = (long *******)&local_538;
    pppppppuStack_528 = &pppppppuStack_528;
    pppppppuStack_518 = &pppppppuStack_518;
    pppppppuStack_508 = &pppppppuStack_508;
    pppppppuStack_4f8 = &pppppppuStack_4f8;
    pppppppuStack_4e8 = &pppppppuStack_4e8;
    local_4d8 = (uint *******)&local_4d8;
    local_4c8 = &local_4c8;
    local_4b8 = &local_4b8;
    local_4a8 = &local_4a8;
    pppppppuStack_498 = &pppppppuStack_498;
    pppppppuStack_488 = &pppppppuStack_488;
    local_470 = (long *******)(local_480 + 8);
    pppppplStack_478 = (long ******)local_470;
    local_480 = (undefined1  [8])pppppppuStack_488;
    local_468 = (long *******)&local_468;
    local_458 = &local_458;
    local_448 = &local_448;
    local_438 = &local_438;
    local_428 = &local_428;
    local_418 = &local_418;
    local_408 = &local_408;
    local_3f8 = &local_3f8;
    local_3e8 = &local_3e8;
    local_3d8 = &local_3d8;
    local_3c8 = &local_3c8;
    local_3b8 = &local_3b8;
    local_3a8 = &local_3a8;
    local_398 = &local_398;
    local_388 = &local_388;
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
    p_Var70 = uStack_580;
    local_8c0 = local_8c8;
    ppppppplStack_530 = local_538;
    pppppppuStack_520 = pppppppuStack_528;
    local_510 = pppppppuStack_518;
    local_500 = pppppppuStack_508;
    local_4f0 = pppppppuStack_4f8;
    local_4e0 = pppppppuStack_4e8;
    pppppppuStack_4d0 = local_4d8;
    pppppppuStack_4c0 = local_4c8;
    pppppppuStack_4b0 = local_4b8;
    local_4a0 = local_4a8;
    local_490 = pppppppuStack_498;
    local_460 = local_468;
    pppppppuStack_450 = local_458;
    local_440 = local_448;
    local_430 = local_438;
    local_420 = local_428;
    local_410 = local_418;
    local_400 = local_408;
    local_3f0 = local_3f8;
    local_3e0 = local_3e8;
    local_3d0 = local_3d8;
    local_3c0 = local_3c8;
    local_3b0 = local_3b8;
    local_3a0 = local_3a8;
    local_390 = local_398;
    local_380 = local_388;
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
    ppppppplStack_540 = local_548;
    local_588 = uStack_580;
    uStack_578 = uStack_570;
    do {
      local_a50 = p_Var70;
      p_Var70 = (_List_node_base *)&local_588;
      std::__detail::_List_node_base::_M_transfer((_List_node_base *)&local_8c8,local_5e0);
      if (p_Var70 == local_a50) {
        uVar42 = 1;
      }
      else {
        do {
          p_Var37 = p_Var70;
          p_Var33 = *(_List_node_base **)p_Var37;
          if (p_Var33 == p_Var37) {
            p_Var70 = p_Var37;
            goto LAB_003c47c3;
          }
          if (local_8c8 != (_List_node_base *)&local_8c8) {
            p_Var63 = local_8c8;
            p_Var70 = p_Var33;
            do {
                    /* try { // try from 003c4754 to 003c4763 has its CatchHandler @ 003c79f5 */
              (**(code **)(**(long **)(p_Var63 + 0x10) + 0x10))();
              (**(code **)(**(long **)(p_Var70 + 0x10) + 0x10))();
              if (extraout_RDX_00 < extraout_RDX_01) {
                p_Var62 = *(_List_node_base **)p_Var63;
                std::__detail::_List_node_base::_M_transfer(p_Var70,p_Var63);
                p_Var63 = p_Var62;
              }
              else {
                p_Var70 = *(_List_node_base **)p_Var70;
              }
            } while ((p_Var70 != p_Var37) && (p_Var63 != (_List_node_base *)&local_8c8));
            if (p_Var63 != (_List_node_base *)&local_8c8) {
              std::__detail::_List_node_base::_M_transfer(p_Var37,p_Var63);
            }
          }
          std::__detail::_List_node_base::swap((_List_node_base *)&local_8c8,p_Var37);
          p_Var70 = p_Var37 + 0x10;
        } while (p_Var37 + 0x10 != local_a50);
        p_Var70 = local_a50;
LAB_003c47c3:
        uVar42 = (ulong)(p_Var33 != p_Var37);
      }
      std::__detail::_List_node_base::swap((_List_node_base *)&local_8c8,p_Var70);
      p_Var70 = local_a50 + uVar42 * 0x10;
    } while (local_5e0 != (_List_node_base *)&local_5e0);
    local_a38[0] = (char)uVar42;
    for (p_Var70 = (_List_node_base *)&uStack_578; p_Var70 != local_a50 + uVar42 * 0x10;
        p_Var70 = p_Var70 + 0x10) {
      p_Var33 = p_Var70 + -0x10;
      p_Var37 = *(_List_node_base **)p_Var70;
      p_Var63 = *(_List_node_base **)(p_Var70 + -0x10);
      while( true ) {
        bVar82 = p_Var63 != p_Var33;
        p_Var62 = p_Var63;
        if (p_Var37 == p_Var70) break;
        while( true ) {
          p_Var63 = p_Var62;
          if (p_Var62 == p_Var33) goto LAB_003c4bef;
                    /* try { // try from 003c4bba to 003c4bc9 has its CatchHandler @ 003c7843 */
          (**(code **)(**(long **)(p_Var62 + 0x10) + 0x10))();
          (**(code **)(**(long **)(p_Var37 + 0x10) + 0x10))();
          if (extraout_RDX_05 <= extraout_RDX_04) break;
          p_Var63 = *(_List_node_base **)p_Var62;
          std::__detail::_List_node_base::_M_transfer(p_Var37,p_Var62);
          bVar82 = p_Var63 != p_Var33;
          p_Var62 = p_Var63;
          if (p_Var37 == p_Var70) goto LAB_003c4bef;
        }
        p_Var37 = *(_List_node_base **)p_Var37;
      }
LAB_003c4bef:
      if (bVar82) {
        std::__detail::_List_node_base::_M_transfer(p_Var70,p_Var63);
      }
    }
    p_Var70 = local_a50 + -0x10;
    if ((char)uVar42 != '\0') {
      p_Var70 = local_a50;
    }
    std::__detail::_List_node_base::swap(p_Var70,(_List_node_base *)&local_5e0);
    if ((long)local_5c8 < (long)pppppppuStack_5c0) goto LAB_003c4c3a;
  }
  do {
    pppppppuStack_5c0 = (undefined8 *******)0x7fffffffffffffff;
    if (local_5e0 != (_List_node_base *)&local_5e0) {
      plVar58 = *(long **)(local_5e0 + 0x10);
      p_Var70 = local_5e0;
      do {
        (**(code **)(*plVar58 + 0x20))(plVar58);
        cVar23 = (**(code **)(*plVar58 + 0x18))(plVar58);
        if (cVar23 == '\0') goto LAB_003c4c3a;
        pppppppuVar61 = (undefined8 *******)(**(code **)(*plVar58 + 0x10))(plVar58);
        if ((long)local_5c8 < (long)pppppppuVar61) {
          local_5c8 = pppppppuVar61;
        }
        do {
          (**(code **)(*plVar58 + 0x10))(plVar58);
          if ((long)extraout_RDX_03 < (long)pppppppuStack_5c0) {
            pppppppuStack_5c0 = extraout_RDX_03;
          }
          p_Var70 = *(_List_node_base **)p_Var70;
          if (p_Var70 == (_List_node_base *)&local_5e0) goto LAB_003c48d0;
          plVar58 = *(long **)(p_Var70 + 0x10);
          if (p_Var70 == local_5e0) break;
                    /* try { // try from 003c4843 to 003c4895 has its CatchHandler @ 003c7818 */
          (**(code **)(*plVar58 + 0x10))(plVar58);
        } while ((long)local_5c8 < extraout_RDX_02);
      } while( true );
    }
LAB_003c48d0:
                    /* try { // try from 003c48d0 to 003c48d7 has its CatchHandler @ 003c75a3 */
    std::__cxx11::list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>
    ::
    sort<juce::detail::IntersectingRangedValues<juce::Font_const,juce::detail::LineMetrics_const,juce::detail::JustifiedText::DrawType_const,float_const,juce::Colour>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
              ((_List_node_base *)&local_5e0);
  } while ((long)pppppppuStack_5c0 <= (long)local_5c8);
LAB_003c4c3a:
  bVar82 = true;
  _local_9e8 = ZEXT816(0);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uStack_a30;
  _local_a38 = auVar21 << 0x40;
  pppppppuVar61 = (undefined8 *******)0x0;
LAB_003c4ca5:
  local_588._0_4_ = 0x712648;
  local_588._4_4_ = 0;
  pppppppuStack_558 = (undefined8 *******)puStack_6c8;
  local_560 = (undefined1  [8])local_6d0;
  uStack_570._0_4_ = uStack_6e0;
  uStack_570._4_4_ = uStack_6dc;
  uStack_568._0_4_ = uStack_6d8;
  uStack_568._4_4_ = uStack_6d4;
  uStack_580._0_4_ = local_6f0;
  uStack_580._4_4_ = uStack_6ec;
  uStack_578._0_4_ = uStack_6e8;
  uStack_578._4_4_ = uStack_6e4;
  local_550 = (undefined8 *******)&PTR__RangedIterator_00712200;
  pppppppuStack_528 = pppppppuStack_698;
  pppppppuStack_520 = pppppppuStack_690;
  local_538 = (long *******)local_6a8;
  ppppppplStack_530 = ppppppplStack_6a0;
  local_548 = (long *******)local_6b8;
  ppppppplStack_540 = (long *******)pppppplStack_6b0;
  pppppppuStack_518 = (undefined8 *******)&PTR__RangedIterator_007121b0;
  local_4f0 = (undefined8 *******)local_660;
  pppppppuStack_4e8 = (undefined8 *******)ppppppuStack_658;
  local_500 = (undefined8 *******)local_670;
  pppppppuStack_4f8 = (undefined8 *******)ppppppuStack_668;
  local_510 = (undefined8 *******)local_680;
  pppppppuStack_508 = (undefined8 *******)ppppppuStack_678;
  local_4e0 = (undefined8 *******)&PTR__RangedIterator_00712160;
  local_4b8 = (undefined8 *******)local_628;
  pppppppuStack_4b0 = (undefined8 *******)uStack_620;
  local_4c8 = (undefined8 *******)local_638;
  pppppppuStack_4c0 = (undefined8 *******)ppppppuStack_630;
  local_4d8 = (uint *******)local_648;
  pppppppuStack_4d0 = (uint *******)ppppppuStack_640;
  local_4a8 = (undefined8 *******)&PTR__RangedIterator_00712100;
  pppppplStack_478 = (long ******)uStack_5e8;
  local_480 = (undefined1  [8])local_5f0;
  local_490 = (undefined8 *******)local_600;
  pppppppuStack_488 = (undefined8 *******)ppppppuStack_5f8;
  local_4a0 = (undefined8 *******)local_610;
  pppppppuStack_498 = (undefined8 *******)ppppppuStack_608;
  local_460 = (long *******)0x0;
  p_Var70 = local_5e0;
  local_470 = (long *******)&local_470;
  local_468 = (long *******)&local_470;
  if (local_5e0 == (_List_node_base *)&local_5e0) {
    local_458 = local_5c8;
    pppppppuStack_450 = pppppppuStack_5c0;
  }
  else {
    do {
                    /* try { // try from 003c4de0 to 003c4de9 has its CatchHandler @ 003c79c4 */
      p_Var33 = operator_new(0x18);
      *(undefined8 *)(p_Var33 + 0x10) = *(undefined8 *)(p_Var70 + 0x10);
      std::__detail::_List_node_base::_M_hook(p_Var33);
      local_460 = (long *******)((long)local_460 + 1);
      p_Var70 = *(_List_node_base **)p_Var70;
    } while (p_Var70 != (_List_node_base *)&local_5e0);
    local_458 = local_5c8;
    pppppppuStack_450 = pppppppuStack_5c0;
    if ((long ********)local_470 != &local_470) {
      ppppppplVar60 = local_470;
      do {
                    /* try { // try from 003c4e47 to 003c4e49 has its CatchHandler @ 003c7897 */
        cVar23 = (*(code *)(*ppppppplVar60[2])[3])();
        ppppppplVar66 = local_470;
        ppppppplVar57 = ppppppplVar60;
        if (cVar23 == '\0') break;
        ppppppplVar60 = (long *******)*ppppppplVar60;
        ppppppplVar57 = (long *******)&local_470;
      } while ((long ********)ppppppplVar60 != &local_470);
      while ((long ********)ppppppplVar66 != &local_470) {
        ppppppplVar60 = (long *******)*ppppppplVar66;
        operator_delete(ppppppplVar66);
        ppppppplVar66 = ppppppplVar60;
      }
      p_Var70 = local_5e0;
      if ((long ********)ppppppplVar57 != &local_470) goto joined_r0x003c7218;
    }
  }
  pppppppuVar32 = local_5c8;
  ppppppuVar74 = local_648;
  pppppplVar59 = local_6b8;
  pppppppuVar34 = local_5c8;
  if ((long)local_5c8 < (long)pppppppuStack_5c0) {
    pppppppuVar34 = pppppppuStack_5c0;
  }
  lVar56 = (long)local_638 - (long)ppppppuStack_640 >> 4;
  local_930 = (long)local_670 - (long)ppppppuStack_678 >> 4;
  local_8e8 = (_List_node_base *)local_648[lVar56 * 5];
  if (local_a50 != local_8e8 || bVar82) {
    _fStack_9e0 = 0;
    local_9e8 = (undefined1  [8])local_648[lVar56 * 5 + 1];
  }
  lVar35 = (long)local_6a8 - (long)pppppplStack_6b0;
  local_920 = (long *)(CONCAT44(uStack_6dc,uStack_6e0) - CONCAT44(uStack_6e4,uStack_6e8));
  puVar67 = (undefined8 *)(((long)local_600 - (long)ppppppuStack_608 >> 1) + (long)local_610);
  local_928 = (TypefaceCache *)CONCAT44(uStack_6ec,local_6f0);
  iVar24 = *(int *)((long)local_680 + local_930 * 4);
  local_150 = pppppppuStack_5c0;
  local_5b8._0_8_ = local_680;
  if ((local_5c8 != pppppppuVar61) && (iVar24 != 1)) {
    local_978 = 0;
    uStack_970 = 0;
    local_988 = 0;
    plStack_980 = (long *)0x0;
    local_998 = (long *)0x0;
    uStack_990 = 0;
    local_5a8 = (long *******)0x0;
    pppppppuStack_5a0 = (undefined8 *******)0x0;
    local_598 = (undefined8 *******)0x0;
    pppppppuVar44 =
         *(undefined8 ********)
          (*(long *)(*(long *)(lVar27 + 0x148) + 0x20) + (long)local_8e8 * 0x10);
    if ((long)pppppppuVar61 < (long)pppppppuVar44) {
      pppppppuVar61 = pppppppuVar44;
    }
    pppppppuVar44 = pppppppuVar61;
    if ((long)pppppppuVar61 < (long)local_5c8) {
      pppppppuVar44 = local_5c8;
    }
                    /* try { // try from 003c5054 to 003c5070 has its CatchHandler @ 003c77d2 */
    detail::RangedValues<signed_char>::set<juce::detail::MergeEqualItemsYes>
              ((RangedValues<signed_char> *)&local_998,(ulong)pppppppuVar61,(ulong)pppppppuVar44,1,
               (long *)&local_5a8);
    plVar46 = plStack_980;
    plVar58 = local_998;
    local_738 = *(long **)(lVar27 + 0x298);
    plStack_730 = *(long **)(lVar27 + 0x280);
    uStack_710 = *(undefined8 *)(lVar27 + 0x288);
    local_778 = &PTR__RangedIterator_00712250;
    plStack_770 = plStack_980;
    local_768 = local_998;
    plStack_760 = local_998;
    local_758 = plStack_980;
    plStack_750 = local_998;
    local_748 = uStack_990;
    ppuStack_740 = &PTR__RangedIterator_00712200;
                    /* try { // try from 003c5121 to 003c5135 has its CatchHandler @ 003c77ca */
    local_728 = plStack_730;
    plStack_720 = local_738;
    local_718 = plStack_730;
    detail::IntersectingRangedValues<float_const,signed_char>::IntersectionIterator::
    IntersectionIterator((IntersectionIterator *)&local_8c8,(long)&local_778);
LAB_003c5140:
    local_c8 = &PTR__RangedIterator_00712250;
    local_a0 = local_8a0;
    p_Stack_98 = p_Stack_898;
    local_b0 = local_8b0;
    p_Stack_a8 = p_Stack_8a8;
    local_c0 = local_8c0;
    p_Stack_b8 = p_Stack_8b8;
    local_90 = &PTR__RangedIterator_00712200;
    local_68._8_8_ = lStack_860;
    local_68._0_8_ = local_868;
    local_78 = local_878;
    puStack_70 = puStack_870;
    local_88 = plStack_888;
    plStack_80 = plStack_880;
    local_48 = 0;
    p_Var70 = local_858[0];
    local_58 = (long *******)&local_58;
    local_50 = (long *******)&local_58;
    if (local_858[0] == (_List_node_base *)local_858) {
      local_40 = local_840;
      lStack_38 = lStack_838;
    }
    else {
      do {
                    /* try { // try from 003c51d0 to 003c51d9 has its CatchHandler @ 003c7ac2 */
        p_Var33 = operator_new(0x18);
        *(undefined8 *)(p_Var33 + 0x10) = *(undefined8 *)(p_Var70 + 0x10);
        std::__detail::_List_node_base::_M_hook(p_Var33);
        local_48 = local_48 + 1;
        p_Var70 = *(_List_node_base **)p_Var70;
      } while (p_Var70 != (_List_node_base *)local_858);
      local_40 = local_840;
      lStack_38 = lStack_838;
      ppppppplVar60 = local_58;
      if ((long ********)local_58 != &local_58) {
        do {
                    /* try { // try from 003c5237 to 003c5239 has its CatchHandler @ 003c7a97 */
          cVar23 = (*(code *)(*ppppppplVar60[2])[3])();
          ppppppplVar66 = local_58;
          ppppppplVar57 = ppppppplVar60;
          if (cVar23 == '\0') break;
          ppppppplVar60 = (long *******)*ppppppplVar60;
          ppppppplVar57 = (long *******)&local_58;
        } while ((long ********)ppppppplVar60 != &local_58);
        while ((long ********)ppppppplVar66 != &local_58) {
          ppppppplVar60 = (long *******)*ppppppplVar66;
          operator_delete(ppppppplVar66);
          ppppppplVar66 = ppppppplVar60;
        }
        p_Var70 = local_858[0];
        if ((long ********)ppppppplVar57 != &local_58) goto joined_r0x003c54ab;
      }
    }
    if (lStack_838 <= local_840) {
      lStack_838 = local_840;
    }
    lVar45 = *(long *)(*(long *)(lVar27 + 0x148) + 8);
    lVar64 = *(long *)(*(long *)(lVar27 + 0x148) + 0x10) - lVar45 >> 5;
    if (lVar64 < 0) {
      lVar64 = 0;
    }
    lVar53 = local_840;
    if (local_840 < 0) {
      lVar53 = 0;
    }
    if (lStack_838 <= lVar64) {
      lVar64 = lStack_838;
    }
    lVar54 = lVar64 - lVar53;
    if (lVar54 == 0 || lVar64 < lVar53) {
      lVar54 = 0;
    }
    if (lVar54 != 0) {
      puVar31 = (undefined8 *)(lVar45 + lVar53 * 0x20);
      puVar81 = puVar31 + lVar54 * 4;
      do {
        local_9e8._0_4_ = (float)*puVar31 + (float)local_9e8._0_4_;
        local_9e8._4_4_ = (float)((ulong)*puVar31 >> 0x20) + (float)local_9e8._4_4_;
        fStack_9e0 = fStack_9e0 + 0.0;
        fStack_9dc = fStack_9dc + 0.0;
        if (*(char *)((long)puVar31 + 0x1d) != '\0') {
          local_9e8._0_4_ =
               (float)local_9e8._0_4_ +
               *(float *)((long)plStack_888 + ((long)local_878 - (long)plStack_880 >> 4) * 4);
          local_9e8._4_4_ = (float)local_9e8._4_4_ + 0.0;
          fStack_9e0 = fStack_9e0 + 0.0;
          fStack_9dc = fStack_9dc + 0.0;
        }
        puVar31 = puVar31 + 4;
      } while (puVar31 != puVar81);
    }
    do {
      lStack_838 = 0x7fffffffffffffff;
      if (local_858[0] != (_List_node_base *)local_858) {
        plVar51 = *(long **)(local_858[0] + 0x10);
        p_Var70 = local_858[0];
        while( true ) {
          (**(code **)(*plVar51 + 0x20))(plVar51);
          cVar23 = (**(code **)(*plVar51 + 0x18))(plVar51);
          if (cVar23 == '\0') break;
          lVar45 = (**(code **)(*plVar51 + 0x10))(plVar51);
          if (local_840 < lVar45) {
            local_840 = lVar45;
          }
          do {
            (**(code **)(*plVar51 + 0x10))(plVar51);
            if (extraout_RDX_07 < lStack_838) {
              lStack_838 = extraout_RDX_07;
            }
            p_Var70 = *(_List_node_base **)p_Var70;
            if (p_Var70 == (_List_node_base *)local_858) goto LAB_003c5440;
            plVar51 = *(long **)(p_Var70 + 0x10);
          } while ((p_Var70 != local_858[0]) &&
                  ((**(code **)(*plVar51 + 0x10))(plVar51), local_840 < extraout_RDX_06
                    /* try { // try from 003c53a4 to 003c53fa has its CatchHandler @ 003c7af2 */));
        }
        break;
      }
LAB_003c5440:
                    /* try { // try from 003c5440 to 003c5447 has its CatchHandler @ 003c7a8d */
      std::__cxx11::
      list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>::
      sort<juce::detail::IntersectingRangedValues<float_const,signed_char>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
                ((_List_node_base *)local_858);
    } while (lStack_838 <= local_840);
    goto LAB_003c5140;
  }
  goto joined_r0x003c5536;
joined_r0x003c54ab:
  while (p_Var70 != (_List_node_base *)local_858) {
    p_Var33 = *(_List_node_base **)p_Var70;
    operator_delete(p_Var70);
    p_Var70 = p_Var33;
  }
  if (local_5a8 != (long *******)0x0) {
    operator_delete(local_5a8);
  }
  if (plVar46 != (long *)0x0) {
    operator_delete(plVar46);
  }
  if (plVar58 != (long *)0x0) {
    operator_delete(plVar58);
  }
  iVar24 = *(int *)(local_5b8._0_8_ + local_930 * 4);
joined_r0x003c5536:
  if (iVar24 == 1) {
    local_9f8 = *(long *)(lVar27 + 0x188);
    uVar42 = *(long *)(lVar27 + 400) - local_9f8 >> 5;
LAB_003c5596:
    if (uVar42 >> 0x3c != 0) {
                    /* try { // try from 003c74f6 to 003c7501 has its CatchHandler @ 003c77ea */
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    }
    bVar83 = uVar42 == 0;
    if (bVar83) {
      local_8f8 = local_9f8;
      local_a40 = (undefined8 *)0x0;
      if (iVar24 == 1) goto LAB_003c56ce;
      goto LAB_003c570c;
    }
                    /* try { // try from 003c55bc to 003c55c3 has its CatchHandler @ 003c776c */
    local_a40 = operator_new(uVar42 * 8);
    memset(local_a40,0,uVar42 * 8);
    local_8f8 = local_9f8 + uVar42 * 0x20;
    lVar45 = 0;
    puVar31 = local_a40;
    auVar88 = _local_9e8;
    do {
      uVar86 = *(undefined8 *)(local_9f8 + 8 + lVar45);
      local_9e8._0_4_ = (float)*(undefined8 *)(local_9f8 + lVar45) + auVar88._0_4_;
      local_9e8._4_4_ = (float)((ulong)*(undefined8 *)(local_9f8 + lVar45) >> 0x20) + auVar88._4_4_;
      fStack_9e0 = auVar88._8_4_ + 0.0;
      fStack_9dc = auVar88._12_4_ + 0.0;
      if (*(char *)(local_9f8 + 0x1d + lVar45) != '\0') {
        local_9e8._0_4_ =
             (float)local_9e8._0_4_ + *(float *)((long)pppppplVar59 + (lVar35 >> 4) * 4);
        local_9e8._4_4_ = (float)local_9e8._4_4_ + 0.0;
        fStack_9e0 = fStack_9e0 + 0.0;
        fStack_9dc = fStack_9dc + 0.0;
      }
      *puVar31 = CONCAT44(auVar88._4_4_ + (float)((ulong)uVar86 >> 0x20),
                          auVar88._0_4_ + (float)uVar86);
      puVar31 = puVar31 + 1;
      lVar45 = lVar45 + 0x20;
      auVar88 = _local_9e8;
    } while (uVar42 * 0x20 != lVar45);
    if (*(int *)(local_5b8._0_8_ + local_930 * 4) != 1) goto LAB_003c570c;
LAB_003c56ce:
    plVar58 = (long *)**(undefined8 **)(lVar27 + 0x200);
    pTVar76 = local_928;
  }
  else {
    local_9f8 = *(long *)(*(long *)(lVar27 + 0x148) + 8);
    pppppppuVar61 =
         (undefined8 *******)(*(long *)(*(long *)(lVar27 + 0x148) + 0x10) - local_9f8 >> 5);
    if ((long)pppppppuVar61 < 0) {
      pppppppuVar61 = (undefined8 *******)0x0;
    }
    pppppppuVar44 = (undefined8 *******)0x0;
    if (-1 < (long)pppppppuVar32) {
      pppppppuVar44 = pppppppuVar32;
    }
    if ((long)pppppppuVar34 <= (long)pppppppuVar61) {
      pppppppuVar61 = pppppppuVar34;
    }
    local_9f8 = (long)pppppppuVar44 * 0x20 + local_9f8;
    uVar42 = (long)pppppppuVar61 - (long)pppppppuVar44;
    if (uVar42 != 0 && (long)pppppppuVar44 <= (long)pppppppuVar61) goto LAB_003c5596;
    bVar83 = true;
    uVar42 = 0;
    local_a40 = (undefined8 *)0x0;
    local_8f8 = local_9f8;
LAB_003c570c:
    plVar58 = (long *)*puVar67;
    pTVar76 = local_928;
  }
  if (plVar58 != (long *)0x0) {
    LOCK();
    *(int *)(plVar58 + 1) = (int)plVar58[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar58 + 1) = (int)plVar58[1] + 1;
    UNLOCK();
  }
  local_8f0 = ppppppuVar74[lVar56 * 5];
  local_8cc = *(undefined4 *)(pTVar76 + ((long)local_920 >> 4) * 4);
  local_928 = pTVar76;
  if (!bVar82 && local_a18 == local_8f0) goto LAB_003c6a97;
  if (local_a38 != (undefined1  [8])0x0) {
    iVar24 = *(int *)(this + 0xc);
    if ((int)*(uint *)(this + 8) <= iVar24) {
      uVar55 = iVar24 + ((iVar24 - (iVar24 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(this + 8) != uVar55) {
        if ((int)uVar55 < 1) {
          free(*(void **)this);
          *(undefined8 *)this = 0;
        }
        else {
          pvVar41 = realloc(*(void **)this,(ulong)uVar55 << 3);
          *(void **)this = pvVar41;
        }
      }
      *(uint *)(this + 8) = uVar55;
      iVar24 = *(int *)(this + 0xc);
    }
    *(int *)(this + 0xc) = iVar24 + 1;
    *(undefined1 (*) [8])(*(long *)this + (long)iVar24 * 8) = local_a38;
  }
  lVar56 = local_800;
  local_8c8 = *(_List_node_base **)(local_800 + 0x80);
  plVar46 = *(long **)(local_800 + 0x88);
  plVar51 = *(long **)(local_800 + 0x90);
  uVar26 = (long)plVar51 - (long)plVar46 >> 5;
  local_8c0 = (_List_node_base *)0x0;
  p_Stack_8b8 = (_List_node_base *)0x0;
  local_8b0 = (_List_node_base *)0x0;
  if ((long)plVar51 - (long)plVar46 == 0) {
    local_8c0 = (_List_node_base *)0x0;
  }
  else {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar26;
    if (SUB168(auVar12 * ZEXT816(0x20),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003c7524 to 003c7528 has its CatchHandler @ 003c7700 */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 003c5871 to 003c587f has its CatchHandler @ 003c7853 */
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uStack_a30;
    _local_a38 = auVar22 << 0x40;
    local_8c0 = operator_new(SUB168(auVar12 * ZEXT816(0x20),0));
    plVar46 = *(long **)(lVar56 + 0x88);
    plVar51 = *(long **)(lVar56 + 0x90);
  }
  local_8b0 = local_8c0 + uVar26 * 0x20;
  p_Stack_8b8 = local_8c0;
  for (; plVar46 != plVar51; plVar46 = plVar46 + 4) {
    p_Var33 = (_List_node_base *)*plVar46;
    p_Var37 = (_List_node_base *)plVar46[1];
    p_Var70 = (_List_node_base *)plVar46[3];
    *(_List_node_base **)(p_Stack_8b8 + 0x10) = (_List_node_base *)plVar46[2];
    *(_List_node_base **)(p_Stack_8b8 + 0x18) = p_Var70;
    *(_List_node_base **)p_Stack_8b8 = p_Var33;
    *(_List_node_base **)(p_Stack_8b8 + 8) = p_Var37;
    p_Stack_8b8 = p_Stack_8b8 + 0x20;
  }
  plVar46 = *(long **)(lVar56 + 0xa0);
  plVar51 = *(long **)(lVar56 + 0xa8);
  uVar26 = (long)plVar51 - (long)plVar46 >> 4;
  p_Stack_8a8 = (_List_node_base *)0x0;
  local_8a0 = (_List_node_base *)0x0;
  p_Stack_898 = (_List_node_base *)0x0;
  if ((long)plVar51 - (long)plVar46 == 0) {
    p_Stack_8a8 = (_List_node_base *)0x0;
  }
  else {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar26;
    if (SUB168(auVar13 * ZEXT816(0x10),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003c7533 to 003c7537 has its CatchHandler @ 003c76bf */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 003c592a to 003c5931 has its CatchHandler @ 003c76d8 */
    p_Stack_8a8 = operator_new(SUB168(auVar13 * ZEXT816(0x10),0));
    plVar46 = *(long **)(lVar56 + 0xa0);
    plVar51 = *(long **)(lVar56 + 0xa8);
  }
  p_Stack_898 = p_Stack_8a8 + uVar26 * 0x10;
  local_8a0 = p_Stack_8a8;
  for (; plVar46 != plVar51; plVar46 = plVar46 + 2) {
    lVar35 = plVar46[1];
    *(long *)local_8a0 = *plVar46;
    *(long *)(local_8a0 + 8) = lVar35;
    local_8a0 = local_8a0 + 0x10;
  }
  plVar46 = *(long **)(lVar56 + 0xb8);
  plVar51 = *(long **)(lVar56 + 0xc0);
  uVar26 = (long)plVar51 - (long)plVar46 >> 3;
  local_890 = (long *)0x0;
  plStack_888 = (long *)0x0;
  plStack_880 = (long *)0x0;
  if ((long)plVar51 - (long)plVar46 == 0) {
    local_890 = (long *)0x0;
  }
  else {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar26;
    if (SUB168(auVar14 * ZEXT816(8),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003c7529 to 003c752d has its CatchHandler @ 003c76e0 */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 003c59d3 to 003c59da has its CatchHandler @ 003c76c7 */
    local_890 = operator_new(SUB168(auVar14 * ZEXT816(8),0));
    plVar46 = *(long **)(lVar56 + 0xb8);
    plVar51 = *(long **)(lVar56 + 0xc0);
  }
  plStack_880 = local_890 + uVar26;
  plStack_888 = local_890;
  if (plVar46 != plVar51) {
    uVar26 = (long)plVar51 + (-8 - (long)plVar46);
    if ((0x17 < uVar26) &&
       ((ppppppuVar36 = (uint ******)((uVar26 >> 3) + 1), plVar46 + (long)ppppppuVar36 <= local_890
        || (local_890 + (long)ppppppuVar36 <= plVar46)))) {
      ppppppuVar74 = (uint ******)((ulong)ppppppuVar36 & 0x3ffffffffffffffc);
      uVar26 = ((long)ppppppuVar74 - 4U >> 2) + 1;
      uVar48 = (ulong)((uint)uVar26 & 3);
      if ((uint *)((long)ppppppuVar74 - 4U) < (uint *)0xc) {
        lVar35 = 0;
      }
      else {
        uVar26 = uVar26 & 0x7ffffffffffffffc;
        lVar35 = 0;
        do {
          lVar45 = (plVar46 + lVar35)[1];
          lVar64 = plVar46[lVar35 + 2];
          lVar53 = (plVar46 + lVar35 + 2)[1];
          local_890[lVar35] = plVar46[lVar35];
          (local_890 + lVar35)[1] = lVar45;
          local_890[lVar35 + 2] = lVar64;
          (local_890 + lVar35 + 2)[1] = lVar53;
          lVar45 = (plVar46 + lVar35 + 4)[1];
          lVar64 = plVar46[lVar35 + 6];
          lVar53 = (plVar46 + lVar35 + 6)[1];
          local_890[lVar35 + 4] = plVar46[lVar35 + 4];
          (local_890 + lVar35 + 4)[1] = lVar45;
          local_890[lVar35 + 6] = lVar64;
          (local_890 + lVar35 + 6)[1] = lVar53;
          lVar45 = (plVar46 + lVar35 + 8)[1];
          lVar64 = plVar46[lVar35 + 10];
          lVar53 = (plVar46 + lVar35 + 10)[1];
          local_890[lVar35 + 8] = plVar46[lVar35 + 8];
          (local_890 + lVar35 + 8)[1] = lVar45;
          local_890[lVar35 + 10] = lVar64;
          (local_890 + lVar35 + 10)[1] = lVar53;
          lVar45 = (plVar46 + lVar35 + 0xc)[1];
          lVar64 = plVar46[lVar35 + 0xe];
          lVar53 = (plVar46 + lVar35 + 0xe)[1];
          local_890[lVar35 + 0xc] = plVar46[lVar35 + 0xc];
          (local_890 + lVar35 + 0xc)[1] = lVar45;
          local_890[lVar35 + 0xe] = lVar64;
          (local_890 + lVar35 + 0xe)[1] = lVar53;
          lVar35 = lVar35 + 0x10;
          uVar26 = uVar26 - 4;
        } while (uVar26 != 0);
      }
      pTVar76 = (TypefaceCache *)0x0;
      if (uVar48 != 0) {
        pTVar76 = (TypefaceCache *)(uVar48 * 0x20);
        pTVar52 = (TypefaceCache *)0x0;
        do {
          pTVar47 = (TypefaceCache *)((long)(plVar46 + lVar35) + (long)pTVar52);
          uVar86 = *(undefined8 *)(pTVar47 + 8);
          pTVar38 = (TypefaceCache *)((long)(plVar46 + lVar35 + 2) + (long)pTVar52);
          uVar18 = *(undefined8 *)pTVar38;
          uVar19 = *(undefined8 *)(pTVar38 + 8);
          pTVar38 = (TypefaceCache *)((long)(local_890 + lVar35) + (long)pTVar52);
          *(undefined8 *)pTVar38 = *(undefined8 *)pTVar47;
          *(undefined8 *)(pTVar38 + 8) = uVar86;
          pTVar47 = (TypefaceCache *)((long)(local_890 + lVar35 + 2) + (long)pTVar52);
          *(undefined8 *)pTVar47 = uVar18;
          *(undefined8 *)(pTVar47 + 8) = uVar19;
          pTVar52 = pTVar52 + 0x20;
        } while (pTVar76 != pTVar52);
      }
      plStack_888 = local_890 + (long)ppppppuVar74;
      if (ppppppuVar36 == ppppppuVar74) goto LAB_003c5b43;
      plVar46 = plVar46 + (long)ppppppuVar74;
    }
    do {
      *plStack_888 = *plVar46;
      plVar46 = plVar46 + 1;
      plStack_888 = plStack_888 + 1;
    } while (plVar46 != plVar51);
  }
LAB_003c5b43:
  puVar67 = *(undefined8 **)(lVar56 + 0xd0);
  puVar31 = *(undefined8 **)(lVar56 + 0xd8);
  uVar26 = (long)puVar31 - (long)puVar67 >> 4;
  local_878 = (undefined8 *)0x0;
  puStack_870 = (undefined8 *)0x0;
  local_868 = (undefined8 *)0x0;
  if ((long)puVar31 - (long)puVar67 == 0) {
    local_878 = (undefined8 *)0x0;
  }
  else {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar26;
    if (SUB168(auVar15 * ZEXT816(0x10),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003c751a to 003c751e has its CatchHandler @ 003c7738 */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 003c5b93 to 003c5b9a has its CatchHandler @ 003c76cb */
    local_878 = operator_new(SUB168(auVar15 * ZEXT816(0x10),0));
    puVar67 = *(undefined8 **)(lVar56 + 0xd0);
    puVar31 = *(undefined8 **)(lVar56 + 0xd8);
  }
  local_868 = local_878 + uVar26 * 2;
  puStack_870 = local_878;
  for (; puVar67 != puVar31; puVar67 = puVar67 + 2) {
    uVar86 = puVar67[1];
    *puStack_870 = *puVar67;
    puStack_870[1] = uVar86;
    puStack_870 = puStack_870 + 2;
  }
                    /* try { // try from 003c5c02 to 003c5c0e has its CatchHandler @ 003c7783 */
  detail::RangedValues<juce::Font>::RangedValues
            ((RangedValues<juce::Font> *)&lStack_860,(long *)(lVar56 + 0xe8));
  puVar67 = *(undefined8 **)(lVar56 + 0x118);
  puVar31 = *(undefined8 **)(lVar56 + 0x120);
  uVar26 = (long)puVar31 - (long)puVar67 >> 4;
  local_830 = (undefined8 *)0x0;
  puStack_828 = (undefined8 *)0x0;
  local_820 = (undefined8 *)0x0;
  if ((long)puVar31 - (long)puVar67 == 0) {
    local_830 = (undefined8 *)0x0;
  }
  else {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar26;
    if (SUB168(auVar16 * ZEXT816(0x10),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003c752e to 003c7532 has its CatchHandler @ 003c76d3 */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 003c5c5d to 003c5c64 has its CatchHandler @ 003c76c9 */
    local_830 = operator_new(SUB168(auVar16 * ZEXT816(0x10),0));
    puVar67 = *(undefined8 **)(lVar56 + 0x118);
    puVar31 = *(undefined8 **)(lVar56 + 0x120);
  }
  local_820 = local_830 + uVar26 * 2;
  puStack_828 = local_830;
  for (; puVar67 != puVar31; puVar67 = puVar67 + 2) {
    uVar86 = puVar67[1];
    *puStack_828 = *puVar67;
    puStack_828[1] = uVar86;
    puStack_828 = puStack_828 + 2;
  }
  puVar67 = *(undefined8 **)(lVar56 + 0x130);
  puVar31 = *(undefined8 **)(lVar56 + 0x138);
  lVar35 = (long)puVar31 - (long)puVar67 >> 3;
  local_818 = (_List_node_base *)0x0;
  p_Stack_810 = (_List_node_base *)0x0;
  local_808 = (_List_node_base *)0x0;
  if ((long)puVar31 - (long)puVar67 == 0) {
    local_818 = (_List_node_base *)0x0;
  }
  else {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = lVar35 * -0x5555555555555555;
    if (SUB168(auVar17 * ZEXT816(0x18),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003c751f to 003c7523 has its CatchHandler @ 003c7714 */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 003c5d17 to 003c5d1e has its CatchHandler @ 003c76fe */
    local_818 = operator_new(SUB168(auVar17 * ZEXT816(0x18),0));
    puVar67 = *(undefined8 **)(lVar56 + 0x130);
    puVar31 = *(undefined8 **)(lVar56 + 0x138);
  }
  local_808 = local_818 + lVar35 * 8;
  p_Stack_810 = local_818;
  for (; puVar67 != puVar31; puVar67 = puVar67 + 3) {
    *(undefined8 *)(p_Stack_810 + 0x10) = puVar67[2];
    uVar86 = puVar67[1];
    *(undefined8 *)p_Stack_810 = *puVar67;
    *(undefined8 *)(p_Stack_810 + 8) = uVar86;
    p_Stack_810 = p_Stack_810 + 0x18;
  }
  p_Var70 = local_8a0 + -(long)p_Stack_8a8;
  p_Var37 = p_Stack_8a8;
  p_Var33 = p_Stack_810;
  if (0 < (long)p_Var70) {
    p_Var70 = (_List_node_base *)((ulong)p_Var70 >> 4);
    do {
      p_Var33 = (_List_node_base *)((ulong)p_Var70 >> 1);
      lVar56 = (long)p_Var33 * 0x10;
      if (*(long *)(p_Var37 + lVar56 + 8) <= (long)pppppppuVar32) {
        p_Var33 = p_Var70 + ~(ulong)p_Var33;
        p_Var37 = p_Var37 + lVar56 + 0x10;
      }
      p_Var70 = p_Var33;
    } while (0 < (long)p_Var33);
  }
  if ((p_Var37 != local_8a0) && (*(long *)p_Var37 <= (long)pppppppuVar32)) {
    p_Var70 = *(_List_node_base **)p_Var37;
    p_Var33 = *(_List_node_base **)(p_Var37 + 8);
  }
                    /* try { // try from 003c5e09 to 003c5e20 has its CatchHandler @ 003c7771 */
  detail::RangedValues<juce::Font>::getIntersectionsWith
            ((Ranges *)&local_778,&lStack_860,(long)p_Var70,(long)p_Var33);
  if ((long)plStack_770 - (long)local_778 == 0) {
    local_9c8 = 0.0;
    fStack_9c4 = 0.0;
    plVar46 = plStack_760;
    plVar51 = local_758;
    if (plStack_760 != local_758) goto LAB_003c6799;
  }
  else {
    local_928 = (TypefaceCache *)(((long)plStack_770 - (long)local_778 >> 4) << 4);
    local_9c8 = 0.0;
    fStack_9c4 = 0.0;
    pTVar52 = (TypefaceCache *)0x0;
    local_920 = plStack_760;
    do {
      plVar46 = (long *)(((long)pTVar52 >> 1) + (long)local_920);
      lVar56 = *(long *)((long)local_920 + ((long)pTVar52 >> 1));
      ppVar4 = (pthread_mutex_t *)(lVar56 + 0x80);
      pTVar47 = pTVar52;
      pthread_mutex_lock(ppVar4);
      pthread_mutex_lock(ppVar4);
      plVar51 = *(long **)(lVar56 + 0x10);
      if (plVar51 == (long *)0x0) {
        plVar51 = *(long **)(lVar56 + 0x28);
        if (plVar51 == (long *)0x0) {
          pTVar38 = (TypefaceCache *)TypefaceCache::singletonHolder._40_8_;
          if (TypefaceCache::singletonHolder._40_8_ == 0) {
            pthread_mutex_lock((pthread_mutex_t *)TypefaceCache::singletonHolder);
            pTVar38 = (TypefaceCache *)TypefaceCache::singletonHolder._40_8_;
            if (TypefaceCache::singletonHolder._40_8_ == 0) {
              if (SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get()::
                  alreadyInside == '\0') {
                SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get()::
                alreadyInside = 1;
                    /* try { // try from 003c6002 to 003c600b has its CatchHandler @ 003c7667 */
                pTVar38 = operator_new(0x120);
                    /* try { // try from 003c600c to 003c6018 has its CatchHandler @ 003c7658 */
                TypefaceCache::TypefaceCache(pTVar38);
                LOCK();
                UNLOCK();
                SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get()::
                alreadyInside = '\0';
                TypefaceCache::singletonHolder._40_8_ = pTVar38;
              }
              else {
                pTVar38 = (TypefaceCache *)0x0;
              }
            }
            pTVar47 = pTVar38;
            pthread_mutex_unlock((pthread_mutex_t *)TypefaceCache::singletonHolder);
          }
                    /* try { // try from 003c6045 to 003c6054 has its CatchHandler @ 003c7824 */
          TypefaceCache::findTypefaceFor
                    ((long *)&local_998,(long)pTVar38,plVar46,pTVar47,(uint *)ppppppuVar74,
                     (ulong)pTVar76);
        }
        else {
          LOCK();
          *(int *)(plVar51 + 1) = (int)plVar51[1] + 1;
          UNLOCK();
          local_998 = *(long **)(lVar56 + 0x28);
          if (local_998 != (long *)0x0) {
            LOCK();
            *(int *)(local_998 + 1) = (int)local_998[1] + 1;
            UNLOCK();
          }
        }
        plVar8 = *(long **)(lVar56 + 0x10);
        *(long **)(lVar56 + 0x10) = local_998;
        local_998 = plVar8;
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar2 = plVar8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        if (plVar51 != (long *)0x0) {
          LOCK();
          plVar8 = plVar51 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)(*plVar51 + 8))(plVar51);
          }
        }
        plVar51 = *(long **)(lVar56 + 0x10);
        if (plVar51 != (long *)0x0) goto LAB_003c609e;
        pthread_mutex_unlock(ppVar4);
        local_9a8 = 0;
      }
      else {
LAB_003c609e:
        LOCK();
        *(int *)(plVar51 + 1) = (int)plVar51[1] + 1;
        UNLOCK();
        pthread_mutex_unlock(ppVar4);
                    /* try { // try from 003c60af to 003c60b4 has its CatchHandler @ 003c78c5 */
        lVar35 = (**(code **)(*plVar51 + 0x18))(plVar51);
        uVar55 = *(uint *)(*plVar46 + 0x60);
        pTVar47 = (TypefaceCache *)(ulong)uVar55;
        if (uVar55 == 1) {
          puVar67 = (undefined8 *)(lVar35 + 0x10);
LAB_003c60d4:
          uVar86 = *puVar67;
        }
        else {
          uVar86 = 0;
          if (uVar55 == 0) {
            puVar67 = (undefined8 *)(lVar35 + 8);
            goto LAB_003c60d4;
          }
        }
        fVar85 = (float)*(undefined8 *)(lVar56 + 0x74);
        fVar89 = (float)((ulong)*(undefined8 *)(lVar56 + 0x74) >> 0x20);
        uVar55 = -(uint)(fVar85 < 0.0);
        uVar84 = -(uint)(fVar89 < 0.0);
        local_9a8 = CONCAT44(~uVar84 & (uint)fVar89,~uVar55 & (uint)fVar85) |
                    CONCAT44((uint)((ulong)uVar86 >> 0x20) & uVar84,(uint)uVar86 & uVar55);
        LOCK();
        plVar8 = plVar51 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)(*plVar51 + 8))(plVar51);
        }
      }
      pthread_mutex_unlock(ppVar4);
      lVar56 = *plVar46;
      fVar85 = *(float *)(lVar56 + 100);
      if (fVar85 <= DAT_005d9058) {
        local_a50._0_4_ = *(float *)(lVar56 + 0x68);
        ppVar4 = (pthread_mutex_t *)(lVar56 + 0x80);
        pthread_mutex_lock(ppVar4);
        pthread_mutex_lock(ppVar4);
        plVar51 = *(long **)(lVar56 + 0x10);
        if (plVar51 == (long *)0x0) {
          plVar51 = *(long **)(lVar56 + 0x28);
          if (plVar51 == (long *)0x0) {
                    /* try { // try from 003c61b6 to 003c61cd has its CatchHandler @ 003c7822 */
            lVar35 = SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get();
            TypefaceCache::findTypefaceFor
                      ((long *)&local_998,lVar35,plVar46,pTVar47,(uint *)ppppppuVar74,(ulong)pTVar76
                      );
          }
          else {
            LOCK();
            *(int *)(plVar51 + 1) = (int)plVar51[1] + 1;
            UNLOCK();
            local_998 = *(long **)(lVar56 + 0x28);
            if (local_998 != (long *)0x0) {
              LOCK();
              *(int *)(local_998 + 1) = (int)local_998[1] + 1;
              UNLOCK();
            }
          }
          plVar8 = *(long **)(lVar56 + 0x10);
          *(long **)(lVar56 + 0x10) = local_998;
          local_998 = plVar8;
          if (plVar8 != (long *)0x0) {
            LOCK();
            plVar2 = plVar8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
          if (plVar51 != (long *)0x0) {
            LOCK();
            plVar8 = plVar51 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)(*plVar51 + 8))(plVar51);
            }
          }
          plVar51 = *(long **)(lVar56 + 0x10);
          if (plVar51 != (long *)0x0) goto LAB_003c6217;
          pthread_mutex_unlock(ppVar4);
          local_a38 = (undefined1  [8])0x0;
        }
        else {
LAB_003c6217:
          LOCK();
          *(int *)(plVar51 + 1) = (int)plVar51[1] + 1;
          UNLOCK();
          pthread_mutex_unlock(ppVar4);
                    /* try { // try from 003c6228 to 003c622d has its CatchHandler @ 003c7871 */
          lVar35 = (**(code **)(*plVar51 + 0x18))(plVar51);
          uVar55 = *(uint *)(*plVar46 + 0x60);
          pTVar47 = (TypefaceCache *)(ulong)uVar55;
          if (uVar55 == 1) {
            puVar67 = (undefined8 *)(lVar35 + 0x10);
LAB_003c624a:
            uVar86 = *puVar67;
          }
          else {
            uVar86 = 0;
            if (uVar55 == 0) {
              puVar67 = (undefined8 *)(lVar35 + 8);
              goto LAB_003c624a;
            }
          }
          fVar85 = (float)*(undefined8 *)(lVar56 + 0x74);
          fVar89 = (float)((ulong)*(undefined8 *)(lVar56 + 0x74) >> 0x20);
          uVar55 = -(uint)(fVar85 < 0.0);
          uVar84 = -(uint)(fVar89 < 0.0);
          local_a38 = (undefined1  [8])
                      (CONCAT44(~uVar84 & (uint)fVar89,~uVar55 & (uint)fVar85) |
                      CONCAT44((uint)((ulong)uVar86 >> 0x20) & uVar84,(uint)uVar86 & uVar55));
          LOCK();
          plVar8 = plVar51 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)(*plVar51 + 8))(plVar51);
          }
        }
        pthread_mutex_unlock(ppVar4);
        local_a50._0_4_ = local_a50._0_4_ * ((float)local_a38._4_4_ + (float)local_a38._0_4_);
        lVar56 = *plVar46;
        fVar85 = *(float *)(lVar56 + 100);
        if (fVar85 <= DAT_005d9058) goto LAB_003c62ce;
      }
      else {
        local_a50._0_4_ = fVar85;
        if (fVar85 <= DAT_005d9058) {
LAB_003c62ce:
          fVar85 = *(float *)(lVar56 + 0x68);
          ppVar4 = (pthread_mutex_t *)(lVar56 + 0x80);
          pthread_mutex_lock(ppVar4);
          pthread_mutex_lock(ppVar4);
          plVar51 = *(long **)(lVar56 + 0x10);
          if (plVar51 == (long *)0x0) {
            plVar51 = *(long **)(lVar56 + 0x28);
            if (plVar51 == (long *)0x0) {
                    /* try { // try from 003c6323 to 003c633a has its CatchHandler @ 003c7820 */
              lVar35 = SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get();
              TypefaceCache::findTypefaceFor
                        ((long *)&local_998,lVar35,plVar46,pTVar47,(uint *)ppppppuVar74,
                         (ulong)pTVar76);
            }
            else {
              LOCK();
              *(int *)(plVar51 + 1) = (int)plVar51[1] + 1;
              UNLOCK();
              local_998 = *(long **)(lVar56 + 0x28);
              if (local_998 != (long *)0x0) {
                LOCK();
                *(int *)(local_998 + 1) = (int)local_998[1] + 1;
                UNLOCK();
              }
            }
            plVar8 = *(long **)(lVar56 + 0x10);
            *(long **)(lVar56 + 0x10) = local_998;
            local_998 = plVar8;
            if (plVar8 != (long *)0x0) {
              LOCK();
              plVar2 = plVar8 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)(*plVar8 + 8))();
              }
            }
            if (plVar51 != (long *)0x0) {
              LOCK();
              plVar8 = plVar51 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)(*plVar51 + 8))(plVar51);
              }
            }
            plVar51 = *(long **)(lVar56 + 0x10);
            if (plVar51 != (long *)0x0) goto LAB_003c6384;
            pthread_mutex_unlock(ppVar4);
            local_a08 = 0;
          }
          else {
LAB_003c6384:
            LOCK();
            *(int *)(plVar51 + 1) = (int)plVar51[1] + 1;
            UNLOCK();
            pthread_mutex_unlock(ppVar4);
                    /* try { // try from 003c6395 to 003c639a has its CatchHandler @ 003c786f */
            lVar35 = (**(code **)(*plVar51 + 0x18))(plVar51);
            uVar55 = *(uint *)(*plVar46 + 0x60);
            pTVar47 = (TypefaceCache *)(ulong)uVar55;
            if (uVar55 == 1) {
              puVar67 = (undefined8 *)(lVar35 + 0x10);
LAB_003c63b7:
              uVar86 = *puVar67;
            }
            else {
              uVar86 = 0;
              if (uVar55 == 0) {
                puVar67 = (undefined8 *)(lVar35 + 8);
                goto LAB_003c63b7;
              }
            }
            fVar89 = (float)*(undefined8 *)(lVar56 + 0x74);
            fVar87 = (float)((ulong)*(undefined8 *)(lVar56 + 0x74) >> 0x20);
            uVar55 = -(uint)(fVar89 < 0.0);
            uVar84 = -(uint)(fVar87 < 0.0);
            local_a08 = CONCAT44(~uVar84 & (uint)fVar87,~uVar55 & (uint)fVar89) |
                        CONCAT44((uint)((ulong)uVar86 >> 0x20) & uVar84,(uint)uVar86 & uVar55);
            LOCK();
            plVar8 = plVar51 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)(*plVar51 + 8))(plVar51);
            }
          }
          pthread_mutex_unlock(ppVar4);
          fVar85 = fVar85 * (local_a08._4_4_ + (float)local_a08);
          lVar56 = *plVar46;
        }
      }
      _local_a38 = ZEXT416((uint)fVar85);
      ppVar4 = (pthread_mutex_t *)(lVar56 + 0x80);
      pthread_mutex_lock(ppVar4);
      pthread_mutex_lock(ppVar4);
      plVar51 = *(long **)(lVar56 + 0x10);
      if (plVar51 == (long *)0x0) {
        plVar51 = *(long **)(lVar56 + 0x28);
        if (plVar51 == (long *)0x0) {
          pTVar38 = (TypefaceCache *)TypefaceCache::singletonHolder._40_8_;
          if (TypefaceCache::singletonHolder._40_8_ == 0) {
            pthread_mutex_lock((pthread_mutex_t *)TypefaceCache::singletonHolder);
            pTVar38 = (TypefaceCache *)TypefaceCache::singletonHolder._40_8_;
            if (TypefaceCache::singletonHolder._40_8_ == 0) {
              if (SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get()::
                  alreadyInside == '\0') {
                SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get()::
                alreadyInside = 1;
                    /* try { // try from 003c64c9 to 003c64d2 has its CatchHandler @ 003c7647 */
                pTVar38 = operator_new(0x120);
                    /* try { // try from 003c64d3 to 003c64df has its CatchHandler @ 003c7649 */
                TypefaceCache::TypefaceCache(pTVar38);
                LOCK();
                UNLOCK();
                SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get()::
                alreadyInside = '\0';
                TypefaceCache::singletonHolder._40_8_ = pTVar38;
              }
              else {
                pTVar38 = (TypefaceCache *)0x0;
              }
            }
            pTVar47 = pTVar38;
            pthread_mutex_unlock((pthread_mutex_t *)TypefaceCache::singletonHolder);
          }
                    /* try { // try from 003c650c to 003c651b has its CatchHandler @ 003c7833 */
          TypefaceCache::findTypefaceFor
                    ((long *)&local_998,(long)pTVar38,plVar46,pTVar47,(uint *)ppppppuVar74,
                     (ulong)pTVar76);
        }
        else {
          LOCK();
          *(int *)(plVar51 + 1) = (int)plVar51[1] + 1;
          UNLOCK();
          local_998 = *(long **)(lVar56 + 0x28);
          if (local_998 != (long *)0x0) {
            LOCK();
            *(int *)(local_998 + 1) = (int)local_998[1] + 1;
            UNLOCK();
          }
        }
        plVar8 = *(long **)(lVar56 + 0x10);
        *(long **)(lVar56 + 0x10) = local_998;
        local_998 = plVar8;
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar2 = plVar8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        if (plVar51 != (long *)0x0) {
          LOCK();
          plVar8 = plVar51 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)(*plVar51 + 8))(plVar51);
          }
        }
        plVar51 = *(long **)(lVar56 + 0x10);
        if (plVar51 != (long *)0x0) goto LAB_003c6565;
        pthread_mutex_unlock(ppVar4);
        local_a08 = 0;
      }
      else {
LAB_003c6565:
        LOCK();
        *(int *)(plVar51 + 1) = (int)plVar51[1] + 1;
        UNLOCK();
        pthread_mutex_unlock(ppVar4);
                    /* try { // try from 003c6576 to 003c657b has its CatchHandler @ 003c78c7 */
        lVar35 = (**(code **)(*plVar51 + 0x18))(plVar51);
        uVar55 = *(uint *)(*plVar46 + 0x60);
        pTVar47 = (TypefaceCache *)(ulong)uVar55;
        if (uVar55 == 1) {
          puVar67 = (undefined8 *)(lVar35 + 0x10);
LAB_003c65a4:
          uVar86 = *puVar67;
        }
        else {
          uVar86 = 0;
          if (uVar55 == 0) {
            puVar67 = (undefined8 *)(lVar35 + 8);
            goto LAB_003c65a4;
          }
        }
        fVar89 = (float)*(undefined8 *)(lVar56 + 0x74);
        fVar87 = (float)((ulong)*(undefined8 *)(lVar56 + 0x74) >> 0x20);
        uVar55 = -(uint)(fVar89 < 0.0);
        uVar84 = -(uint)(fVar87 < 0.0);
        local_a08 = CONCAT44(~uVar84 & (uint)fVar87,~uVar55 & (uint)fVar89) |
                    CONCAT44((uint)((ulong)uVar86 >> 0x20) & uVar84,(uint)uVar86 & uVar55);
        LOCK();
        plVar8 = plVar51 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)(*plVar51 + 8))(plVar51);
        }
      }
      pthread_mutex_unlock(ppVar4);
      lVar56 = *plVar46;
      fVar89 = *(float *)(lVar56 + 100);
      if (fVar89 <= DAT_005d9058) {
        local_930 = CONCAT44(local_930._4_4_,*(undefined4 *)(lVar56 + 0x68));
        ppVar4 = (pthread_mutex_t *)(lVar56 + 0x80);
        pthread_mutex_lock(ppVar4);
        pthread_mutex_lock(ppVar4);
        plVar51 = *(long **)(lVar56 + 0x10);
        if (plVar51 == (long *)0x0) {
          plVar51 = *(long **)(lVar56 + 0x28);
          if (plVar51 == (long *)0x0) {
                    /* try { // try from 003c6672 to 003c6689 has its CatchHandler @ 003c7826 */
            lVar35 = SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get();
            TypefaceCache::findTypefaceFor
                      ((long *)&local_998,lVar35,plVar46,pTVar47,(uint *)ppppppuVar74,(ulong)pTVar76
                      );
          }
          else {
            LOCK();
            *(int *)(plVar51 + 1) = (int)plVar51[1] + 1;
            UNLOCK();
            local_998 = *(long **)(lVar56 + 0x28);
            if (local_998 != (long *)0x0) {
              LOCK();
              *(int *)(local_998 + 1) = (int)local_998[1] + 1;
              UNLOCK();
            }
          }
          plVar8 = *(long **)(lVar56 + 0x10);
          *(long **)(lVar56 + 0x10) = local_998;
          local_998 = plVar8;
          if (plVar8 != (long *)0x0) {
            LOCK();
            plVar2 = plVar8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
          if (plVar51 != (long *)0x0) {
            LOCK();
            plVar8 = plVar51 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)(*plVar51 + 8))(plVar51);
            }
          }
          plVar51 = *(long **)(lVar56 + 0x10);
          if (plVar51 != (long *)0x0) goto LAB_003c66d7;
          pthread_mutex_unlock(ppVar4);
          local_5b8 = ZEXT816(0);
        }
        else {
LAB_003c66d7:
          LOCK();
          *(int *)(plVar51 + 1) = (int)plVar51[1] + 1;
          UNLOCK();
          pthread_mutex_unlock(ppVar4);
                    /* try { // try from 003c66e8 to 003c66ed has its CatchHandler @ 003c7873 */
          lVar35 = (**(code **)(*plVar51 + 0x18))(plVar51);
          if (*(int *)(*plVar46 + 0x60) == 1) {
            puVar67 = (undefined8 *)(lVar35 + 0x10);
LAB_003c670a:
            uVar86 = *puVar67;
          }
          else {
            uVar86 = 0;
            if (*(int *)(*plVar46 + 0x60) == 0) {
              puVar67 = (undefined8 *)(lVar35 + 8);
              goto LAB_003c670a;
            }
          }
          fVar89 = (float)*(undefined8 *)(lVar56 + 0x74);
          fVar87 = (float)((ulong)*(undefined8 *)(lVar56 + 0x74) >> 0x20);
          uVar55 = -(uint)(fVar89 < 0.0);
          uVar84 = -(uint)(fVar87 < 0.0);
          local_5b8._8_8_ = 0;
          local_5b8._0_8_ =
               CONCAT44(~uVar84 & (uint)fVar87,~uVar55 & (uint)fVar89) |
               CONCAT44((uint)((ulong)uVar86 >> 0x20) & uVar84,(uint)uVar86 & uVar55);
          LOCK();
          plVar46 = plVar51 + 1;
          *(int *)plVar46 = (int)*plVar46 + -1;
          UNLOCK();
          if ((int)*plVar46 == 0) {
            (**(code **)(*plVar51 + 8))(plVar51);
          }
        }
        pthread_mutex_unlock(ppVar4);
        fVar89 = (float)local_930 * ((float)local_5b8._4_4_ + (float)local_5b8._0_4_);
      }
      local_a50._0_4_ =
           (DAT_005d9038 / (local_9a8._4_4_ + (float)local_9a8)) * (float)local_9a8 *
           local_a50._0_4_;
      if (local_a50._0_4_ <= local_9c8) {
        local_a50._0_4_ = local_9c8;
      }
      fVar85 = fVar85 + (DAT_005d9054 / (local_a08._4_4_ + (float)local_a08)) * (float)local_a08 *
                        fVar89;
      if (fVar85 <= fStack_9c4) {
        fVar85 = fStack_9c4;
      }
      pTVar52 = pTVar52 + 0x10;
      local_9c8 = local_a50._0_4_;
      fStack_9c4 = fVar85;
    } while (local_928 != pTVar52);
    plVar46 = plStack_760;
    plVar51 = local_758;
    if (plStack_760 != local_758) {
LAB_003c6799:
      do {
        plVar8 = (long *)*plVar46;
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar2 = plVar8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        plVar46 = plVar46 + 1;
      } while (plVar46 != plVar51);
    }
  }
  if (plStack_760 != (long *)0x0) {
    operator_delete(plStack_760);
  }
  if (local_778 != (undefined **)0x0) {
    operator_delete(local_778);
  }
  detail::SimpleShapedText::~SimpleShapedText((SimpleShapedText *)&local_8c8);
  uVar26 = *(ulong *)(*(long *)(local_800 + 0xa0) + (long)local_8f0 * 0x10);
  uVar48 = *(ulong *)(*(long *)(local_800 + 0xa0) + 8 + (long)local_8f0 * 0x10);
  if (uVar26 == uVar48) {
    uVar48 = 0;
    uVar68 = 0;
  }
  else {
    lVar56 = *(long *)(local_800 + 0x88);
    lVar35 = *(long *)(local_800 + 0x118);
    lVar64 = uVar26 * 0x20;
    uVar25 = *(ulong *)(lVar56 + 0x10 + lVar64);
    uVar68 = *(long *)(local_800 + 0x120) - lVar35;
    lVar45 = lVar35;
    if (0 < (long)uVar68) {
      uVar39 = uVar68 >> 4;
      do {
        uVar72 = uVar39 >> 1;
        lVar53 = uVar72 * 0x10;
        if (*(long *)(lVar45 + 8 + lVar53) <= (long)uVar25) {
          uVar72 = ~uVar72 + uVar39;
          lVar45 = lVar45 + lVar53 + 0x10;
        }
        uVar39 = uVar72;
      } while (0 < (long)uVar72);
    }
    lVar54 = lVar45 - lVar35 >> 4;
    lVar45 = *(long *)(local_800 + 0x130);
    lVar53 = uVar26 - *(long *)(lVar45 + lVar54 * 0x18);
    uVar39 = uVar25;
    if (-1 < lVar53) {
      lVar53 = lVar53 + 1;
      puVar69 = (ulong *)(lVar56 + lVar64 + 0x10);
      do {
        uVar39 = *puVar69;
        if (*puVar69 != uVar25) goto LAB_003c68e8;
        lVar53 = lVar53 + -1;
        puVar69 = puVar69 + -4;
      } while (0 < lVar53);
      uVar39 = uVar25;
    }
LAB_003c68e8:
    lVar53 = *(long *)(lVar45 + 8 + lVar54 * 0x18);
    uVar72 = uVar25;
    if ((long)uVar26 < lVar53) {
      lVar53 = ~uVar26 + lVar53;
      puVar69 = (ulong *)(lVar64 + lVar56 + 0x10);
      do {
        uVar72 = *puVar69;
        bVar82 = lVar53 != 0;
        lVar53 = lVar53 + -1;
        if (uVar72 != uVar25) break;
        puVar69 = puVar69 + 4;
      } while (bVar82);
    }
    if ((long)uVar39 < (long)uVar72) {
      uVar39 = uVar72;
    }
    lVar64 = uVar39 - uVar25;
    if (lVar64 < 1) {
      lVar64 = 1;
    }
    uVar26 = *(ulong *)(lVar56 + 0x10 + (uVar48 - 1) * 0x20);
    lVar53 = lVar35;
    if (0 < (long)uVar68) {
      uVar68 = uVar68 >> 4;
      do {
        uVar39 = uVar68 >> 1;
        lVar54 = uVar39 * 0x10;
        if (*(long *)(lVar53 + 8 + lVar54) <= (long)uVar26) {
          uVar39 = ~uVar39 + uVar68;
          lVar53 = lVar53 + lVar54 + 0x10;
        }
        uVar68 = uVar39;
      } while (0 < (long)uVar39);
    }
    lVar53 = lVar53 - lVar35 >> 4;
    lVar35 = *(long *)(lVar45 + lVar53 * 0x18);
    lVar45 = *(long *)(lVar45 + 8 + lVar53 * 0x18);
    uVar68 = uVar26;
    if (-1 < (long)((uVar48 - 1) - lVar35)) {
      lVar35 = uVar48 - lVar35;
      puVar69 = (ulong *)(uVar48 * 0x20 + lVar56 + -0x10);
      do {
        uVar68 = *puVar69;
        if (*puVar69 != uVar26) goto LAB_003c69d8;
        lVar35 = lVar35 + -1;
        puVar69 = puVar69 + -4;
      } while (0 < lVar35);
      uVar68 = uVar26;
    }
LAB_003c69d8:
    lVar35 = lVar45 - uVar48;
    uVar39 = uVar26;
    if ((long)uVar48 <= lVar45) {
      puVar69 = (ulong *)(lVar56 + uVar48 * 0x20 + -0x10);
      do {
        uVar39 = *puVar69;
        bVar82 = lVar35 != 0;
        lVar35 = lVar35 + -1;
        if (uVar39 != uVar26) break;
        puVar69 = puVar69 + 4;
      } while (bVar82);
    }
    if ((long)uVar68 < (long)uVar39) {
      uVar68 = uVar39;
    }
    lVar56 = uVar68 - uVar26;
    if (lVar56 < 1) {
      lVar56 = 1;
    }
    uVar48 = uVar25;
    if ((long)uVar26 < (long)uVar25) {
      uVar48 = uVar26;
    }
    uVar68 = lVar56 + uVar26;
    if ((long)(lVar56 + uVar26) <= (long)(lVar64 + uVar25)) {
      uVar68 = lVar64 + uVar25;
    }
    if ((long)uVar68 <= (long)uVar48) {
      uVar68 = uVar48;
    }
  }
                    /* try { // try from 003c6a35 to 003c6d19 has its CatchHandler @ 003c7853 */
  local_a38 = (undefined1  [8])operator_new(0x30);
  uVar26 = uVar48;
  if ((int)uVar48 < (int)uVar68) {
    uVar26 = uVar68;
  }
  uVar86 = *local_a40;
  *(undefined1 (*) [16])local_a38 = ZEXT816(0);
  *(ulong *)*(undefined1 (*) [16])((long)local_a38 + 0x10) = uVar48 & 0xffffffff | uVar26 << 0x20;
  *(undefined8 *)(*(undefined1 (*) [16])((long)local_a38 + 0x10) + 8) = uVar86;
  *(float *)*(undefined1 (*) [16])((long)local_a38 + 0x20) = local_9c8;
  *(float *)(*(undefined1 (*) [16])((long)local_a38 + 0x20) + 4) = fStack_9c4;
  *(undefined4 *)(*(undefined1 (*) [16])((long)local_a38 + 0x20) + 8) = 0;
LAB_003c6a97:
  if ((long)pppppppuVar32 < (long)local_150) {
    lVar56 = *(long *)(local_800 + 0x88);
    lVar35 = *(long *)(local_800 + 0x118);
    lVar64 = (long)pppppppuVar32 * 0x20;
    uVar25 = *(ulong *)(lVar56 + 0x10 + lVar64);
    uVar26 = *(long *)(local_800 + 0x120) - lVar35;
    lVar45 = lVar35;
    if (0 < (long)uVar26) {
      uVar48 = uVar26 >> 4;
      do {
        uVar68 = uVar48 >> 1;
        lVar53 = uVar68 * 0x10;
        if (*(long *)(lVar45 + 8 + lVar53) <= (long)uVar25) {
          uVar68 = ~uVar68 + uVar48;
          lVar45 = lVar45 + lVar53 + 0x10;
        }
        uVar48 = uVar68;
      } while (0 < (long)uVar68);
    }
    lVar53 = lVar45 - lVar35 >> 4;
    lVar45 = *(long *)(local_800 + 0x130);
    lVar54 = (long)pppppppuVar32 - *(long *)(lVar45 + lVar53 * 0x18);
    uVar48 = uVar25;
    if (-1 < lVar54) {
      lVar54 = lVar54 + 1;
      puVar69 = (ulong *)(lVar56 + lVar64 + 0x10);
      do {
        uVar48 = *puVar69;
        if (*puVar69 != uVar25) goto LAB_003c6b88;
        lVar54 = lVar54 + -1;
        puVar69 = puVar69 + -4;
      } while (0 < lVar54);
      uVar48 = uVar25;
    }
LAB_003c6b88:
    lVar53 = *(long *)(lVar45 + 8 + lVar53 * 0x18);
    uVar68 = uVar25;
    if ((long)pppppppuVar32 < lVar53) {
      lVar53 = ~(ulong)pppppppuVar32 + lVar53;
      puVar69 = (ulong *)(lVar56 + lVar64 + 0x10);
      do {
        uVar68 = *puVar69;
        bVar82 = lVar53 != 0;
        lVar53 = lVar53 + -1;
        if (uVar68 != uVar25) break;
        puVar69 = puVar69 + 4;
      } while (bVar82);
    }
    if ((long)uVar48 < (long)uVar68) {
      uVar48 = uVar68;
    }
    lVar64 = uVar48 - uVar25;
    if (lVar64 < 1) {
      lVar64 = 1;
    }
    uVar68 = *(ulong *)(lVar56 + 0x10 + ((long)pppppppuVar34 + -1) * 0x20);
    lVar53 = lVar35;
    if (0 < (long)uVar26) {
      uVar26 = uVar26 >> 4;
      do {
        uVar48 = uVar26 >> 1;
        lVar54 = uVar48 * 0x10;
        if (*(long *)(lVar53 + 8 + lVar54) <= (long)uVar68) {
          uVar48 = ~uVar48 + uVar26;
          lVar53 = lVar53 + lVar54 + 0x10;
        }
        uVar26 = uVar48;
      } while (0 < (long)uVar48);
    }
    lVar53 = lVar53 - lVar35 >> 4;
    lVar35 = *(long *)(lVar45 + lVar53 * 0x18);
    lVar45 = *(long *)(lVar45 + 8 + lVar53 * 0x18);
    uVar26 = uVar68;
    if (-1 < ((long)pppppppuVar34 + -1) - lVar35) {
      lVar35 = (long)pppppppuVar34 - lVar35;
      puVar69 = (ulong *)(lVar56 + (long)pppppppuVar34 * 0x20 + -0x10);
      do {
        uVar26 = *puVar69;
        if (*puVar69 != uVar68) goto LAB_003c6c98;
        lVar35 = lVar35 + -1;
        puVar69 = puVar69 + -4;
      } while (0 < lVar35);
      uVar26 = uVar68;
    }
LAB_003c6c98:
    lVar35 = lVar45 - (long)pppppppuVar34;
    uVar48 = uVar68;
    if ((long)pppppppuVar34 <= lVar45) {
      puVar69 = (ulong *)(lVar56 + (long)pppppppuVar34 * 0x20 + -0x10);
      do {
        uVar48 = *puVar69;
        bVar82 = lVar35 != 0;
        lVar35 = lVar35 + -1;
        if (uVar48 != uVar68) break;
        puVar69 = puVar69 + 4;
      } while (bVar82);
    }
    if ((long)uVar26 < (long)uVar48) {
      uVar26 = uVar48;
    }
    lVar56 = uVar26 - uVar68;
    if (lVar56 < 1) {
      lVar56 = 1;
    }
    uVar26 = uVar25;
    if ((long)uVar68 < (long)uVar25) {
      uVar26 = uVar68;
    }
    uVar48 = lVar56 + uVar68;
    if ((long)(lVar56 + uVar68) <= (long)(lVar64 + uVar25)) {
      uVar48 = lVar64 + uVar25;
    }
    if ((long)uVar48 <= (long)uVar26) {
      uVar48 = uVar26;
    }
  }
  else {
    uVar48 = 0;
    uVar26 = 0;
  }
  this_00 = operator_new(0x28);
  uVar25 = uVar26;
  if ((int)uVar26 < (int)uVar48) {
    uVar25 = uVar48;
  }
                    /* try { // try from 003c6d24 to 003c6d3d has its CatchHandler @ 003c77ef */
  FontOptions::FontOptions(DAT_005d9064,(FontOptions *)&local_8c8,0);
                    /* try { // try from 003c6d3e to 003c6d4a has its CatchHandler @ 003c77f4 */
  Font::Font(this_00,(long *)&local_8c8);
  p_Var70 = local_8b0;
  p_Var33 = p_Stack_8a8;
  if (p_Stack_898 != (_List_node_base *)0x0) {
    operator_delete(p_Stack_898);
    p_Var70 = local_8b0;
    p_Var33 = p_Stack_8a8;
  }
  for (; p_Var37 = p_Stack_8a8, p_Var70 != p_Stack_8a8; p_Var70 = p_Var70 + 8) {
    piVar71 = (int *)(*(long *)p_Var70 + -0x10);
    p_Stack_8a8 = p_Var33;
    if (piVar71 != &emptyString) {
      LOCK();
      iVar24 = *piVar71;
      *piVar71 = *piVar71 + -1;
      UNLOCK();
      if (iVar24 == 0) {
        operator_delete__(piVar71);
      }
    }
    p_Var33 = p_Stack_8a8;
    p_Stack_8a8 = p_Var37;
  }
  p_Stack_8a8 = p_Var33;
  if (local_8b0 != (_List_node_base *)0x0) {
    operator_delete(local_8b0);
  }
  if (p_Stack_8b8 != (_List_node_base *)0x0) {
    LOCK();
    p_Var70 = p_Stack_8b8 + 8;
    *(int *)p_Var70 = *(int *)p_Var70 + -1;
    UNLOCK();
    if (*(int *)p_Var70 == 0) {
      (**(code **)(*(_List_node_base **)p_Stack_8b8 + 8))();
    }
  }
  p_Var70 = local_8c0 + -0x10;
  if (p_Var70 != (_List_node_base *)&emptyString) {
    LOCK();
    iVar24 = *(int *)p_Var70;
    *(int *)p_Var70 = *(int *)p_Var70 + -1;
    UNLOCK();
    if (iVar24 == 0) {
      operator_delete__(p_Var70);
    }
  }
  p_Var70 = local_8c8 + -0x10;
  if (p_Var70 != (_List_node_base *)&emptyString) {
    LOCK();
    iVar24 = *(int *)p_Var70;
    *(int *)p_Var70 = *(int *)p_Var70 + -1;
    UNLOCK();
    if (iVar24 == 0) {
      operator_delete__(p_Var70);
    }
  }
  lVar56 = local_8f8;
  *(undefined4 *)(this_00 + 8) = 0xff000000;
  *(undefined4 *)(this_00 + 0x10) = 0;
  *(undefined4 *)(this_00 + 0x14) = 0;
  *(undefined4 *)(this_00 + 0x18) = 0;
  *(undefined4 *)(this_00 + 0x1c) = 0;
  *(ulong *)(this_00 + 0x20) = uVar25 << 0x20 | uVar26 & 0xffffffff;
  if (plVar58 != (long *)0x0) {
    LOCK();
    *(int *)(plVar58 + 1) = (int)plVar58[1] + 1;
    UNLOCK();
  }
  plVar46 = *(long **)this_00;
  *(long **)this_00 = plVar58;
  if (plVar46 != (long *)0x0) {
    LOCK();
    plVar51 = plVar46 + 1;
    *(int *)plVar51 = (int)*plVar51 + -1;
    UNLOCK();
    if ((int)*plVar51 == 0) {
      (**(code **)(*plVar46 + 8))();
    }
  }
  *(undefined4 *)(this_00 + 8) = local_8cc;
  if (!bVar83) {
    pFVar40 = this_00 + 0x10;
    do {
      if (*(char *)(lVar56 + -3) == '\0') break;
      lVar56 = lVar56 + -0x20;
      uVar42 = uVar42 - 1;
    } while (lVar56 != local_9f8);
    if (uVar42 != 0) {
      pcVar65 = (char *)(local_9f8 + 0x1f);
      uVar26 = 0;
      do {
        if (*pcVar65 < '\x01') {
          uVar6 = *(undefined4 *)(pcVar65 + -7);
          lVar56 = *(long *)((long)local_a38 + 0x18);
          pfVar5 = (float *)(local_a40 + uVar26);
          local_9a8._0_4_ = *pfVar5;
          local_9a8._4_4_ = pfVar5[1];
          uVar86 = *(undefined8 *)pfVar5;
          uVar79 = *(undefined4 *)(pcVar65 + -0x1f);
          iVar24 = *(int *)(this_00 + 0x1c);
          if ((int)*(uint *)(this_00 + 0x18) <= iVar24) {
            uVar55 = iVar24 + ((iVar24 - (iVar24 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
            if (*(uint *)(this_00 + 0x18) != uVar55) {
              if ((int)uVar55 < 1) {
                free(*(void **)pFVar40);
                *(undefined8 *)pFVar40 = 0;
              }
              else {
                pvVar41 = realloc(*(void **)pFVar40,(ulong)uVar55 << 4);
                *(void **)pFVar40 = pvVar41;
              }
              local_9a8._0_4_ = (float)uVar86;
              local_9a8._4_4_ = (float)((ulong)uVar86 >> 0x20);
            }
            *(uint *)(this_00 + 0x18) = uVar55;
            iVar24 = *(int *)(this_00 + 0x1c);
          }
          *(int *)(this_00 + 0x1c) = iVar24 + 1;
          lVar35 = *(long *)(this_00 + 0x10);
          lVar45 = (long)iVar24 * 0x10;
          *(undefined4 *)(lVar35 + lVar45) = uVar6;
          pfVar5 = (float *)(lVar35 + 4 + lVar45);
          *pfVar5 = (float)local_9a8 - (float)lVar56;
          pfVar5[1] = local_9a8._4_4_ - (float)((ulong)lVar56 >> 0x20);
          *(undefined4 *)(lVar35 + 0xc + lVar45) = uVar79;
        }
        uVar26 = uVar26 + 1;
        pcVar65 = pcVar65 + 0x20;
      } while (uVar42 != uVar26);
    }
  }
  iVar24 = *(int *)((long)local_a38 + 0xc);
  if ((int)*(uint *)((long)local_a38 + 8) <= iVar24) {
    uVar55 = iVar24 + ((iVar24 - (iVar24 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)((long)local_a38 + 8) != uVar55) {
      if ((int)uVar55 < 1) {
        free(*(void **)local_a38);
        *(long *)local_a38 = 0;
      }
      else {
        pvVar41 = realloc(*(void **)local_a38,(ulong)uVar55 << 3);
        *(void **)local_a38 = pvVar41;
      }
    }
    *(uint *)((long)local_a38 + 8) = uVar55;
    iVar24 = *(int *)((long)local_a38 + 0xc);
  }
  *(int *)((long)local_a38 + 0xc) = iVar24 + 1;
  *(Font **)(*(long *)local_a38 + (long)iVar24 * 8) = this_00;
  if (plVar58 != (long *)0x0) {
    LOCK();
    plVar46 = plVar58 + 1;
    *(int *)plVar46 = (int)*plVar46 + -1;
    UNLOCK();
    if ((int)*plVar46 == 0) {
      (**(code **)(*plVar58 + 8))(plVar58);
    }
    LOCK();
    plVar46 = plVar58 + 1;
    *(int *)plVar46 = (int)*plVar46 + -1;
    UNLOCK();
    if ((int)*plVar46 == 0) {
      (**(code **)(*plVar58 + 8))(plVar58);
    }
  }
  if (local_a40 != (undefined8 *)0x0) {
    operator_delete(local_a40);
  }
  do {
    pppppppuStack_5c0 = (undefined8 *******)0x7fffffffffffffff;
    if (local_5e0 != (_List_node_base *)&local_5e0) {
      plVar58 = *(long **)(local_5e0 + 0x10);
      p_Var70 = local_5e0;
      while( true ) {
        (**(code **)(*plVar58 + 0x20))(plVar58);
        cVar23 = (**(code **)(*plVar58 + 0x18))(plVar58);
        if (cVar23 == '\0') break;
        pppppppuVar61 = (undefined8 *******)(**(code **)(*plVar58 + 0x10))(plVar58);
        if ((long)local_5c8 < (long)pppppppuVar61) {
          local_5c8 = pppppppuVar61;
        }
        do {
          (**(code **)(*plVar58 + 0x10))(plVar58);
          if ((long)extraout_RDX_09 < (long)pppppppuStack_5c0) {
            pppppppuStack_5c0 = extraout_RDX_09;
          }
          p_Var70 = *(_List_node_base **)p_Var70;
          if (p_Var70 == (_List_node_base *)&local_5e0) goto LAB_003c71e0;
          plVar58 = *(long **)(p_Var70 + 0x10);
        } while ((p_Var70 != local_5e0) &&
                ((**(code **)(*plVar58 + 0x10))(plVar58), (long)local_5c8 < extraout_RDX_08
                    /* try { // try from 003c7144 to 003c719a has its CatchHandler @ 003c7a8f */));
      }
      break;
    }
LAB_003c71e0:
                    /* try { // try from 003c71e0 to 003c71e7 has its CatchHandler @ 003c786a */
    std::__cxx11::list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>
    ::
    sort<juce::detail::IntersectingRangedValues<juce::Font_const,juce::detail::LineMetrics_const,juce::detail::JustifiedText::DrawType_const,float_const,juce::Colour>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
              ((_List_node_base *)&local_5e0);
  } while ((long)pppppppuStack_5c0 <= (long)local_5c8);
  bVar82 = false;
  local_a18 = local_8f0;
  local_a50 = local_8e8;
  pppppppuVar61 = pppppppuVar34;
  goto LAB_003c4ca5;
joined_r0x003c7218:
  while (p_Var70 != (_List_node_base *)&local_5e0) {
    p_Var33 = *(_List_node_base **)p_Var70;
    operator_delete(p_Var70);
    p_Var70 = p_Var33;
  }
  if (local_a38 != (undefined1  [8])0x0) {
    iVar24 = *(int *)(this + 0xc);
    if ((int)*(uint *)(this + 8) <= iVar24) {
      uVar55 = iVar24 + ((iVar24 - (iVar24 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(this + 8) != uVar55) {
        if ((int)uVar55 < 1) {
          free(*(void **)this);
          *(undefined8 *)this = 0;
        }
        else {
          pvVar41 = realloc(*(void **)this,(ulong)uVar55 << 3);
          *(void **)this = pvVar41;
        }
      }
      *(uint *)(this + 8) = uVar55;
      iVar24 = *(int *)(this + 0xc);
    }
    *(int *)(this + 0xc) = iVar24 + 1;
    *(undefined1 (*) [8])(*(long *)this + (long)iVar24 * 8) = local_a38;
  }
  if (local_7f8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(local_7f8 + 8) == 0x100000001) {
      *(undefined8 *)(local_7f8 + 8) = 0;
      (**(code **)(*(long *)local_7f8 + 0x10))(local_7f8);
      (**(code **)(*(long *)local_7f8 + 0x18))(local_7f8);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var3 = local_7f8 + 8;
        iVar24 = *(int *)p_Var3;
        *(int *)p_Var3 = *(int *)p_Var3 + -1;
        UNLOCK();
      }
      else {
        iVar24 = (int)*(long *)(local_7f8 + 8);
        *(int *)(local_7f8 + 8) = iVar24 + -1;
      }
      if (iVar24 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_7f8);
      }
    }
  }
  pppppppuVar61 = pppppppuStack_780 + -2;
  if (pppppppuVar61 == (undefined8 *******)&emptyString) {
LAB_003c739a:
    ppppppplVar60 = local_7b0;
    ppppppplVar66 = ppppppplStack_7a8;
    if (local_7b0 == ppppppplStack_7a8) goto joined_r0x003c74cb;
  }
  else {
    LOCK();
    iVar24 = *(int *)pppppppuVar61;
    *(int *)pppppppuVar61 = *(int *)pppppppuVar61 + -1;
    UNLOCK();
    if (iVar24 != 0) goto LAB_003c739a;
    operator_delete__(pppppppuVar61);
    ppppppplVar60 = local_7b0;
    ppppppplVar66 = ppppppplStack_7a8;
    if (local_7b0 == ppppppplStack_7a8) goto joined_r0x003c74cb;
  }
  do {
    pppppplVar59 = *ppppppplVar60;
    if (pppppplVar59 != (long ******)0x0) {
      LOCK();
      pppppplVar1 = pppppplVar59 + 1;
      *(int *)pppppplVar1 = *(int *)pppppplVar1 + -1;
      UNLOCK();
      if (*(int *)pppppplVar1 == 0) {
        (*(code *)(*pppppplVar59)[1])();
      }
    }
    ppppppplVar60 = ppppppplVar60 + 1;
  } while (ppppppplVar60 != ppppppplVar66);
joined_r0x003c74cb:
  if (local_7b0 != (long *******)0x0) {
    operator_delete(local_7b0);
  }
  if (local_7c8 != (undefined8 ******)0x0) {
    operator_delete(local_7c8);
  }
  if (puStack_950 != (undefined4 *)0x0) {
    operator_delete(puStack_950);
  }
  plVar58 = plStack_170;
  plVar46 = local_168;
  if (local_968 != (void *)0x0) {
    operator_delete(local_968);
    plVar58 = plStack_170;
    plVar46 = local_168;
  }
  for (; plVar51 = local_168, plVar58 != local_168; plVar58 = plVar58 + 1) {
    plVar8 = (long *)*plVar58;
    local_168 = plVar46;
    if (plVar8 != (long *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    plVar46 = local_168;
    local_168 = plVar51;
  }
  local_168 = plVar46;
  if (plStack_170 != (long *)0x0) {
    operator_delete(plStack_170);
  }
  if (local_188 != (void *)0x0) {
    operator_delete(local_188);
  }
  if (local_918 != (void *)0x0) {
    operator_delete(local_918);
  }
  return;
}


