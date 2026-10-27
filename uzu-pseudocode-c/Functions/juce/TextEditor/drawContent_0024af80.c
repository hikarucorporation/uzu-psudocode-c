// Function : drawContent
// Namespace: juce:TextEditor
// Entry    : 0024af80
// Prototype: undefined drawContent(TextEditor * this, Graphics * param_1)
// Body     : 0024af80 - 0025bdec


/* WARNING: Removing unreachable block (ram,0x0024bada) */
/* WARNING: Removing unreachable block (ram,0x002524a7) */
/* WARNING: Type propagation algorithm not settling */
/* juce::TextEditor::drawContent(juce::Graphics&) */

void __thiscall
juce::TextEditor::drawContent
          (TextEditor *this,Graphics *param_1,undefined8 param_3,long param_4,uint *param_5,
          ulong param_6)

{
  Component *this_00;
  _List_node_base *p_Var1;
  _List_node_base _Var2;
  TextEditor TVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  TextEditor *pTVar19;
  long *plVar20;
  SharedFontInternal *pSVar21;
  void *pvVar22;
  char cVar23;
  _List_node_base _Var24;
  int iVar25;
  _List_node_base *p_Var26;
  _List_node_base *p_Var27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  long *plVar30;
  long *plVar31;
  ParagraphStorage *pPVar32;
  long lVar33;
  ulong *puVar34;
  undefined4 *puVar35;
  int extraout_var;
  ParagraphStorage *pPVar36;
  long lVar37;
  ParagraphStorage *pPVar38;
  _List_node_base *p_Var39;
  _List_node_base *p_Var40;
  undefined8 *puVar41;
  undefined8 *puVar42;
  float *pfVar43;
  undefined8 uVar44;
  float *pfVar45;
  float *pfVar46;
  int iVar47;
  undefined1 *puVar48;
  _List_node_base *p_Var49;
  ulong uVar50;
  Component *pCVar51;
  ulong *puVar52;
  int iVar53;
  undefined8 extraout_RDX;
  _List_node_base *extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  _List_node_base *extraout_RDX_04;
  long extraout_RDX_05;
  long extraout_RDX_06;
  long extraout_RDX_07;
  _List_node_base *extraout_RDX_08;
  ulong uVar54;
  _List_node_base *extraout_RDX_09;
  long extraout_RDX_10;
  long extraout_RDX_11;
  long extraout_RDX_12;
  _List_node_base *extraout_RDX_13;
  long extraout_RDX_14;
  long extraout_RDX_15;
  ulong *puVar55;
  ulong uVar56;
  long extraout_RDX_16;
  _List_node_base *extraout_RDX_17;
  _List_node_base *extraout_RDX_18;
  long extraout_RDX_19;
  long extraout_RDX_20;
  long extraout_RDX_21;
  _List_node_base *extraout_RDX_22;
  long extraout_RDX_23;
  long extraout_RDX_24;
  long extraout_RDX_25;
  _List_node_base *extraout_RDX_26;
  int extraout_var_00;
  _List_node_base *extraout_RDX_27;
  long extraout_RDX_28;
  long extraout_RDX_29;
  long extraout_RDX_30;
  _List_node_base *extraout_RDX_31;
  long extraout_RDX_32;
  long extraout_RDX_33;
  ulong uVar57;
  long extraout_RDX_34;
  _List_node_base *extraout_RDX_35;
  undefined8 extraout_RDX_36;
  undefined8 extraout_RDX_37;
  undefined8 extraout_RDX_38;
  undefined8 extraout_RDX_39;
  undefined8 extraout_RDX_40;
  long extraout_RDX_41;
  _List_node_base *extraout_RDX_42;
  ulong extraout_RDX_43;
  long extraout_RDX_44;
  long extraout_RDX_45;
  long extraout_RDX_46;
  ulong extraout_RDX_47;
  long extraout_RDX_48;
  long extraout_RDX_49;
  long extraout_RDX_50;
  _List_node_base *extraout_RDX_51;
  undefined8 extraout_RDX_52;
  undefined8 extraout_RDX_53;
  undefined8 extraout_RDX_54;
  long extraout_RDX_55;
  ulong extraout_RDX_56;
  byte bVar58;
  int iVar59;
  ulong *puVar60;
  ulong *puVar61;
  undefined **ppuVar62;
  long *******ppppppplVar63;
  int iVar64;
  uint uVar65;
  uint uVar66;
  _List_node_base *p_Var67;
  long *plVar68;
  long lVar69;
  undefined *puVar70;
  ulong *puVar71;
  _List_node_base *p_Var72;
  _List_node_base *p_Var73;
  ulong uVar74;
  undefined **ppuVar75;
  long *******ppppppplVar76;
  Graphics *pGVar77;
  ulong uVar78;
  _List_node_base *p_Var79;
  long lVar80;
  _List_node_base *p_Var81;
  long *******ppppppplVar82;
  ulong uVar83;
  ulong uVar84;
  undefined4 *puVar85;
  undefined **ppuVar86;
  undefined4 *puVar87;
  long lVar88;
  long lVar89;
  long *plVar90;
  uint uVar91;
  undefined *puVar92;
  SharedFontInternal *pSVar93;
  undefined4 *puVar94;
  _List_node_base *p_Var95;
  SharedFontInternal *pSVar96;
  undefined2 uVar97;
  bool bVar98;
  bool bVar99;
  undefined4 uVar100;
  float fVar101;
  float fVar102;
  undefined4 uVar103;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar106;
  float fVar107;
  undefined4 uVar108;
  float fVar109;
  undefined1 auVar110 [16];
  float fVar111;
  float fVar112;
  float fVar113;
  undefined1 local_c08 [4];
  undefined1 auStack_c04 [4];
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  _List_node_base *local_be8;
  _List_node_base *local_be0;
  _List_node_base *local_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  _List_node_base *local_b88;
  _List_node_base *p_Stack_b80;
  _List_node_base *local_b78;
  _List_node_base *p_Stack_b70;
  _List_node_base *local_b68;
  _List_node_base *p_Stack_b60;
  undefined1 local_b58 [24];
  Graphics *local_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  SharedFontInternal *local_b20;
  _List_node_base *local_b18;
  _List_node_base *local_b10;
  _List_node_base *local_b08;
  undefined8 uStack_b00;
  _List_node_base *local_af8;
  _List_node_base *local_af0;
  undefined1 local_ae8 [24];
  _List_node_base *local_ad0;
  SharedFontInternal *local_ac8;
  float local_abc;
  undefined1 local_ab8 [4];
  undefined1 auStack_ab4 [12];
  ulong *local_aa8;
  ulong *puStack_aa0;
  ulong *local_a98;
  _List_node_base *p_Stack_a90;
  _List_node_base *local_a88;
  _List_node_base *p_Stack_a80;
  undefined **local_a78;
  _List_node_base *p_Stack_a70;
  _List_node_base *p_Stack_a68;
  _List_node_base *local_a60;
  _List_node_base *p_Stack_a58;
  _List_node_base *local_a50;
  undefined8 *******pppppppuStack_a48;
  undefined **local_a40;
  _List_node_base *local_a38;
  _List_node_base *p_Stack_a30;
  _List_node_base *local_a28;
  _List_node_base *p_Stack_a20;
  _List_node_base *local_a18;
  _List_node_base *p_Stack_a10;
  _List_node_base *local_a08;
  _List_node_base *local_a00;
  _List_node_base *p_Stack_9f8;
  _List_node_base *local_9f0;
  _List_node_base *p_Stack_9e8;
  _List_node_base *local_9e0;
  undefined8 uStack_9d8;
  undefined **local_9d0;
  long local_9c8;
  long lStack_9c0;
  long local_9b8;
  long lStack_9b0;
  long local_9a8;
  _List_node_base *p_Stack_9a0;
  undefined **local_998;
  long local_990;
  long lStack_988;
  long local_980;
  long lStack_978;
  long local_970;
  _List_node_base *p_Stack_968;
  _List_node_base *local_960;
  _List_node_base *local_958;
  _List_node_base *p_Stack_950;
  _List_node_base *local_948;
  _List_node_base *p_Stack_940;
  _List_node_base *local_938;
  undefined8 uStack_930;
  undefined **local_928;
  long local_920;
  long lStack_918;
  long local_910;
  long lStack_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  _List_node_base *local_8f0;
  _List_node_base *local_8e8;
  undefined8 local_8e0;
  ulong local_8d8;
  ulong uStack_8d0;
  TextEditor *local_8c8;
  ulong local_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  _List_node_base *local_8a0;
  _List_node_base *local_898;
  _List_node_base *local_890;
  _List_node_base *local_888;
  undefined **local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 local_868;
  undefined8 local_860;
  undefined8 local_858;
  undefined8 local_850;
  SharedFontInternal *local_848;
  _List_node_base *local_840;
  undefined1 local_838 [12];
  int iStack_82c;
  undefined1 auStack_828 [8];
  undefined8 uStack_820;
  _List_node_base *p_Stack_818;
  _List_node_base *local_810;
  undefined8 *******pppppppuStack_808;
  undefined8 *******local_800;
  _List_node_base *local_7f8;
  _List_node_base *p_Stack_7f0;
  _List_node_base *local_7e8;
  _List_node_base *p_Stack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  _List_node_base *local_7c8;
  _List_node_base *local_7c0;
  _List_node_base *local_7b8;
  _List_node_base *local_7b0;
  _List_node_base *p_Stack_7a8;
  _List_node_base *local_7a0;
  undefined8 *******local_798;
  undefined8 *******local_790;
  undefined8 *******local_788;
  undefined8 *******local_780;
  undefined8 *******local_778;
  undefined8 *******local_770;
  undefined8 *******local_768;
  undefined8 *******local_760;
  undefined8 *******local_758;
  undefined8 *******local_750;
  undefined8 *******local_748;
  undefined8 *******local_740;
  undefined8 *******local_738;
  undefined8 *******local_730;
  undefined8 *******local_728;
  undefined8 *******local_720;
  undefined8 *******local_718;
  undefined8 *******local_710;
  undefined8 *******local_708;
  undefined8 *******local_700;
  undefined8 *******local_6f8;
  undefined8 *******local_6f0;
  undefined8 *******local_6e8;
  undefined8 *******local_6e0;
  undefined8 *******local_6d8;
  undefined8 *******local_6d0;
  undefined8 *******local_6c8;
  undefined8 *******local_6c0;
  undefined8 *******local_6b8;
  undefined8 *******local_6b0;
  undefined8 *******local_6a8;
  undefined8 *******local_6a0;
  undefined8 *******local_698;
  undefined8 *******local_690;
  undefined8 *******local_688;
  undefined8 *******local_680;
  undefined8 *******local_678;
  undefined8 *******local_670;
  undefined8 *******local_668;
  undefined8 *******local_660;
  undefined8 *******local_658;
  undefined8 *******local_650;
  undefined8 *******local_648;
  undefined8 *******local_640;
  undefined8 *******local_638;
  undefined8 *******local_630;
  undefined8 *******local_628;
  undefined8 *******local_620;
  undefined8 *******local_618;
  undefined8 *******local_610;
  undefined8 *******local_608;
  undefined8 *******local_600;
  undefined8 *******local_5f8;
  undefined8 *******local_5f0;
  undefined8 *******local_5e8;
  undefined8 *******local_5e0;
  undefined8 *******local_5d8;
  undefined8 *******local_5d0;
  undefined8 *******local_5c8;
  undefined8 *******local_5c0;
  undefined8 *******local_5b8;
  undefined8 *******local_5b0;
  undefined8 *******local_5a8;
  undefined8 *******local_5a0;
  undefined8 *******local_598;
  undefined8 *******local_590;
  undefined8 *******local_588;
  undefined8 *******local_580;
  undefined8 *******local_578;
  undefined8 *******local_570;
  undefined8 *******local_568;
  undefined8 *******local_560;
  undefined8 *******local_558;
  undefined8 *******local_550;
  undefined8 *******local_548;
  undefined8 *******local_540;
  undefined8 *******local_538;
  undefined8 *******local_530;
  undefined8 *******local_528;
  undefined8 *******local_520;
  undefined8 *******local_518;
  undefined8 *******local_510;
  undefined8 *******local_508;
  undefined8 *******local_500;
  undefined8 *******local_4f8;
  undefined8 *******local_4f0;
  undefined8 *******local_4e8;
  undefined8 *******local_4e0;
  undefined8 *******local_4d8;
  undefined8 *******local_4d0;
  undefined8 *******local_4c8;
  undefined8 *******local_4c0;
  undefined8 *******local_4b8;
  undefined8 *******local_4b0;
  undefined8 *******local_4a8;
  undefined8 *******local_4a0;
  undefined8 *******local_498;
  undefined8 *******local_490;
  undefined8 *******local_488;
  undefined8 *******local_480;
  undefined8 *******local_478;
  undefined8 *******local_470;
  undefined8 *******local_468;
  undefined8 *******local_460;
  undefined8 *******local_458;
  undefined8 *******local_450;
  undefined8 *******local_448;
  undefined8 *******local_440;
  ulong *local_438;
  ulong *puStack_430;
  ulong *local_428;
  undefined4 *puStack_420;
  undefined4 *local_418;
  undefined4 *puStack_410;
  long local_408;
  ulong local_400;
  ulong *local_3f8;
  ulong *puStack_3f0;
  ulong *local_3e8;
  undefined4 *puStack_3e0;
  undefined4 *local_3d8;
  undefined4 *puStack_3d0;
  _List_node_base *local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  _List_node_base *p_Stack_3b0;
  _List_node_base *local_3a8;
  _List_node_base *p_Stack_3a0;
  long local_390;
  ulong local_388;
  long local_380;
  _List_node_base *local_378;
  _List_node_base *p_Stack_370;
  _List_node_base *local_368;
  _List_node_base *local_360;
  void *local_348;
  void *pvStack_340;
  undefined8 local_338;
  _List_node_base *local_328;
  _List_node_base *p_Stack_320;
  _List_node_base *local_318;
  undefined8 local_310;
  _List_node_base *p_Stack_308;
  _List_node_base *local_300;
  undefined8 *******pppppppuStack_2f8;
  undefined **local_2f0;
  _List_node_base *local_2e8;
  _List_node_base *p_Stack_2e0;
  _List_node_base *local_2d8;
  _List_node_base *p_Stack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  long *******local_2b8;
  long *******local_2b0;
  long local_2a8;
  _List_node_base *local_2a0;
  _List_node_base *p_Stack_298;
  _List_node_base *local_288;
  undefined8 *******pppppppuStack_280;
  undefined8 local_278;
  _List_node_base *p_Stack_270;
  _List_node_base *local_268;
  _List_node_base *p_Stack_260;
  long local_258;
  float local_250;
  float local_24c;
  long local_248;
  long local_240;
  void *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  void *pvStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  long local_200;
  long *local_1f8;
  _List_node_base *local_1f0;
  _List_node_base *local_1e8;
  _List_node_base *p_Stack_1e0;
  _List_node_base *local_1d8;
  _List_node_base *p_Stack_1d0;
  _List_node_base *local_1c8;
  _List_node_base *p_Stack_1c0;
  undefined8 *******pppppppuStack_1b8;
  undefined **local_1b0;
  _List_node_base *local_1a8;
  _List_node_base *p_Stack_1a0;
  _List_node_base *local_198;
  _List_node_base *p_Stack_190;
  _List_node_base *local_188;
  _List_node_base *p_Stack_180;
  undefined **local_178;
  _List_node_base *local_170;
  _List_node_base *p_Stack_168;
  _List_node_base *local_160;
  _List_node_base *p_Stack_158;
  _List_node_base *local_150;
  undefined8 uStack_148;
  undefined **local_140;
  long local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  _List_node_base *p_Stack_110;
  undefined **local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  _List_node_base *p_Stack_d8;
  long *******local_d0;
  _List_node_base *local_c8;
  _List_node_base *p_Stack_c0;
  _List_node_base *local_b8;
  _List_node_base *p_Stack_b0;
  _List_node_base *local_a8;
  undefined8 uStack_a0;
  undefined **local_98;
  long local_90;
  long lStack_88;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long *******local_60;
  long *******local_58;
  long local_50;
  ulong local_48;
  ulong uStack_40;
  
  uVar44 = *(undefined8 *)(this + 0x278);
  local_8c8 = this;
  if (param_1[0x10] != (Graphics)0x0) {
    param_1[0x10] = (Graphics)0x0;
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  local_abc = getYOffset(local_8c8,uVar44,extraout_RDX,param_4,param_5,param_6);
  if (param_1[0x10] != (Graphics)0x0) {
    param_1[0x10] = (Graphics)0x0;
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  param_1[0x10] = (Graphics)0x1;
  local_348 = (void *)0x0;
  pvStack_340 = (void *)0x0;
  local_338 = 0;
  lVar33 = *(long *)(local_8c8 + 0x330);
  local_3f8 = (ulong *)0x0;
  puStack_3f0 = (ulong *)0x0;
  local_3e8 = (ulong *)0x0;
  puStack_3e0 = (undefined4 *)0x0;
  local_3d8 = (undefined4 *)0x0;
  puStack_3d0 = (undefined4 *)0x0;
  local_1e8 = (_List_node_base *)0x0;
  p_Stack_1e0 = (_List_node_base *)0x0;
  local_1d8 = (_List_node_base *)0x0;
  local_328 = (_List_node_base *)0x0;
  p_Stack_320 = (_List_node_base *)0x0;
  local_318 = (_List_node_base *)0x0;
  local_a38 = *(_List_node_base **)(lVar33 + 0x48);
  p_Stack_a30 = *(_List_node_base **)(lVar33 + 0x30);
  p_Stack_a10 = *(_List_node_base **)(lVar33 + 0x38);
  p_Stack_a70 = *(_List_node_base **)(lVar33 + 0x80);
  p_Stack_a68 = *(_List_node_base **)(lVar33 + 0x68);
  pppppppuStack_a48 = *(undefined8 ********)(lVar33 + 0x70);
  local_a78 = &PTR__RangedIterator_00710ae8;
  local_a40 = &PTR__RangedIterator_007115b0;
  local_a08 = (_List_node_base *)&local_a08;
  p_Stack_9f8 = (_List_node_base *)0x0;
  stack0xfffffffffffff7d0 = (_List_node_base *)local_838;
  local_838._0_8_ = local_838;
  auVar105._8_8_ = 0;
  auVar105._0_8_ = uStack_820;
  _auStack_828 = auVar105 << 0x40;
  local_b40 = param_1;
  local_a60 = p_Stack_a68;
  p_Stack_a58 = p_Stack_a70;
  local_a50 = p_Stack_a68;
  local_a28 = p_Stack_a30;
  p_Stack_a20 = local_a38;
  local_a18 = p_Stack_a30;
  local_a00 = local_a08;
                    /* try { // try from 0024b14e to 0024b186 has its CatchHandler @ 0025bf45 */
  p_Var26 = operator_new(0x18);
  *(undefined ****)(p_Var26 + 0x10) = &local_a40;
  std::__detail::_List_node_base::_M_hook(p_Var26);
  auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
  p_Var26 = operator_new(0x18);
  *(undefined ****)(p_Var26 + 0x10) = &local_a78;
  std::__detail::_List_node_base::_M_hook(p_Var26);
  auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
  p_Var26 = local_a08;
  while (p_Var26 != (_List_node_base *)&local_a08) {
    p_Var67 = *(_List_node_base **)p_Var26;
    operator_delete(p_Var26);
    p_Var26 = p_Var67;
  }
  if ((_List_node_base *)local_838._0_8_ == (_List_node_base *)local_838) {
    p_Stack_9f8 = (_List_node_base *)0x0;
    local_a08 = (_List_node_base *)&local_a08;
    local_a00 = (_List_node_base *)&local_a08;
  }
  else {
    local_a08 = (_List_node_base *)local_838._0_8_;
    local_a00 = stack0xfffffffffffff7d0;
    *(_List_node_base **)stack0xfffffffffffff7d0 = (_List_node_base *)&local_a08;
    *(_List_node_base **)(local_838._0_8_ + 8) = (_List_node_base *)&local_a08;
    p_Stack_9f8 = (_List_node_base *)auStack_828;
    p_Var26 = (_List_node_base *)local_838._0_8_;
    if ((_List_node_base *)local_838._0_8_ != (_List_node_base *)&local_a08) {
      do {
                    /* try { // try from 0024b267 to 0024b269 has its CatchHandler @ 0025c049 */
        cVar23 = (**(code **)(**(long **)(p_Var26 + 0x10) + 0x18))();
        if (cVar23 == '\0') {
          if (p_Var26 != (_List_node_base *)&local_a08) goto LAB_0024bcb0;
          break;
        }
        p_Var26 = *(_List_node_base **)p_Var26;
      } while (p_Var26 != (_List_node_base *)&local_a08);
    }
  }
  if (local_a08 == (_List_node_base *)&local_a08) {
    local_9f0 = (_List_node_base *)0x8000000000000000;
LAB_0024ba94:
    p_Stack_9e8 = (_List_node_base *)0x7fffffffffffffff;
LAB_0024ba9f:
    if ((long)local_9f0 < (long)p_Stack_9e8) goto LAB_0024bcb0;
  }
  else {
    p_Var67 = (_List_node_base *)0x8000000000000000;
    p_Var26 = local_a08;
    do {
                    /* try { // try from 0024b2b7 to 0024b2b9 has its CatchHandler @ 0025c131 */
      p_Var27 = (_List_node_base *)(**(code **)(**(long **)(p_Var26 + 0x10) + 0x10))();
      if ((long)p_Var67 < (long)p_Var27) {
        p_Var67 = p_Var27;
      }
      p_Var26 = *(_List_node_base **)p_Var26;
    } while (p_Var26 != (_List_node_base *)&local_a08);
    local_9f0 = p_Var67;
    if (local_a08 == (_List_node_base *)&local_a08) goto LAB_0024ba94;
    p_Var67 = (_List_node_base *)0x7fffffffffffffff;
    p_Var26 = local_a08;
    do {
                    /* try { // try from 0024b307 to 0024b309 has its CatchHandler @ 0025c0b2 */
      (**(code **)(**(long **)(p_Var26 + 0x10) + 0x10))();
      if ((long)extraout_RDX_00 < (long)p_Var67) {
        p_Var67 = extraout_RDX_00;
      }
      p_Var26 = *(_List_node_base **)p_Var26;
    } while (p_Var26 != (_List_node_base *)&local_a08);
    p_Stack_9e8 = p_Var67;
    if ((local_a08 == (_List_node_base *)&local_a08) ||
       (*(_List_node_base **)local_a08 == (_List_node_base *)&local_a08)) goto LAB_0024ba9f;
    stack0xfffffffffffff7d0 = (_List_node_base *)local_838;
    local_838._0_8_ = (_List_node_base *)local_838;
    uStack_820 = (ulong)auStack_828;
    auStack_828 = (undefined1  [8])auStack_828;
    p_Stack_818 = (_List_node_base *)&p_Stack_818;
    pppppppuStack_808 = &pppppppuStack_808;
    local_7f8 = (_List_node_base *)&local_7f8;
    local_7e8 = (_List_node_base *)&local_7e8;
    local_7d8 = (_List_node_base *)&local_7d8;
    local_7c8 = (_List_node_base *)&local_7c8;
    local_7b8 = (_List_node_base *)&local_7b8;
    p_Stack_7a8 = (_List_node_base *)&p_Stack_7a8;
    local_798 = &local_798;
    local_788 = &local_788;
    local_778 = &local_778;
    local_768 = &local_768;
    local_758 = &local_758;
    local_748 = &local_748;
    local_738 = &local_738;
    local_728 = &local_728;
    local_718 = &local_718;
    local_708 = &local_708;
    local_6f8 = &local_6f8;
    local_6e8 = &local_6e8;
    local_6d8 = &local_6d8;
    local_6c8 = &local_6c8;
    local_6b8 = &local_6b8;
    local_6a8 = &local_6a8;
    local_698 = &local_698;
    local_688 = &local_688;
    local_678 = &local_678;
    local_668 = &local_668;
    local_658 = &local_658;
    local_648 = &local_648;
    local_638 = &local_638;
    local_628 = &local_628;
    local_618 = &local_618;
    local_608 = &local_608;
    local_5f8 = &local_5f8;
    local_5e8 = &local_5e8;
    local_5d8 = &local_5d8;
    local_5c8 = &local_5c8;
    local_5b8 = &local_5b8;
    local_5a8 = &local_5a8;
    local_598 = &local_598;
    local_588 = &local_588;
    local_578 = &local_578;
    local_568 = &local_568;
    local_558 = &local_558;
    local_548 = &local_548;
    local_538 = &local_538;
    local_528 = &local_528;
    local_518 = &local_518;
    local_508 = &local_508;
    local_4f8 = &local_4f8;
    local_4e8 = &local_4e8;
    local_4d8 = &local_4d8;
    local_4c8 = &local_4c8;
    local_4b8 = &local_4b8;
    local_4a8 = &local_4a8;
    local_498 = &local_498;
    local_488 = &local_488;
    local_478 = &local_478;
    local_468 = &local_468;
    local_458 = &local_458;
    local_448 = &local_448;
    p_Var26 = (_List_node_base *)local_838;
    local_8b8 = (undefined **)&local_8b8;
    uStack_8b0 = (_List_node_base *)&local_8b8;
    local_810 = p_Stack_818;
    local_800 = pppppppuStack_808;
    p_Stack_7f0 = local_7f8;
    p_Stack_7e0 = local_7e8;
    uStack_7d0 = local_7d8;
    local_7c0 = local_7c8;
    local_7b0 = local_7b8;
    local_7a0 = p_Stack_7a8;
    local_790 = local_798;
    local_780 = local_788;
    local_770 = local_778;
    local_760 = local_768;
    local_750 = local_758;
    local_740 = local_748;
    local_730 = local_738;
    local_720 = local_728;
    local_710 = local_718;
    local_700 = local_708;
    local_6f0 = local_6f8;
    local_6e0 = local_6e8;
    local_6d0 = local_6d8;
    local_6c0 = local_6c8;
    local_6b0 = local_6b8;
    local_6a0 = local_6a8;
    local_690 = local_698;
    local_680 = local_688;
    local_670 = local_678;
    local_660 = local_668;
    local_650 = local_658;
    local_640 = local_648;
    local_630 = local_638;
    local_620 = local_628;
    local_610 = local_618;
    local_600 = local_608;
    local_5f0 = local_5f8;
    local_5e0 = local_5e8;
    local_5d0 = local_5d8;
    local_5c0 = local_5c8;
    local_5b0 = local_5b8;
    local_5a0 = local_5a8;
    local_590 = local_598;
    local_580 = local_588;
    local_570 = local_578;
    local_560 = local_568;
    local_550 = local_558;
    local_540 = local_548;
    local_530 = local_538;
    local_520 = local_528;
    local_510 = local_518;
    local_500 = local_508;
    local_4f0 = local_4f8;
    local_4e0 = local_4e8;
    local_4d0 = local_4d8;
    local_4c0 = local_4c8;
    local_4b0 = local_4b8;
    local_4a0 = local_4a8;
    local_490 = local_498;
    local_480 = local_488;
    local_470 = local_478;
    local_460 = local_468;
    local_450 = local_458;
    local_440 = local_448;
    do {
      p_Var67 = p_Var26;
      std::__detail::_List_node_base::_M_transfer((_List_node_base *)&local_8b8,local_a08);
      p_Var26 = (_List_node_base *)local_838;
      if (p_Var26 == p_Var67) {
        bVar98 = true;
      }
      else {
        do {
          p_Var72 = p_Var26;
          p_Var27 = *(_List_node_base **)p_Var72;
          if (p_Var27 == p_Var72) {
            p_Var26 = p_Var72;
            goto LAB_0024b973;
          }
          if ((_List_node_base *)local_8b8 != (_List_node_base *)&local_8b8) {
            p_Var26 = p_Var27;
            p_Var39 = (_List_node_base *)local_8b8;
            do {
                    /* try { // try from 0024ba25 to 0024ba34 has its CatchHandler @ 0025c8ad */
              (**(code **)(**(long **)(p_Var39 + 0x10) + 0x10))();
              (**(code **)(**(long **)(p_Var26 + 0x10) + 0x10))();
              if (extraout_RDX_01 < extraout_RDX_02) {
                p_Var40 = *(_List_node_base **)p_Var39;
                std::__detail::_List_node_base::_M_transfer(p_Var26,p_Var39);
                p_Var39 = p_Var40;
              }
              else {
                p_Var26 = *(_List_node_base **)p_Var26;
              }
            } while ((p_Var26 != p_Var72) && (p_Var39 != (_List_node_base *)&local_8b8));
            if (p_Var39 != (_List_node_base *)&local_8b8) {
              std::__detail::_List_node_base::_M_transfer(p_Var72,p_Var39);
            }
          }
          std::__detail::_List_node_base::swap((_List_node_base *)&local_8b8,p_Var72);
          p_Var26 = p_Var72 + 0x10;
        } while (p_Var72 + 0x10 != p_Var67);
        p_Var26 = p_Var67;
LAB_0024b973:
        bVar98 = p_Var27 != p_Var72;
      }
      std::__detail::_List_node_base::swap((_List_node_base *)&local_8b8,p_Var26);
      p_Var26 = p_Var67 + (ulong)bVar98 * 0x10;
    } while (local_a08 != (_List_node_base *)&local_a08);
    for (p_Var26 = (_List_node_base *)auStack_828; p_Var26 != p_Var67 + (ulong)bVar98 * 0x10;
        p_Var26 = p_Var26 + 0x10) {
      p_Var27 = *(_List_node_base **)p_Var26;
      _local_c08 = p_Var26;
      p_Var72 = *(_List_node_base **)(p_Var26 + -0x10);
      while ((p_Var27 != p_Var26 && (p_Var72 != p_Var26 + -0x10))) {
                    /* try { // try from 0024bc2f to 0024bc3e has its CatchHandler @ 0025c299 */
        (**(code **)(**(long **)(p_Var72 + 0x10) + 0x10))();
        (**(code **)(**(long **)(p_Var27 + 0x10) + 0x10))();
        if (extraout_RDX_05 < extraout_RDX_06) {
          p_Var39 = *(_List_node_base **)p_Var72;
          std::__detail::_List_node_base::_M_transfer(p_Var27,p_Var72);
          p_Var72 = p_Var39;
        }
        else {
          p_Var27 = *(_List_node_base **)p_Var27;
        }
      }
      if (p_Var72 != p_Var26 + -0x10) {
        std::__detail::_List_node_base::_M_transfer(p_Var26,p_Var72);
      }
    }
    p_Var26 = p_Var67 + -0x10;
    if (bVar98 != false) {
      p_Var26 = p_Var67;
    }
    std::__detail::_List_node_base::swap(p_Var26,(_List_node_base *)&local_a08);
    if ((long)local_9f0 < (long)p_Stack_9e8) goto LAB_0024bcb0;
  }
  do {
    p_Stack_9e8 = (_List_node_base *)0x7fffffffffffffff;
    if (local_a08 != (_List_node_base *)&local_a08) {
      plVar90 = *(long **)(local_a08 + 0x10);
      p_Var26 = local_a08;
      while( true ) {
        (**(code **)(*plVar90 + 0x20))(plVar90);
        cVar23 = (**(code **)(*plVar90 + 0x18))(plVar90);
        if (cVar23 == '\0') break;
        p_Var67 = (_List_node_base *)(**(code **)(*plVar90 + 0x10))(plVar90);
        if ((long)local_9f0 < (long)p_Var67) {
          local_9f0 = p_Var67;
        }
        do {
          (**(code **)(*plVar90 + 0x10))(plVar90);
          if ((long)extraout_RDX_04 < (long)p_Stack_9e8) {
            p_Stack_9e8 = extraout_RDX_04;
          }
          p_Var26 = *(_List_node_base **)p_Var26;
          if (p_Var26 == (_List_node_base *)&local_a08) goto LAB_0024bb80;
          plVar90 = *(long **)(p_Var26 + 0x10);
        } while ((p_Var26 != local_a08) &&
                ((**(code **)(*plVar90 + 0x10))(plVar90), (long)local_9f0 < extraout_RDX_03
                    /* try { // try from 0024bae3 to 0024bb35 has its CatchHandler @ 0025c25f */));
      }
      break;
    }
LAB_0024bb80:
                    /* try { // try from 0024bb80 to 0024bb8c has its CatchHandler @ 0025beb7 */
    std::__cxx11::list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>
    ::
    sort<juce::detail::IntersectingRangedValues<juce::Colour_const,std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>const>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
              ((_List_node_base *)&local_a08);
  } while ((long)p_Stack_9e8 <= (long)local_9f0);
LAB_0024bcb0:
  local_810 = local_a50;
  pppppppuStack_808 = pppppppuStack_a48;
  p_Stack_818 = p_Stack_a58;
  stack0xfffffffffffff7d0 = p_Stack_a70;
  local_838._0_8_ = &PTR__RangedIterator_00710ae8;
  uStack_820 = (ulong)local_a60;
  auStack_828 = (undefined1  [8])p_Stack_a68;
  local_800 = (undefined8 *******)&PTR__RangedIterator_007115b0;
  local_7d8 = local_a18;
  uStack_7d0 = p_Stack_a10;
  local_7e8 = local_a28;
  p_Stack_7e0 = p_Stack_a20;
  local_7f8 = local_a38;
  p_Stack_7f0 = p_Stack_a30;
  local_7b8 = (_List_node_base *)0x0;
  p_Var26 = local_a08;
  local_7c8 = (_List_node_base *)&local_7c8;
  local_7c0 = (_List_node_base *)&local_7c8;
  if (local_a08 == (_List_node_base *)&local_a08) {
    local_7b0 = local_9f0;
    p_Stack_7a8 = p_Stack_9e8;
  }
  else {
    do {
                    /* try { // try from 0024bd50 to 0024bd59 has its CatchHandler @ 0025c7ae */
      p_Var67 = operator_new(0x18);
      *(long *)(p_Var67 + 0x10) = *(long *)(p_Var26 + 0x10);
      std::__detail::_List_node_base::_M_hook(p_Var67);
      local_7b8 = local_7b8 + 1;
      p_Var26 = *(_List_node_base **)p_Var26;
    } while (p_Var26 != (_List_node_base *)&local_a08);
    local_7b0 = local_9f0;
    p_Stack_7a8 = p_Stack_9e8;
    p_Var26 = local_7c8;
    if (local_7c8 != (_List_node_base *)&local_7c8) {
      do {
                    /* try { // try from 0024bdc7 to 0024bdc9 has its CatchHandler @ 0025c495 */
        cVar23 = (**(code **)(**(long **)(p_Var26 + 0x10) + 0x18))();
        p_Var67 = local_7c8;
        p_Var27 = p_Var26;
        if (cVar23 == '\0') break;
        p_Var26 = *(_List_node_base **)p_Var26;
        p_Var27 = (_List_node_base *)&local_7c8;
      } while (p_Var26 != (_List_node_base *)&local_7c8);
      while (p_Var67 != (_List_node_base *)&local_7c8) {
        p_Var26 = *(_List_node_base **)p_Var67;
        operator_delete(p_Var67);
        p_Var67 = p_Var26;
      }
      if (p_Var27 != (_List_node_base *)&local_7c8) goto LAB_0024cfd8;
    }
  }
  p_Var27 = p_Stack_9e8;
  p_Var67 = local_9f0;
  p_Var26 = p_Stack_a70;
  local_b58._0_8_ = local_a38;
  lVar33 = (long)local_a28 - (long)p_Stack_a30;
  local_ba8 = (_List_node_base *)lVar33;
  lVar69 = (long)local_a60 - (long)p_Stack_a68;
                    /* try { // try from 0024be86 to 0024be8a has its CatchHandler @ 0025c285 */
  pPVar38 = ParagraphStorage::getShapedText(*(ParagraphStorage **)(p_Stack_a70 + (lVar69 >> 1)));
  p_Var72 = (_List_node_base *)(lVar69 >> 4);
  if ((long)p_Var27 <= (long)p_Var67) {
    p_Var27 = p_Var67;
  }
  lVar69 = *(long *)(*(long *)(p_Var26 + (long)p_Var72 * 8) + 0x20);
  lVar89 = (long)p_Var67 - lVar69;
  lVar69 = (long)p_Var27 - lVar69;
  if (lVar69 <= lVar89) {
    lVar69 = lVar89;
  }
                    /* try { // try from 0024beaf to 0024bec1 has its CatchHandler @ 0025c28a */
  detail::ShapedText::getGlyphRanges(*(long *)pPVar38,lVar89,lVar69,(long *)&local_1e8);
  local_be0 = local_1e8;
  local_b10 = p_Stack_1e0;
  if (local_1e8 != p_Stack_1e0) {
    local_ba8 = (_List_node_base *)(lVar33 >> 4);
    local_b38 = p_Var72;
    do {
      pPVar38 = *(ParagraphStorage **)(p_Var26 + (long)local_b38 * 8);
      lVar33 = *(long *)(pPVar38 + 0x30);
      lVar69 = *(long *)(lVar33 + 0x70) - *(long *)(lVar33 + 0x68);
      if (lVar69 == 0) {
        lVar33 = 0;
      }
      else {
        lVar89 = *(long *)(lVar33 + 0x80);
        lVar37 = (lVar69 >> 4) * 0x10;
        lVar69 = 0;
        lVar33 = 0;
        do {
          while( true ) {
            pPVar32 = *(ParagraphStorage **)(lVar89 + (lVar69 >> 1));
            if (pPVar32 == pPVar38) goto LAB_0024bf93;
            if (pPVar32[0x60] != (ParagraphStorage)0x0) break;
                    /* try { // try from 0024bf55 to 0024bf5c has its CatchHandler @ 0025c9f1 */
            pPVar36 = ParagraphStorage::getShapedText(pPVar32);
            lVar88 = *(long *)(*(long *)pPVar36 + 0x90) - *(long *)(*(long *)pPVar36 + 0x88) >> 5;
            *(long *)(pPVar32 + 0x58) = lVar88;
            pPVar32[0x60] = (ParagraphStorage)0x1;
            lVar33 = lVar33 + lVar88;
            lVar69 = lVar69 + 0x10;
            if (lVar37 == lVar69) goto LAB_0024bf93;
          }
          lVar33 = lVar33 + *(long *)(pPVar32 + 0x58);
          lVar69 = lVar69 + 0x10;
        } while (lVar37 != lVar69);
      }
LAB_0024bf93:
      uVar54 = *(long *)local_be0 + lVar33;
      uVar78 = lVar33 + *(long *)(local_be0 + 8);
      if ((long)uVar78 <= (long)uVar54) {
        uVar78 = uVar54;
      }
      uVar100 = *(undefined4 *)(local_b58._0_8_ + (long)local_ba8 * 4);
      lVar33 = (long)p_Stack_320 - (long)local_328;
      if (*(long *)local_be0 < *(long *)(local_be0 + 8)) {
                    /* try { // try from 0024bfea to 0024c2f7 has its CatchHandler @ 0025c9e0 */
        _local_c08 = lVar33;
        detail::Ranges::erase((Ranges *)&local_3f8,uVar54,uVar78,&local_328);
        p_Var67 = p_Stack_320;
        puVar55 = puStack_3f0;
        puVar60 = local_3f8;
        uVar50 = (long)puStack_3f0 - (long)local_3f8;
        puVar52 = local_3f8;
        if (0 < (long)uVar50) {
          uVar74 = uVar50 >> 4;
          do {
            uVar56 = uVar74 >> 1;
            uVar57 = uVar56;
            if ((long)puVar52[uVar56 * 2] < (long)uVar54) {
              uVar57 = ~uVar56 + uVar74;
              puVar52 = puVar52 + uVar56 * 2 + 2;
            }
            uVar74 = uVar57;
          } while (0 < (long)uVar57);
        }
        lVar69 = (long)puVar52 - (long)local_3f8 >> 4;
        if (p_Stack_320 == local_318) {
          lVar89 = (long)p_Stack_320 - (long)local_328;
          if (lVar89 == 0x7fffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("vector::_M_realloc_insert");
          }
          local_ae8._0_8_ = local_328;
          lVar37 = lVar89 >> 4;
          uVar57 = lVar37 * -0x5555555555555555;
          uVar74 = uVar57;
          if (lVar89 == 0) {
            uVar74 = 1;
          }
          uVar56 = uVar74 + uVar57;
          if (0x2aaaaaaaaaaaaaa < uVar56) {
            uVar56 = 0x2aaaaaaaaaaaaaa;
          }
          if (CARRY8(uVar74,uVar57)) {
            uVar56 = 0x2aaaaaaaaaaaaaa;
          }
          p_Var27 = operator_new(uVar56 * 0x30);
          *(long *)(p_Var27 + lVar37 * 0x10) = lVar69;
          p_Var27[(lVar37 * 2 + 5) * 8] = (_List_node_base)0x0;
          if ((_List_node_base *)local_ae8._0_8_ == p_Var67) {
            p_Var72 = p_Var27 + 0x30;
          }
          else {
            p_Var39 = (_List_node_base *)local_ae8._0_8_;
            p_Var40 = p_Var27;
            do {
              p_Var72 = p_Var40;
              lVar88 = *(long *)p_Var39;
              lVar80 = *(long *)(p_Var39 + 8);
              lVar69 = *(long *)(p_Var39 + 0x10);
              lVar89 = *(long *)(p_Var39 + 0x18);
              lVar37 = *(long *)(p_Var39 + 0x28);
              *(long *)(p_Var72 + 0x20) = *(long *)(p_Var39 + 0x20);
              *(long *)(p_Var72 + 0x28) = lVar37;
              *(long *)(p_Var72 + 0x10) = lVar69;
              *(long *)(p_Var72 + 0x18) = lVar89;
              *(long *)p_Var72 = lVar88;
              *(long *)(p_Var72 + 8) = lVar80;
              p_Var39 = p_Var39 + 0x30;
              p_Var40 = p_Var72 + 0x30;
            } while (p_Var39 != p_Var67);
            p_Var72 = p_Var72 + 0x60;
          }
          if ((_List_node_base *)local_ae8._0_8_ != (_List_node_base *)0x0) {
            operator_delete((void *)local_ae8._0_8_);
          }
          local_318 = p_Var27 + uVar56 * 0x30;
          local_328 = p_Var27;
          p_Stack_320 = p_Var72;
        }
        else {
          *(long *)p_Stack_320 = lVar69;
          p_Stack_320[0x28] = (_List_node_base)0x0;
          p_Stack_320 = p_Stack_320 + 0x30;
        }
        lVar69 = (long)puVar52 - (long)puVar60 >> 4;
        if (puVar55 == local_3e8) {
          if (uVar50 == 0x7ffffffffffffff0) {
                    /* try { // try from 0025bcad to 0025bcc4 has its CatchHandler @ 0025c9ce */
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("vector::_M_realloc_insert");
          }
          uVar57 = (long)uVar50 >> 4;
          uVar74 = uVar57;
          if (uVar50 == 0) {
            uVar74 = 1;
          }
          uVar50 = uVar74 + uVar57;
          if (0x7ffffffffffffff < uVar50) {
            uVar50 = 0x7ffffffffffffff;
          }
          if (CARRY8(uVar74,uVar57)) {
            uVar50 = 0x7ffffffffffffff;
          }
          puVar34 = operator_new(uVar50 * 0x10);
          puVar61 = puVar60 + lVar69 * 2;
          puVar34[lVar69 * 2] = uVar54;
          puVar34[lVar69 * 2 + 1] = uVar78;
          puVar71 = puVar34;
          if ((long)puVar52 - (long)puVar60 != 0) {
            lVar89 = 0;
            do {
              uVar44 = ((undefined8 *)((long)puVar60 + lVar89))[1];
              *(undefined8 *)((long)puVar34 + lVar89) = *(undefined8 *)((long)puVar60 + lVar89);
              ((undefined8 *)((long)puVar34 + lVar89))[1] = uVar44;
              lVar89 = lVar89 + 0x10;
            } while (lVar69 * 0x10 != lVar89);
            puVar71 = (ulong *)(lVar89 + (long)puVar34);
          }
          for (; puVar71 = puVar71 + 2, puVar55 != puVar61; puVar61 = puVar61 + 2) {
            uVar74 = puVar61[1];
            *puVar71 = *puVar61;
            puVar71[1] = uVar74;
          }
          if (puVar60 != (ulong *)0x0) {
            operator_delete(puVar60);
          }
          local_3e8 = puVar34 + uVar50 * 2;
          local_3f8 = puVar34;
          puStack_3f0 = puVar71;
        }
        else if (puVar55 == puVar52) {
          *puVar55 = uVar54;
          puVar55[1] = uVar78;
          puStack_3f0 = puVar55 + 2;
        }
        else {
          puVar61 = puVar60 + lVar69 * 2;
          puVar52 = puVar55 + -2;
          *puVar55 = puVar55[-2];
          puVar55[1] = puVar55[-1];
          if (0 < (long)puVar52 - (long)puVar61) {
            uVar50 = ((ulong)((long)puVar52 - (long)puVar61) >> 4) + 1;
            do {
              *puVar52 = puVar52[-2];
              puVar52[1] = puVar52[-1];
              puVar52 = puVar52 + -2;
              uVar50 = uVar50 - 1;
            } while (1 < uVar50);
          }
          *(char *)puVar61 = (char)uVar54;
          *(int *)((long)puVar61 + 1) = (int)(uVar54 >> 8);
          *(char *)((long)puVar61 + 7) = (char)(uVar54 >> 0x38);
          *(short *)((long)puVar61 + 5) = (short)(uVar54 >> 0x28);
          puVar60[lVar69 * 2 + 1] = uVar78;
          puStack_3f0 = puVar55 + 2;
        }
      }
      if ((long)p_Stack_320 - (long)local_328 != 0) {
        lVar33 = lVar33 >> 4;
        uVar50 = ((long)p_Stack_320 - (long)local_328 >> 4) * -0x5555555555555555;
        bVar98 = uVar50 < (ulong)(lVar33 * -0x5555555555555555);
        lVar69 = uVar50 + lVar33 * 0x5555555555555555;
        if (!bVar98 && lVar69 != 0) {
          if (bVar98) {
            lVar69 = 0;
          }
          p_Var27 = local_328 + lVar33 * 0x10;
          p_Var67 = p_Var27 + lVar69 * 0x30;
          puVar87 = puStack_3d0;
          puVar29 = local_3d8;
          do {
            puVar28 = puStack_3e0;
            _Var24 = p_Var27[0x28];
            if (_Var24 == (_List_node_base)0x2) {
              lVar33 = *(long *)p_Var27;
              lVar69 = *(long *)(p_Var27 + 8);
              if (lVar33 == lVar69) goto LAB_0024c450;
              puVar28 = puStack_3e0 + lVar33;
              puVar85 = puStack_3e0 + lVar69;
              uVar50 = (long)puVar29 - (long)puVar85;
              if (uVar50 == 0) {
                uVar50 = 0;
              }
              else if (0 < (long)uVar50) {
                uVar74 = uVar50 >> 2;
                uVar57 = uVar74 + (uVar50 < 4);
                if ((uVar57 < 8) ||
                   ((puVar28 < puStack_3e0 + ((lVar69 + uVar74) - (ulong)(3 < uVar50)) + 1 &&
                    (puVar85 < puStack_3e0 + ((lVar33 + uVar74) - (ulong)(3 < uVar50)) + 1)))) {
                  puVar35 = puVar28;
                }
                else {
                  _local_c08 = puVar87;
                  uVar56 = uVar57 & 0xfffffffffffffff8;
                  uVar83 = (uVar56 - 8 >> 3) + 1;
                  uVar84 = (ulong)((uint)uVar83 & 3);
                  if (uVar56 - 8 < 0x18) {
                    lVar89 = 0;
                  }
                  else {
                    uVar83 = uVar83 & 0x3ffffffffffffffc;
                    lVar89 = 0;
                    do {
                      uVar44 = *(undefined8 *)((long)(puStack_3e0 + lVar69 + lVar89) + 8);
                      uVar5 = *(undefined8 *)(puStack_3e0 + lVar69 + lVar89 + 4);
                      uVar8 = *(undefined8 *)((long)(puStack_3e0 + lVar69 + lVar89 + 4) + 8);
                      *(undefined8 *)(puStack_3e0 + lVar33 + lVar89) =
                           *(undefined8 *)(puStack_3e0 + lVar69 + lVar89);
                      *(undefined8 *)((long)(puStack_3e0 + lVar33 + lVar89) + 8) = uVar44;
                      *(undefined8 *)(puStack_3e0 + lVar33 + lVar89 + 4) = uVar5;
                      *(undefined8 *)((long)(puStack_3e0 + lVar33 + lVar89 + 4) + 8) = uVar8;
                      uVar44 = *(undefined8 *)((long)(puStack_3e0 + lVar69 + lVar89 + 8) + 8);
                      uVar5 = *(undefined8 *)(puStack_3e0 + lVar69 + lVar89 + 0xc);
                      uVar8 = *(undefined8 *)((long)(puStack_3e0 + lVar69 + lVar89 + 0xc) + 8);
                      *(undefined8 *)(puStack_3e0 + lVar33 + lVar89 + 8) =
                           *(undefined8 *)(puStack_3e0 + lVar69 + lVar89 + 8);
                      *(undefined8 *)((long)(puStack_3e0 + lVar33 + lVar89 + 8) + 8) = uVar44;
                      *(undefined8 *)(puStack_3e0 + lVar33 + lVar89 + 0xc) = uVar5;
                      *(undefined8 *)((long)(puStack_3e0 + lVar33 + lVar89 + 0xc) + 8) = uVar8;
                      uVar44 = *(undefined8 *)((long)(puStack_3e0 + lVar69 + lVar89 + 0x10) + 8);
                      uVar5 = *(undefined8 *)(puStack_3e0 + lVar69 + lVar89 + 0x14);
                      uVar8 = *(undefined8 *)((long)(puStack_3e0 + lVar69 + lVar89 + 0x14) + 8);
                      *(undefined8 *)(puStack_3e0 + lVar33 + lVar89 + 0x10) =
                           *(undefined8 *)(puStack_3e0 + lVar69 + lVar89 + 0x10);
                      *(undefined8 *)((long)(puStack_3e0 + lVar33 + lVar89 + 0x10) + 8) = uVar44;
                      *(undefined8 *)(puStack_3e0 + lVar33 + lVar89 + 0x14) = uVar5;
                      *(undefined8 *)((long)(puStack_3e0 + lVar33 + lVar89 + 0x14) + 8) = uVar8;
                      uVar8 = *(undefined8 *)((long)(puStack_3e0 + lVar69 + lVar89 + 0x18) + 8);
                      uVar44 = *(undefined8 *)(puStack_3e0 + lVar69 + lVar89 + 0x1c);
                      uVar5 = *(undefined8 *)((long)(puStack_3e0 + lVar69 + lVar89 + 0x1c) + 8);
                      *(undefined8 *)(puStack_3e0 + lVar33 + lVar89 + 0x18) =
                           *(undefined8 *)(puStack_3e0 + lVar69 + lVar89 + 0x18);
                      *(undefined8 *)((long)(puStack_3e0 + lVar33 + lVar89 + 0x18) + 8) = uVar8;
                      *(undefined8 *)(puStack_3e0 + lVar33 + lVar89 + 0x1c) = uVar44;
                      *(undefined8 *)((long)(puStack_3e0 + lVar33 + lVar89 + 0x1c) + 8) = uVar5;
                      lVar89 = lVar89 + 0x20;
                      uVar83 = uVar83 - 4;
                    } while (uVar83 != 0);
                  }
                  if (uVar84 != 0) {
                    lVar37 = 0;
                    do {
                      puVar42 = (undefined8 *)((long)puStack_3e0 + lVar37 + (lVar69 + lVar89) * 4);
                      uVar8 = puVar42[1];
                      puVar41 = (undefined8 *)
                                ((long)puStack_3e0 + lVar37 + (lVar69 + lVar89) * 4 + 0x10);
                      uVar44 = *puVar41;
                      uVar5 = puVar41[1];
                      puVar41 = (undefined8 *)((long)puStack_3e0 + lVar37 + (lVar33 + lVar89) * 4);
                      *puVar41 = *puVar42;
                      puVar41[1] = uVar8;
                      puVar41 = (undefined8 *)
                                ((long)puStack_3e0 + lVar37 + (lVar33 + lVar89) * 4 + 0x10);
                      *puVar41 = uVar44;
                      puVar41[1] = uVar5;
                      lVar37 = lVar37 + 0x20;
                    } while (uVar84 * 0x20 != lVar37);
                  }
                  if (uVar57 == uVar56) goto joined_r0x0024c818;
                  uVar74 = uVar74 - uVar56;
                  puVar35 = puVar28 + uVar56;
                  puVar85 = puVar85 + uVar56;
                }
                uVar74 = uVar74 + 1;
                lVar33 = 0;
                do {
                  *(undefined4 *)((long)puVar35 + lVar33) = *(undefined4 *)((long)puVar85 + lVar33);
                  uVar74 = uVar74 - 1;
                  lVar33 = lVar33 + 4;
                } while (1 < uVar74);
              }
joined_r0x0024c818:
              puVar28 = (undefined4 *)((long)puVar28 + uVar50);
              if (puVar29 != puVar28) {
                puVar29 = puVar28;
                local_3d8 = puVar28;
              }
            }
            else if (_Var24 == (_List_node_base)0x1) {
              lVar33 = *(long *)p_Var27;
              puVar85 = puStack_3e0 + lVar33;
              if (puVar29 == puVar87) {
                lVar69 = (long)puVar87 - (long)puStack_3e0;
                if (lVar69 == 0x7ffffffffffffffc) {
                    /* WARNING: Subroutine does not return */
                  std::__throw_length_error("vector::_M_realloc_insert");
                }
                uVar74 = lVar69 >> 2;
                uVar50 = uVar74;
                if (lVar69 == 0) {
                  uVar50 = 1;
                }
                uVar57 = uVar50 + uVar74;
                if (0x1fffffffffffffff < uVar57) {
                  uVar57 = 0x1fffffffffffffff;
                }
                if (CARRY8(uVar50,uVar74)) {
                  uVar57 = 0x1fffffffffffffff;
                }
                    /* try { // try from 0024c68c to 0024c774 has its CatchHandler @ 0025c9c2 */
                puVar35 = operator_new(uVar57 * 4);
                puVar35[lVar33] = *puVar85;
                puVar29 = puVar35;
                if (lVar33 != 0) {
                  uVar50 = lVar33 + 0x3fffffffffffffffU & 0x3fffffffffffffff;
                  puVar94 = puVar28;
                  if (6 < uVar50) {
                    uVar50 = uVar50 + 1;
                    uVar83 = uVar50 & 0x7ffffffffffffff8;
                    uVar56 = (uVar83 - 8 >> 3) + 1;
                    uVar74 = (ulong)((uint)uVar56 & 3);
                    if (uVar83 - 8 < 0x18) {
                      lVar89 = 0;
                    }
                    else {
                      uVar56 = uVar56 & 0x3ffffffffffffffc;
                      lVar89 = 0;
                      do {
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar89) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar89 + 4);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 4) + 8);
                        *(undefined8 *)(puVar35 + lVar89) = *(undefined8 *)(puVar28 + lVar89);
                        *(undefined8 *)((long)(puVar35 + lVar89) + 8) = uVar44;
                        *(undefined8 *)(puVar35 + lVar89 + 4) = uVar5;
                        *(undefined8 *)((long)(puVar35 + lVar89 + 4) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar89 + 8) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar89 + 0xc);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 0xc) + 8);
                        *(undefined8 *)(puVar35 + lVar89 + 8) =
                             *(undefined8 *)(puVar28 + lVar89 + 8);
                        *(undefined8 *)((long)(puVar35 + lVar89 + 8) + 8) = uVar44;
                        *(undefined8 *)(puVar35 + lVar89 + 0xc) = uVar5;
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0xc) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x10) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar89 + 0x14);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x14) + 8);
                        *(undefined8 *)(puVar35 + lVar89 + 0x10) =
                             *(undefined8 *)(puVar28 + lVar89 + 0x10);
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0x10) + 8) = uVar44;
                        *(undefined8 *)(puVar35 + lVar89 + 0x14) = uVar5;
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0x14) + 8) = uVar8;
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x18) + 8);
                        uVar44 = *(undefined8 *)(puVar28 + lVar89 + 0x1c);
                        uVar5 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x1c) + 8);
                        *(undefined8 *)(puVar35 + lVar89 + 0x18) =
                             *(undefined8 *)(puVar28 + lVar89 + 0x18);
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0x18) + 8) = uVar8;
                        *(undefined8 *)(puVar35 + lVar89 + 0x1c) = uVar44;
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0x1c) + 8) = uVar5;
                        lVar89 = lVar89 + 0x20;
                        uVar56 = uVar56 - 4;
                      } while (uVar56 != 0);
                    }
                    if (uVar74 != 0) {
                      lVar37 = 0;
                      do {
                        puVar42 = (undefined8 *)((long)puVar28 + lVar37 + lVar89 * 4);
                        uVar8 = puVar42[1];
                        puVar41 = (undefined8 *)((long)puVar28 + lVar37 + lVar89 * 4 + 0x10);
                        uVar44 = *puVar41;
                        uVar5 = puVar41[1];
                        puVar41 = (undefined8 *)((long)puVar35 + lVar37 + lVar89 * 4);
                        *puVar41 = *puVar42;
                        puVar41[1] = uVar8;
                        puVar41 = (undefined8 *)((long)puVar35 + lVar37 + lVar89 * 4 + 0x10);
                        *puVar41 = uVar44;
                        puVar41[1] = uVar5;
                        lVar37 = lVar37 + 0x20;
                      } while (uVar74 * 0x20 != lVar37);
                    }
                    puVar29 = puVar35 + uVar83;
                    if (uVar50 == uVar83) goto LAB_0024c941;
                    puVar94 = puVar28 + uVar83;
                  }
                  do {
                    *puVar29 = *puVar94;
                    puVar94 = puVar94 + 1;
                    puVar29 = puVar29 + 1;
                  } while (puVar94 != puVar85);
                }
LAB_0024c941:
                puVar94 = puVar29 + 1;
                if (puVar87 != puVar85) {
                  uVar50 = (lVar69 + lVar33 * -4) - 4;
                  if (0x1b < uVar50) {
                    uVar83 = (uVar50 >> 2) + 1;
                    uVar56 = uVar83 & 0x7ffffffffffffff8;
                    uVar74 = (uVar56 - 8 >> 3) + 1;
                    uVar50 = (ulong)((uint)uVar74 & 3);
                    if (uVar56 - 8 < 0x18) {
                      lVar69 = 0;
                    }
                    else {
                      uVar74 = uVar74 & 0x3ffffffffffffffc;
                      lVar69 = 0;
                      do {
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar33 + lVar69 + 4);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 4) + 8);
                        *(undefined8 *)(puVar29 + lVar69 + 1) =
                             *(undefined8 *)(puVar28 + lVar33 + lVar69);
                        *(undefined8 *)((long)(puVar29 + lVar69 + 1) + 8) = uVar44;
                        *(undefined8 *)(puVar29 + lVar69 + 5) = uVar5;
                        *(undefined8 *)((long)(puVar29 + lVar69 + 5) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 8) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar33 + lVar69 + 0xc);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 0xc) + 8);
                        *(undefined8 *)(puVar29 + lVar69 + 9) =
                             *(undefined8 *)(puVar28 + lVar33 + lVar69 + 8);
                        *(undefined8 *)((long)(puVar29 + lVar69 + 9) + 8) = uVar44;
                        *(undefined8 *)(puVar29 + lVar69 + 0xd) = uVar5;
                        *(undefined8 *)((long)(puVar29 + lVar69 + 0xd) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 0x10) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar33 + lVar69 + 0x14);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 0x14) + 8);
                        *(undefined8 *)(puVar29 + lVar69 + 0x11) =
                             *(undefined8 *)(puVar28 + lVar33 + lVar69 + 0x10);
                        *(undefined8 *)((long)(puVar29 + lVar69 + 0x11) + 8) = uVar44;
                        *(undefined8 *)(puVar29 + lVar69 + 0x15) = uVar5;
                        *(undefined8 *)((long)(puVar29 + lVar69 + 0x15) + 8) = uVar8;
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 0x18) + 8);
                        uVar44 = *(undefined8 *)(puVar28 + lVar33 + lVar69 + 0x1c);
                        uVar5 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 0x1c) + 8);
                        *(undefined8 *)(puVar29 + lVar69 + 0x19) =
                             *(undefined8 *)(puVar28 + lVar33 + lVar69 + 0x18);
                        *(undefined8 *)((long)(puVar29 + lVar69 + 0x19) + 8) = uVar8;
                        *(undefined8 *)(puVar29 + lVar69 + 0x1d) = uVar44;
                        *(undefined8 *)((long)(puVar29 + lVar69 + 0x1d) + 8) = uVar5;
                        lVar69 = lVar69 + 0x20;
                        uVar74 = uVar74 - 4;
                      } while (uVar74 != 0);
                    }
                    if (uVar50 != 0) {
                      lVar33 = (lVar33 + lVar69) * 4;
                      lVar89 = 0;
                      do {
                        puVar42 = (undefined8 *)((long)puVar28 + lVar89 + lVar33);
                        uVar8 = puVar42[1];
                        puVar41 = (undefined8 *)((long)puVar28 + lVar89 + lVar33 + 0x10);
                        uVar44 = *puVar41;
                        uVar5 = puVar41[1];
                        puVar41 = (undefined8 *)((long)puVar29 + lVar89 + lVar69 * 4 + 4);
                        *puVar41 = *puVar42;
                        puVar41[1] = uVar8;
                        puVar41 = (undefined8 *)((long)puVar29 + lVar89 + lVar69 * 4 + 0x14);
                        *puVar41 = uVar44;
                        puVar41[1] = uVar5;
                        lVar89 = lVar89 + 0x20;
                      } while (uVar50 * 0x20 != lVar89);
                    }
                    puVar94 = puVar94 + uVar56;
                    if (uVar83 == uVar56) goto LAB_0024ca83;
                    puVar85 = puVar85 + uVar56;
                  }
                  do {
                    *puVar94 = *puVar85;
                    puVar85 = puVar85 + 1;
                    puVar94 = puVar94 + 1;
                  } while (puVar85 != puVar87);
                }
LAB_0024ca83:
                if (puVar28 != (undefined4 *)0x0) {
                  operator_delete(puVar28);
                }
                puStack_3d0 = puVar35 + uVar57;
                puStack_3e0 = puVar35;
                local_3d8 = puVar94;
LAB_0024c43e:
                _local_c08 = puVar87;
                puVar87 = puStack_3d0;
                puVar29 = local_3d8;
              }
              else if (puVar29 == puVar85) {
                uVar103 = *puVar85;
LAB_0024c7fa:
                *puVar29 = uVar103;
                puVar29 = puVar29 + 1;
                local_3d8 = puVar29;
              }
              else {
                uVar103 = *puVar85;
                puVar28 = puVar29 + -1;
                *puVar29 = puVar29[-1];
                puVar29 = puVar29 + 1;
                if (0 < (long)puVar28 - (long)puVar85) {
                  uVar50 = ((ulong)((long)puVar28 - (long)puVar85) >> 2) + 1;
                  do {
                    *puVar28 = puVar28[-1];
                    puVar28 = puVar28 + -1;
                    uVar50 = uVar50 - 1;
                  } while (1 < uVar50);
                }
                *puVar85 = uVar103;
                local_3d8 = puVar29;
              }
            }
            else if (_Var24 == (_List_node_base)0x0) {
              lVar33 = *(long *)p_Var27;
              puVar85 = puStack_3e0 + lVar33;
              if (puVar29 == puVar87) {
                lVar69 = (long)puVar87 - (long)puStack_3e0;
                if (lVar69 == 0x7ffffffffffffffc) {
                    /* try { // try from 0025bc65 to 0025bc7c has its CatchHandler @ 0025c9ce */
                    /* WARNING: Subroutine does not return */
                  std::__throw_length_error("vector::_M_realloc_insert");
                }
                uVar74 = lVar69 >> 2;
                uVar50 = uVar74;
                if (lVar69 == 0) {
                  uVar50 = 1;
                }
                uVar57 = uVar50 + uVar74;
                if (0x1fffffffffffffff < uVar57) {
                  uVar57 = 0x1fffffffffffffff;
                }
                if (CARRY8(uVar50,uVar74)) {
                  uVar57 = 0x1fffffffffffffff;
                }
                puVar35 = operator_new(uVar57 * 4);
                puVar35[lVar33] = uVar100;
                puVar29 = puVar35;
                if (lVar33 != 0) {
                  uVar50 = lVar33 + 0x3fffffffffffffffU & 0x3fffffffffffffff;
                  puVar94 = puVar28;
                  if (6 < uVar50) {
                    uVar50 = uVar50 + 1;
                    uVar83 = uVar50 & 0x7ffffffffffffff8;
                    uVar56 = (uVar83 - 8 >> 3) + 1;
                    uVar74 = (ulong)((uint)uVar56 & 3);
                    if (uVar83 - 8 < 0x18) {
                      lVar89 = 0;
                    }
                    else {
                      uVar56 = uVar56 & 0x3ffffffffffffffc;
                      lVar89 = 0;
                      do {
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar89) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar89 + 4);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 4) + 8);
                        *(undefined8 *)(puVar35 + lVar89) = *(undefined8 *)(puVar28 + lVar89);
                        *(undefined8 *)((long)(puVar35 + lVar89) + 8) = uVar44;
                        *(undefined8 *)(puVar35 + lVar89 + 4) = uVar5;
                        *(undefined8 *)((long)(puVar35 + lVar89 + 4) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar89 + 8) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar89 + 0xc);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 0xc) + 8);
                        *(undefined8 *)(puVar35 + lVar89 + 8) =
                             *(undefined8 *)(puVar28 + lVar89 + 8);
                        *(undefined8 *)((long)(puVar35 + lVar89 + 8) + 8) = uVar44;
                        *(undefined8 *)(puVar35 + lVar89 + 0xc) = uVar5;
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0xc) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x10) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar89 + 0x14);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x14) + 8);
                        *(undefined8 *)(puVar35 + lVar89 + 0x10) =
                             *(undefined8 *)(puVar28 + lVar89 + 0x10);
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0x10) + 8) = uVar44;
                        *(undefined8 *)(puVar35 + lVar89 + 0x14) = uVar5;
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0x14) + 8) = uVar8;
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x18) + 8);
                        uVar44 = *(undefined8 *)(puVar28 + lVar89 + 0x1c);
                        uVar5 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x1c) + 8);
                        *(undefined8 *)(puVar35 + lVar89 + 0x18) =
                             *(undefined8 *)(puVar28 + lVar89 + 0x18);
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0x18) + 8) = uVar8;
                        *(undefined8 *)(puVar35 + lVar89 + 0x1c) = uVar44;
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0x1c) + 8) = uVar5;
                        lVar89 = lVar89 + 0x20;
                        uVar56 = uVar56 - 4;
                      } while (uVar56 != 0);
                    }
                    if (uVar74 != 0) {
                      lVar37 = 0;
                      do {
                        puVar42 = (undefined8 *)((long)puVar28 + lVar37 + lVar89 * 4);
                        uVar8 = puVar42[1];
                        puVar41 = (undefined8 *)((long)puVar28 + lVar37 + lVar89 * 4 + 0x10);
                        uVar44 = *puVar41;
                        uVar5 = puVar41[1];
                        puVar41 = (undefined8 *)((long)puVar35 + lVar37 + lVar89 * 4);
                        *puVar41 = *puVar42;
                        puVar41[1] = uVar8;
                        puVar41 = (undefined8 *)((long)puVar35 + lVar37 + lVar89 * 4 + 0x10);
                        *puVar41 = uVar44;
                        puVar41[1] = uVar5;
                        lVar37 = lVar37 + 0x20;
                      } while (uVar74 * 0x20 != lVar37);
                    }
                    puVar29 = puVar35 + uVar83;
                    if (uVar50 == uVar83) goto LAB_0024cb71;
                    puVar94 = puVar28 + uVar83;
                  }
                  do {
                    *puVar29 = *puVar94;
                    puVar94 = puVar94 + 1;
                    puVar29 = puVar29 + 1;
                  } while (puVar94 != puVar85);
                }
LAB_0024cb71:
                puVar94 = puVar29 + 1;
                if (puVar87 != puVar85) {
                  uVar50 = (lVar69 + lVar33 * -4) - 4;
                  if (0x1b < uVar50) {
                    uVar83 = (uVar50 >> 2) + 1;
                    uVar56 = uVar83 & 0x7ffffffffffffff8;
                    uVar74 = (uVar56 - 8 >> 3) + 1;
                    uVar50 = (ulong)((uint)uVar74 & 3);
                    if (uVar56 - 8 < 0x18) {
                      lVar69 = 0;
                    }
                    else {
                      uVar74 = uVar74 & 0x3ffffffffffffffc;
                      lVar69 = 0;
                      do {
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar33 + lVar69 + 4);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 4) + 8);
                        *(undefined8 *)(puVar29 + lVar69 + 1) =
                             *(undefined8 *)(puVar28 + lVar33 + lVar69);
                        *(undefined8 *)((long)(puVar29 + lVar69 + 1) + 8) = uVar44;
                        *(undefined8 *)(puVar29 + lVar69 + 5) = uVar5;
                        *(undefined8 *)((long)(puVar29 + lVar69 + 5) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 8) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar33 + lVar69 + 0xc);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 0xc) + 8);
                        *(undefined8 *)(puVar29 + lVar69 + 9) =
                             *(undefined8 *)(puVar28 + lVar33 + lVar69 + 8);
                        *(undefined8 *)((long)(puVar29 + lVar69 + 9) + 8) = uVar44;
                        *(undefined8 *)(puVar29 + lVar69 + 0xd) = uVar5;
                        *(undefined8 *)((long)(puVar29 + lVar69 + 0xd) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 0x10) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar33 + lVar69 + 0x14);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 0x14) + 8);
                        *(undefined8 *)(puVar29 + lVar69 + 0x11) =
                             *(undefined8 *)(puVar28 + lVar33 + lVar69 + 0x10);
                        *(undefined8 *)((long)(puVar29 + lVar69 + 0x11) + 8) = uVar44;
                        *(undefined8 *)(puVar29 + lVar69 + 0x15) = uVar5;
                        *(undefined8 *)((long)(puVar29 + lVar69 + 0x15) + 8) = uVar8;
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 0x18) + 8);
                        uVar44 = *(undefined8 *)(puVar28 + lVar33 + lVar69 + 0x1c);
                        uVar5 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 0x1c) + 8);
                        *(undefined8 *)(puVar29 + lVar69 + 0x19) =
                             *(undefined8 *)(puVar28 + lVar33 + lVar69 + 0x18);
                        *(undefined8 *)((long)(puVar29 + lVar69 + 0x19) + 8) = uVar8;
                        *(undefined8 *)(puVar29 + lVar69 + 0x1d) = uVar44;
                        *(undefined8 *)((long)(puVar29 + lVar69 + 0x1d) + 8) = uVar5;
                        lVar69 = lVar69 + 0x20;
                        uVar74 = uVar74 - 4;
                      } while (uVar74 != 0);
                    }
                    if (uVar50 != 0) {
                      lVar33 = (lVar33 + lVar69) * 4;
                      lVar89 = 0;
                      do {
                        puVar42 = (undefined8 *)((long)puVar28 + lVar89 + lVar33);
                        uVar8 = puVar42[1];
                        puVar41 = (undefined8 *)((long)puVar28 + lVar89 + lVar33 + 0x10);
                        uVar44 = *puVar41;
                        uVar5 = puVar41[1];
                        puVar41 = (undefined8 *)((long)puVar29 + lVar89 + lVar69 * 4 + 4);
                        *puVar41 = *puVar42;
                        puVar41[1] = uVar8;
                        puVar41 = (undefined8 *)((long)puVar29 + lVar89 + lVar69 * 4 + 0x14);
                        *puVar41 = uVar44;
                        puVar41[1] = uVar5;
                        lVar89 = lVar89 + 0x20;
                      } while (uVar50 * 0x20 != lVar89);
                    }
                    puVar94 = puVar94 + uVar56;
                    if (uVar83 == uVar56) goto LAB_0024ccb4;
                    puVar85 = puVar85 + uVar56;
                  }
                  do {
                    *puVar94 = *puVar85;
                    puVar85 = puVar85 + 1;
                    puVar94 = puVar94 + 1;
                  } while (puVar85 != puVar87);
                }
LAB_0024ccb4:
                if (puVar28 != (undefined4 *)0x0) {
                  operator_delete(puVar28);
                }
                puStack_3d0 = puVar35 + uVar57;
                puStack_3e0 = puVar35;
                local_3d8 = puVar94;
                goto LAB_0024c43e;
              }
              if (puVar29 == puVar85) {
                uVar103 = uVar100;
                goto LAB_0024c7fa;
              }
              puVar28 = puVar29 + -1;
              *puVar29 = puVar29[-1];
              puVar29 = puVar29 + 1;
              if (0 < (long)puVar28 - (long)puVar85) {
                uVar50 = ((ulong)((long)puVar28 - (long)puVar85) >> 2) + 1;
                do {
                  *puVar28 = puVar28[-1];
                  puVar28 = puVar28 + -1;
                  uVar50 = uVar50 - 1;
                } while (1 < uVar50);
              }
              *puVar85 = uVar100;
              local_3d8 = puVar29;
            }
LAB_0024c450:
            p_Var27 = p_Var27 + 0x30;
          } while (p_Var27 != p_Var67);
        }
      }
                    /* try { // try from 0024ce30 to 0024ce63 has its CatchHandler @ 0025c9e0 */
      detail::RangedValues<juce::Colour>::mergeEqualItems
                ((RangedValues<juce::Colour> *)&local_3f8,uVar54,(long *)&local_328);
      detail::RangedValues<juce::Colour>::mergeEqualItems
                ((RangedValues<juce::Colour> *)&local_3f8,uVar78,(long *)&local_328);
      p_Stack_320 = local_328;
      local_be0 = local_be0 + 0x10;
    } while (local_be0 != local_b10);
  }
  do {
    p_Stack_9e8 = (_List_node_base *)0x7fffffffffffffff;
    if (local_a08 != (_List_node_base *)&local_a08) {
      plVar90 = *(long **)(local_a08 + 0x10);
      p_Var26 = local_a08;
      while( true ) {
        (**(code **)(*plVar90 + 0x20))(plVar90);
        cVar23 = (**(code **)(*plVar90 + 0x18))(plVar90);
        if (cVar23 == '\0') break;
        p_Var67 = (_List_node_base *)(**(code **)(*plVar90 + 0x10))(plVar90);
        if ((long)local_9f0 < (long)p_Var67) {
          local_9f0 = p_Var67;
        }
        do {
          (**(code **)(*plVar90 + 0x10))(plVar90);
          if ((long)extraout_RDX_08 < (long)p_Stack_9e8) {
            p_Stack_9e8 = extraout_RDX_08;
          }
          p_Var26 = *(_List_node_base **)p_Var26;
          if (p_Var26 == (_List_node_base *)&local_a08) goto LAB_0024cfb0;
          plVar90 = *(long **)(p_Var26 + 0x10);
        } while ((p_Var26 != local_a08) &&
                ((**(code **)(*plVar90 + 0x10))(plVar90), (long)local_9f0 < extraout_RDX_07
                    /* try { // try from 0024cf13 to 0024cf65 has its CatchHandler @ 0025ccf5 */));
      }
      break;
    }
LAB_0024cfb0:
                    /* try { // try from 0024cfb0 to 0024cfbc has its CatchHandler @ 0025c3af */
    std::__cxx11::list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>
    ::
    sort<juce::detail::IntersectingRangedValues<juce::Colour_const,std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>const>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
              ((_List_node_base *)&local_a08);
  } while ((long)p_Stack_9e8 <= (long)local_9f0);
  goto LAB_0024bcb0;
LAB_0024cfd8:
  p_Var26 = local_a08;
  while (p_Var26 != (_List_node_base *)&local_a08) {
    p_Var67 = *(_List_node_base **)p_Var26;
    operator_delete(p_Var26);
    p_Var26 = p_Var67;
  }
  if (local_328 != (_List_node_base *)0x0) {
    operator_delete(local_328);
  }
  pTVar19 = local_8c8;
  if (local_1e8 != (_List_node_base *)0x0) {
    operator_delete(local_1e8);
  }
  local_1c8 = (_List_node_base *)0x0;
  p_Stack_1c0 = (_List_node_base *)0x0;
  local_1d8 = (_List_node_base *)0x0;
  p_Stack_1d0 = (_List_node_base *)0x0;
  local_1e8 = (_List_node_base *)0x0;
  p_Stack_1e0 = (_List_node_base *)0x0;
  lVar33 = *(long *)(pTVar19 + 0x270);
  uVar78 = (ulong)(int)lVar33;
  uVar54 = lVar33 >> 0x20;
  if ((long)uVar54 <= (long)uVar78) {
    uVar54 = uVar78;
  }
                    /* try { // try from 0024d05c to 0024d075 has its CatchHandler @ 0025be87 */
  detail::RangedValues<signed_char>::set<juce::detail::MergeEqualItemsYes>
            ((RangedValues<signed_char> *)&local_1e8,uVar78,uVar54,1,(long *)&local_348);
  local_aa8 = (ulong *)0x0;
  puStack_aa0 = (ulong *)0x0;
  local_a98 = (ulong *)0x0;
  p_Stack_a90 = (_List_node_base *)0x0;
  local_a88 = (_List_node_base *)0x0;
  p_Stack_a80 = (_List_node_base *)0x0;
  local_328 = (_List_node_base *)0x0;
  p_Stack_320 = (_List_node_base *)0x0;
  local_318 = (_List_node_base *)0x0;
  local_8b8 = (undefined **)0x0;
  uStack_8b0 = (_List_node_base *)0x0;
  local_8a8 = (_List_node_base *)0x0;
  lVar33 = *(long *)(pTVar19 + 0x330);
  p_Stack_a70 = *(_List_node_base **)(lVar33 + 0x80);
  p_Stack_a68 = *(_List_node_base **)(lVar33 + 0x68);
  pppppppuStack_a48 = *(undefined8 ********)(lVar33 + 0x70);
  local_a78 = &PTR__RangedIterator_00710ae8;
  local_a40 = &PTR__RangedIterator_00710b88;
  local_a38 = p_Stack_1d0;
  p_Stack_a30 = local_1e8;
  local_a28 = local_1e8;
  p_Stack_a20 = p_Stack_1d0;
  local_a18 = local_1e8;
  p_Stack_a10 = p_Stack_1e0;
  local_a08 = (_List_node_base *)&local_a08;
  p_Stack_9f8 = (_List_node_base *)0x0;
  stack0xfffffffffffff7d0 = (_List_node_base *)local_838;
  local_838._0_8_ = local_838;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uStack_820;
  _auStack_828 = auVar11 << 0x40;
  local_a60 = p_Stack_a68;
  p_Stack_a58 = p_Stack_a70;
  local_a50 = p_Stack_a68;
  local_a00 = local_a08;
                    /* try { // try from 0024d1ad to 0024d1e5 has its CatchHandler @ 0025bf05 */
  p_Var26 = operator_new(0x18);
  *(undefined ****)(p_Var26 + 0x10) = &local_a40;
  std::__detail::_List_node_base::_M_hook(p_Var26);
  auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
  p_Var26 = operator_new(0x18);
  *(undefined ****)(p_Var26 + 0x10) = &local_a78;
  std::__detail::_List_node_base::_M_hook(p_Var26);
  auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
  p_Var26 = local_a08;
  while (p_Var26 != (_List_node_base *)&local_a08) {
    p_Var67 = *(_List_node_base **)p_Var26;
    operator_delete(p_Var26);
    p_Var26 = p_Var67;
  }
  if ((_List_node_base *)local_838._0_8_ == (_List_node_base *)local_838) {
    p_Stack_9f8 = (_List_node_base *)0x0;
    local_a08 = (_List_node_base *)&local_a08;
    local_a00 = (_List_node_base *)&local_a08;
  }
  else {
    local_a08 = (_List_node_base *)local_838._0_8_;
    local_a00 = stack0xfffffffffffff7d0;
    *(_List_node_base **)stack0xfffffffffffff7d0 = (_List_node_base *)&local_a08;
    *(_List_node_base **)(local_838._0_8_ + 8) = (_List_node_base *)&local_a08;
    p_Stack_9f8 = (_List_node_base *)auStack_828;
    p_Var26 = (_List_node_base *)local_838._0_8_;
    if ((_List_node_base *)local_838._0_8_ != (_List_node_base *)&local_a08) {
      do {
                    /* try { // try from 0024d2a7 to 0024d2a9 has its CatchHandler @ 0025c044 */
        cVar23 = (**(code **)(**(long **)(p_Var26 + 0x10) + 0x18))();
        if (cVar23 == '\0') {
          if (p_Var26 != (_List_node_base *)&local_a08) goto LAB_0024f940;
          break;
        }
        p_Var26 = *(_List_node_base **)p_Var26;
      } while (p_Var26 != (_List_node_base *)&local_a08);
    }
  }
  if (local_a08 == (_List_node_base *)&local_a08) {
    local_9f0 = (_List_node_base *)0x8000000000000000;
LAB_0024dae3:
    p_Stack_9e8 = (_List_node_base *)0x7fffffffffffffff;
LAB_0024daee:
    if ((long)local_9f0 < (long)p_Stack_9e8) goto LAB_0024f940;
  }
  else {
    p_Var67 = (_List_node_base *)0x8000000000000000;
    p_Var26 = local_a08;
    do {
                    /* try { // try from 0024d2f7 to 0024d2f9 has its CatchHandler @ 0025c124 */
      p_Var27 = (_List_node_base *)(**(code **)(**(long **)(p_Var26 + 0x10) + 0x10))();
      if ((long)p_Var67 < (long)p_Var27) {
        p_Var67 = p_Var27;
      }
      p_Var26 = *(_List_node_base **)p_Var26;
    } while (p_Var26 != (_List_node_base *)&local_a08);
    local_9f0 = p_Var67;
    if (local_a08 == (_List_node_base *)&local_a08) goto LAB_0024dae3;
    p_Var67 = (_List_node_base *)0x7fffffffffffffff;
    p_Var26 = local_a08;
    do {
                    /* try { // try from 0024d347 to 0024d349 has its CatchHandler @ 0025c0ad */
      (**(code **)(**(long **)(p_Var26 + 0x10) + 0x10))();
      if ((long)extraout_RDX_09 < (long)p_Var67) {
        p_Var67 = extraout_RDX_09;
      }
      p_Var26 = *(_List_node_base **)p_Var26;
    } while (p_Var26 != (_List_node_base *)&local_a08);
    p_Stack_9e8 = p_Var67;
    if ((local_a08 == (_List_node_base *)&local_a08) ||
       (*(_List_node_base **)local_a08 == (_List_node_base *)&local_a08)) goto LAB_0024daee;
    stack0xfffffffffffff7d0 = (_List_node_base *)local_838;
    local_838._0_8_ = (_List_node_base *)local_838;
    uStack_820 = (ulong)auStack_828;
    auStack_828 = (undefined1  [8])auStack_828;
    p_Stack_818 = (_List_node_base *)&p_Stack_818;
    pppppppuStack_808 = &pppppppuStack_808;
    local_7f8 = (_List_node_base *)&local_7f8;
    local_7e8 = (_List_node_base *)&local_7e8;
    local_7d8 = (_List_node_base *)&local_7d8;
    local_7b8 = (_List_node_base *)&local_7b8;
    p_Stack_7a8 = (_List_node_base *)&p_Stack_7a8;
    local_798 = &local_798;
    local_788 = &local_788;
    local_778 = &local_778;
    local_768 = &local_768;
    local_758 = &local_758;
    local_748 = &local_748;
    local_738 = &local_738;
    local_728 = &local_728;
    local_718 = &local_718;
    local_708 = &local_708;
    local_6f8 = &local_6f8;
    local_6e8 = &local_6e8;
    local_6d8 = &local_6d8;
    local_6c8 = &local_6c8;
    local_6b8 = &local_6b8;
    local_6a8 = &local_6a8;
    local_698 = &local_698;
    local_688 = &local_688;
    local_678 = &local_678;
    local_668 = &local_668;
    local_658 = &local_658;
    local_648 = &local_648;
    local_638 = &local_638;
    local_628 = &local_628;
    local_618 = &local_618;
    local_608 = &local_608;
    local_5f8 = &local_5f8;
    local_5e8 = &local_5e8;
    local_5d8 = &local_5d8;
    local_5c8 = &local_5c8;
    local_5b8 = &local_5b8;
    local_5a8 = &local_5a8;
    local_598 = &local_598;
    local_588 = &local_588;
    local_578 = &local_578;
    local_568 = &local_568;
    local_558 = &local_558;
    local_548 = &local_548;
    local_538 = &local_538;
    local_528 = &local_528;
    local_518 = &local_518;
    local_508 = &local_508;
    local_4f8 = &local_4f8;
    local_4e8 = &local_4e8;
    local_4d8 = &local_4d8;
    local_4c8 = &local_4c8;
    local_4b8 = &local_4b8;
    local_4a8 = &local_4a8;
    local_498 = &local_498;
    local_488 = &local_488;
    local_478 = &local_478;
    local_468 = &local_468;
    local_458 = &local_458;
    local_448 = &local_448;
    p_Var26 = (_List_node_base *)local_838;
    local_b88 = (_List_node_base *)&local_b88;
    p_Stack_b80 = (_List_node_base *)&local_b88;
    local_810 = p_Stack_818;
    local_800 = pppppppuStack_808;
    p_Stack_7f0 = local_7f8;
    p_Stack_7e0 = local_7e8;
    uStack_7d0 = local_7d8;
    local_7c8 = (_List_node_base *)&local_7c8;
    local_7c0 = (_List_node_base *)&local_7c8;
    local_7b0 = local_7b8;
    local_7a0 = p_Stack_7a8;
    local_790 = local_798;
    local_780 = local_788;
    local_770 = local_778;
    local_760 = local_768;
    local_750 = local_758;
    local_740 = local_748;
    local_730 = local_738;
    local_720 = local_728;
    local_710 = local_718;
    local_700 = local_708;
    local_6f0 = local_6f8;
    local_6e0 = local_6e8;
    local_6d0 = local_6d8;
    local_6c0 = local_6c8;
    local_6b0 = local_6b8;
    local_6a0 = local_6a8;
    local_690 = local_698;
    local_680 = local_688;
    local_670 = local_678;
    local_660 = local_668;
    local_650 = local_658;
    local_640 = local_648;
    local_630 = local_638;
    local_620 = local_628;
    local_610 = local_618;
    local_600 = local_608;
    local_5f0 = local_5f8;
    local_5e0 = local_5e8;
    local_5d0 = local_5d8;
    local_5c0 = local_5c8;
    local_5b0 = local_5b8;
    local_5a0 = local_5a8;
    local_590 = local_598;
    local_580 = local_588;
    local_570 = local_578;
    local_560 = local_568;
    local_550 = local_558;
    local_540 = local_548;
    local_530 = local_538;
    local_520 = local_528;
    local_510 = local_518;
    local_500 = local_508;
    local_4f0 = local_4f8;
    local_4e0 = local_4e8;
    local_4d0 = local_4d8;
    local_4c0 = local_4c8;
    local_4b0 = local_4b8;
    local_4a0 = local_4a8;
    local_490 = local_498;
    local_480 = local_488;
    local_470 = local_478;
    local_460 = local_468;
    local_450 = local_458;
    local_440 = local_448;
    do {
      p_Var67 = p_Var26;
      p_Var26 = (_List_node_base *)local_838;
      std::__detail::_List_node_base::_M_transfer((_List_node_base *)&local_b88,local_a08);
      _local_c08 = p_Var67;
      if (p_Var26 == p_Var67) {
        uVar54 = 1;
      }
      else {
        do {
          p_Var72 = p_Var26;
          p_Var27 = *(_List_node_base **)p_Var72;
          if (p_Var27 == p_Var72) {
            p_Var26 = p_Var72;
            goto LAB_0024dac3;
          }
          if (local_b88 != (_List_node_base *)&local_b88) {
            p_Var26 = p_Var27;
            p_Var39 = local_b88;
            do {
                    /* try { // try from 0024da55 to 0024da64 has its CatchHandler @ 0025c7e5 */
              (**(code **)(**(long **)(p_Var39 + 0x10) + 0x10))();
              (**(code **)(**(long **)(p_Var26 + 0x10) + 0x10))();
              if (extraout_RDX_10 < extraout_RDX_11) {
                p_Var40 = *(_List_node_base **)p_Var39;
                std::__detail::_List_node_base::_M_transfer(p_Var26,p_Var39);
                p_Var39 = p_Var40;
              }
              else {
                p_Var26 = *(_List_node_base **)p_Var26;
              }
            } while ((p_Var26 != p_Var72) && (p_Var39 != (_List_node_base *)&local_b88));
            if (p_Var39 != (_List_node_base *)&local_b88) {
              std::__detail::_List_node_base::_M_transfer(p_Var72,p_Var39);
            }
          }
          std::__detail::_List_node_base::swap((_List_node_base *)&local_b88,p_Var72);
          p_Var26 = p_Var72 + 0x10;
        } while (p_Var72 + 0x10 != p_Var67);
        p_Var26 = p_Var67;
LAB_0024dac3:
        uVar54 = (ulong)(p_Var27 != p_Var72);
      }
      std::__detail::_List_node_base::swap((_List_node_base *)&local_b88,p_Var26);
      p_Var26 = p_Var67 + uVar54 * 0x10;
    } while (local_a08 != (_List_node_base *)&local_a08);
    for (p_Var26 = (_List_node_base *)auStack_828; p_Var26 != p_Var67 + uVar54 * 0x10;
        p_Var26 = p_Var26 + 0x10) {
      p_Var27 = p_Var26 + -0x10;
      p_Var72 = *(_List_node_base **)p_Var26;
      p_Var39 = *(_List_node_base **)(p_Var26 + -0x10);
      while( true ) {
        bVar98 = p_Var39 != p_Var27;
        p_Var40 = p_Var39;
        if (p_Var72 == p_Var26) break;
        while( true ) {
          p_Var39 = p_Var40;
          if (p_Var40 == p_Var27) goto LAB_0024dcb0;
                    /* try { // try from 0024dc7b to 0024dc8a has its CatchHandler @ 0025c294 */
          (**(code **)(**(long **)(p_Var40 + 0x10) + 0x10))();
          (**(code **)(**(long **)(p_Var72 + 0x10) + 0x10))();
          if (extraout_RDX_15 <= extraout_RDX_14) break;
          p_Var39 = *(_List_node_base **)p_Var40;
          std::__detail::_List_node_base::_M_transfer(p_Var72,p_Var40);
          bVar98 = p_Var39 != p_Var27;
          p_Var40 = p_Var39;
          if (p_Var72 == p_Var26) goto LAB_0024dcb0;
        }
        p_Var72 = *(_List_node_base **)p_Var72;
      }
LAB_0024dcb0:
      if (bVar98) {
        std::__detail::_List_node_base::_M_transfer(p_Var26,p_Var39);
      }
    }
    p_Var26 = p_Var67 + -0x10;
    if ((char)uVar54 != '\0') {
      p_Var26 = p_Var67;
    }
    std::__detail::_List_node_base::swap(p_Var26,(_List_node_base *)&local_a08);
    if ((long)local_9f0 < (long)p_Stack_9e8) goto LAB_0024f940;
  }
  do {
    p_Stack_9e8 = (_List_node_base *)0x7fffffffffffffff;
    if (local_a08 != (_List_node_base *)&local_a08) {
      plVar90 = *(long **)(local_a08 + 0x10);
      p_Var26 = local_a08;
      while( true ) {
        (**(code **)(*plVar90 + 0x20))(plVar90);
        cVar23 = (**(code **)(*plVar90 + 0x18))(plVar90);
        if (cVar23 == '\0') break;
        p_Var67 = (_List_node_base *)(**(code **)(*plVar90 + 0x10))(plVar90);
        if ((long)local_9f0 < (long)p_Var67) {
          local_9f0 = p_Var67;
        }
        do {
          (**(code **)(*plVar90 + 0x10))(plVar90);
          if ((long)extraout_RDX_13 < (long)p_Stack_9e8) {
            p_Stack_9e8 = extraout_RDX_13;
          }
          p_Var26 = *(_List_node_base **)p_Var26;
          if (p_Var26 == (_List_node_base *)&local_a08) goto LAB_0024dbd0;
          plVar90 = *(long **)(p_Var26 + 0x10);
        } while ((p_Var26 != local_a08) &&
                ((**(code **)(*plVar90 + 0x10))(plVar90), (long)local_9f0 < extraout_RDX_12
                    /* try { // try from 0024db33 to 0024db85 has its CatchHandler @ 0025c257 */));
      }
      break;
    }
LAB_0024dbd0:
                    /* try { // try from 0024dbd0 to 0024dbdc has its CatchHandler @ 0025beb2 */
    std::__cxx11::list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>
    ::
    sort<juce::detail::IntersectingRangedValues<signed_char_const,std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>const>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
              ((_List_node_base *)&local_a08);
  } while ((long)p_Stack_9e8 <= (long)local_9f0);
LAB_0024f940:
  local_810 = local_a50;
  pppppppuStack_808 = pppppppuStack_a48;
  p_Stack_818 = p_Stack_a58;
  stack0xfffffffffffff7d0 = p_Stack_a70;
  local_838._0_8_ = &PTR__RangedIterator_00710ae8;
  uStack_820 = (ulong)local_a60;
  auStack_828 = (undefined1  [8])p_Stack_a68;
  local_800 = (undefined8 *******)&PTR__RangedIterator_00710b88;
  local_7d8 = local_a18;
  uStack_7d0 = p_Stack_a10;
  local_7e8 = local_a28;
  p_Stack_7e0 = p_Stack_a20;
  local_7f8 = local_a38;
  p_Stack_7f0 = p_Stack_a30;
  local_7b8 = (_List_node_base *)0x0;
  p_Var26 = local_a08;
  local_7c8 = (_List_node_base *)&local_7c8;
  local_7c0 = (_List_node_base *)&local_7c8;
  if (local_a08 == (_List_node_base *)&local_a08) {
    local_7b0 = local_9f0;
    p_Stack_7a8 = p_Stack_9e8;
  }
  else {
    do {
                    /* try { // try from 0024f9e0 to 0024f9e9 has its CatchHandler @ 0025c6fd */
      p_Var67 = operator_new(0x18);
      *(long *)(p_Var67 + 0x10) = *(long *)(p_Var26 + 0x10);
      std::__detail::_List_node_base::_M_hook(p_Var67);
      local_7b8 = local_7b8 + 1;
      p_Var26 = *(_List_node_base **)p_Var26;
    } while (p_Var26 != (_List_node_base *)&local_a08);
    local_7b0 = local_9f0;
    p_Stack_7a8 = p_Stack_9e8;
    p_Var26 = local_7c8;
    if (local_7c8 != (_List_node_base *)&local_7c8) {
      do {
                    /* try { // try from 0024fa57 to 0024fa59 has its CatchHandler @ 0025c465 */
        cVar23 = (**(code **)(**(long **)(p_Var26 + 0x10) + 0x18))();
        p_Var67 = local_7c8;
        p_Var27 = p_Var26;
        if (cVar23 == '\0') break;
        p_Var26 = *(_List_node_base **)p_Var26;
        p_Var27 = (_List_node_base *)&local_7c8;
      } while (p_Var26 != (_List_node_base *)&local_7c8);
      while (p_Var67 != (_List_node_base *)&local_7c8) {
        p_Var26 = *(_List_node_base **)p_Var67;
        operator_delete(p_Var67);
        p_Var67 = p_Var26;
      }
      if (p_Var27 != (_List_node_base *)&local_7c8) goto code_r0x0024fa99;
    }
  }
  p_Var72 = p_Stack_9e8;
  p_Var27 = local_9f0;
  p_Var67 = local_a38;
  p_Var26 = p_Stack_a70;
  local_b10 = local_a28 + -(long)p_Stack_a30;
  lVar33 = (long)local_a60 - (long)p_Stack_a68;
                    /* try { // try from 0024dd95 to 0024dd99 has its CatchHandler @ 0025c280 */
  pPVar38 = ParagraphStorage::getShapedText(*(ParagraphStorage **)(p_Stack_a70 + (lVar33 >> 1)));
  lVar33 = lVar33 >> 4;
  if ((long)p_Var72 <= (long)p_Var27) {
    p_Var72 = p_Var27;
  }
  lVar89 = (long)p_Var27 - *(long *)(*(long *)(p_Var26 + lVar33 * 8) + 0x20);
  lVar69 = (long)p_Var72 - *(long *)(*(long *)(p_Var26 + lVar33 * 8) + 0x20);
  if (lVar69 <= lVar89) {
    lVar69 = lVar89;
  }
                    /* try { // try from 0024ddbd to 0024ddcf has its CatchHandler @ 0025c27b */
  detail::ShapedText::getGlyphRanges(*(long *)pPVar38,lVar89,lVar69,(long *)&local_328);
  local_be8 = local_328;
  local_b38 = p_Stack_320;
  if (local_328 != p_Stack_320) {
    local_b10 = (_List_node_base *)((long)local_b10 >> 4);
    local_b58._0_8_ = p_Var26;
    do {
      pPVar38 = *(ParagraphStorage **)(p_Var26 + lVar33 * 8);
      lVar69 = *(long *)(pPVar38 + 0x30);
      lVar89 = *(long *)(lVar69 + 0x70) - *(long *)(lVar69 + 0x68);
      if (lVar89 == 0) {
        lVar69 = 0;
      }
      else {
        lVar37 = *(long *)(lVar69 + 0x80);
        lVar88 = (lVar89 >> 4) * 0x10;
        lVar89 = 0;
        lVar69 = 0;
        do {
          while( true ) {
            pPVar32 = *(ParagraphStorage **)(lVar37 + (lVar89 >> 1));
            if (pPVar32 == pPVar38) goto LAB_0024ded3;
            if (pPVar32[0x60] != (ParagraphStorage)0x0) break;
                    /* try { // try from 0024de95 to 0024de9c has its CatchHandler @ 0025c9ec */
            pPVar36 = ParagraphStorage::getShapedText(pPVar32);
            lVar80 = *(long *)(*(long *)pPVar36 + 0x90) - *(long *)(*(long *)pPVar36 + 0x88) >> 5;
            *(long *)(pPVar32 + 0x58) = lVar80;
            pPVar32[0x60] = (ParagraphStorage)0x1;
            lVar69 = lVar69 + lVar80;
            lVar89 = lVar89 + 0x10;
            if (lVar88 == lVar89) goto LAB_0024ded3;
          }
          lVar69 = lVar69 + *(long *)(pPVar32 + 0x58);
          lVar89 = lVar89 + 0x10;
        } while (lVar88 != lVar89);
      }
LAB_0024ded3:
      uVar54 = *(long *)local_be8 + lVar69;
      uVar78 = lVar69 + *(long *)(local_be8 + 8);
      if ((long)uVar78 <= (long)uVar54) {
        uVar78 = uVar54;
      }
      _local_c08 = uVar78;
      _Var24 = p_Var67[(long)local_b10];
      lVar69 = (long)uStack_8b0 - (long)local_8b8;
      if (*(long *)local_be8 < *(long *)(local_be8 + 8)) {
                    /* try { // try from 0024df28 to 0024e21c has its CatchHandler @ 0025c859 */
        detail::Ranges::erase((Ranges *)&local_aa8,uVar54,uVar78,&local_8b8);
        plVar20 = (long *)uStack_8b0;
        plVar90 = (long *)local_8b8;
        puVar60 = local_aa8;
        if (0 < (long)puStack_aa0 - (long)local_aa8) {
          uVar50 = (ulong)((long)puStack_aa0 - (long)local_aa8) >> 4;
          do {
            uVar57 = uVar50 >> 1;
            uVar74 = uVar57;
            if ((long)puVar60[uVar57 * 2] < (long)uVar54) {
              uVar74 = ~uVar57 + uVar50;
              puVar60 = puVar60 + uVar57 * 2 + 2;
            }
            uVar50 = uVar74;
          } while (0 < (long)uVar74);
        }
        lVar89 = (long)puVar60 - (long)local_aa8 >> 4;
        if (uStack_8b0 == local_8a8) {
          lVar37 = (long)uStack_8b0 - (long)local_8b8;
          if (lVar37 == 0x7fffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("vector::_M_realloc_insert");
          }
          lVar88 = lVar37 >> 4;
          uVar74 = lVar88 * -0x5555555555555555;
          uVar50 = uVar74;
          if (lVar37 == 0) {
            uVar50 = 1;
          }
          uVar57 = uVar50 + uVar74;
          if (0x2aaaaaaaaaaaaaa < uVar57) {
            uVar57 = 0x2aaaaaaaaaaaaaa;
          }
          if (CARRY8(uVar50,uVar74)) {
            uVar57 = 0x2aaaaaaaaaaaaaa;
          }
          plVar30 = operator_new(uVar57 * 0x30);
          plVar30[lVar88 * 2] = lVar89;
          *(undefined1 *)(plVar30 + lVar88 * 2 + 5) = 0;
          plVar68 = plVar30;
          if (plVar90 != plVar20) {
            plVar31 = plVar90;
            do {
              lVar88 = *plVar31;
              lVar80 = plVar31[1];
              lVar89 = plVar31[2];
              lVar37 = plVar31[3];
              lVar9 = plVar31[5];
              plVar68[4] = plVar31[4];
              plVar68[5] = lVar9;
              plVar68[2] = lVar89;
              plVar68[3] = lVar37;
              *plVar68 = lVar88;
              plVar68[1] = lVar80;
              plVar31 = plVar31 + 6;
              plVar68 = plVar68 + 6;
            } while (plVar31 != plVar20);
          }
          if (plVar90 != (long *)0x0) {
            operator_delete(plVar90);
          }
          local_8a8 = (_List_node_base *)(plVar30 + uVar57 * 6);
          local_8b8 = (undefined **)plVar30;
        }
        else {
          *(long *)uStack_8b0 = lVar89;
          *(undefined1 *)((long)uStack_8b0 + 0x28) = 0;
          plVar68 = (long *)uStack_8b0;
        }
        puVar52 = puStack_aa0;
        puVar55 = local_aa8;
        uStack_8b0 = (_List_node_base *)(plVar68 + 6);
        lVar89 = (long)puVar60 - (long)local_aa8;
        lVar37 = lVar89 >> 4;
        if (puStack_aa0 == local_a98) {
          lVar88 = (long)puStack_aa0 - (long)local_aa8;
          if (lVar88 == 0x7ffffffffffffff0) {
                    /* try { // try from 0025bcc5 to 0025bcdc has its CatchHandler @ 0025c9d3 */
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("vector::_M_realloc_insert");
          }
          uVar74 = lVar88 >> 4;
          uVar50 = uVar74;
          if (lVar88 == 0) {
            uVar50 = 1;
          }
          uVar57 = uVar50 + uVar74;
          if (0x7ffffffffffffff < uVar57) {
            uVar57 = 0x7ffffffffffffff;
          }
          if (CARRY8(uVar50,uVar74)) {
            uVar57 = 0x7ffffffffffffff;
          }
          puVar71 = operator_new(uVar57 * 0x10);
          puVar60 = puVar55 + lVar37 * 2;
          puVar71[lVar37 * 2] = uVar54;
          puVar71[lVar37 * 2 + 1] = uVar78;
          puVar61 = puVar71;
          if (lVar89 != 0) {
            lVar89 = 0;
            do {
              uVar44 = ((undefined8 *)((long)puVar55 + lVar89))[1];
              *(undefined8 *)((long)puVar71 + lVar89) = *(undefined8 *)((long)puVar55 + lVar89);
              ((undefined8 *)((long)puVar71 + lVar89))[1] = uVar44;
              lVar89 = lVar89 + 0x10;
            } while (lVar37 * 0x10 != lVar89);
            puVar61 = (ulong *)(lVar89 + (long)puVar71);
          }
          for (; puVar61 = puVar61 + 2, puVar52 != puVar60; puVar60 = puVar60 + 2) {
            uVar50 = puVar60[1];
            *puVar61 = *puVar60;
            puVar61[1] = uVar50;
          }
          if (puVar55 != (ulong *)0x0) {
            operator_delete(puVar55);
          }
          local_a98 = puVar71 + uVar57 * 2;
          local_aa8 = puVar71;
          puStack_aa0 = puVar61;
        }
        else if (puStack_aa0 == puVar60) {
          *puVar60 = uVar54;
          puVar60[1] = uVar78;
          puStack_aa0 = puStack_aa0 + 2;
        }
        else {
          puVar60 = local_aa8 + lVar37 * 2;
          *puStack_aa0 = puStack_aa0[-2];
          puStack_aa0[1] = puStack_aa0[-1];
          puVar55 = puStack_aa0 + -2;
          if (0 < (long)puVar55 - (long)puVar60) {
            uVar50 = ((ulong)((long)puVar55 - (long)puVar60) >> 4) + 1;
            do {
              *puVar55 = puVar55[-2];
              puVar55[1] = puVar55[-1];
              puVar55 = puVar55 + -2;
              uVar50 = uVar50 - 1;
            } while (1 < uVar50);
          }
          *(char *)puVar60 = (char)uVar54;
          *(int *)((long)puVar60 + 1) = (int)(uVar54 >> 8);
          *(char *)((long)puVar60 + 7) = (char)(uVar54 >> 0x38);
          *(short *)((long)puVar60 + 5) = (short)(uVar54 >> 0x28);
          local_aa8[lVar37 * 2 + 1] = uVar78;
          puStack_aa0 = puStack_aa0 + 2;
        }
      }
      if ((long)uStack_8b0 - (long)local_8b8 != 0) {
        lVar69 = lVar69 >> 4;
        uVar50 = ((long)uStack_8b0 - (long)local_8b8 >> 4) * -0x5555555555555555;
        bVar98 = uVar50 < (ulong)(lVar69 * -0x5555555555555555);
        lVar89 = uVar50 + lVar69 * 0x5555555555555555;
        if (!bVar98 && lVar89 != 0) {
          if (bVar98) {
            lVar89 = 0;
          }
          puVar55 = (ulong *)(local_8b8 + lVar69 * 2);
          puVar60 = puVar55 + lVar89 * 6;
          do {
            p_Var27 = local_a88;
            p_Var26 = p_Stack_a90;
            cVar23 = (char)puVar55[5];
            if (cVar23 == '\x02') {
              uVar50 = *puVar55;
              uVar74 = puVar55[1];
              if (uVar50 == uVar74) goto LAB_0024e347;
              p_Var26 = p_Stack_a90 + uVar50;
              p_Var27 = p_Stack_a90 + uVar74;
              p_Var72 = local_a88 + -(long)p_Var27;
              if ((p_Var72 != (_List_node_base *)0x0) && (0 < (long)p_Var72)) {
                if ((p_Var72 < (_List_node_base *)0x8) ||
                   ((p_Var26 < local_a88 + ~(ulong)p_Stack_a90 + (long)p_Stack_a90 + 1 &&
                    (p_Var27 < p_Stack_a90 + (long)(local_a88 + ~(ulong)p_Var27 + uVar50) + 1)))) {
                  p_Var40 = p_Var27;
                  p_Var39 = p_Var26;
LAB_0024e590:
                  p_Var72 = p_Var72 + 1;
                  lVar69 = 0;
                  do {
                    p_Var39[lVar69] = p_Var40[lVar69];
                    p_Var72 = p_Var72 + -1;
                    lVar69 = lVar69 + 1;
                  } while ((_List_node_base *)0x1 < p_Var72);
                }
                else if (p_Var72 < (_List_node_base *)0x20) {
                  p_Var49 = (_List_node_base *)0x0;
LAB_0024ee0e:
                  p_Var40 = (_List_node_base *)
                            ((ulong)(local_a88 +
                                    (-(long)(p_Stack_a90 + uVar74) -
                                    (ulong)(p_Stack_a90 + uVar74 != local_a88)) + 1) &
                            0xfffffffffffffff8);
                  p_Var39 = p_Var26 + (long)p_Var40;
                  do {
                    *(undefined8 *)(p_Var26 + (long)p_Var49) =
                         *(undefined8 *)(p_Var27 + (long)p_Var49);
                    p_Var49 = p_Var49 + 8;
                  } while (p_Var40 != p_Var49);
                  if (local_a88 +
                      (-(long)(p_Stack_a90 + uVar74) - (ulong)(p_Stack_a90 + uVar74 != local_a88)) +
                      1 != p_Var40) {
                    p_Var72 = p_Var72 + -(long)p_Var40;
                    p_Var40 = p_Var27 + (long)p_Var40;
                    goto LAB_0024e590;
                  }
                }
                else {
                  p_Var49 = (_List_node_base *)((ulong)p_Var72 & 0xffffffffffffffe0);
                  uVar57 = ((ulong)(p_Var49 + -0x20) >> 5) + 1;
                  uVar56 = (ulong)((uint)uVar57 & 3);
                  if (p_Var49 + -0x20 < (_List_node_base *)0x60) {
                    lVar69 = 0;
                  }
                  else {
                    uVar57 = uVar57 & 0xffffffffffffffc;
                    lVar69 = 0;
                    do {
                      uVar44 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar74 + 8);
                      uVar5 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar74 + 0x10);
                      uVar8 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar74 + 0x10 + 8);
                      *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50) =
                           *(undefined8 *)(p_Stack_a90 + lVar69 + uVar74);
                      *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 8) = uVar44;
                      *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x10) = uVar5;
                      *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x10 + 8) = uVar8;
                      uVar44 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar74 + 0x20 + 8);
                      uVar5 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar74 + 0x30);
                      uVar8 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar74 + 0x30 + 8);
                      *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x20) =
                           *(undefined8 *)(p_Stack_a90 + lVar69 + uVar74 + 0x20);
                      *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x20 + 8) = uVar44;
                      *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x30) = uVar5;
                      *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x30 + 8) = uVar8;
                      uVar44 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar74 + 0x40 + 8);
                      uVar5 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar74 + 0x50);
                      uVar8 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar74 + 0x50 + 8);
                      *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x40) =
                           *(undefined8 *)(p_Stack_a90 + lVar69 + uVar74 + 0x40);
                      *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x40 + 8) = uVar44;
                      *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x50) = uVar5;
                      *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x50 + 8) = uVar8;
                      uVar8 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar74 + 0x60 + 8);
                      uVar44 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar74 + 0x70);
                      uVar5 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar74 + 0x70 + 8);
                      *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x60) =
                           *(undefined8 *)(p_Stack_a90 + lVar69 + uVar74 + 0x60);
                      *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x60 + 8) = uVar8;
                      *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x70) = uVar44;
                      *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x70 + 8) = uVar5;
                      lVar69 = lVar69 + 0x80;
                      uVar57 = uVar57 - 4;
                    } while (uVar57 != 0);
                  }
                  if (uVar56 != 0) {
                    lVar89 = 0;
                    do {
                      uVar8 = *(undefined8 *)(p_Stack_a90 + lVar89 + lVar69 + uVar74 + 8);
                      uVar44 = *(undefined8 *)(p_Stack_a90 + lVar89 + lVar69 + uVar74 + 0x10);
                      uVar5 = *(undefined8 *)(p_Stack_a90 + lVar89 + lVar69 + uVar74 + 0x10 + 8);
                      *(undefined8 *)(p_Stack_a90 + lVar89 + uVar50 + lVar69) =
                           *(undefined8 *)(p_Stack_a90 + lVar89 + lVar69 + uVar74);
                      *(undefined8 *)(p_Stack_a90 + lVar89 + uVar50 + lVar69 + 8) = uVar8;
                      *(undefined8 *)(p_Stack_a90 + lVar89 + uVar50 + lVar69 + 0x10) = uVar44;
                      *(undefined8 *)(p_Stack_a90 + lVar89 + uVar50 + lVar69 + 0x10 + 8) = uVar5;
                      lVar89 = lVar89 + 0x20;
                    } while (uVar56 * 0x20 != lVar89);
                  }
                  if (p_Var72 != p_Var49) {
                    if (((ulong)p_Var72 & 0x18) == 0) {
                      p_Var40 = p_Var27 + (long)p_Var49;
                      p_Var39 = p_Var26 + (long)p_Var49;
                      p_Var72 = (_List_node_base *)(ulong)((uint)p_Var72 & 0x1f);
                      goto LAB_0024e590;
                    }
                    goto LAB_0024ee0e;
                  }
                }
                p_Var72 = local_a88 + -(long)p_Var27;
              }
              if (local_a88 != p_Var26 + (long)p_Var72) {
                local_a88 = p_Var26 + (long)p_Var72;
              }
            }
            else if (cVar23 == '\x01') {
              uVar50 = *puVar55;
              p_Var72 = p_Stack_a90 + uVar50;
              if (local_a88 == p_Stack_a80) {
                uVar74 = (long)local_a88 - (long)p_Stack_a90;
                if (uVar74 == 0x7fffffffffffffff) {
                    /* try { // try from 0025bc7d to 0025bc94 has its CatchHandler @ 0025c9d3 */
                    /* WARNING: Subroutine does not return */
                  std::__throw_length_error("vector::_M_realloc_insert");
                }
                uVar57 = uVar74;
                if (uVar74 == 0) {
                  uVar57 = 1;
                }
                local_ba8 = (_List_node_base *)(uVar57 + uVar74);
                if ((long)local_ba8 < 0) {
                  local_ba8 = (_List_node_base *)0x7fffffffffffffff;
                }
                if (CARRY8(uVar57,uVar74)) {
                  local_ba8 = (_List_node_base *)0x7fffffffffffffff;
                }
                if (local_ba8 == (_List_node_base *)0x0) {
                  p_Var39 = (_List_node_base *)0x0;
                }
                else {
                    /* try { // try from 0024e61f to 0024e676 has its CatchHandler @ 0025c9bd */
                  p_Var39 = operator_new((ulong)local_ba8);
                }
                p_Var39[uVar50] = *p_Var72;
                if ((long)uVar50 < 1) {
                  p_Var40 = p_Var39 + uVar50;
                }
                else {
                  p_Var40 = p_Var39;
                  p_Var49 = p_Var26;
                  if (0x1f < uVar50) {
                    uVar57 = uVar50 & 0xffffffffffffffe0;
                    uVar56 = (uVar57 - 0x20 >> 5) + 1;
                    uVar74 = (ulong)((uint)uVar56 & 3);
                    if (uVar57 - 0x20 < 0x60) {
                      lVar69 = 0;
                    }
                    else {
                      uVar56 = uVar56 & 0xffffffffffffffc;
                      lVar69 = 0;
                      do {
                        uVar44 = *(undefined8 *)(p_Var26 + lVar69 + 8);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar69 + 0x10);
                        uVar8 = *(undefined8 *)(p_Var26 + lVar69 + 0x10 + 8);
                        *(undefined8 *)(p_Var39 + lVar69) = *(undefined8 *)(p_Var26 + lVar69);
                        *(undefined8 *)(p_Var39 + lVar69 + 8) = uVar44;
                        *(undefined8 *)(p_Var39 + lVar69 + 0x10) = uVar5;
                        *(undefined8 *)(p_Var39 + lVar69 + 0x10 + 8) = uVar8;
                        uVar44 = *(undefined8 *)(p_Var26 + lVar69 + 0x20 + 8);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar69 + 0x30);
                        uVar8 = *(undefined8 *)(p_Var26 + lVar69 + 0x30 + 8);
                        *(undefined8 *)(p_Var39 + lVar69 + 0x20) =
                             *(undefined8 *)(p_Var26 + lVar69 + 0x20);
                        *(undefined8 *)(p_Var39 + lVar69 + 0x20 + 8) = uVar44;
                        *(undefined8 *)(p_Var39 + lVar69 + 0x30) = uVar5;
                        *(undefined8 *)(p_Var39 + lVar69 + 0x30 + 8) = uVar8;
                        uVar44 = *(undefined8 *)(p_Var26 + lVar69 + 0x40 + 8);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar69 + 0x50);
                        uVar8 = *(undefined8 *)(p_Var26 + lVar69 + 0x50 + 8);
                        *(undefined8 *)(p_Var39 + lVar69 + 0x40) =
                             *(undefined8 *)(p_Var26 + lVar69 + 0x40);
                        *(undefined8 *)(p_Var39 + lVar69 + 0x40 + 8) = uVar44;
                        *(undefined8 *)(p_Var39 + lVar69 + 0x50) = uVar5;
                        *(undefined8 *)(p_Var39 + lVar69 + 0x50 + 8) = uVar8;
                        uVar8 = *(undefined8 *)(p_Var26 + lVar69 + 0x60 + 8);
                        uVar44 = *(undefined8 *)(p_Var26 + lVar69 + 0x70);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar69 + 0x70 + 8);
                        *(undefined8 *)(p_Var39 + lVar69 + 0x60) =
                             *(undefined8 *)(p_Var26 + lVar69 + 0x60);
                        *(undefined8 *)(p_Var39 + lVar69 + 0x60 + 8) = uVar8;
                        *(undefined8 *)(p_Var39 + lVar69 + 0x70) = uVar44;
                        *(undefined8 *)(p_Var39 + lVar69 + 0x70 + 8) = uVar5;
                        lVar69 = lVar69 + 0x80;
                        uVar56 = uVar56 - 4;
                      } while (uVar56 != 0);
                    }
                    if (uVar74 != 0) {
                      lVar89 = 0;
                      do {
                        uVar8 = *(undefined8 *)(p_Var26 + lVar89 + lVar69 + 8);
                        uVar44 = *(undefined8 *)(p_Var26 + lVar89 + lVar69 + 0x10);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar89 + lVar69 + 0x10 + 8);
                        *(undefined8 *)(p_Var39 + lVar89 + lVar69) =
                             *(undefined8 *)(p_Var26 + lVar89 + lVar69);
                        *(undefined8 *)(p_Var39 + lVar89 + lVar69 + 8) = uVar8;
                        *(undefined8 *)(p_Var39 + lVar89 + lVar69 + 0x10) = uVar44;
                        *(undefined8 *)(p_Var39 + lVar89 + lVar69 + 0x10 + 8) = uVar5;
                        lVar89 = lVar89 + 0x20;
                      } while (uVar74 * 0x20 != lVar89);
                    }
                    p_Var40 = p_Var39 + uVar57;
                    if (uVar50 == uVar57) goto LAB_0024e932;
                    p_Var49 = p_Var26 + uVar57;
                  }
                  do {
                    *p_Var40 = *p_Var49;
                    p_Var49 = p_Var49 + 1;
                    p_Var40 = p_Var40 + 1;
                  } while (p_Var49 != p_Var72);
                }
LAB_0024e932:
                p_Var49 = p_Var40 + 1;
                if ((long)p_Var27 - (long)p_Var72 < 1) {
                  p_Var49 = p_Var49 + ((long)p_Var27 - (long)p_Var72);
                }
                else if (p_Var27 != p_Var72) {
                  uVar74 = (long)p_Var27 - (long)(p_Var26 + uVar50);
                  if (0x1f < uVar74) {
                    uVar83 = uVar74 & 0xffffffffffffffe0;
                    uVar56 = (uVar83 - 0x20 >> 5) + 1;
                    uVar57 = (ulong)((uint)uVar56 & 3);
                    if (uVar83 - 0x20 < 0x60) {
                      lVar69 = 0;
                    }
                    else {
                      uVar56 = uVar56 & 0xffffffffffffffc;
                      lVar69 = 0;
                      do {
                        uVar44 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 8);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x10);
                        uVar8 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x10 + 8);
                        *(undefined8 *)(p_Var40 + lVar69 + 1) =
                             *(undefined8 *)(p_Var26 + lVar69 + uVar50);
                        *(undefined8 *)(p_Var40 + lVar69 + 1 + 8) = uVar44;
                        *(undefined8 *)(p_Var40 + lVar69 + 0x11) = uVar5;
                        *(undefined8 *)(p_Var40 + lVar69 + 0x11 + 8) = uVar8;
                        uVar44 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x20 + 8);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x30);
                        uVar8 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x30 + 8);
                        *(undefined8 *)(p_Var40 + lVar69 + 0x21) =
                             *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x20);
                        *(undefined8 *)(p_Var40 + lVar69 + 0x21 + 8) = uVar44;
                        *(undefined8 *)(p_Var40 + lVar69 + 0x31) = uVar5;
                        *(undefined8 *)(p_Var40 + lVar69 + 0x31 + 8) = uVar8;
                        uVar44 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x40 + 8);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x50);
                        uVar8 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x50 + 8);
                        *(undefined8 *)(p_Var40 + lVar69 + 0x41) =
                             *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x40);
                        *(undefined8 *)(p_Var40 + lVar69 + 0x41 + 8) = uVar44;
                        *(undefined8 *)(p_Var40 + lVar69 + 0x51) = uVar5;
                        *(undefined8 *)(p_Var40 + lVar69 + 0x51 + 8) = uVar8;
                        uVar8 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x60 + 8);
                        uVar44 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x70);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x70 + 8);
                        *(undefined8 *)(p_Var40 + lVar69 + 0x61) =
                             *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x60);
                        *(undefined8 *)(p_Var40 + lVar69 + 0x61 + 8) = uVar8;
                        *(undefined8 *)(p_Var40 + lVar69 + 0x71) = uVar44;
                        *(undefined8 *)(p_Var40 + lVar69 + 0x71 + 8) = uVar5;
                        lVar69 = lVar69 + 0x80;
                        uVar56 = uVar56 - 4;
                      } while (uVar56 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar89 = 0;
                      do {
                        uVar8 = *(undefined8 *)(p_Var26 + lVar89 + uVar50 + lVar69 + 8);
                        uVar44 = *(undefined8 *)(p_Var26 + lVar89 + uVar50 + lVar69 + 0x10);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar89 + uVar50 + lVar69 + 0x10 + 8);
                        *(undefined8 *)(p_Var40 + lVar89 + lVar69 + 1) =
                             *(undefined8 *)(p_Var26 + lVar89 + uVar50 + lVar69);
                        *(undefined8 *)(p_Var40 + lVar89 + lVar69 + 1 + 8) = uVar8;
                        *(undefined8 *)(p_Var40 + lVar89 + lVar69 + 0x11) = uVar44;
                        *(undefined8 *)(p_Var40 + lVar89 + lVar69 + 0x11 + 8) = uVar5;
                        lVar89 = lVar89 + 0x20;
                      } while (uVar57 * 0x20 != lVar89);
                    }
                    p_Var49 = p_Var49 + uVar83;
                    if (uVar74 == uVar83) goto LAB_0024ebc5;
                    p_Var72 = p_Var72 + uVar83;
                  }
                  do {
                    *p_Var49 = *p_Var72;
                    p_Var72 = p_Var72 + 1;
                    p_Var49 = p_Var49 + 1;
                  } while (p_Var72 != p_Var27);
                }
LAB_0024ebc5:
                if (p_Var26 != (_List_node_base *)0x0) {
                  operator_delete(p_Var26);
                }
                p_Stack_a90 = p_Var39;
                local_a88 = p_Var49;
LAB_0024ecf1:
                p_Stack_a80 = p_Stack_a90 + (long)local_ba8;
              }
              else {
                if (local_a88 != p_Var72) {
                  _Var2 = *p_Var72;
                  *local_a88 = local_a88[-1];
                  p_Var26 = local_a88 + -1;
                  p_Var27 = p_Var26 + -(long)p_Var72;
                  if (0 < (long)p_Var27) {
                    p_Var40 = p_Var26 + ~(ulong)p_Var72;
                    p_Var39 = local_a88;
                    if (((ulong)p_Var27 & 7) != 0) {
                      uVar50 = 1;
                      p_Var49 = p_Var26;
                      do {
                        p_Var39 = p_Var49;
                        *p_Var39 = p_Var39[-1];
                        uVar74 = uVar50 + 1;
                        bVar98 = uVar50 != ((ulong)p_Var27 & 7);
                        uVar50 = uVar74;
                        p_Var49 = p_Var39 + -1;
                      } while (bVar98);
                      p_Var27 = p_Var26 + (-uVar74 - (long)p_Var72) + 1;
                      p_Var26 = p_Var39 + -1;
                    }
                    if ((_List_node_base *)0x6 < p_Var40) {
                      lVar69 = -1;
                      do {
                        p_Var39[lVar69] = p_Var26[lVar69];
                        p_Var39[lVar69 + -1] = p_Var26[lVar69 + -1];
                        p_Var39[lVar69 + -2] = p_Var26[lVar69 + -2];
                        p_Var39[lVar69 + -3] = p_Var26[lVar69 + -3];
                        p_Var39[lVar69 + -4] = p_Var26[lVar69 + -4];
                        p_Var39[lVar69 + -5] = p_Var26[lVar69 + -5];
                        p_Var39[lVar69 + -6] = p_Var26[lVar69 + -6];
                        p_Var39[lVar69 + -7] = p_Var26[lVar69 + -7];
                        lVar89 = lVar69 + -8;
                        lVar69 = lVar69 + -8;
                      } while (p_Var27 + lVar89 < (_List_node_base *)0xfffffffffffffffe);
                    }
                  }
                  *p_Var72 = _Var2;
                }
LAB_0024e342:
                local_a88 = local_a88 + 1;
              }
            }
            else if (cVar23 == '\0') {
              uVar50 = *puVar55;
              p_Var72 = p_Stack_a90 + uVar50;
              if (local_a88 == p_Stack_a80) {
                uVar74 = (long)local_a88 - (long)p_Stack_a90;
                if (uVar74 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  std::__throw_length_error("vector::_M_realloc_insert");
                }
                uVar57 = uVar74;
                if (uVar74 == 0) {
                  uVar57 = 1;
                }
                local_ba8 = (_List_node_base *)(uVar57 + uVar74);
                if ((long)local_ba8 < 0) {
                  local_ba8 = (_List_node_base *)0x7fffffffffffffff;
                }
                if (CARRY8(uVar57,uVar74)) {
                  local_ba8 = (_List_node_base *)0x7fffffffffffffff;
                }
                if (local_ba8 == (_List_node_base *)0x0) {
                  p_Var39 = (_List_node_base *)0x0;
                }
                else {
                  p_Var39 = operator_new((ulong)local_ba8);
                }
                p_Var39[uVar50] = _Var24;
                if ((long)uVar50 < 1) {
                  p_Var40 = p_Var39 + uVar50;
                }
                else {
                  p_Var40 = p_Var39;
                  p_Var49 = p_Var26;
                  if (0x1f < uVar50) {
                    uVar57 = uVar50 & 0xffffffffffffffe0;
                    uVar56 = (uVar57 - 0x20 >> 5) + 1;
                    uVar74 = (ulong)((uint)uVar56 & 3);
                    if (uVar57 - 0x20 < 0x60) {
                      lVar69 = 0;
                    }
                    else {
                      uVar56 = uVar56 & 0xffffffffffffffc;
                      lVar69 = 0;
                      do {
                        uVar44 = *(undefined8 *)(p_Var26 + lVar69 + 8);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar69 + 0x10);
                        uVar8 = *(undefined8 *)(p_Var26 + lVar69 + 0x10 + 8);
                        *(undefined8 *)(p_Var39 + lVar69) = *(undefined8 *)(p_Var26 + lVar69);
                        *(undefined8 *)(p_Var39 + lVar69 + 8) = uVar44;
                        *(undefined8 *)(p_Var39 + lVar69 + 0x10) = uVar5;
                        *(undefined8 *)(p_Var39 + lVar69 + 0x10 + 8) = uVar8;
                        uVar44 = *(undefined8 *)(p_Var26 + lVar69 + 0x20 + 8);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar69 + 0x30);
                        uVar8 = *(undefined8 *)(p_Var26 + lVar69 + 0x30 + 8);
                        *(undefined8 *)(p_Var39 + lVar69 + 0x20) =
                             *(undefined8 *)(p_Var26 + lVar69 + 0x20);
                        *(undefined8 *)(p_Var39 + lVar69 + 0x20 + 8) = uVar44;
                        *(undefined8 *)(p_Var39 + lVar69 + 0x30) = uVar5;
                        *(undefined8 *)(p_Var39 + lVar69 + 0x30 + 8) = uVar8;
                        uVar44 = *(undefined8 *)(p_Var26 + lVar69 + 0x40 + 8);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar69 + 0x50);
                        uVar8 = *(undefined8 *)(p_Var26 + lVar69 + 0x50 + 8);
                        *(undefined8 *)(p_Var39 + lVar69 + 0x40) =
                             *(undefined8 *)(p_Var26 + lVar69 + 0x40);
                        *(undefined8 *)(p_Var39 + lVar69 + 0x40 + 8) = uVar44;
                        *(undefined8 *)(p_Var39 + lVar69 + 0x50) = uVar5;
                        *(undefined8 *)(p_Var39 + lVar69 + 0x50 + 8) = uVar8;
                        uVar8 = *(undefined8 *)(p_Var26 + lVar69 + 0x60 + 8);
                        uVar44 = *(undefined8 *)(p_Var26 + lVar69 + 0x70);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar69 + 0x70 + 8);
                        *(undefined8 *)(p_Var39 + lVar69 + 0x60) =
                             *(undefined8 *)(p_Var26 + lVar69 + 0x60);
                        *(undefined8 *)(p_Var39 + lVar69 + 0x60 + 8) = uVar8;
                        *(undefined8 *)(p_Var39 + lVar69 + 0x70) = uVar44;
                        *(undefined8 *)(p_Var39 + lVar69 + 0x70 + 8) = uVar5;
                        lVar69 = lVar69 + 0x80;
                        uVar56 = uVar56 - 4;
                      } while (uVar56 != 0);
                    }
                    if (uVar74 != 0) {
                      lVar89 = 0;
                      do {
                        uVar8 = *(undefined8 *)(p_Var26 + lVar89 + lVar69 + 8);
                        uVar44 = *(undefined8 *)(p_Var26 + lVar89 + lVar69 + 0x10);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar89 + lVar69 + 0x10 + 8);
                        *(undefined8 *)(p_Var39 + lVar89 + lVar69) =
                             *(undefined8 *)(p_Var26 + lVar89 + lVar69);
                        *(undefined8 *)(p_Var39 + lVar89 + lVar69 + 8) = uVar8;
                        *(undefined8 *)(p_Var39 + lVar89 + lVar69 + 0x10) = uVar44;
                        *(undefined8 *)(p_Var39 + lVar89 + lVar69 + 0x10 + 8) = uVar5;
                        lVar89 = lVar89 + 0x20;
                      } while (uVar74 * 0x20 != lVar89);
                    }
                    p_Var40 = p_Var39 + uVar57;
                    if (uVar50 == uVar57) goto LAB_0024ea72;
                    p_Var49 = p_Var26 + uVar57;
                  }
                  do {
                    *p_Var40 = *p_Var49;
                    p_Var49 = p_Var49 + 1;
                    p_Var40 = p_Var40 + 1;
                  } while (p_Var49 != p_Var72);
                }
LAB_0024ea72:
                p_Var49 = p_Var40 + 1;
                if ((long)p_Var27 - (long)p_Var72 < 1) {
                  p_Var49 = p_Var49 + ((long)p_Var27 - (long)p_Var72);
                }
                else if (p_Var27 != p_Var72) {
                  uVar74 = (long)p_Var27 - (long)(p_Var26 + uVar50);
                  if (0x1f < uVar74) {
                    uVar83 = uVar74 & 0xffffffffffffffe0;
                    uVar56 = (uVar83 - 0x20 >> 5) + 1;
                    uVar57 = (ulong)((uint)uVar56 & 3);
                    if (uVar83 - 0x20 < 0x60) {
                      lVar69 = 0;
                    }
                    else {
                      uVar56 = uVar56 & 0xffffffffffffffc;
                      lVar69 = 0;
                      do {
                        uVar44 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 8);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x10);
                        uVar8 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x10 + 8);
                        *(undefined8 *)(p_Var40 + lVar69 + 1) =
                             *(undefined8 *)(p_Var26 + lVar69 + uVar50);
                        *(undefined8 *)(p_Var40 + lVar69 + 1 + 8) = uVar44;
                        *(undefined8 *)(p_Var40 + lVar69 + 0x11) = uVar5;
                        *(undefined8 *)(p_Var40 + lVar69 + 0x11 + 8) = uVar8;
                        uVar44 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x20 + 8);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x30);
                        uVar8 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x30 + 8);
                        *(undefined8 *)(p_Var40 + lVar69 + 0x21) =
                             *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x20);
                        *(undefined8 *)(p_Var40 + lVar69 + 0x21 + 8) = uVar44;
                        *(undefined8 *)(p_Var40 + lVar69 + 0x31) = uVar5;
                        *(undefined8 *)(p_Var40 + lVar69 + 0x31 + 8) = uVar8;
                        uVar44 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x40 + 8);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x50);
                        uVar8 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x50 + 8);
                        *(undefined8 *)(p_Var40 + lVar69 + 0x41) =
                             *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x40);
                        *(undefined8 *)(p_Var40 + lVar69 + 0x41 + 8) = uVar44;
                        *(undefined8 *)(p_Var40 + lVar69 + 0x51) = uVar5;
                        *(undefined8 *)(p_Var40 + lVar69 + 0x51 + 8) = uVar8;
                        uVar8 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x60 + 8);
                        uVar44 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x70);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x70 + 8);
                        *(undefined8 *)(p_Var40 + lVar69 + 0x61) =
                             *(undefined8 *)(p_Var26 + lVar69 + uVar50 + 0x60);
                        *(undefined8 *)(p_Var40 + lVar69 + 0x61 + 8) = uVar8;
                        *(undefined8 *)(p_Var40 + lVar69 + 0x71) = uVar44;
                        *(undefined8 *)(p_Var40 + lVar69 + 0x71 + 8) = uVar5;
                        lVar69 = lVar69 + 0x80;
                        uVar56 = uVar56 - 4;
                      } while (uVar56 != 0);
                    }
                    if (uVar57 != 0) {
                      lVar89 = 0;
                      do {
                        uVar8 = *(undefined8 *)(p_Var26 + lVar89 + uVar50 + lVar69 + 8);
                        uVar44 = *(undefined8 *)(p_Var26 + lVar89 + uVar50 + lVar69 + 0x10);
                        uVar5 = *(undefined8 *)(p_Var26 + lVar89 + uVar50 + lVar69 + 0x10 + 8);
                        *(undefined8 *)(p_Var40 + lVar89 + lVar69 + 1) =
                             *(undefined8 *)(p_Var26 + lVar89 + uVar50 + lVar69);
                        *(undefined8 *)(p_Var40 + lVar89 + lVar69 + 1 + 8) = uVar8;
                        *(undefined8 *)(p_Var40 + lVar89 + lVar69 + 0x11) = uVar44;
                        *(undefined8 *)(p_Var40 + lVar89 + lVar69 + 0x11 + 8) = uVar5;
                        lVar89 = lVar89 + 0x20;
                      } while (uVar57 * 0x20 != lVar89);
                    }
                    p_Var49 = p_Var49 + uVar83;
                    if (uVar74 == uVar83) goto LAB_0024ecd4;
                    p_Var72 = p_Var72 + uVar83;
                  }
                  do {
                    *p_Var49 = *p_Var72;
                    p_Var72 = p_Var72 + 1;
                    p_Var49 = p_Var49 + 1;
                  } while (p_Var72 != p_Var27);
                }
LAB_0024ecd4:
                if (p_Var26 != (_List_node_base *)0x0) {
                  operator_delete(p_Var26);
                }
                p_Stack_a90 = p_Var39;
                local_a88 = p_Var49;
                goto LAB_0024ecf1;
              }
              if (local_a88 == p_Var72) {
                *p_Var72 = _Var24;
                goto LAB_0024e342;
              }
              *local_a88 = local_a88[-1];
              p_Var26 = local_a88 + 1;
              p_Var27 = local_a88 + -1;
              p_Var39 = p_Var27 + -(long)p_Var72;
              if (0 < (long)p_Var39) {
                p_Var40 = p_Var27 + ~(ulong)p_Var72;
                if (((ulong)p_Var39 & 7) != 0) {
                  uVar50 = 1;
                  p_Var49 = p_Var27;
                  do {
                    local_a88 = p_Var49;
                    *local_a88 = local_a88[-1];
                    uVar74 = uVar50 + 1;
                    bVar98 = uVar50 != ((ulong)p_Var39 & 7);
                    uVar50 = uVar74;
                    p_Var49 = local_a88 + -1;
                  } while (bVar98);
                  p_Var39 = p_Var27 + (-uVar74 - (long)p_Var72) + 1;
                  p_Var27 = local_a88 + -1;
                }
                if ((_List_node_base *)0x6 < p_Var40) {
                  lVar69 = -1;
                  do {
                    local_a88[lVar69] = p_Var27[lVar69];
                    local_a88[lVar69 + -1] = p_Var27[lVar69 + -1];
                    local_a88[lVar69 + -2] = p_Var27[lVar69 + -2];
                    local_a88[lVar69 + -3] = p_Var27[lVar69 + -3];
                    local_a88[lVar69 + -4] = p_Var27[lVar69 + -4];
                    local_a88[lVar69 + -5] = p_Var27[lVar69 + -5];
                    local_a88[lVar69 + -6] = p_Var27[lVar69 + -6];
                    local_a88[lVar69 + -7] = p_Var27[lVar69 + -7];
                    lVar89 = lVar69 + -8;
                    lVar69 = lVar69 + -8;
                  } while (p_Var39 + lVar89 < (_List_node_base *)0xfffffffffffffffe);
                }
              }
              *p_Var72 = _Var24;
              local_a88 = p_Var26;
            }
LAB_0024e347:
            puVar55 = puVar55 + 6;
          } while (puVar55 != puVar60);
        }
      }
      puVar60 = local_aa8;
      if (0 < (long)puStack_aa0 - (long)local_aa8) {
        uVar50 = (ulong)((long)puStack_aa0 - (long)local_aa8) >> 4;
        do {
          uVar57 = uVar50 >> 1;
          uVar74 = uVar57;
          if ((long)puVar60[uVar57 * 2 + 1] <= (long)uVar54) {
            uVar74 = ~uVar57 + uVar50;
            puVar60 = puVar60 + uVar57 * 2 + 2;
          }
          uVar50 = uVar74;
        } while (0 < (long)uVar74);
      }
      if ((((puVar60 != puStack_aa0) && ((long)*puVar60 <= (long)uVar54)) &&
          ((long)puVar60 - (long)local_aa8 != 0)) &&
         (uVar54 = (long)puVar60 - (long)local_aa8 >> 4,
         p_Stack_a90[uVar54 - 1] == p_Stack_a90[uVar54])) {
        lVar69 = (long)uStack_8b0 - (long)local_8b8;
                    /* try { // try from 0024ef24 to 0024ef38 has its CatchHandler @ 0025c859 */
        detail::Ranges::mergeBack((Ranges *)&local_aa8,uVar54,&local_8b8);
        if ((long)uStack_8b0 - (long)local_8b8 != 0) {
          lVar69 = lVar69 >> 4;
          uVar54 = ((long)uStack_8b0 - (long)local_8b8 >> 4) * -0x5555555555555555;
          bVar98 = uVar54 < (ulong)(lVar69 * -0x5555555555555555);
          lVar89 = uVar54 + lVar69 * 0x5555555555555555;
          if (!bVar98 && lVar89 != 0) {
            if (bVar98) {
              lVar89 = 0;
            }
            puVar55 = (ulong *)(local_8b8 + lVar69 * 2);
            puVar60 = puVar55 + lVar89 * 6;
            do {
              p_Var27 = local_a88;
              p_Var26 = p_Stack_a90;
              if ((char)puVar55[5] == '\x02') {
                uVar54 = *puVar55;
                uVar50 = puVar55[1];
                if (uVar54 != uVar50) {
                  p_Var26 = p_Stack_a90 + uVar54;
                  p_Var27 = p_Stack_a90 + uVar50;
                  p_Var72 = local_a88 + -(long)p_Var27;
                  if ((p_Var72 != (_List_node_base *)0x0) && (0 < (long)p_Var72)) {
                    if ((p_Var72 < (_List_node_base *)0x8) ||
                       ((p_Var26 < local_a88 + ~(ulong)p_Stack_a90 + (long)p_Stack_a90 + 1 &&
                        (p_Var27 < p_Stack_a90 + (long)(local_a88 + ~(ulong)p_Var27 + uVar54) + 1)))
                       ) {
                      p_Var40 = p_Var27;
                      p_Var39 = p_Var26;
LAB_0024f130:
                      p_Var72 = p_Var72 + 1;
                      lVar69 = 0;
                      do {
                        p_Var39[lVar69] = p_Var40[lVar69];
                        p_Var72 = p_Var72 + -1;
                        lVar69 = lVar69 + 1;
                      } while ((_List_node_base *)0x1 < p_Var72);
                    }
                    else if (p_Var72 < (_List_node_base *)0x20) {
                      p_Var49 = (_List_node_base *)0x0;
LAB_0024f61e:
                      p_Var40 = (_List_node_base *)
                                ((ulong)(local_a88 +
                                        (-(long)(p_Stack_a90 + uVar50) -
                                        (ulong)(p_Stack_a90 + uVar50 != local_a88)) + 1) &
                                0xfffffffffffffff8);
                      p_Var39 = p_Var26 + (long)p_Var40;
                      do {
                        *(undefined8 *)(p_Var26 + (long)p_Var49) =
                             *(undefined8 *)(p_Var27 + (long)p_Var49);
                        p_Var49 = p_Var49 + 8;
                      } while (p_Var40 != p_Var49);
                      if (local_a88 +
                          (-(long)(p_Stack_a90 + uVar50) -
                          (ulong)(p_Stack_a90 + uVar50 != local_a88)) + 1 != p_Var40) {
                        p_Var72 = p_Var72 + -(long)p_Var40;
                        p_Var40 = p_Var27 + (long)p_Var40;
                        goto LAB_0024f130;
                      }
                    }
                    else {
                      p_Var49 = (_List_node_base *)((ulong)p_Var72 & 0xffffffffffffffe0);
                      uVar74 = ((ulong)(p_Var49 + -0x20) >> 5) + 1;
                      uVar57 = (ulong)((uint)uVar74 & 3);
                      if (p_Var49 + -0x20 < (_List_node_base *)0x60) {
                        lVar69 = 0;
                      }
                      else {
                        uVar74 = uVar74 & 0xffffffffffffffc;
                        lVar69 = 0;
                        do {
                          uVar44 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 8);
                          uVar5 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x10);
                          uVar8 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x10 + 8);
                          *(undefined8 *)(p_Stack_a90 + lVar69 + uVar54) =
                               *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50);
                          *(undefined8 *)(p_Stack_a90 + lVar69 + uVar54 + 8) = uVar44;
                          *(undefined8 *)(p_Stack_a90 + lVar69 + uVar54 + 0x10) = uVar5;
                          *(undefined8 *)(p_Stack_a90 + lVar69 + uVar54 + 0x10 + 8) = uVar8;
                          uVar44 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x20 + 8);
                          uVar5 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x30);
                          uVar8 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x30 + 8);
                          *(undefined8 *)(p_Stack_a90 + lVar69 + uVar54 + 0x20) =
                               *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x20);
                          *(undefined8 *)(p_Stack_a90 + lVar69 + uVar54 + 0x20 + 8) = uVar44;
                          *(undefined8 *)(p_Stack_a90 + lVar69 + uVar54 + 0x30) = uVar5;
                          *(undefined8 *)(p_Stack_a90 + lVar69 + uVar54 + 0x30 + 8) = uVar8;
                          uVar44 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x40 + 8);
                          uVar5 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x50);
                          uVar8 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x50 + 8);
                          *(undefined8 *)(p_Stack_a90 + lVar69 + uVar54 + 0x40) =
                               *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x40);
                          *(undefined8 *)(p_Stack_a90 + lVar69 + uVar54 + 0x40 + 8) = uVar44;
                          *(undefined8 *)(p_Stack_a90 + lVar69 + uVar54 + 0x50) = uVar5;
                          *(undefined8 *)(p_Stack_a90 + lVar69 + uVar54 + 0x50 + 8) = uVar8;
                          uVar8 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x60 + 8);
                          uVar44 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x70);
                          uVar5 = *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x70 + 8);
                          *(undefined8 *)(p_Stack_a90 + lVar69 + uVar54 + 0x60) =
                               *(undefined8 *)(p_Stack_a90 + lVar69 + uVar50 + 0x60);
                          *(undefined8 *)(p_Stack_a90 + lVar69 + uVar54 + 0x60 + 8) = uVar8;
                          *(undefined8 *)(p_Stack_a90 + lVar69 + uVar54 + 0x70) = uVar44;
                          *(undefined8 *)(p_Stack_a90 + lVar69 + uVar54 + 0x70 + 8) = uVar5;
                          lVar69 = lVar69 + 0x80;
                          uVar74 = uVar74 - 4;
                        } while (uVar74 != 0);
                      }
                      if (uVar57 != 0) {
                        lVar89 = 0;
                        do {
                          uVar8 = *(undefined8 *)(p_Stack_a90 + lVar89 + lVar69 + uVar50 + 8);
                          uVar44 = *(undefined8 *)(p_Stack_a90 + lVar89 + lVar69 + uVar50 + 0x10);
                          uVar5 = *(undefined8 *)(p_Stack_a90 + lVar89 + lVar69 + uVar50 + 0x10 + 8)
                          ;
                          *(undefined8 *)(p_Stack_a90 + lVar89 + uVar54 + lVar69) =
                               *(undefined8 *)(p_Stack_a90 + lVar89 + lVar69 + uVar50);
                          *(undefined8 *)(p_Stack_a90 + lVar89 + uVar54 + lVar69 + 8) = uVar8;
                          *(undefined8 *)(p_Stack_a90 + lVar89 + uVar54 + lVar69 + 0x10) = uVar44;
                          *(undefined8 *)(p_Stack_a90 + lVar89 + uVar54 + lVar69 + 0x10 + 8) = uVar5
                          ;
                          lVar89 = lVar89 + 0x20;
                        } while (uVar57 * 0x20 != lVar89);
                      }
                      if (p_Var72 != p_Var49) {
                        if (((ulong)p_Var72 & 0x18) == 0) {
                          p_Var40 = p_Var27 + (long)p_Var49;
                          p_Var39 = p_Var26 + (long)p_Var49;
                          p_Var72 = (_List_node_base *)(ulong)((uint)p_Var72 & 0x1f);
                          goto LAB_0024f130;
                        }
                        goto LAB_0024f61e;
                      }
                    }
                    p_Var72 = local_a88 + -(long)p_Var27;
                  }
                  if (local_a88 != p_Var26 + (long)p_Var72) {
                    local_a88 = p_Var26 + (long)p_Var72;
                  }
                }
              }
              else if ((char)puVar55[5] == '\x01') {
                uVar54 = *puVar55;
                p_Var72 = p_Stack_a90 + uVar54;
                if (local_a88 == p_Stack_a80) {
                  uVar50 = (long)local_a88 - (long)p_Stack_a90;
                  if (uVar50 == 0x7fffffffffffffff) {
                    /* try { // try from 0025bcf5 to 0025bd00 has its CatchHandler @ 0025c9d3 */
                    /* WARNING: Subroutine does not return */
                    std::__throw_length_error("vector::_M_realloc_insert");
                  }
                  uVar74 = uVar50;
                  if (uVar50 == 0) {
                    uVar74 = 1;
                  }
                  uVar57 = uVar74 + uVar50;
                  if ((long)uVar57 < 0) {
                    uVar57 = 0x7fffffffffffffff;
                  }
                  if (CARRY8(uVar74,uVar50)) {
                    uVar57 = 0x7fffffffffffffff;
                  }
                  if (uVar57 == 0) {
                    p_Var39 = (_List_node_base *)0x0;
                  }
                  else {
                    /* try { // try from 0024f1bf to 0024f1c6 has its CatchHandler @ 0025c2ea */
                    p_Var39 = operator_new(uVar57);
                  }
                  p_Var39[uVar54] = *p_Var72;
                  if ((long)uVar54 < 1) {
                    p_Var40 = p_Var39 + uVar54;
                  }
                  else {
                    p_Var40 = p_Var39;
                    p_Var49 = p_Var26;
                    if (0x1f < uVar54) {
                      uVar74 = uVar54 & 0xffffffffffffffe0;
                      uVar56 = (uVar74 - 0x20 >> 5) + 1;
                      uVar50 = (ulong)((uint)uVar56 & 3);
                      if (uVar74 - 0x20 < 0x60) {
                        lVar69 = 0;
                      }
                      else {
                        uVar56 = uVar56 & 0xffffffffffffffc;
                        lVar69 = 0;
                        do {
                          uVar44 = *(undefined8 *)(p_Var26 + lVar69 + 8);
                          uVar5 = *(undefined8 *)(p_Var26 + lVar69 + 0x10);
                          uVar8 = *(undefined8 *)(p_Var26 + lVar69 + 0x10 + 8);
                          *(undefined8 *)(p_Var39 + lVar69) = *(undefined8 *)(p_Var26 + lVar69);
                          *(undefined8 *)(p_Var39 + lVar69 + 8) = uVar44;
                          *(undefined8 *)(p_Var39 + lVar69 + 0x10) = uVar5;
                          *(undefined8 *)(p_Var39 + lVar69 + 0x10 + 8) = uVar8;
                          uVar44 = *(undefined8 *)(p_Var26 + lVar69 + 0x20 + 8);
                          uVar5 = *(undefined8 *)(p_Var26 + lVar69 + 0x30);
                          uVar8 = *(undefined8 *)(p_Var26 + lVar69 + 0x30 + 8);
                          *(undefined8 *)(p_Var39 + lVar69 + 0x20) =
                               *(undefined8 *)(p_Var26 + lVar69 + 0x20);
                          *(undefined8 *)(p_Var39 + lVar69 + 0x20 + 8) = uVar44;
                          *(undefined8 *)(p_Var39 + lVar69 + 0x30) = uVar5;
                          *(undefined8 *)(p_Var39 + lVar69 + 0x30 + 8) = uVar8;
                          uVar44 = *(undefined8 *)(p_Var26 + lVar69 + 0x40 + 8);
                          uVar5 = *(undefined8 *)(p_Var26 + lVar69 + 0x50);
                          uVar8 = *(undefined8 *)(p_Var26 + lVar69 + 0x50 + 8);
                          *(undefined8 *)(p_Var39 + lVar69 + 0x40) =
                               *(undefined8 *)(p_Var26 + lVar69 + 0x40);
                          *(undefined8 *)(p_Var39 + lVar69 + 0x40 + 8) = uVar44;
                          *(undefined8 *)(p_Var39 + lVar69 + 0x50) = uVar5;
                          *(undefined8 *)(p_Var39 + lVar69 + 0x50 + 8) = uVar8;
                          uVar8 = *(undefined8 *)(p_Var26 + lVar69 + 0x60 + 8);
                          uVar44 = *(undefined8 *)(p_Var26 + lVar69 + 0x70);
                          uVar5 = *(undefined8 *)(p_Var26 + lVar69 + 0x70 + 8);
                          *(undefined8 *)(p_Var39 + lVar69 + 0x60) =
                               *(undefined8 *)(p_Var26 + lVar69 + 0x60);
                          *(undefined8 *)(p_Var39 + lVar69 + 0x60 + 8) = uVar8;
                          *(undefined8 *)(p_Var39 + lVar69 + 0x70) = uVar44;
                          *(undefined8 *)(p_Var39 + lVar69 + 0x70 + 8) = uVar5;
                          lVar69 = lVar69 + 0x80;
                          uVar56 = uVar56 - 4;
                        } while (uVar56 != 0);
                      }
                      if (uVar50 != 0) {
                        lVar89 = 0;
                        do {
                          uVar8 = *(undefined8 *)(p_Var26 + lVar89 + lVar69 + 8);
                          uVar44 = *(undefined8 *)(p_Var26 + lVar89 + lVar69 + 0x10);
                          uVar5 = *(undefined8 *)(p_Var26 + lVar89 + lVar69 + 0x10 + 8);
                          *(undefined8 *)(p_Var39 + lVar89 + lVar69) =
                               *(undefined8 *)(p_Var26 + lVar89 + lVar69);
                          *(undefined8 *)(p_Var39 + lVar89 + lVar69 + 8) = uVar8;
                          *(undefined8 *)(p_Var39 + lVar89 + lVar69 + 0x10) = uVar44;
                          *(undefined8 *)(p_Var39 + lVar89 + lVar69 + 0x10 + 8) = uVar5;
                          lVar89 = lVar89 + 0x20;
                        } while (uVar50 * 0x20 != lVar89);
                      }
                      p_Var40 = p_Var39 + uVar74;
                      if (uVar54 == uVar74) goto LAB_0024f3a2;
                      p_Var49 = p_Var26 + uVar74;
                    }
                    do {
                      *p_Var40 = *p_Var49;
                      p_Var49 = p_Var49 + 1;
                      p_Var40 = p_Var40 + 1;
                    } while (p_Var49 != p_Var72);
                  }
LAB_0024f3a2:
                  p_Var49 = p_Var40 + 1;
                  if ((long)p_Var27 - (long)p_Var72 < 1) {
                    p_Var49 = p_Var49 + ((long)p_Var27 - (long)p_Var72);
                  }
                  else if (p_Var27 != p_Var72) {
                    uVar50 = (long)p_Var27 - (long)(p_Var26 + uVar54);
                    if (0x1f < uVar50) {
                      uVar83 = uVar50 & 0xffffffffffffffe0;
                      uVar56 = (uVar83 - 0x20 >> 5) + 1;
                      uVar74 = (ulong)((uint)uVar56 & 3);
                      if (uVar83 - 0x20 < 0x60) {
                        lVar69 = 0;
                      }
                      else {
                        uVar56 = uVar56 & 0xffffffffffffffc;
                        lVar69 = 0;
                        do {
                          uVar44 = *(undefined8 *)(p_Var26 + lVar69 + uVar54 + 8);
                          uVar5 = *(undefined8 *)(p_Var26 + lVar69 + uVar54 + 0x10);
                          uVar8 = *(undefined8 *)(p_Var26 + lVar69 + uVar54 + 0x10 + 8);
                          *(undefined8 *)(p_Var40 + lVar69 + 1) =
                               *(undefined8 *)(p_Var26 + lVar69 + uVar54);
                          *(undefined8 *)(p_Var40 + lVar69 + 1 + 8) = uVar44;
                          *(undefined8 *)(p_Var40 + lVar69 + 0x11) = uVar5;
                          *(undefined8 *)(p_Var40 + lVar69 + 0x11 + 8) = uVar8;
                          uVar44 = *(undefined8 *)(p_Var26 + lVar69 + uVar54 + 0x20 + 8);
                          uVar5 = *(undefined8 *)(p_Var26 + lVar69 + uVar54 + 0x30);
                          uVar8 = *(undefined8 *)(p_Var26 + lVar69 + uVar54 + 0x30 + 8);
                          *(undefined8 *)(p_Var40 + lVar69 + 0x21) =
                               *(undefined8 *)(p_Var26 + lVar69 + uVar54 + 0x20);
                          *(undefined8 *)(p_Var40 + lVar69 + 0x21 + 8) = uVar44;
                          *(undefined8 *)(p_Var40 + lVar69 + 0x31) = uVar5;
                          *(undefined8 *)(p_Var40 + lVar69 + 0x31 + 8) = uVar8;
                          uVar44 = *(undefined8 *)(p_Var26 + lVar69 + uVar54 + 0x40 + 8);
                          uVar5 = *(undefined8 *)(p_Var26 + lVar69 + uVar54 + 0x50);
                          uVar8 = *(undefined8 *)(p_Var26 + lVar69 + uVar54 + 0x50 + 8);
                          *(undefined8 *)(p_Var40 + lVar69 + 0x41) =
                               *(undefined8 *)(p_Var26 + lVar69 + uVar54 + 0x40);
                          *(undefined8 *)(p_Var40 + lVar69 + 0x41 + 8) = uVar44;
                          *(undefined8 *)(p_Var40 + lVar69 + 0x51) = uVar5;
                          *(undefined8 *)(p_Var40 + lVar69 + 0x51 + 8) = uVar8;
                          uVar8 = *(undefined8 *)(p_Var26 + lVar69 + uVar54 + 0x60 + 8);
                          uVar44 = *(undefined8 *)(p_Var26 + lVar69 + uVar54 + 0x70);
                          uVar5 = *(undefined8 *)(p_Var26 + lVar69 + uVar54 + 0x70 + 8);
                          *(undefined8 *)(p_Var40 + lVar69 + 0x61) =
                               *(undefined8 *)(p_Var26 + lVar69 + uVar54 + 0x60);
                          *(undefined8 *)(p_Var40 + lVar69 + 0x61 + 8) = uVar8;
                          *(undefined8 *)(p_Var40 + lVar69 + 0x71) = uVar44;
                          *(undefined8 *)(p_Var40 + lVar69 + 0x71 + 8) = uVar5;
                          lVar69 = lVar69 + 0x80;
                          uVar56 = uVar56 - 4;
                        } while (uVar56 != 0);
                      }
                      if (uVar74 != 0) {
                        lVar89 = 0;
                        do {
                          uVar8 = *(undefined8 *)(p_Var26 + lVar89 + uVar54 + lVar69 + 8);
                          uVar44 = *(undefined8 *)(p_Var26 + lVar89 + uVar54 + lVar69 + 0x10);
                          uVar5 = *(undefined8 *)(p_Var26 + lVar89 + uVar54 + lVar69 + 0x10 + 8);
                          *(undefined8 *)(p_Var40 + lVar89 + lVar69 + 1) =
                               *(undefined8 *)(p_Var26 + lVar89 + uVar54 + lVar69);
                          *(undefined8 *)(p_Var40 + lVar89 + lVar69 + 1 + 8) = uVar8;
                          *(undefined8 *)(p_Var40 + lVar89 + lVar69 + 0x11) = uVar44;
                          *(undefined8 *)(p_Var40 + lVar89 + lVar69 + 0x11 + 8) = uVar5;
                          lVar89 = lVar89 + 0x20;
                        } while (uVar74 * 0x20 != lVar89);
                      }
                      p_Var49 = p_Var49 + uVar83;
                      if (uVar50 == uVar83) goto LAB_0024f4e4;
                      p_Var72 = p_Var72 + uVar83;
                    }
                    do {
                      *p_Var49 = *p_Var72;
                      p_Var72 = p_Var72 + 1;
                      p_Var49 = p_Var49 + 1;
                    } while (p_Var72 != p_Var27);
                  }
LAB_0024f4e4:
                  if (p_Var26 != (_List_node_base *)0x0) {
                    operator_delete(p_Var26);
                  }
                  p_Stack_a80 = p_Var39 + uVar57;
                  p_Stack_a90 = p_Var39;
                  local_a88 = p_Var49;
                }
                else {
                  if (local_a88 != p_Var72) {
                    _Var24 = *p_Var72;
                    *local_a88 = local_a88[-1];
                    p_Var26 = local_a88 + -1;
                    p_Var27 = p_Var26 + -(long)p_Var72;
                    if (0 < (long)p_Var27) {
                      p_Var40 = p_Var26 + ~(ulong)p_Var72;
                      p_Var39 = local_a88;
                      if (((ulong)p_Var27 & 7) != 0) {
                        uVar54 = 1;
                        p_Var49 = p_Var26;
                        do {
                          p_Var39 = p_Var49;
                          *p_Var39 = p_Var39[-1];
                          uVar50 = uVar54 + 1;
                          bVar98 = uVar54 != ((ulong)p_Var27 & 7);
                          uVar54 = uVar50;
                          p_Var49 = p_Var39 + -1;
                        } while (bVar98);
                        p_Var27 = p_Var26 + (-uVar50 - (long)p_Var72) + 1;
                        p_Var26 = p_Var39 + -1;
                      }
                      if ((_List_node_base *)0x6 < p_Var40) {
                        lVar69 = -1;
                        do {
                          p_Var39[lVar69] = p_Var26[lVar69];
                          p_Var39[lVar69 + -1] = p_Var26[lVar69 + -1];
                          p_Var39[lVar69 + -2] = p_Var26[lVar69 + -2];
                          p_Var39[lVar69 + -3] = p_Var26[lVar69 + -3];
                          p_Var39[lVar69 + -4] = p_Var26[lVar69 + -4];
                          p_Var39[lVar69 + -5] = p_Var26[lVar69 + -5];
                          p_Var39[lVar69 + -6] = p_Var26[lVar69 + -6];
                          p_Var39[lVar69 + -7] = p_Var26[lVar69 + -7];
                          lVar89 = lVar69 + -8;
                          lVar69 = lVar69 + -8;
                        } while (p_Var27 + lVar89 < (_List_node_base *)0xfffffffffffffffe);
                      }
                    }
                    *p_Var72 = _Var24;
                  }
                  local_a88 = local_a88 + 1;
                }
              }
              puVar55 = puVar55 + 6;
            } while (puVar55 != puVar60);
          }
        }
      }
      puVar60 = local_aa8;
      if (0 < (long)puStack_aa0 - (long)local_aa8) {
        uVar54 = (ulong)((long)puStack_aa0 - (long)local_aa8) >> 4;
        do {
          uVar74 = uVar54 >> 1;
          uVar50 = uVar74;
          if ((long)puVar60[uVar74 * 2 + 1] <= (long)uVar78) {
            uVar50 = ~uVar74 + uVar54;
            puVar60 = puVar60 + uVar74 * 2 + 2;
          }
          uVar54 = uVar50;
        } while (0 < (long)uVar50);
      }
      p_Var26 = (_List_node_base *)local_b58._0_8_;
      if ((((puVar60 != puStack_aa0) && ((long)*puVar60 <= (long)uVar78)) &&
          ((long)puVar60 - (long)local_aa8 != 0)) &&
         (uVar54 = (long)puVar60 - (long)local_aa8 >> 4,
         p_Stack_a90[uVar54 - 1] == p_Stack_a90[uVar54])) {
        lVar89 = (long)uStack_8b0 - (long)local_8b8;
        lVar69 = lVar89 >> 0x3f;
                    /* try { // try from 0024f748 to 0024f75c has its CatchHandler @ 0025c859 */
        detail::Ranges::mergeBack((Ranges *)&local_aa8,uVar54,&local_8b8);
        p_Var26 = (_List_node_base *)local_b58._0_8_;
        if ((long)uStack_8b0 - (long)local_8b8 != 0) {
          uVar78 = (lVar89 / 6 + lVar69 >> 3) - lVar69;
          uVar54 = ((long)uStack_8b0 - (long)local_8b8) / 0x30;
          if (uVar78 < uVar54) {
            plVar90 = (long *)(local_8b8 + uVar78 * 6);
            uVar50 = uVar54;
            if (uVar78 < uVar54) {
              uVar50 = uVar78;
            }
            lVar69 = uVar54 * 0x30 + uVar50 * -0x30;
            do {
                    /* try { // try from 0024f800 to 0024f80f has its CatchHandler @ 0025c679 */
              detail::RangedValues<signed_char>::applyOperation
                        ((RangedValues<signed_char> *)&local_aa8,plVar90);
              plVar90 = plVar90 + 6;
              lVar69 = lVar69 + -0x30;
            } while (lVar69 != 0);
          }
        }
      }
      uStack_8b0 = (_List_node_base *)local_8b8;
      local_be8 = local_be8 + 0x10;
    } while (local_be8 != local_b38);
  }
  do {
    p_Stack_9e8 = (_List_node_base *)0x7fffffffffffffff;
    if (local_a08 != (_List_node_base *)&local_a08) {
      plVar90 = *(long **)(local_a08 + 0x10);
      p_Var26 = local_a08;
      while( true ) {
        (**(code **)(*plVar90 + 0x20))(plVar90);
        cVar23 = (**(code **)(*plVar90 + 0x18))(plVar90);
        if (cVar23 == '\0') break;
        p_Var67 = (_List_node_base *)(**(code **)(*plVar90 + 0x10))(plVar90);
        if ((long)local_9f0 < (long)p_Var67) {
          local_9f0 = p_Var67;
        }
        do {
          (**(code **)(*plVar90 + 0x10))(plVar90);
          if ((long)extraout_RDX_17 < (long)p_Stack_9e8) {
            p_Stack_9e8 = extraout_RDX_17;
          }
          p_Var26 = *(_List_node_base **)p_Var26;
          if (p_Var26 == (_List_node_base *)&local_a08) goto LAB_0024f910;
          plVar90 = *(long **)(p_Var26 + 0x10);
        } while ((p_Var26 != local_a08) &&
                ((**(code **)(*plVar90 + 0x10))(plVar90), (long)local_9f0 < extraout_RDX_16
                    /* try { // try from 0024f873 to 0024f8c5 has its CatchHandler @ 0025cbc5 */));
      }
      break;
    }
LAB_0024f910:
                    /* try { // try from 0024f910 to 0024f91c has its CatchHandler @ 0025c3aa */
    std::__cxx11::list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>
    ::
    sort<juce::detail::IntersectingRangedValues<signed_char_const,std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>const>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
              ((_List_node_base *)&local_a08);
  } while ((long)p_Stack_9e8 <= (long)local_9f0);
  goto LAB_0024f940;
code_r0x0024fa99:
  p_Var26 = local_a08;
  while (p_Var26 != (_List_node_base *)&local_a08) {
    p_Var67 = *(_List_node_base **)p_Var26;
    operator_delete(p_Var26);
    p_Var26 = p_Var67;
  }
  if (local_8b8 != (undefined **)0x0) {
    operator_delete(local_8b8);
  }
  pTVar19 = local_8c8;
  if (local_328 != (_List_node_base *)0x0) {
    operator_delete(local_328);
  }
  if (p_Stack_1d0 != (_List_node_base *)0x0) {
    operator_delete(p_Stack_1d0);
  }
  if (local_1e8 != (_List_node_base *)0x0) {
    operator_delete(local_1e8);
  }
  pvStack_340 = local_348;
  local_238 = (void *)0x0;
  uStack_230 = 0;
  local_228 = 0;
  pvStack_220 = (void *)0x0;
  local_218 = 0;
  uStack_210 = 0;
  puVar41 = *(undefined8 **)(*(long *)(pTVar19 + 0x330) + 0x80);
  puVar42 = *(undefined8 **)(*(long *)(pTVar19 + 0x330) + 0x88);
  if (puVar41 == puVar42) {
    uVar54 = 0;
  }
  else {
    uVar78 = 0;
    do {
      while (pPVar38 = (ParagraphStorage *)*puVar41, pPVar38[0x60] != (ParagraphStorage)0x0) {
        uVar78 = uVar78 + *(long *)(pPVar38 + 0x58);
        puVar41 = puVar41 + 1;
        if (puVar41 == puVar42) goto LAB_0024fbac;
      }
                    /* try { // try from 0024fb7a to 0024fb81 has its CatchHandler @ 0025c060 */
      pPVar32 = ParagraphStorage::getShapedText(pPVar38);
      lVar33 = *(long *)(*(long *)pPVar32 + 0x90) - *(long *)(*(long *)pPVar32 + 0x88) >> 5;
      *(long *)(pPVar38 + 0x58) = lVar33;
      pPVar38[0x60] = (ParagraphStorage)0x1;
      uVar78 = uVar78 + lVar33;
      puVar41 = puVar41 + 1;
    } while (puVar41 != puVar42);
LAB_0024fbac:
    uVar54 = 0;
    if (-1 < (long)uVar78) {
      uVar54 = uVar78;
    }
  }
                    /* try { // try from 0024fbb9 to 0024fbd1 has its CatchHandler @ 0025be6e */
  detail::RangedValues<signed_char>::set<juce::detail::MergeEqualItemsYes>
            ((RangedValues<signed_char> *)&local_238,0,uVar54,0,(long *)&local_348);
  p_Var26 = p_Stack_a90;
  puVar55 = puStack_aa0;
  puVar60 = local_aa8;
  if (puStack_aa0 != local_aa8) {
    lVar33 = 0;
    do {
                    /* try { // try from 0024fc26 to 0024fc30 has its CatchHandler @ 0025c14f */
      detail::RangedValues<signed_char>::set<juce::detail::MergeEqualItemsYes>
                ((RangedValues<signed_char> *)&local_238,*(ulong *)((long)puVar60 + lVar33),
                 *(ulong *)((long)puVar60 + lVar33 + 8),p_Var26[lVar33 >> 4],(long *)&local_348);
      lVar69 = lVar33 + 0x10;
      lVar33 = lVar33 + 0x10;
    } while ((ulong *)((long)puVar60 + lVar69) != puVar55);
  }
  pTVar19 = local_8c8;
  pvStack_340 = local_348;
  local_1c8 = (_List_node_base *)0x0;
  p_Stack_1c0 = (_List_node_base *)0x0;
  local_1d8 = (_List_node_base *)0x0;
  p_Stack_1d0 = (_List_node_base *)0x0;
  local_1e8 = (_List_node_base *)0x0;
  p_Stack_1e0 = (_List_node_base *)0x0;
  lVar33 = *(long *)(*(long *)(local_8c8 + 0x330) + 0x70);
  if (*(long *)(*(long *)(local_8c8 + 0x330) + 0x68) == lVar33) {
    uVar54 = 0;
  }
  else {
    uVar78 = *(ulong *)(lVar33 + -8);
    uVar54 = 0;
    if (-1 < (long)uVar78) {
      uVar54 = uVar78;
    }
  }
                    /* try { // try from 0024fc97 to 0024fcaf has its CatchHandler @ 0025be69 */
  detail::RangedValues<int>::set<juce::detail::MergeEqualItemsYes>
            ((RangedValues<int> *)&local_1e8,0,uVar54,0,(long *)&local_348);
  iVar25 = *(int *)(pTVar19 + 0x32c);
  if ((long)iVar25 != 0) {
    lVar33 = *(long *)(local_8c8 + 800);
    lVar69 = 0;
    do {
      uVar78 = (ulong)(int)*(long *)(lVar33 + lVar69);
      uVar54 = *(long *)(lVar33 + lVar69) >> 0x20;
      if ((long)uVar54 <= (long)uVar78) {
        uVar54 = uVar78;
      }
                    /* try { // try from 0024fd02 to 0024fd11 has its CatchHandler @ 0025c136 */
      detail::RangedValues<int>::set<juce::detail::MergeEqualItemsYes>
                ((RangedValues<int> *)&local_1e8,uVar78,uVar54,1,(long *)&local_348);
      lVar69 = lVar69 + 8;
    } while ((long)iVar25 * 8 != lVar69);
  }
  local_438 = (ulong *)0x0;
  puStack_430 = (ulong *)0x0;
  local_428 = (ulong *)0x0;
  puStack_420 = (undefined4 *)0x0;
  local_418 = (undefined4 *)0x0;
  puStack_410 = (undefined4 *)0x0;
  local_328 = (_List_node_base *)0x0;
  p_Stack_320 = (_List_node_base *)0x0;
  local_318 = (_List_node_base *)0x0;
  local_8b8 = (undefined **)0x0;
  uStack_8b0 = (_List_node_base *)0x0;
  local_8a8 = (_List_node_base *)0x0;
  lVar33 = *(long *)(local_8c8 + 0x330);
  p_Stack_a70 = *(_List_node_base **)(lVar33 + 0x80);
  p_Stack_a68 = *(_List_node_base **)(lVar33 + 0x68);
  pppppppuStack_a48 = *(undefined8 ********)(lVar33 + 0x70);
  local_a78 = &PTR__RangedIterator_00710ae8;
  local_a40 = &PTR__RangedIterator_00710bd8;
  local_a38 = p_Stack_1d0;
  p_Stack_a30 = local_1e8;
  local_a28 = local_1e8;
  p_Stack_a20 = p_Stack_1d0;
  local_a18 = local_1e8;
  p_Stack_a10 = p_Stack_1e0;
  local_a08 = (_List_node_base *)&local_a08;
  p_Stack_9f8 = (_List_node_base *)0x0;
  stack0xfffffffffffff7d0 = (_List_node_base *)local_838;
  local_838._0_8_ = local_838;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uStack_820;
  _auStack_828 = auVar12 << 0x40;
  local_a60 = p_Stack_a68;
  p_Stack_a58 = p_Stack_a70;
  local_a50 = p_Stack_a68;
  local_a00 = local_a08;
                    /* try { // try from 0024fe5a to 0024fe92 has its CatchHandler @ 0025bed4 */
  p_Var26 = operator_new(0x18);
  *(undefined ****)(p_Var26 + 0x10) = &local_a40;
  std::__detail::_List_node_base::_M_hook(p_Var26);
  auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
  p_Var26 = operator_new(0x18);
  *(undefined ****)(p_Var26 + 0x10) = &local_a78;
  std::__detail::_List_node_base::_M_hook(p_Var26);
  auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
  p_Var26 = local_a08;
  while (p_Var26 != (_List_node_base *)&local_a08) {
    p_Var67 = *(_List_node_base **)p_Var26;
    operator_delete(p_Var26);
    p_Var26 = p_Var67;
  }
  if ((_List_node_base *)local_838._0_8_ == (_List_node_base *)local_838) {
    p_Stack_9f8 = (_List_node_base *)0x0;
    local_a08 = (_List_node_base *)&local_a08;
    local_a00 = (_List_node_base *)&local_a08;
  }
  else {
    local_a08 = (_List_node_base *)local_838._0_8_;
    local_a00 = stack0xfffffffffffff7d0;
    *(_List_node_base **)stack0xfffffffffffff7d0 = (_List_node_base *)&local_a08;
    *(_List_node_base **)(local_838._0_8_ + 8) = (_List_node_base *)&local_a08;
    p_Stack_9f8 = (_List_node_base *)auStack_828;
    p_Var26 = (_List_node_base *)local_838._0_8_;
    if ((_List_node_base *)local_838._0_8_ != (_List_node_base *)&local_a08) {
      do {
                    /* try { // try from 0024ff77 to 0024ff79 has its CatchHandler @ 0025c03a */
        cVar23 = (**(code **)(**(long **)(p_Var26 + 0x10) + 0x18))();
        if (cVar23 == '\0') {
          if (p_Var26 != (_List_node_base *)&local_a08) goto LAB_00252580;
          break;
        }
        p_Var26 = *(_List_node_base **)p_Var26;
      } while (p_Var26 != (_List_node_base *)&local_a08);
    }
  }
  if (local_a08 == (_List_node_base *)&local_a08) {
    local_9f0 = (_List_node_base *)0x8000000000000000;
LAB_002507b3:
    p_Stack_9e8 = (_List_node_base *)0x7fffffffffffffff;
LAB_002507be:
    if ((long)local_9f0 < (long)p_Stack_9e8) goto LAB_00252580;
  }
  else {
    p_Var67 = (_List_node_base *)0x8000000000000000;
    p_Var26 = local_a08;
    do {
                    /* try { // try from 0024ffc7 to 0024ffc9 has its CatchHandler @ 0025c11f */
      p_Var27 = (_List_node_base *)(**(code **)(**(long **)(p_Var26 + 0x10) + 0x10))();
      if ((long)p_Var67 < (long)p_Var27) {
        p_Var67 = p_Var27;
      }
      p_Var26 = *(_List_node_base **)p_Var26;
    } while (p_Var26 != (_List_node_base *)&local_a08);
    local_9f0 = p_Var67;
    if (local_a08 == (_List_node_base *)&local_a08) goto LAB_002507b3;
    p_Var67 = (_List_node_base *)0x7fffffffffffffff;
    p_Var26 = local_a08;
    do {
                    /* try { // try from 00250017 to 00250019 has its CatchHandler @ 0025c0a8 */
      (**(code **)(**(long **)(p_Var26 + 0x10) + 0x10))();
      if ((long)extraout_RDX_18 < (long)p_Var67) {
        p_Var67 = extraout_RDX_18;
      }
      p_Var26 = *(_List_node_base **)p_Var26;
    } while (p_Var26 != (_List_node_base *)&local_a08);
    p_Stack_9e8 = p_Var67;
    if ((local_a08 == (_List_node_base *)&local_a08) ||
       (*(_List_node_base **)local_a08 == (_List_node_base *)&local_a08)) goto LAB_002507be;
    stack0xfffffffffffff7d0 = (_List_node_base *)local_838;
    local_838._0_8_ = (_List_node_base *)local_838;
    uStack_820 = (ulong)auStack_828;
    auStack_828 = (undefined1  [8])auStack_828;
    p_Stack_818 = (_List_node_base *)&p_Stack_818;
    pppppppuStack_808 = &pppppppuStack_808;
    local_7f8 = (_List_node_base *)&local_7f8;
    local_7e8 = (_List_node_base *)&local_7e8;
    local_7d8 = (_List_node_base *)&local_7d8;
    local_7b8 = (_List_node_base *)&local_7b8;
    p_Stack_7a8 = (_List_node_base *)&p_Stack_7a8;
    local_798 = &local_798;
    local_788 = &local_788;
    local_778 = &local_778;
    local_768 = &local_768;
    local_758 = &local_758;
    local_748 = &local_748;
    local_738 = &local_738;
    local_728 = &local_728;
    local_718 = &local_718;
    local_708 = &local_708;
    local_6f8 = &local_6f8;
    local_6e8 = &local_6e8;
    local_6d8 = &local_6d8;
    local_6c8 = &local_6c8;
    local_6b8 = &local_6b8;
    local_6a8 = &local_6a8;
    local_698 = &local_698;
    local_688 = &local_688;
    local_678 = &local_678;
    local_668 = &local_668;
    local_658 = &local_658;
    local_648 = &local_648;
    local_638 = &local_638;
    local_628 = &local_628;
    local_618 = &local_618;
    local_608 = &local_608;
    local_5f8 = &local_5f8;
    local_5e8 = &local_5e8;
    local_5d8 = &local_5d8;
    local_5c8 = &local_5c8;
    local_5b8 = &local_5b8;
    local_5a8 = &local_5a8;
    local_598 = &local_598;
    local_588 = &local_588;
    local_578 = &local_578;
    local_568 = &local_568;
    local_558 = &local_558;
    local_548 = &local_548;
    local_538 = &local_538;
    local_528 = &local_528;
    local_518 = &local_518;
    local_508 = &local_508;
    local_4f8 = &local_4f8;
    local_4e8 = &local_4e8;
    local_4d8 = &local_4d8;
    local_4c8 = &local_4c8;
    local_4b8 = &local_4b8;
    local_4a8 = &local_4a8;
    local_498 = &local_498;
    local_488 = &local_488;
    local_478 = &local_478;
    local_468 = &local_468;
    local_458 = &local_458;
    local_448 = &local_448;
    p_Var26 = (_List_node_base *)local_838;
    local_b88 = (_List_node_base *)&local_b88;
    p_Stack_b80 = (_List_node_base *)&local_b88;
    local_810 = p_Stack_818;
    local_800 = pppppppuStack_808;
    p_Stack_7f0 = local_7f8;
    p_Stack_7e0 = local_7e8;
    uStack_7d0 = local_7d8;
    local_7c8 = (_List_node_base *)&local_7c8;
    local_7c0 = (_List_node_base *)&local_7c8;
    local_7b0 = local_7b8;
    local_7a0 = p_Stack_7a8;
    local_790 = local_798;
    local_780 = local_788;
    local_770 = local_778;
    local_760 = local_768;
    local_750 = local_758;
    local_740 = local_748;
    local_730 = local_738;
    local_720 = local_728;
    local_710 = local_718;
    local_700 = local_708;
    local_6f0 = local_6f8;
    local_6e0 = local_6e8;
    local_6d0 = local_6d8;
    local_6c0 = local_6c8;
    local_6b0 = local_6b8;
    local_6a0 = local_6a8;
    local_690 = local_698;
    local_680 = local_688;
    local_670 = local_678;
    local_660 = local_668;
    local_650 = local_658;
    local_640 = local_648;
    local_630 = local_638;
    local_620 = local_628;
    local_610 = local_618;
    local_600 = local_608;
    local_5f0 = local_5f8;
    local_5e0 = local_5e8;
    local_5d0 = local_5d8;
    local_5c0 = local_5c8;
    local_5b0 = local_5b8;
    local_5a0 = local_5a8;
    local_590 = local_598;
    local_580 = local_588;
    local_570 = local_578;
    local_560 = local_568;
    local_550 = local_558;
    local_540 = local_548;
    local_530 = local_538;
    local_520 = local_528;
    local_510 = local_518;
    local_500 = local_508;
    local_4f0 = local_4f8;
    local_4e0 = local_4e8;
    local_4d0 = local_4d8;
    local_4c0 = local_4c8;
    local_4b0 = local_4b8;
    local_4a0 = local_4a8;
    local_490 = local_498;
    local_480 = local_488;
    local_470 = local_478;
    local_460 = local_468;
    local_450 = local_458;
    local_440 = local_448;
    do {
      p_Var67 = p_Var26;
      p_Var26 = (_List_node_base *)local_838;
      std::__detail::_List_node_base::_M_transfer((_List_node_base *)&local_b88,local_a08);
      if (p_Var26 == p_Var67) {
        bVar98 = true;
      }
      else {
        do {
          p_Var72 = p_Var26;
          p_Var27 = *(_List_node_base **)p_Var72;
          if (p_Var27 == p_Var72) {
            p_Var26 = p_Var72;
            goto LAB_00250793;
          }
          if (local_b88 != (_List_node_base *)&local_b88) {
            p_Var26 = p_Var27;
            p_Var39 = local_b88;
            do {
                    /* try { // try from 00250725 to 00250734 has its CatchHandler @ 0025c735 */
              (**(code **)(**(long **)(p_Var39 + 0x10) + 0x10))();
              (**(code **)(**(long **)(p_Var26 + 0x10) + 0x10))();
              if (extraout_RDX_19 < extraout_RDX_20) {
                p_Var40 = *(_List_node_base **)p_Var39;
                std::__detail::_List_node_base::_M_transfer(p_Var26,p_Var39);
                p_Var39 = p_Var40;
              }
              else {
                p_Var26 = *(_List_node_base **)p_Var26;
              }
            } while ((p_Var26 != p_Var72) && (p_Var39 != (_List_node_base *)&local_b88));
            if (p_Var39 != (_List_node_base *)&local_b88) {
              std::__detail::_List_node_base::_M_transfer(p_Var72,p_Var39);
            }
          }
          std::__detail::_List_node_base::swap((_List_node_base *)&local_b88,p_Var72);
          p_Var26 = p_Var72 + 0x10;
        } while (p_Var72 + 0x10 != p_Var67);
        p_Var26 = p_Var67;
LAB_00250793:
        bVar98 = p_Var27 != p_Var72;
      }
      std::__detail::_List_node_base::swap((_List_node_base *)&local_b88,p_Var26);
      p_Var26 = p_Var67 + (ulong)bVar98 * 0x10;
    } while (local_a08 != (_List_node_base *)&local_a08);
    for (p_Var26 = (_List_node_base *)auStack_828; p_Var26 != p_Var67 + (ulong)bVar98 * 0x10;
        p_Var26 = p_Var26 + 0x10) {
      p_Var27 = *(_List_node_base **)p_Var26;
      _local_c08 = p_Var26;
      p_Var72 = *(_List_node_base **)(p_Var26 + -0x10);
      while ((p_Var27 != p_Var26 && (p_Var72 != p_Var26 + -0x10))) {
                    /* try { // try from 0025094f to 0025095e has its CatchHandler @ 0025c28f */
        (**(code **)(**(long **)(p_Var72 + 0x10) + 0x10))();
        (**(code **)(**(long **)(p_Var27 + 0x10) + 0x10))();
        if (extraout_RDX_23 < extraout_RDX_24) {
          p_Var39 = *(_List_node_base **)p_Var72;
          std::__detail::_List_node_base::_M_transfer(p_Var27,p_Var72);
          p_Var72 = p_Var39;
        }
        else {
          p_Var27 = *(_List_node_base **)p_Var27;
        }
      }
      if (p_Var72 != p_Var26 + -0x10) {
        std::__detail::_List_node_base::_M_transfer(p_Var26,p_Var72);
      }
    }
    p_Var26 = p_Var67 + -0x10;
    if (bVar98 != false) {
      p_Var26 = p_Var67;
    }
    std::__detail::_List_node_base::swap(p_Var26,(_List_node_base *)&local_a08);
    if ((long)local_9f0 < (long)p_Stack_9e8) goto LAB_00252580;
  }
  do {
    p_Stack_9e8 = (_List_node_base *)0x7fffffffffffffff;
    if (local_a08 != (_List_node_base *)&local_a08) {
      plVar90 = *(long **)(local_a08 + 0x10);
      p_Var26 = local_a08;
      while( true ) {
        (**(code **)(*plVar90 + 0x20))(plVar90);
        cVar23 = (**(code **)(*plVar90 + 0x18))(plVar90);
        if (cVar23 == '\0') break;
        p_Var67 = (_List_node_base *)(**(code **)(*plVar90 + 0x10))(plVar90);
        if ((long)local_9f0 < (long)p_Var67) {
          local_9f0 = p_Var67;
        }
        do {
          (**(code **)(*plVar90 + 0x10))(plVar90);
          if ((long)extraout_RDX_22 < (long)p_Stack_9e8) {
            p_Stack_9e8 = extraout_RDX_22;
          }
          p_Var26 = *(_List_node_base **)p_Var26;
          if (p_Var26 == (_List_node_base *)&local_a08) goto LAB_002508a0;
          plVar90 = *(long **)(p_Var26 + 0x10);
        } while ((p_Var26 != local_a08) &&
                ((**(code **)(*plVar90 + 0x10))(plVar90), (long)local_9f0 < extraout_RDX_21
                    /* try { // try from 00250803 to 00250855 has its CatchHandler @ 0025c24f */));
      }
      break;
    }
LAB_002508a0:
                    /* try { // try from 002508a0 to 002508ac has its CatchHandler @ 0025bead */
    std::__cxx11::list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>
    ::
    sort<juce::detail::IntersectingRangedValues<int_const,std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>const>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
              ((_List_node_base *)&local_a08);
  } while ((long)p_Stack_9e8 <= (long)local_9f0);
LAB_00252580:
  local_810 = local_a50;
  pppppppuStack_808 = pppppppuStack_a48;
  p_Stack_818 = p_Stack_a58;
  stack0xfffffffffffff7d0 = p_Stack_a70;
  local_838._0_8_ = &PTR__RangedIterator_00710ae8;
  uStack_820 = (ulong)local_a60;
  auStack_828 = (undefined1  [8])p_Stack_a68;
  local_800 = (undefined8 *******)&PTR__RangedIterator_00710bd8;
  local_7d8 = local_a18;
  uStack_7d0 = p_Stack_a10;
  local_7e8 = local_a28;
  p_Stack_7e0 = p_Stack_a20;
  local_7f8 = local_a38;
  p_Stack_7f0 = p_Stack_a30;
  local_7b8 = (_List_node_base *)0x0;
  p_Var26 = local_a08;
  local_7c8 = (_List_node_base *)&local_7c8;
  local_7c0 = (_List_node_base *)&local_7c8;
  if (local_a08 == (_List_node_base *)&local_a08) {
    local_7b0 = local_9f0;
    p_Stack_7a8 = p_Stack_9e8;
  }
  else {
    do {
                    /* try { // try from 00252620 to 00252629 has its CatchHandler @ 0025c67e */
      p_Var67 = operator_new(0x18);
      *(long *)(p_Var67 + 0x10) = *(long *)(p_Var26 + 0x10);
      std::__detail::_List_node_base::_M_hook(p_Var67);
      local_7b8 = local_7b8 + 1;
      p_Var26 = *(_List_node_base **)p_Var26;
    } while (p_Var26 != (_List_node_base *)&local_a08);
    local_7b0 = local_9f0;
    p_Stack_7a8 = p_Stack_9e8;
    p_Var26 = local_7c8;
    if (local_7c8 != (_List_node_base *)&local_7c8) {
      do {
                    /* try { // try from 00252687 to 00252689 has its CatchHandler @ 0025c435 */
        cVar23 = (**(code **)(**(long **)(p_Var26 + 0x10) + 0x18))();
        p_Var67 = local_7c8;
        p_Var27 = p_Var26;
        if (cVar23 == '\0') break;
        p_Var26 = *(_List_node_base **)p_Var26;
        p_Var27 = (_List_node_base *)&local_7c8;
      } while (p_Var26 != (_List_node_base *)&local_7c8);
      while (p_Var67 != (_List_node_base *)&local_7c8) {
        p_Var26 = *(_List_node_base **)p_Var67;
        operator_delete(p_Var67);
        p_Var67 = p_Var26;
      }
      if (p_Var27 != (_List_node_base *)&local_7c8) goto code_r0x002526c9;
    }
  }
  p_Var27 = p_Stack_9e8;
  p_Var67 = local_9f0;
  p_Var26 = p_Stack_a70;
  local_af0 = local_a38;
  _local_ab8 = (long)local_a28 - (long)p_Stack_a30;
  lVar33 = (long)local_a60 - (long)p_Stack_a68;
                    /* try { // try from 00250a43 to 00250a47 has its CatchHandler @ 0025c26c */
  pPVar38 = ParagraphStorage::getShapedText(*(ParagraphStorage **)(p_Stack_a70 + (lVar33 >> 1)));
  local_b18 = (_List_node_base *)(lVar33 >> 4);
  if ((long)p_Var27 <= (long)p_Var67) {
    p_Var27 = p_Var67;
  }
  lVar69 = (long)p_Var67 - *(long *)(*(long *)(p_Var26 + (long)local_b18 * 8) + 0x20);
  lVar33 = (long)p_Var27 - *(long *)(*(long *)(p_Var26 + (long)local_b18 * 8) + 0x20);
  if (lVar33 <= lVar69) {
    lVar33 = lVar69;
  }
                    /* try { // try from 00250a74 to 00250a86 has its CatchHandler @ 0025c267 */
  detail::ShapedText::getGlyphRanges(*(long *)pPVar38,lVar69,lVar33,(long *)&local_328);
  local_be0 = local_328;
  local_ad0 = p_Stack_320;
  if (local_328 != p_Stack_320) {
    _local_ab8 = (long)_local_ab8 >> 4;
    local_b58._0_8_ = p_Var26;
    do {
      pPVar38 = *(ParagraphStorage **)(p_Var26 + (long)local_b18 * 8);
      lVar33 = *(long *)(pPVar38 + 0x30);
      lVar69 = *(long *)(lVar33 + 0x70) - *(long *)(lVar33 + 0x68);
      if (lVar69 == 0) {
        lVar33 = 0;
      }
      else {
        lVar89 = *(long *)(lVar33 + 0x80);
        lVar37 = (lVar69 >> 4) * 0x10;
        lVar69 = 0;
        lVar33 = 0;
        do {
          while( true ) {
            pPVar32 = *(ParagraphStorage **)(lVar89 + (lVar69 >> 1));
            if (pPVar32 == pPVar38) goto LAB_00250ba3;
            if (pPVar32[0x60] != (ParagraphStorage)0x0) break;
                    /* try { // try from 00250b65 to 00250b6c has its CatchHandler @ 0025c9ea */
            pPVar36 = ParagraphStorage::getShapedText(pPVar32);
            lVar88 = *(long *)(*(long *)pPVar36 + 0x90) - *(long *)(*(long *)pPVar36 + 0x88) >> 5;
            *(long *)(pPVar32 + 0x58) = lVar88;
            pPVar32[0x60] = (ParagraphStorage)0x1;
            lVar33 = lVar33 + lVar88;
            lVar69 = lVar69 + 0x10;
            if (lVar37 == lVar69) goto LAB_00250ba3;
          }
          lVar33 = lVar33 + *(long *)(pPVar32 + 0x58);
          lVar69 = lVar69 + 0x10;
        } while (lVar37 != lVar69);
      }
LAB_00250ba3:
      puVar92 = *(undefined **)local_be0 + lVar33;
      puVar70 = *(undefined **)(local_be0 + 8) + lVar33;
      if ((long)puVar70 <= (long)puVar92) {
        puVar70 = puVar92;
      }
      uVar100 = *(undefined4 *)(local_af0 + _local_ab8 * 4);
      lVar33 = (long)uStack_8b0 - (long)local_8b8;
      _local_c08 = puVar92;
      if ((long)*(undefined **)local_be0 < (long)*(undefined **)(local_be0 + 8)) {
                    /* try { // try from 00250bfb to 00250ed5 has its CatchHandler @ 0025c7a9 */
        detail::Ranges::erase((Ranges *)&local_438,(ulong)puVar92,(ulong)puVar70,&local_8b8);
        puVar55 = puStack_430;
        puVar60 = local_438;
        p_Var67 = uStack_8b0;
        p_Var26 = (_List_node_base *)local_8b8;
        uVar54 = (long)puStack_430 - (long)local_438;
        puVar52 = local_438;
        if (0 < (long)uVar54) {
          uVar78 = uVar54 >> 4;
          do {
            uVar74 = uVar78 >> 1;
            uVar50 = uVar74;
            if ((long)puVar52[uVar74 * 2] < (long)puVar92) {
              uVar50 = ~uVar74 + uVar78;
              puVar52 = puVar52 + uVar74 * 2 + 2;
            }
            uVar78 = uVar50;
          } while (0 < (long)uVar50);
        }
        lVar69 = (long)puVar52 - (long)local_438 >> 4;
        if (uStack_8b0 == local_8a8) {
          lVar89 = (long)uStack_8b0 - (long)local_8b8;
          if (lVar89 == 0x7fffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("vector::_M_realloc_insert");
          }
          local_ba8 = (_List_node_base *)local_438;
          uVar50 = (lVar89 >> 4) * -0x5555555555555555;
          uVar78 = uVar50;
          if (lVar89 == 0) {
            uVar78 = 1;
          }
          uVar74 = uVar78 + uVar50;
          if (0x2aaaaaaaaaaaaaa < uVar74) {
            uVar74 = 0x2aaaaaaaaaaaaaa;
          }
          if (CARRY8(uVar78,uVar50)) {
            uVar74 = 0x2aaaaaaaaaaaaaa;
          }
          p_Var27 = operator_new(uVar74 * 0x30);
          lVar89 = (lVar89 >> 4) * 0x10;
          *(long *)(p_Var27 + lVar89) = lVar69;
          p_Var27[lVar89 + 0x28] = (_List_node_base)0x0;
          if (p_Var26 == p_Var67) {
            p_Var72 = p_Var27 + 0x30;
          }
          else {
            p_Var39 = p_Var26;
            p_Var40 = p_Var27;
            do {
              p_Var72 = p_Var40;
              uVar8 = *(undefined8 *)p_Var39;
              uVar10 = *(undefined8 *)(p_Var39 + 8);
              uVar44 = *(undefined8 *)(p_Var39 + 0x10);
              uVar5 = *(undefined8 *)(p_Var39 + 0x18);
              uVar103 = *(undefined4 *)(p_Var39 + 0x24);
              uVar108 = *(undefined4 *)(p_Var39 + 0x28);
              uVar7 = *(undefined4 *)(p_Var39 + 0x2c);
              *(undefined4 *)(p_Var72 + 0x20) = *(undefined4 *)(p_Var39 + 0x20);
              *(undefined4 *)(p_Var72 + 0x24) = uVar103;
              *(undefined4 *)(p_Var72 + 0x28) = uVar108;
              *(undefined4 *)(p_Var72 + 0x2c) = uVar7;
              *(undefined8 *)(p_Var72 + 0x10) = uVar44;
              *(undefined8 *)(p_Var72 + 0x18) = uVar5;
              *(undefined8 *)p_Var72 = uVar8;
              *(undefined8 *)(p_Var72 + 8) = uVar10;
              p_Var39 = p_Var39 + 0x30;
              p_Var40 = p_Var72 + 0x30;
            } while (p_Var39 != p_Var67);
            p_Var72 = p_Var72 + 0x60;
          }
          if (p_Var26 != (_List_node_base *)0x0) {
            operator_delete(p_Var26);
          }
          local_8a8 = p_Var27 + uVar74 * 0x30;
          local_8b8 = (undefined **)p_Var27;
          uStack_8b0 = p_Var72;
        }
        else {
          *(long *)uStack_8b0 = lVar69;
          uStack_8b0[0x28] = (_List_node_base)0x0;
          uStack_8b0 = uStack_8b0 + 0x30;
        }
        lVar69 = (long)puVar52 - (long)puVar60 >> 4;
        if (puVar55 == local_428) {
          if (uVar54 == 0x7ffffffffffffff0) {
                    /* try { // try from 0025bcdd to 0025bcf4 has its CatchHandler @ 0025c9cc */
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("vector::_M_realloc_insert");
          }
          uVar50 = (long)uVar54 >> 4;
          uVar78 = uVar50;
          if (uVar54 == 0) {
            uVar78 = 1;
          }
          uVar54 = uVar78 + uVar50;
          if (0x7ffffffffffffff < uVar54) {
            uVar54 = 0x7ffffffffffffff;
          }
          if (CARRY8(uVar78,uVar50)) {
            uVar54 = 0x7ffffffffffffff;
          }
          puVar34 = operator_new(uVar54 * 0x10);
          puVar61 = puVar60 + lVar69 * 2;
          puVar34[lVar69 * 2] = (ulong)puVar92;
          puVar34[lVar69 * 2 + 1] = (ulong)puVar70;
          puVar71 = puVar34;
          if ((long)puVar52 - (long)puVar60 == 0) goto joined_r0x00252412;
          lVar89 = 0;
          do {
            lVar37 = lVar89;
            uVar44 = ((undefined8 *)((long)puVar60 + lVar37))[1];
            *(undefined8 *)((long)puVar34 + lVar37) = *(undefined8 *)((long)puVar60 + lVar37);
            ((undefined8 *)((long)puVar34 + lVar37))[1] = uVar44;
            lVar89 = lVar37 + 0x10;
          } while (lVar69 * 0x10 != lVar37 + 0x10);
          puVar71 = (ulong *)((long)puVar34 + lVar37 + 0x20);
          while (puVar55 != puVar61) {
            uVar78 = puVar61[1];
            *puVar71 = *puVar61;
            puVar71[1] = uVar78;
            puVar61 = puVar61 + 2;
joined_r0x00252412:
            puVar71 = puVar71 + 2;
          }
          if (puVar60 != (ulong *)0x0) {
            operator_delete(puVar60);
          }
          local_428 = puVar34 + uVar54 * 2;
          local_438 = puVar34;
          puStack_430 = puVar71;
        }
        else {
          if (puVar55 == puVar52) {
            *puVar55 = (ulong)puVar92;
            puVar55[1] = (ulong)puVar70;
          }
          else {
            puVar61 = puVar60 + lVar69 * 2;
            puVar52 = puVar55 + -2;
            *puVar55 = puVar55[-2];
            puVar55[1] = puVar55[-1];
            if (0 < (long)puVar52 - (long)puVar61) {
              uVar54 = ((ulong)((long)puVar52 - (long)puVar61) >> 4) + 1;
              do {
                *puVar52 = puVar52[-2];
                puVar52[1] = puVar52[-1];
                puVar52 = puVar52 + -2;
                uVar54 = uVar54 - 1;
              } while (1 < uVar54);
            }
            *(char *)puVar61 = (char)puVar92;
            *(int *)((long)puVar61 + 1) = (int)((ulong)puVar92 >> 8);
            *(char *)((long)puVar61 + 7) = (char)((ulong)puVar92 >> 0x38);
            *(short *)((long)puVar61 + 5) = (short)((ulong)puVar92 >> 0x28);
            puVar60[lVar69 * 2 + 1] = (ulong)puVar70;
          }
          puStack_430 = puVar55 + 2;
        }
      }
      p_Var67 = (_List_node_base *)local_8b8;
      local_ba8 = uStack_8b0;
      lVar69 = (long)uStack_8b0 - (long)local_8b8 >> 4;
      if ((long)uStack_8b0 - (long)local_8b8 != 0) {
        lVar33 = lVar33 >> 4;
        uVar54 = lVar69 * -0x5555555555555555;
        bVar98 = uVar54 < (ulong)(lVar33 * -0x5555555555555555);
        lVar89 = uVar54 + lVar33 * 0x5555555555555555;
        if (!bVar98 && lVar89 != 0) {
          if (bVar98) {
            lVar89 = 0;
          }
          p_Var27 = (_List_node_base *)((long)local_8b8 + lVar33 * 0x10);
          p_Var26 = p_Var27 + lVar89 * 0x30;
          puVar29 = puStack_410;
          puVar28 = puStack_420;
          puVar87 = local_418;
          do {
            _Var24 = p_Var27[0x28];
            if (_Var24 == (_List_node_base)0x2) {
              lVar33 = *(long *)p_Var27;
              lVar89 = *(long *)(p_Var27 + 8);
              if (lVar33 == lVar89) goto LAB_0025103b;
              puVar85 = puVar28 + lVar33;
              puVar35 = puVar28 + lVar89;
              uVar54 = (long)puVar87 - (long)puVar35;
              if ((uVar54 != 0) && (0 < (long)uVar54)) {
                uVar78 = uVar54 >> 2;
                p_Var72 = (_List_node_base *)(uVar78 + (uVar54 < 4));
                if ((p_Var72 < (_List_node_base *)&DAT_00000008) ||
                   ((puVar85 < puVar28 + ((lVar89 + uVar78) - (ulong)(3 < uVar54)) + 1 &&
                    (puVar35 < puVar28 + ((lVar33 + uVar78) - (ulong)(3 < uVar54)) + 1)))) {
                  puVar94 = puVar85;
                }
                else {
                  local_b10 = (_List_node_base *)((ulong)p_Var72 & 0xfffffffffffffff8);
                  uVar50 = ((ulong)(local_b10 + -8) >> 3) + 1;
                  uVar74 = (ulong)((uint)uVar50 & 3);
                  if ((_List_node_base *)&DAT_00000017 < local_b10 + -8) {
                    uVar50 = uVar50 & 0x3ffffffffffffffc;
                    lVar37 = 0;
                    do {
                      uVar44 = *(undefined8 *)((long)(puVar28 + lVar89 + lVar37) + 8);
                      uVar5 = *(undefined8 *)(puVar28 + lVar89 + lVar37 + 4);
                      uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + lVar37 + 4) + 8);
                      *(undefined8 *)(puVar28 + lVar33 + lVar37) =
                           *(undefined8 *)(puVar28 + lVar89 + lVar37);
                      *(undefined8 *)((long)(puVar28 + lVar33 + lVar37) + 8) = uVar44;
                      *(undefined8 *)(puVar28 + lVar33 + lVar37 + 4) = uVar5;
                      *(undefined8 *)((long)(puVar28 + lVar33 + lVar37 + 4) + 8) = uVar8;
                      uVar44 = *(undefined8 *)((long)(puVar28 + lVar89 + lVar37 + 8) + 8);
                      uVar5 = *(undefined8 *)(puVar28 + lVar89 + lVar37 + 0xc);
                      uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + lVar37 + 0xc) + 8);
                      *(undefined8 *)(puVar28 + lVar33 + lVar37 + 8) =
                           *(undefined8 *)(puVar28 + lVar89 + lVar37 + 8);
                      *(undefined8 *)((long)(puVar28 + lVar33 + lVar37 + 8) + 8) = uVar44;
                      *(undefined8 *)(puVar28 + lVar33 + lVar37 + 0xc) = uVar5;
                      *(undefined8 *)((long)(puVar28 + lVar33 + lVar37 + 0xc) + 8) = uVar8;
                      uVar44 = *(undefined8 *)((long)(puVar28 + lVar89 + lVar37 + 0x10) + 8);
                      uVar5 = *(undefined8 *)(puVar28 + lVar89 + lVar37 + 0x14);
                      uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + lVar37 + 0x14) + 8);
                      *(undefined8 *)(puVar28 + lVar33 + lVar37 + 0x10) =
                           *(undefined8 *)(puVar28 + lVar89 + lVar37 + 0x10);
                      *(undefined8 *)((long)(puVar28 + lVar33 + lVar37 + 0x10) + 8) = uVar44;
                      *(undefined8 *)(puVar28 + lVar33 + lVar37 + 0x14) = uVar5;
                      *(undefined8 *)((long)(puVar28 + lVar33 + lVar37 + 0x14) + 8) = uVar8;
                      uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + lVar37 + 0x18) + 8);
                      uVar44 = *(undefined8 *)(puVar28 + lVar89 + lVar37 + 0x1c);
                      uVar5 = *(undefined8 *)((long)(puVar28 + lVar89 + lVar37 + 0x1c) + 8);
                      *(undefined8 *)(puVar28 + lVar33 + lVar37 + 0x18) =
                           *(undefined8 *)(puVar28 + lVar89 + lVar37 + 0x18);
                      *(undefined8 *)((long)(puVar28 + lVar33 + lVar37 + 0x18) + 8) = uVar8;
                      *(undefined8 *)(puVar28 + lVar33 + lVar37 + 0x1c) = uVar44;
                      *(undefined8 *)((long)(puVar28 + lVar33 + lVar37 + 0x1c) + 8) = uVar5;
                      lVar37 = lVar37 + 0x20;
                      uVar50 = uVar50 - 4;
                    } while (uVar50 != 0);
                  }
                  else {
                    lVar37 = 0;
                  }
                  if (uVar74 != 0) {
                    lVar88 = 0;
                    do {
                      puVar42 = (undefined8 *)((long)puVar28 + lVar88 + (lVar89 + lVar37) * 4);
                      uVar8 = puVar42[1];
                      puVar41 = (undefined8 *)
                                ((long)puVar28 + lVar88 + (lVar89 + lVar37) * 4 + 0x10);
                      uVar44 = *puVar41;
                      uVar5 = puVar41[1];
                      puVar41 = (undefined8 *)((long)puVar28 + lVar88 + (lVar33 + lVar37) * 4);
                      *puVar41 = *puVar42;
                      puVar41[1] = uVar8;
                      puVar41 = (undefined8 *)
                                ((long)puVar28 + lVar88 + (lVar33 + lVar37) * 4 + 0x10);
                      *puVar41 = uVar44;
                      puVar41[1] = uVar5;
                      lVar88 = lVar88 + 0x20;
                    } while (uVar74 * 0x20 != lVar88);
                  }
                  if (p_Var72 == local_b10) goto LAB_002511f4;
                  uVar78 = uVar78 - (long)local_b10;
                  puVar94 = puVar85 + (long)local_b10;
                  puVar35 = puVar35 + (long)local_b10;
                }
                uVar78 = uVar78 + 1;
                lVar33 = 0;
                do {
                  *(undefined4 *)((long)puVar94 + lVar33) = *(undefined4 *)((long)puVar35 + lVar33);
                  uVar78 = uVar78 - 1;
                  lVar33 = lVar33 + 4;
                } while (1 < uVar78);
              }
LAB_002511f4:
              puVar85 = (undefined4 *)((long)puVar85 + uVar54);
              if (puVar87 != puVar85) {
                puVar87 = puVar85;
                local_418 = puVar85;
              }
            }
            else if (_Var24 == (_List_node_base)0x1) {
              p_Var72 = *(_List_node_base **)p_Var27;
              puVar85 = puVar28 + (long)p_Var72;
              if (puVar87 == puVar29) {
                lVar33 = (long)puVar29 - (long)puVar28;
                if (lVar33 == 0x7ffffffffffffffc) {
                    /* try { // try from 0025bc95 to 0025bcac has its CatchHandler @ 0025c9cc */
                    /* WARNING: Subroutine does not return */
                  std::__throw_length_error("vector::_M_realloc_insert");
                }
                uVar78 = lVar33 >> 2;
                uVar54 = uVar78;
                if (lVar33 == 0) {
                  uVar54 = 1;
                }
                p_Var39 = (_List_node_base *)(uVar54 + uVar78);
                if ((_List_node_base *)0x1fffffffffffffff < p_Var39) {
                  p_Var39 = (_List_node_base *)0x1fffffffffffffff;
                }
                if (CARRY8(uVar54,uVar78)) {
                  p_Var39 = (_List_node_base *)0x1fffffffffffffff;
                }
                if (p_Var39 == (_List_node_base *)0x0) {
                  puVar87 = (undefined4 *)0x0;
                }
                else {
                  local_ae8._0_8_ = lVar33;
                  local_b38 = p_Var72;
                    /* try { // try from 00251288 to 00251324 has its CatchHandler @ 0025c96d */
                  puVar87 = operator_new((long)p_Var39 * 4);
                  p_Var72 = local_b38;
                  lVar33 = local_ae8._0_8_;
                }
                puVar87[(long)p_Var72] = *puVar85;
                if ((long)p_Var72 < 1) {
                  puVar35 = puVar87 + (long)p_Var72;
                }
                else {
                  puVar35 = puVar87;
                  puVar94 = puVar28;
                  if (6 < ((ulong)(p_Var72 + 0x3fffffffffffffff) & 0x3fffffffffffffff)) {
                    uVar78 = ((ulong)(p_Var72 + 0x3fffffffffffffff) & 0x3fffffffffffffff) + 1;
                    uVar74 = uVar78 & 0x7ffffffffffffff8;
                    uVar50 = (uVar74 - 8 >> 3) + 1;
                    uVar54 = (ulong)((uint)uVar50 & 3);
                    if (uVar74 - 8 < 0x18) {
                      lVar89 = 0;
                    }
                    else {
                      uVar50 = uVar50 & 0x3ffffffffffffffc;
                      lVar89 = 0;
                      do {
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar89) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar89 + 4);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 4) + 8);
                        *(undefined8 *)(puVar87 + lVar89) = *(undefined8 *)(puVar28 + lVar89);
                        *(undefined8 *)((long)(puVar87 + lVar89) + 8) = uVar44;
                        *(undefined8 *)(puVar87 + lVar89 + 4) = uVar5;
                        *(undefined8 *)((long)(puVar87 + lVar89 + 4) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar89 + 8) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar89 + 0xc);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 0xc) + 8);
                        *(undefined8 *)(puVar87 + lVar89 + 8) =
                             *(undefined8 *)(puVar28 + lVar89 + 8);
                        *(undefined8 *)((long)(puVar87 + lVar89 + 8) + 8) = uVar44;
                        *(undefined8 *)(puVar87 + lVar89 + 0xc) = uVar5;
                        *(undefined8 *)((long)(puVar87 + lVar89 + 0xc) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x10) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar89 + 0x14);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x14) + 8);
                        *(undefined8 *)(puVar87 + lVar89 + 0x10) =
                             *(undefined8 *)(puVar28 + lVar89 + 0x10);
                        *(undefined8 *)((long)(puVar87 + lVar89 + 0x10) + 8) = uVar44;
                        *(undefined8 *)(puVar87 + lVar89 + 0x14) = uVar5;
                        *(undefined8 *)((long)(puVar87 + lVar89 + 0x14) + 8) = uVar8;
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x18) + 8);
                        uVar44 = *(undefined8 *)(puVar28 + lVar89 + 0x1c);
                        uVar5 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x1c) + 8);
                        *(undefined8 *)(puVar87 + lVar89 + 0x18) =
                             *(undefined8 *)(puVar28 + lVar89 + 0x18);
                        *(undefined8 *)((long)(puVar87 + lVar89 + 0x18) + 8) = uVar8;
                        *(undefined8 *)(puVar87 + lVar89 + 0x1c) = uVar44;
                        *(undefined8 *)((long)(puVar87 + lVar89 + 0x1c) + 8) = uVar5;
                        lVar89 = lVar89 + 0x20;
                        uVar50 = uVar50 - 4;
                      } while (uVar50 != 0);
                    }
                    if (uVar54 != 0) {
                      lVar37 = 0;
                      do {
                        puVar42 = (undefined8 *)((long)puVar28 + lVar37 + lVar89 * 4);
                        uVar8 = puVar42[1];
                        puVar41 = (undefined8 *)((long)puVar28 + lVar37 + lVar89 * 4 + 0x10);
                        uVar44 = *puVar41;
                        uVar5 = puVar41[1];
                        puVar41 = (undefined8 *)((long)puVar87 + lVar37 + lVar89 * 4);
                        *puVar41 = *puVar42;
                        puVar41[1] = uVar8;
                        puVar41 = (undefined8 *)((long)puVar87 + lVar37 + lVar89 * 4 + 0x10);
                        *puVar41 = uVar44;
                        puVar41[1] = uVar5;
                        lVar37 = lVar37 + 0x20;
                      } while (uVar54 * 0x20 != lVar37);
                    }
                    puVar35 = puVar87 + uVar74;
                    if (uVar78 == uVar74) goto LAB_00251571;
                    puVar94 = puVar28 + uVar74;
                  }
                  do {
                    *puVar35 = *puVar94;
                    puVar94 = puVar94 + 1;
                    puVar35 = puVar35 + 1;
                  } while (puVar94 != puVar85);
                }
LAB_00251571:
                puVar94 = puVar35 + 1;
                if ((long)puVar29 - (long)puVar85 < 1) {
                  puVar94 = (undefined4 *)((long)puVar94 + ((long)puVar29 - (long)puVar85));
                }
                else if (puVar29 != puVar85) {
                  uVar54 = (lVar33 + (long)p_Var72 * -4) - 4;
                  if (0x1b < uVar54) {
                    uVar74 = (uVar54 >> 2) + 1;
                    uVar50 = uVar74 & 0x7ffffffffffffff8;
                    uVar78 = (uVar50 - 8 >> 3) + 1;
                    uVar54 = (ulong)((uint)uVar78 & 3);
                    if (uVar50 - 8 < 0x18) {
                      lVar33 = 0;
                    }
                    else {
                      uVar78 = uVar78 & 0x3ffffffffffffffc;
                      lVar33 = 0;
                      do {
                        uVar44 = *(undefined8 *)((long)(puVar28 + (long)(p_Var72 + lVar33)) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + (long)(p_Var72 + lVar33 + 4));
                        uVar8 = *(undefined8 *)((long)(puVar28 + (long)(p_Var72 + lVar33 + 4)) + 8);
                        *(undefined8 *)(puVar35 + lVar33 + 1) =
                             *(undefined8 *)(puVar28 + (long)(p_Var72 + lVar33));
                        *(undefined8 *)((long)(puVar35 + lVar33 + 1) + 8) = uVar44;
                        *(undefined8 *)(puVar35 + lVar33 + 5) = uVar5;
                        *(undefined8 *)((long)(puVar35 + lVar33 + 5) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + (long)(p_Var72 + lVar33 + 8)) + 8)
                        ;
                        uVar5 = *(undefined8 *)(puVar28 + (long)(p_Var72 + lVar33 + 0xc));
                        uVar8 = *(undefined8 *)
                                 ((long)(puVar28 + (long)(p_Var72 + lVar33 + 0xc)) + 8);
                        *(undefined8 *)(puVar35 + lVar33 + 9) =
                             *(undefined8 *)(puVar28 + (long)(p_Var72 + lVar33 + 8));
                        *(undefined8 *)((long)(puVar35 + lVar33 + 9) + 8) = uVar44;
                        *(undefined8 *)(puVar35 + lVar33 + 0xd) = uVar5;
                        *(undefined8 *)((long)(puVar35 + lVar33 + 0xd) + 8) = uVar8;
                        uVar44 = *(undefined8 *)
                                  ((long)(puVar28 + (long)(p_Var72 + lVar33 + 0x10)) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + (long)(p_Var72 + lVar33 + 0x14));
                        uVar8 = *(undefined8 *)
                                 ((long)(puVar28 + (long)(p_Var72 + lVar33 + 0x14)) + 8);
                        *(undefined8 *)(puVar35 + lVar33 + 0x11) =
                             *(undefined8 *)(puVar28 + (long)(p_Var72 + lVar33 + 0x10));
                        *(undefined8 *)((long)(puVar35 + lVar33 + 0x11) + 8) = uVar44;
                        *(undefined8 *)(puVar35 + lVar33 + 0x15) = uVar5;
                        *(undefined8 *)((long)(puVar35 + lVar33 + 0x15) + 8) = uVar8;
                        uVar8 = *(undefined8 *)
                                 ((long)(puVar28 + (long)(p_Var72 + lVar33 + 0x18)) + 8);
                        uVar44 = *(undefined8 *)(puVar28 + (long)(p_Var72 + lVar33 + 0x1c));
                        uVar5 = *(undefined8 *)
                                 ((long)(puVar28 + (long)(p_Var72 + lVar33 + 0x1c)) + 8);
                        *(undefined8 *)(puVar35 + lVar33 + 0x19) =
                             *(undefined8 *)(puVar28 + (long)(p_Var72 + lVar33 + 0x18));
                        *(undefined8 *)((long)(puVar35 + lVar33 + 0x19) + 8) = uVar8;
                        *(undefined8 *)(puVar35 + lVar33 + 0x1d) = uVar44;
                        *(undefined8 *)((long)(puVar35 + lVar33 + 0x1d) + 8) = uVar5;
                        lVar33 = lVar33 + 0x20;
                        uVar78 = uVar78 - 4;
                      } while (uVar78 != 0);
                    }
                    if (uVar54 != 0) {
                      lVar89 = 0;
                      do {
                        puVar42 = (undefined8 *)
                                  ((long)puVar28 + lVar89 + (long)(p_Var72 + lVar33) * 4);
                        uVar8 = puVar42[1];
                        puVar41 = (undefined8 *)
                                  ((long)puVar28 + lVar89 + (long)(p_Var72 + lVar33) * 4 + 0x10);
                        uVar44 = *puVar41;
                        uVar5 = puVar41[1];
                        puVar41 = (undefined8 *)((long)puVar35 + lVar89 + lVar33 * 4 + 4);
                        *puVar41 = *puVar42;
                        puVar41[1] = uVar8;
                        puVar41 = (undefined8 *)((long)puVar35 + lVar89 + lVar33 * 4 + 0x14);
                        *puVar41 = uVar44;
                        puVar41[1] = uVar5;
                        lVar89 = lVar89 + 0x20;
                      } while (uVar54 * 0x20 != lVar89);
                    }
                    puVar94 = puVar94 + uVar50;
                    if (uVar74 == uVar50) goto LAB_00251824;
                    puVar85 = puVar85 + uVar50;
                  }
                  do {
                    *puVar94 = *puVar85;
                    puVar85 = puVar85 + 1;
                    puVar94 = puVar94 + 1;
                  } while (puVar85 != puVar29);
                }
LAB_00251824:
                local_b10 = p_Var39;
                if (puVar28 != (undefined4 *)0x0) {
                  operator_delete(puVar28);
                }
                puVar29 = puVar87 + (long)local_b10;
                puVar28 = puVar87;
                puStack_420 = puVar87;
                local_418 = puVar94;
                puStack_410 = puVar29;
              }
              else {
                uVar103 = *puVar85;
                if (puVar87 == puVar85) {
                  *puVar87 = uVar103;
                  local_418 = puVar87 + 1;
                }
                else {
                  puVar35 = puVar87 + -1;
                  *puVar87 = puVar87[-1];
                  if (0 < (long)puVar35 - (long)puVar85) {
                    uVar54 = ((ulong)((long)puVar35 - (long)puVar85) >> 2) + 1;
                    do {
                      *puVar35 = puVar35[-1];
                      puVar35 = puVar35 + -1;
                      uVar54 = uVar54 - 1;
                    } while (1 < uVar54);
                  }
                  *puVar85 = uVar103;
                  local_418 = puVar87 + 1;
                }
              }
              puVar87 = local_418;
            }
            else if (_Var24 == (_List_node_base)0x0) {
              lVar33 = *(long *)p_Var27;
              puVar85 = puVar28 + lVar33;
              if (puVar87 == puVar29) {
                p_Var72 = (_List_node_base *)((long)puVar29 - (long)puVar28);
                if (p_Var72 == (_List_node_base *)0x7ffffffffffffffc) {
                    /* WARNING: Subroutine does not return */
                  std::__throw_length_error("vector::_M_realloc_insert");
                }
                uVar78 = (long)p_Var72 >> 2;
                uVar54 = uVar78;
                if (p_Var72 == (_List_node_base *)0x0) {
                  uVar54 = 1;
                }
                uVar50 = uVar54 + uVar78;
                if (0x1fffffffffffffff < uVar50) {
                  uVar50 = 0x1fffffffffffffff;
                }
                if (CARRY8(uVar54,uVar78)) {
                  uVar50 = 0x1fffffffffffffff;
                }
                if (uVar50 == 0) {
                  puVar35 = (undefined4 *)0x0;
                  *(undefined4 *)(lVar33 * 4) = uVar100;
                  if (0 < lVar33) goto LAB_00251347;
LAB_0025144e:
                  puVar94 = puVar35 + lVar33;
                }
                else {
                  local_b10 = p_Var72;
                  puVar35 = operator_new(uVar50 * 4);
                  puVar35[lVar33] = uVar100;
                  p_Var72 = local_b10;
                  if (lVar33 < 1) goto LAB_0025144e;
LAB_00251347:
                  uVar54 = lVar33 + 0x3fffffffffffffffU & 0x3fffffffffffffff;
                  puVar94 = puVar35;
                  puVar87 = puVar28;
                  if (uVar54 < 7) {
LAB_002516b0:
                    do {
                      *puVar94 = *puVar87;
                      puVar87 = puVar87 + 1;
                      puVar94 = puVar94 + 1;
                    } while (puVar87 != puVar85);
                  }
                  else {
                    uVar54 = uVar54 + 1;
                    uVar57 = uVar54 & 0x7ffffffffffffff8;
                    uVar74 = (uVar57 - 8 >> 3) + 1;
                    uVar78 = (ulong)((uint)uVar74 & 3);
                    if (uVar57 - 8 < 0x18) {
                      lVar89 = 0;
                    }
                    else {
                      uVar74 = uVar74 & 0x3ffffffffffffffc;
                      lVar89 = 0;
                      do {
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar89) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar89 + 4);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 4) + 8);
                        *(undefined8 *)(puVar35 + lVar89) = *(undefined8 *)(puVar28 + lVar89);
                        *(undefined8 *)((long)(puVar35 + lVar89) + 8) = uVar44;
                        *(undefined8 *)(puVar35 + lVar89 + 4) = uVar5;
                        *(undefined8 *)((long)(puVar35 + lVar89 + 4) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar89 + 8) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar89 + 0xc);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 0xc) + 8);
                        *(undefined8 *)(puVar35 + lVar89 + 8) =
                             *(undefined8 *)(puVar28 + lVar89 + 8);
                        *(undefined8 *)((long)(puVar35 + lVar89 + 8) + 8) = uVar44;
                        *(undefined8 *)(puVar35 + lVar89 + 0xc) = uVar5;
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0xc) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x10) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar89 + 0x14);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x14) + 8);
                        *(undefined8 *)(puVar35 + lVar89 + 0x10) =
                             *(undefined8 *)(puVar28 + lVar89 + 0x10);
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0x10) + 8) = uVar44;
                        *(undefined8 *)(puVar35 + lVar89 + 0x14) = uVar5;
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0x14) + 8) = uVar8;
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x18) + 8);
                        uVar44 = *(undefined8 *)(puVar28 + lVar89 + 0x1c);
                        uVar5 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x1c) + 8);
                        *(undefined8 *)(puVar35 + lVar89 + 0x18) =
                             *(undefined8 *)(puVar28 + lVar89 + 0x18);
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0x18) + 8) = uVar8;
                        *(undefined8 *)(puVar35 + lVar89 + 0x1c) = uVar44;
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0x1c) + 8) = uVar5;
                        lVar89 = lVar89 + 0x20;
                        uVar74 = uVar74 - 4;
                      } while (uVar74 != 0);
                    }
                    if (uVar78 != 0) {
                      lVar37 = 0;
                      do {
                        puVar42 = (undefined8 *)((long)puVar28 + lVar37 + lVar89 * 4);
                        uVar8 = puVar42[1];
                        puVar41 = (undefined8 *)((long)puVar28 + lVar37 + lVar89 * 4 + 0x10);
                        uVar44 = *puVar41;
                        uVar5 = puVar41[1];
                        puVar41 = (undefined8 *)((long)puVar35 + lVar37 + lVar89 * 4);
                        *puVar41 = *puVar42;
                        puVar41[1] = uVar8;
                        puVar41 = (undefined8 *)((long)puVar35 + lVar37 + lVar89 * 4 + 0x10);
                        *puVar41 = uVar44;
                        puVar41[1] = uVar5;
                        lVar37 = lVar37 + 0x20;
                      } while (uVar78 * 0x20 != lVar37);
                    }
                    puVar94 = puVar35 + uVar57;
                    if (uVar54 != uVar57) {
                      puVar87 = puVar28 + uVar57;
                      goto LAB_002516b0;
                    }
                  }
                }
                puVar87 = puVar94 + 1;
                if ((long)puVar29 - (long)puVar85 < 1) {
                  puVar87 = (undefined4 *)((long)puVar87 + ((long)puVar29 - (long)puVar85));
                }
                else if (puVar29 != puVar85) {
                  if ((_List_node_base *)0x1b < p_Var72 + lVar33 * -4 + -4) {
                    uVar57 = ((ulong)(p_Var72 + lVar33 * -4 + -4) >> 2) + 1;
                    uVar74 = uVar57 & 0x7ffffffffffffff8;
                    uVar78 = (uVar74 - 8 >> 3) + 1;
                    uVar54 = (ulong)((uint)uVar78 & 3);
                    if (uVar74 - 8 < 0x18) {
                      lVar89 = 0;
                    }
                    else {
                      uVar78 = uVar78 & 0x3ffffffffffffffc;
                      lVar89 = 0;
                      do {
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar89) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar33 + lVar89 + 4);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar89 + 4) + 8);
                        *(undefined8 *)(puVar94 + lVar89 + 1) =
                             *(undefined8 *)(puVar28 + lVar33 + lVar89);
                        *(undefined8 *)((long)(puVar94 + lVar89 + 1) + 8) = uVar44;
                        *(undefined8 *)(puVar94 + lVar89 + 5) = uVar5;
                        *(undefined8 *)((long)(puVar94 + lVar89 + 5) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar89 + 8) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar33 + lVar89 + 0xc);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar89 + 0xc) + 8);
                        *(undefined8 *)(puVar94 + lVar89 + 9) =
                             *(undefined8 *)(puVar28 + lVar33 + lVar89 + 8);
                        *(undefined8 *)((long)(puVar94 + lVar89 + 9) + 8) = uVar44;
                        *(undefined8 *)(puVar94 + lVar89 + 0xd) = uVar5;
                        *(undefined8 *)((long)(puVar94 + lVar89 + 0xd) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar89 + 0x10) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar33 + lVar89 + 0x14);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar89 + 0x14) + 8);
                        *(undefined8 *)(puVar94 + lVar89 + 0x11) =
                             *(undefined8 *)(puVar28 + lVar33 + lVar89 + 0x10);
                        *(undefined8 *)((long)(puVar94 + lVar89 + 0x11) + 8) = uVar44;
                        *(undefined8 *)(puVar94 + lVar89 + 0x15) = uVar5;
                        *(undefined8 *)((long)(puVar94 + lVar89 + 0x15) + 8) = uVar8;
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar89 + 0x18) + 8);
                        uVar44 = *(undefined8 *)(puVar28 + lVar33 + lVar89 + 0x1c);
                        uVar5 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar89 + 0x1c) + 8);
                        *(undefined8 *)(puVar94 + lVar89 + 0x19) =
                             *(undefined8 *)(puVar28 + lVar33 + lVar89 + 0x18);
                        *(undefined8 *)((long)(puVar94 + lVar89 + 0x19) + 8) = uVar8;
                        *(undefined8 *)(puVar94 + lVar89 + 0x1d) = uVar44;
                        *(undefined8 *)((long)(puVar94 + lVar89 + 0x1d) + 8) = uVar5;
                        lVar89 = lVar89 + 0x20;
                        uVar78 = uVar78 - 4;
                      } while (uVar78 != 0);
                    }
                    if (uVar54 != 0) {
                      lVar37 = 0;
                      do {
                        puVar42 = (undefined8 *)((long)puVar28 + lVar37 + (lVar33 + lVar89) * 4);
                        uVar8 = puVar42[1];
                        puVar41 = (undefined8 *)
                                  ((long)puVar28 + lVar37 + (lVar33 + lVar89) * 4 + 0x10);
                        uVar44 = *puVar41;
                        uVar5 = puVar41[1];
                        puVar41 = (undefined8 *)((long)puVar94 + lVar37 + lVar89 * 4 + 4);
                        *puVar41 = *puVar42;
                        puVar41[1] = uVar8;
                        puVar41 = (undefined8 *)((long)puVar94 + lVar37 + lVar89 * 4 + 0x14);
                        *puVar41 = uVar44;
                        puVar41[1] = uVar5;
                        lVar37 = lVar37 + 0x20;
                      } while (uVar54 * 0x20 != lVar37);
                    }
                    puVar87 = puVar87 + uVar74;
                    if (uVar57 == uVar74) goto LAB_00251953;
                    puVar85 = puVar85 + uVar74;
                  }
                  do {
                    *puVar87 = *puVar85;
                    puVar85 = puVar85 + 1;
                    puVar87 = puVar87 + 1;
                  } while (puVar85 != puVar29);
                }
LAB_00251953:
                if (puVar28 != (undefined4 *)0x0) {
                  operator_delete(puVar28);
                }
                puVar29 = puVar35 + uVar50;
                puVar28 = puVar35;
                puStack_420 = puVar35;
                local_418 = puVar87;
                puStack_410 = puVar29;
              }
              else if (puVar87 == puVar85) {
                *puVar87 = uVar100;
                puVar87 = puVar87 + 1;
                local_418 = puVar87;
              }
              else {
                puVar35 = puVar87 + -1;
                *puVar87 = puVar87[-1];
                puVar87 = puVar87 + 1;
                if (0 < (long)puVar35 - (long)puVar85) {
                  uVar54 = ((ulong)((long)puVar35 - (long)puVar85) >> 2) + 1;
                  do {
                    *puVar35 = puVar35[-1];
                    puVar35 = puVar35 + -1;
                    uVar54 = uVar54 - 1;
                  } while (1 < uVar54);
                }
                *puVar85 = uVar100;
                local_418 = puVar87;
              }
            }
LAB_0025103b:
            p_Var27 = p_Var27 + 0x30;
          } while (p_Var27 != p_Var26);
        }
      }
      puVar60 = local_438;
      if (0 < (long)puStack_430 - (long)local_438) {
        uVar54 = (ulong)((long)puStack_430 - (long)local_438) >> 4;
        do {
          uVar50 = uVar54 >> 1;
          uVar78 = uVar50;
          if ((long)puVar60[uVar50 * 2 + 1] <= (long)puVar92) {
            uVar78 = ~uVar50 + uVar54;
            puVar60 = puVar60 + uVar50 * 2 + 2;
          }
          uVar54 = uVar78;
        } while (0 < (long)uVar78);
      }
      p_Var26 = (_List_node_base *)local_b58._0_8_;
      if ((((puVar60 != puStack_430) && ((long)*puVar60 <= (long)puVar92)) &&
          ((long)puVar60 - (long)local_438 != 0)) &&
         (uVar54 = (long)puVar60 - (long)local_438 >> 4,
         puStack_420[uVar54 - 1] == puStack_420[uVar54])) {
                    /* try { // try from 00251cca to 00251cde has its CatchHandler @ 0025c7a9 */
        detail::Ranges::mergeBack((Ranges *)&local_438,uVar54,&local_8b8);
        p_Var67 = (_List_node_base *)local_8b8;
        local_ba8 = uStack_8b0;
        p_Var26 = (_List_node_base *)local_b58._0_8_;
        if ((long)uStack_8b0 - (long)local_8b8 != 0) {
          uVar54 = ((long)uStack_8b0 - (long)local_8b8 >> 4) * -0x5555555555555555;
          bVar98 = uVar54 < (ulong)(lVar69 * -0x5555555555555555);
          lVar33 = uVar54 + lVar69 * 0x5555555555555555;
          if (!bVar98 && lVar33 != 0) {
            if (bVar98) {
              lVar33 = 0;
            }
            p_Var27 = (_List_node_base *)((long)local_8b8 + lVar69 * 0x10);
            p_Var72 = p_Var27 + lVar33 * 0x30;
            puVar28 = puStack_420;
            puVar29 = puStack_410;
            puVar87 = local_418;
            do {
              if (p_Var27[0x28] == (_List_node_base)0x2) {
                lVar33 = *(long *)p_Var27;
                lVar69 = *(long *)(p_Var27 + 8);
                if (lVar33 != lVar69) {
                  puVar85 = puVar28 + lVar33;
                  _local_c08 = puVar28;
                  puVar35 = puVar28 + lVar69;
                  uVar54 = (long)puVar87 - (long)puVar35;
                  if ((uVar54 != 0) && (0 < (long)uVar54)) {
                    uVar78 = uVar54 >> 2;
                    uVar50 = uVar78 + (uVar54 < 4);
                    if ((uVar50 < 8) ||
                       ((puVar85 < puVar28 + ((lVar69 + uVar78) - (ulong)(3 < uVar54)) + 1 &&
                        (puVar35 < puVar28 + ((uVar78 + lVar33) - (ulong)(3 < uVar54)) + 1)))) {
                      puVar94 = puVar85;
                    }
                    else {
                      uVar57 = uVar50 & 0xfffffffffffffff8;
                      uVar74 = (uVar57 - 8 >> 3) + 1;
                      uVar56 = (ulong)((uint)uVar74 & 3);
                      if (uVar57 - 8 < 0x18) {
                        lVar89 = 0;
                      }
                      else {
                        uVar74 = uVar74 & 0x3ffffffffffffffc;
                        lVar89 = 0;
                        do {
                          uVar44 = *(undefined8 *)((long)(puVar28 + lVar69 + lVar89) + 8);
                          uVar5 = *(undefined8 *)(puVar28 + lVar69 + lVar89 + 4);
                          uVar8 = *(undefined8 *)((long)(puVar28 + lVar69 + lVar89 + 4) + 8);
                          *(undefined8 *)(puVar28 + lVar33 + lVar89) =
                               *(undefined8 *)(puVar28 + lVar69 + lVar89);
                          *(undefined8 *)((long)(puVar28 + lVar33 + lVar89) + 8) = uVar44;
                          *(undefined8 *)(puVar28 + lVar33 + lVar89 + 4) = uVar5;
                          *(undefined8 *)((long)(puVar28 + lVar33 + lVar89 + 4) + 8) = uVar8;
                          uVar44 = *(undefined8 *)((long)(puVar28 + lVar69 + lVar89 + 8) + 8);
                          uVar5 = *(undefined8 *)(puVar28 + lVar69 + lVar89 + 0xc);
                          uVar8 = *(undefined8 *)((long)(puVar28 + lVar69 + lVar89 + 0xc) + 8);
                          *(undefined8 *)(puVar28 + lVar33 + lVar89 + 8) =
                               *(undefined8 *)(puVar28 + lVar69 + lVar89 + 8);
                          *(undefined8 *)((long)(puVar28 + lVar33 + lVar89 + 8) + 8) = uVar44;
                          *(undefined8 *)(puVar28 + lVar33 + lVar89 + 0xc) = uVar5;
                          *(undefined8 *)((long)(puVar28 + lVar33 + lVar89 + 0xc) + 8) = uVar8;
                          uVar44 = *(undefined8 *)((long)(puVar28 + lVar69 + lVar89 + 0x10) + 8);
                          uVar5 = *(undefined8 *)(puVar28 + lVar69 + lVar89 + 0x14);
                          uVar8 = *(undefined8 *)((long)(puVar28 + lVar69 + lVar89 + 0x14) + 8);
                          *(undefined8 *)(puVar28 + lVar33 + lVar89 + 0x10) =
                               *(undefined8 *)(puVar28 + lVar69 + lVar89 + 0x10);
                          *(undefined8 *)((long)(puVar28 + lVar33 + lVar89 + 0x10) + 8) = uVar44;
                          *(undefined8 *)(puVar28 + lVar33 + lVar89 + 0x14) = uVar5;
                          *(undefined8 *)((long)(puVar28 + lVar33 + lVar89 + 0x14) + 8) = uVar8;
                          uVar8 = *(undefined8 *)((long)(puVar28 + lVar69 + lVar89 + 0x18) + 8);
                          uVar44 = *(undefined8 *)(puVar28 + lVar69 + lVar89 + 0x1c);
                          uVar5 = *(undefined8 *)((long)(puVar28 + lVar69 + lVar89 + 0x1c) + 8);
                          *(undefined8 *)(puVar28 + lVar33 + lVar89 + 0x18) =
                               *(undefined8 *)(puVar28 + lVar69 + lVar89 + 0x18);
                          *(undefined8 *)((long)(puVar28 + lVar33 + lVar89 + 0x18) + 8) = uVar8;
                          *(undefined8 *)(puVar28 + lVar33 + lVar89 + 0x1c) = uVar44;
                          *(undefined8 *)((long)(puVar28 + lVar33 + lVar89 + 0x1c) + 8) = uVar5;
                          lVar89 = lVar89 + 0x20;
                          uVar74 = uVar74 - 4;
                        } while (uVar74 != 0);
                      }
                      if (uVar56 != 0) {
                        lVar37 = 0;
                        do {
                          puVar42 = (undefined8 *)((long)puVar28 + lVar37 + (lVar69 + lVar89) * 4);
                          uVar8 = puVar42[1];
                          puVar41 = (undefined8 *)
                                    ((long)puVar28 + lVar37 + (lVar69 + lVar89) * 4 + 0x10);
                          uVar44 = *puVar41;
                          uVar5 = puVar41[1];
                          puVar41 = (undefined8 *)((long)puVar28 + lVar37 + (lVar33 + lVar89) * 4);
                          *puVar41 = *puVar42;
                          puVar41[1] = uVar8;
                          puVar41 = (undefined8 *)
                                    ((long)puVar28 + lVar37 + (lVar33 + lVar89) * 4 + 0x10);
                          *puVar41 = uVar44;
                          puVar41[1] = uVar5;
                          lVar37 = lVar37 + 0x20;
                        } while (uVar56 * 0x20 != lVar37);
                      }
                      if (uVar50 == uVar57) goto LAB_00251ec4;
                      uVar78 = uVar78 - uVar57;
                      puVar94 = puVar85 + uVar57;
                      puVar35 = puVar35 + uVar57;
                    }
                    uVar78 = uVar78 + 1;
                    lVar33 = 0;
                    do {
                      *(undefined4 *)((long)puVar94 + lVar33) =
                           *(undefined4 *)((long)puVar35 + lVar33);
                      uVar78 = uVar78 - 1;
                      lVar33 = lVar33 + 4;
                    } while (1 < uVar78);
                  }
LAB_00251ec4:
                  puVar85 = (undefined4 *)((long)puVar85 + uVar54);
                  if (puVar87 != puVar85) {
                    puVar87 = puVar85;
                    local_418 = puVar85;
                  }
                }
LAB_00251fe6:
                p_Var26 = (_List_node_base *)local_b58._0_8_;
              }
              else if (p_Var27[0x28] == (_List_node_base)0x1) {
                lVar33 = *(long *)p_Var27;
                puVar85 = puVar28 + lVar33;
                if (puVar87 != puVar29) {
                  uVar100 = *puVar85;
                  if (puVar87 == puVar85) {
                    *puVar87 = uVar100;
                    puVar87 = puVar87 + 1;
                    local_418 = puVar87;
                  }
                  else {
                    puVar35 = puVar87 + -1;
                    *puVar87 = puVar87[-1];
                    puVar87 = puVar87 + 1;
                    if (0 < (long)puVar35 - (long)puVar85) {
                      uVar54 = ((ulong)((long)puVar35 - (long)puVar85) >> 2) + 1;
                      do {
                        *puVar35 = puVar35[-1];
                        puVar35 = puVar35 + -1;
                        uVar54 = uVar54 - 1;
                      } while (1 < uVar54);
                    }
                    *puVar85 = uVar100;
                    local_418 = puVar87;
                  }
                  goto LAB_00251fe6;
                }
                lVar69 = (long)puVar29 - (long)puVar28;
                if (lVar69 == 0x7ffffffffffffffc) {
                    /* try { // try from 0025bd01 to 0025bd0c has its CatchHandler @ 0025c9cc */
                    /* WARNING: Subroutine does not return */
                  std::__throw_length_error("vector::_M_realloc_insert");
                }
                uVar78 = lVar69 >> 2;
                uVar54 = uVar78;
                if (lVar69 == 0) {
                  uVar54 = 1;
                }
                uVar50 = uVar54 + uVar78;
                if (0x1fffffffffffffff < uVar50) {
                  uVar50 = 0x1fffffffffffffff;
                }
                if (CARRY8(uVar54,uVar78)) {
                  uVar50 = 0x1fffffffffffffff;
                }
                _local_c08 = uVar50;
                if (uVar50 == 0) {
                  puVar35 = (undefined4 *)0x0;
                  *(undefined4 *)(lVar33 * 4) = *puVar85;
                  if (0 < lVar33) goto LAB_00251f72;
LAB_00252007:
                  puVar94 = puVar35 + lVar33;
                }
                else {
                    /* try { // try from 00251f4b to 00251f4f has its CatchHandler @ 0025c2e5 */
                  puVar35 = operator_new(uVar50 * 4);
                  puVar35[lVar33] = *puVar85;
                  if (lVar33 < 1) goto LAB_00252007;
LAB_00251f72:
                  uVar54 = lVar33 + 0x3fffffffffffffffU & 0x3fffffffffffffff;
                  puVar94 = puVar35;
                  puVar87 = puVar28;
                  if (uVar54 < 7) {
LAB_00252100:
                    do {
                      *puVar94 = *puVar87;
                      puVar87 = puVar87 + 1;
                      puVar94 = puVar94 + 1;
                    } while (puVar87 != puVar85);
                  }
                  else {
                    uVar54 = uVar54 + 1;
                    uVar57 = uVar54 & 0x7ffffffffffffff8;
                    uVar74 = (uVar57 - 8 >> 3) + 1;
                    uVar78 = (ulong)((uint)uVar74 & 3);
                    if (uVar57 - 8 < 0x18) {
                      lVar89 = 0;
                    }
                    else {
                      uVar74 = uVar74 & 0x3ffffffffffffffc;
                      lVar89 = 0;
                      do {
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar89) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar89 + 4);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 4) + 8);
                        *(undefined8 *)(puVar35 + lVar89) = *(undefined8 *)(puVar28 + lVar89);
                        *(undefined8 *)((long)(puVar35 + lVar89) + 8) = uVar44;
                        *(undefined8 *)(puVar35 + lVar89 + 4) = uVar5;
                        *(undefined8 *)((long)(puVar35 + lVar89 + 4) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar89 + 8) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar89 + 0xc);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 0xc) + 8);
                        *(undefined8 *)(puVar35 + lVar89 + 8) =
                             *(undefined8 *)(puVar28 + lVar89 + 8);
                        *(undefined8 *)((long)(puVar35 + lVar89 + 8) + 8) = uVar44;
                        *(undefined8 *)(puVar35 + lVar89 + 0xc) = uVar5;
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0xc) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x10) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar89 + 0x14);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x14) + 8);
                        *(undefined8 *)(puVar35 + lVar89 + 0x10) =
                             *(undefined8 *)(puVar28 + lVar89 + 0x10);
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0x10) + 8) = uVar44;
                        *(undefined8 *)(puVar35 + lVar89 + 0x14) = uVar5;
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0x14) + 8) = uVar8;
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x18) + 8);
                        uVar44 = *(undefined8 *)(puVar28 + lVar89 + 0x1c);
                        uVar5 = *(undefined8 *)((long)(puVar28 + lVar89 + 0x1c) + 8);
                        *(undefined8 *)(puVar35 + lVar89 + 0x18) =
                             *(undefined8 *)(puVar28 + lVar89 + 0x18);
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0x18) + 8) = uVar8;
                        *(undefined8 *)(puVar35 + lVar89 + 0x1c) = uVar44;
                        *(undefined8 *)((long)(puVar35 + lVar89 + 0x1c) + 8) = uVar5;
                        lVar89 = lVar89 + 0x20;
                        uVar74 = uVar74 - 4;
                      } while (uVar74 != 0);
                    }
                    if (uVar78 != 0) {
                      lVar37 = 0;
                      do {
                        puVar42 = (undefined8 *)((long)puVar28 + lVar37 + lVar89 * 4);
                        uVar8 = puVar42[1];
                        puVar41 = (undefined8 *)((long)puVar28 + lVar37 + lVar89 * 4 + 0x10);
                        uVar44 = *puVar41;
                        uVar5 = puVar41[1];
                        puVar41 = (undefined8 *)((long)puVar35 + lVar37 + lVar89 * 4);
                        *puVar41 = *puVar42;
                        puVar41[1] = uVar8;
                        puVar41 = (undefined8 *)((long)puVar35 + lVar37 + lVar89 * 4 + 0x10);
                        *puVar41 = uVar44;
                        puVar41[1] = uVar5;
                        lVar37 = lVar37 + 0x20;
                      } while (uVar78 * 0x20 != lVar37);
                    }
                    puVar94 = puVar35 + uVar57;
                    if (uVar54 != uVar57) {
                      puVar87 = puVar28 + uVar57;
                      goto LAB_00252100;
                    }
                  }
                }
                puVar87 = puVar94 + 1;
                if ((long)puVar29 - (long)puVar85 < 1) {
                  puVar87 = (undefined4 *)((long)puVar87 + ((long)puVar29 - (long)puVar85));
                }
                else if (puVar29 != puVar85) {
                  uVar54 = (lVar69 + lVar33 * -4) - 4;
                  if (0x1b < uVar54) {
                    uVar57 = (uVar54 >> 2) + 1;
                    uVar74 = uVar57 & 0x7ffffffffffffff8;
                    uVar78 = (uVar74 - 8 >> 3) + 1;
                    uVar54 = (ulong)((uint)uVar78 & 3);
                    if (uVar74 - 8 < 0x18) {
                      lVar69 = 0;
                    }
                    else {
                      uVar78 = uVar78 & 0x3ffffffffffffffc;
                      lVar69 = 0;
                      do {
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar33 + lVar69 + 4);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 4) + 8);
                        *(undefined8 *)(puVar94 + lVar69 + 1) =
                             *(undefined8 *)(puVar28 + lVar33 + lVar69);
                        *(undefined8 *)((long)(puVar94 + lVar69 + 1) + 8) = uVar44;
                        *(undefined8 *)(puVar94 + lVar69 + 5) = uVar5;
                        *(undefined8 *)((long)(puVar94 + lVar69 + 5) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 8) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar33 + lVar69 + 0xc);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 0xc) + 8);
                        *(undefined8 *)(puVar94 + lVar69 + 9) =
                             *(undefined8 *)(puVar28 + lVar33 + lVar69 + 8);
                        *(undefined8 *)((long)(puVar94 + lVar69 + 9) + 8) = uVar44;
                        *(undefined8 *)(puVar94 + lVar69 + 0xd) = uVar5;
                        *(undefined8 *)((long)(puVar94 + lVar69 + 0xd) + 8) = uVar8;
                        uVar44 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 0x10) + 8);
                        uVar5 = *(undefined8 *)(puVar28 + lVar33 + lVar69 + 0x14);
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 0x14) + 8);
                        *(undefined8 *)(puVar94 + lVar69 + 0x11) =
                             *(undefined8 *)(puVar28 + lVar33 + lVar69 + 0x10);
                        *(undefined8 *)((long)(puVar94 + lVar69 + 0x11) + 8) = uVar44;
                        *(undefined8 *)(puVar94 + lVar69 + 0x15) = uVar5;
                        *(undefined8 *)((long)(puVar94 + lVar69 + 0x15) + 8) = uVar8;
                        uVar8 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 0x18) + 8);
                        uVar44 = *(undefined8 *)(puVar28 + lVar33 + lVar69 + 0x1c);
                        uVar5 = *(undefined8 *)((long)(puVar28 + lVar33 + lVar69 + 0x1c) + 8);
                        *(undefined8 *)(puVar94 + lVar69 + 0x19) =
                             *(undefined8 *)(puVar28 + lVar33 + lVar69 + 0x18);
                        *(undefined8 *)((long)(puVar94 + lVar69 + 0x19) + 8) = uVar8;
                        *(undefined8 *)(puVar94 + lVar69 + 0x1d) = uVar44;
                        *(undefined8 *)((long)(puVar94 + lVar69 + 0x1d) + 8) = uVar5;
                        lVar69 = lVar69 + 0x20;
                        uVar78 = uVar78 - 4;
                      } while (uVar78 != 0);
                    }
                    if (uVar54 != 0) {
                      lVar89 = 0;
                      do {
                        puVar42 = (undefined8 *)((long)puVar28 + lVar89 + (lVar33 + lVar69) * 4);
                        uVar8 = puVar42[1];
                        puVar41 = (undefined8 *)
                                  ((long)puVar28 + lVar89 + (lVar33 + lVar69) * 4 + 0x10);
                        uVar44 = *puVar41;
                        uVar5 = puVar41[1];
                        puVar41 = (undefined8 *)((long)puVar94 + lVar89 + lVar69 * 4 + 4);
                        *puVar41 = *puVar42;
                        puVar41[1] = uVar8;
                        puVar41 = (undefined8 *)((long)puVar94 + lVar89 + lVar69 * 4 + 0x14);
                        *puVar41 = uVar44;
                        puVar41[1] = uVar5;
                        lVar89 = lVar89 + 0x20;
                      } while (uVar54 * 0x20 != lVar89);
                    }
                    puVar87 = puVar87 + uVar74;
                    if (uVar57 == uVar74) goto LAB_00252295;
                    puVar85 = puVar85 + uVar74;
                  }
                  do {
                    *puVar87 = *puVar85;
                    puVar85 = puVar85 + 1;
                    puVar87 = puVar87 + 1;
                  } while (puVar85 != puVar29);
                }
LAB_00252295:
                if (puVar28 != (undefined4 *)0x0) {
                  operator_delete(puVar28);
                }
                puVar29 = puVar35 + uVar50;
                p_Var26 = (_List_node_base *)local_b58._0_8_;
                puVar28 = puVar35;
                puStack_420 = puVar35;
                local_418 = puVar87;
                puStack_410 = puVar29;
              }
              p_Var27 = p_Var27 + 0x30;
            } while (p_Var27 != p_Var72);
          }
        }
      }
      puVar60 = local_438;
      if (0 < (long)puStack_430 - (long)local_438) {
        uVar54 = (ulong)((long)puStack_430 - (long)local_438) >> 4;
        do {
          uVar50 = uVar54 >> 1;
          uVar78 = uVar50;
          if ((long)puVar60[uVar50 * 2 + 1] <= (long)puVar70) {
            uVar78 = ~uVar50 + uVar54;
            puVar60 = puVar60 + uVar50 * 2 + 2;
          }
          uVar54 = uVar78;
        } while (0 < (long)uVar78);
      }
      if ((((puVar60 == puStack_430) || ((long)puVar70 < (long)*puVar60)) ||
          ((long)puVar60 - (long)local_438 == 0)) ||
         (uVar54 = (long)puVar60 - (long)local_438 >> 4,
         puStack_420[uVar54 - 1] != puStack_420[uVar54])) {
LAB_00250ae0:
        if (local_ba8 != p_Var67) {
LAB_00250ae7:
          uStack_8b0 = p_Var67;
        }
      }
      else {
        lVar69 = (long)local_ba8 - (long)p_Var67;
        lVar33 = lVar69 >> 0x3f;
                    /* try { // try from 00251bcc to 00251be0 has its CatchHandler @ 0025c7a9 */
        detail::Ranges::mergeBack((Ranges *)&local_438,uVar54,&local_8b8);
        p_Var67 = (_List_node_base *)local_8b8;
        local_ba8 = uStack_8b0;
        p_Var26 = (_List_node_base *)local_b58._0_8_;
        if ((long)uStack_8b0 - (long)local_8b8 == 0) goto LAB_00250ae0;
        uVar78 = (lVar69 / 6 + lVar33 >> 3) - lVar33;
        uVar54 = ((long)uStack_8b0 - (long)local_8b8) / 0x30;
        if (uVar78 < uVar54) {
          p_Var27 = (_List_node_base *)((long)local_8b8 + uVar78 * 0x30);
          uVar50 = uVar54;
          if (uVar78 < uVar54) {
            uVar50 = uVar78;
          }
          lVar33 = uVar54 * 0x30 + uVar50 * -0x30;
          do {
                    /* try { // try from 00251c80 to 00251c8f has its CatchHandler @ 0025c5fd */
            detail::RangedValues<int>::applyOperation
                      ((RangedValues<int> *)&local_438,(long *)p_Var27);
            p_Var27 = p_Var27 + 0x30;
            lVar33 = lVar33 + -0x30;
          } while (lVar33 != 0);
          goto LAB_00250ae0;
        }
        if (uStack_8b0 != (_List_node_base *)local_8b8) goto LAB_00250ae7;
      }
      local_be0 = local_be0 + 0x10;
    } while (local_be0 != local_ad0);
  }
  do {
    p_Stack_9e8 = (_List_node_base *)0x7fffffffffffffff;
    if (local_a08 != (_List_node_base *)&local_a08) {
      plVar90 = *(long **)(local_a08 + 0x10);
      p_Var26 = local_a08;
      while( true ) {
        (**(code **)(*plVar90 + 0x20))(plVar90);
        cVar23 = (**(code **)(*plVar90 + 0x18))(plVar90);
        if (cVar23 == '\0') break;
        p_Var67 = (_List_node_base *)(**(code **)(*plVar90 + 0x10))(plVar90);
        if ((long)local_9f0 < (long)p_Var67) {
          local_9f0 = p_Var67;
        }
        do {
          (**(code **)(*plVar90 + 0x10))(plVar90);
          if ((long)extraout_RDX_26 < (long)p_Stack_9e8) {
            p_Stack_9e8 = extraout_RDX_26;
          }
          p_Var26 = *(_List_node_base **)p_Var26;
          if (p_Var26 == (_List_node_base *)&local_a08) goto LAB_00252550;
          plVar90 = *(long **)(p_Var26 + 0x10);
        } while ((p_Var26 != local_a08) &&
                ((**(code **)(*plVar90 + 0x10))(plVar90), (long)local_9f0 < extraout_RDX_25
                    /* try { // try from 002524b3 to 00252505 has its CatchHandler @ 0025ca45 */));
      }
      break;
    }
LAB_00252550:
                    /* try { // try from 00252550 to 0025255c has its CatchHandler @ 0025c3a5 */
    std::__cxx11::list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>
    ::
    sort<juce::detail::IntersectingRangedValues<int_const,std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>const>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
              ((_List_node_base *)&local_a08);
  } while ((long)p_Stack_9e8 <= (long)local_9f0);
  goto LAB_00252580;
LAB_00255f50:
  p_Var26 = local_960;
  lVar33 = local_380;
  while (local_380 = lVar33, p_Var26 != (_List_node_base *)&local_960) {
    p_Var67 = *(_List_node_base **)p_Var26;
    operator_delete(p_Var26);
    lVar33 = local_380;
    p_Var26 = p_Var67;
  }
  if (p_Stack_3b0 != (_List_node_base *)0x0) {
    operator_delete(p_Stack_3b0);
  }
  if (local_3c8 != (_List_node_base *)0x0) {
    operator_delete(local_3c8);
  }
                    /* try { // try from 00255fb8 to 00255fc4 has its CatchHandler @ 0025bf75 */
  pPVar38 = ParagraphStorage::getShapedText(*(ParagraphStorage **)(lVar33 + local_408 * 8));
  puVar55 = puStack_3f0;
  puVar60 = local_3f8;
  pSVar93 = local_b20;
  local_ae8._0_8_ = pPVar38;
  local_1e8 = (_List_node_base *)0x0;
  p_Stack_1e0 = (_List_node_base *)0x0;
  local_1d8 = (_List_node_base *)0x0;
                    /* try { // try from 00255fec to 00256011 has its CatchHandler @ 0025bdf5 */
  detail::Ranges::getIntersectionsWith
            ((undefined8 *)local_838,(long *)local_3f8,(long *)puStack_3f0,(long)local_b20,
             (long)local_848);
  local_3a8 = (_List_node_base *)0x0;
  p_Stack_3a0 = (_List_node_base *)0x0;
  local_3b8 = 0;
  p_Stack_3b0 = (_List_node_base *)0x0;
  local_3c8 = (_List_node_base *)0x0;
  uStack_3c0 = 0;
  local_a78 = (undefined **)0x0;
  p_Stack_a70 = (_List_node_base *)0x0;
  p_Stack_a68 = (_List_node_base *)0x0;
  local_b38 = stack0xfffffffffffff7d0;
  if ((_List_node_base *)local_838._0_8_ != stack0xfffffffffffff7d0) {
    p_Var26 = (_List_node_base *)local_838._0_8_;
    do {
      p_Var67 = p_Stack_a70;
      ppuVar62 = local_a78;
      uVar54 = *(ulong *)p_Var26;
      uVar78 = (long)puVar55 - (long)puVar60;
      puVar52 = puVar60;
      if (0 < (long)uVar78) {
        uVar50 = uVar78 >> 4;
        do {
          uVar57 = uVar50 >> 1;
          uVar74 = uVar57;
          if ((long)puVar52[uVar57 * 2 + 1] <= (long)uVar54) {
            uVar74 = ~uVar57 + uVar50;
            puVar52 = puVar52 + uVar57 * 2 + 2;
          }
          uVar50 = uVar74;
        } while (0 < (long)uVar74);
      }
      if ((puVar52 != puVar55) && ((long)*puVar52 <= (long)uVar54)) {
        uVar78 = (long)puVar52 - (long)puVar60;
      }
      uVar100 = *(undefined4 *)((long)puStack_3e0 + ((long)uVar78 >> 2));
                    /* try { // try from 0025610c to 00256120 has its CatchHandler @ 0025c0e8 */
      detail::Ranges::set((Ranges *)&local_3c8,uVar54,*(ulong *)(p_Var26 + 8),&local_a78);
      pSVar93 = local_b20;
      if ((long)p_Stack_a70 - (long)local_a78 == 0) {
LAB_002561a0:
        if (p_Stack_a70 != (_List_node_base *)local_a78) {
LAB_002561ab:
          p_Stack_a70 = (_List_node_base *)local_a78;
        }
      }
      else {
        lVar69 = (long)p_Var67 - (long)ppuVar62 >> 4;
        uVar54 = ((long)p_Stack_a70 - (long)local_a78 >> 4) * -0x5555555555555555;
        bVar98 = uVar54 < (ulong)(lVar69 * -0x5555555555555555);
        lVar33 = uVar54 + lVar69 * 0x5555555555555555;
        if (bVar98 || lVar33 == 0) goto LAB_002561a0;
        if (bVar98) {
          lVar33 = 0;
        }
        ppuVar62 = local_a78 + lVar69 * 2;
        ppuVar86 = ppuVar62 + lVar33 * 6;
        p_Var67 = local_3a8;
        p_Var27 = p_Stack_3a0;
        do {
          p_Var72 = p_Stack_3b0;
          cVar23 = *(char *)(ppuVar62 + 5);
          if (cVar23 == '\x02') {
            puVar70 = *ppuVar62;
            puVar92 = ppuVar62[1];
            if (puVar70 == puVar92) goto LAB_002561f0;
            p_Var72 = p_Stack_3b0 + (long)puVar70 * 4;
            p_Var39 = p_Stack_3b0 + (long)puVar92 * 4;
            uVar54 = (long)p_Var67 - (long)p_Var39;
            if (uVar54 == 0) {
              uVar54 = 0;
            }
            else if (0 < (long)uVar54) {
              uVar78 = uVar54 >> 2;
              uVar50 = uVar78 + (uVar54 < 4);
              if ((uVar50 < 8) ||
                 ((p_Var72 < p_Stack_3b0 + (long)(puVar92 + (uVar78 - (3 < uVar54))) * 4 + 4 &&
                  (p_Var39 < p_Stack_3b0 + (long)(puVar70 + (uVar78 - (3 < uVar54))) * 4 + 4)))) {
                p_Var67 = p_Var72;
              }
              else {
                _local_c08 = ppuVar62;
                uVar57 = uVar50 & 0xfffffffffffffff8;
                uVar74 = (uVar57 - 8 >> 3) + 1;
                uVar56 = (ulong)((uint)uVar74 & 3);
                if (uVar57 - 8 < 0x18) {
                  lVar33 = 0;
                }
                else {
                  uVar74 = uVar74 & 0x3ffffffffffffffc;
                  lVar33 = 0;
                  do {
                    uVar44 = *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar92 * 4 + 8);
                    uVar5 = *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar92 * 4 + 0x10);
                    uVar8 = *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar92 * 4 + 0x10 + 8)
                    ;
                    *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar70 * 4) =
                         *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar92 * 4);
                    *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar70 * 4 + 8) = uVar44;
                    *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar70 * 4 + 0x10) = uVar5;
                    *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar70 * 4 + 0x10 + 8) = uVar8
                    ;
                    uVar44 = *(undefined8 *)
                              (p_Stack_3b0 + lVar33 * 4 + (long)puVar92 * 4 + 0x20 + 8);
                    uVar5 = *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar92 * 4 + 0x30);
                    uVar8 = *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar92 * 4 + 0x30 + 8)
                    ;
                    *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar70 * 4 + 0x20) =
                         *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar92 * 4 + 0x20);
                    *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar70 * 4 + 0x20 + 8) =
                         uVar44;
                    *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar70 * 4 + 0x30) = uVar5;
                    *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar70 * 4 + 0x30 + 8) = uVar8
                    ;
                    uVar44 = *(undefined8 *)
                              (p_Stack_3b0 + lVar33 * 4 + (long)puVar92 * 4 + 0x40 + 8);
                    uVar5 = *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar92 * 4 + 0x50);
                    uVar8 = *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar92 * 4 + 0x50 + 8)
                    ;
                    *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar70 * 4 + 0x40) =
                         *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar92 * 4 + 0x40);
                    *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar70 * 4 + 0x40 + 8) =
                         uVar44;
                    *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar70 * 4 + 0x50) = uVar5;
                    *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar70 * 4 + 0x50 + 8) = uVar8
                    ;
                    uVar8 = *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar92 * 4 + 0x60 + 8)
                    ;
                    uVar44 = *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar92 * 4 + 0x70);
                    uVar5 = *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar92 * 4 + 0x70 + 8)
                    ;
                    *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar70 * 4 + 0x60) =
                         *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar92 * 4 + 0x60);
                    *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar70 * 4 + 0x60 + 8) = uVar8
                    ;
                    *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar70 * 4 + 0x70) = uVar44;
                    *(undefined8 *)(p_Stack_3b0 + lVar33 * 4 + (long)puVar70 * 4 + 0x70 + 8) = uVar5
                    ;
                    lVar33 = lVar33 + 0x20;
                    uVar74 = uVar74 - 4;
                  } while (uVar74 != 0);
                }
                if (uVar56 != 0) {
                  lVar69 = 0;
                  do {
                    uVar8 = *(undefined8 *)(p_Stack_3b0 + lVar69 + (long)(puVar92 + lVar33) * 4 + 8)
                    ;
                    uVar44 = *(undefined8 *)
                              (p_Stack_3b0 + lVar69 + (long)(puVar92 + lVar33) * 4 + 0x10);
                    uVar5 = *(undefined8 *)
                             (p_Stack_3b0 + lVar69 + (long)(puVar92 + lVar33) * 4 + 0x10 + 8);
                    *(undefined8 *)(p_Stack_3b0 + lVar69 + (long)(puVar70 + lVar33) * 4) =
                         *(undefined8 *)(p_Stack_3b0 + lVar69 + (long)(puVar92 + lVar33) * 4);
                    *(undefined8 *)(p_Stack_3b0 + lVar69 + (long)(puVar70 + lVar33) * 4 + 8) = uVar8
                    ;
                    *(undefined8 *)(p_Stack_3b0 + lVar69 + (long)(puVar70 + lVar33) * 4 + 0x10) =
                         uVar44;
                    *(undefined8 *)(p_Stack_3b0 + lVar69 + (long)(puVar70 + lVar33) * 4 + 0x10 + 8)
                         = uVar5;
                    lVar69 = lVar69 + 0x20;
                  } while (uVar56 * 0x20 != lVar69);
                }
                if (uVar50 == uVar57) {
                  pSVar93 = local_b20;
                  goto LAB_002561e4;
                }
                uVar78 = uVar78 - uVar57;
                p_Var67 = p_Var72 + uVar57 * 4;
                p_Var39 = p_Var39 + uVar57 * 4;
                pSVar93 = local_b20;
              }
              uVar78 = uVar78 + 1;
              lVar33 = 0;
              do {
                *(undefined4 *)(p_Var67 + lVar33) = *(undefined4 *)(p_Var39 + lVar33);
                uVar78 = uVar78 - 1;
                lVar33 = lVar33 + 4;
              } while (1 < uVar78);
            }
LAB_002561e4:
            p_Var67 = p_Var72 + uVar54;
          }
          else if (cVar23 == '\x01') {
            puVar70 = *ppuVar62;
            p_Var39 = p_Stack_3b0 + (long)puVar70 * 4;
            if (p_Var67 == p_Var27) {
              _local_c08 = ppuVar62;
              lVar33 = (long)p_Var27 - (long)p_Stack_3b0;
              if (lVar33 == 0x7ffffffffffffffc) {
                local_3a8 = p_Var27;
                p_Stack_3a0 = p_Var27;
                    /* try { // try from 0025bd7d to 0025bda4 has its CatchHandler @ 0025c17d */
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              uVar78 = lVar33 >> 2;
              uVar54 = uVar78;
              if (lVar33 == 0) {
                uVar54 = 1;
              }
              local_b58._0_8_ = uVar54 + uVar78;
              if (0x1fffffffffffffff < (ulong)local_b58._0_8_) {
                local_b58._0_8_ = 0x1fffffffffffffff;
              }
              if (CARRY8(uVar54,uVar78)) {
                local_b58._0_8_ = 0x1fffffffffffffff;
              }
                    /* try { // try from 0025641f to 0025650a has its CatchHandler @ 0025c168 */
              p_Var49 = operator_new(local_b58._0_8_ * 4);
              *(undefined4 *)(p_Var49 + (long)puVar70 * 4) = *(undefined4 *)p_Var39;
              p_Var40 = p_Var49;
              if (puVar70 != (undefined *)0x0) {
                p_Var67 = p_Var72;
                if (6 < ((ulong)(puVar70 + 0x3fffffffffffffff) & 0x3fffffffffffffff)) {
                  uVar78 = ((ulong)(puVar70 + 0x3fffffffffffffff) & 0x3fffffffffffffff) + 1;
                  uVar50 = uVar78 & 0x7ffffffffffffff8;
                  uVar74 = (uVar50 - 8 >> 3) + 1;
                  uVar54 = (ulong)((uint)uVar74 & 3);
                  if (uVar50 - 8 < 0x18) {
                    lVar69 = 0;
                  }
                  else {
                    uVar74 = uVar74 & 0x3ffffffffffffffc;
                    lVar69 = 0;
                    do {
                      uVar44 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 8);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x10);
                      uVar8 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x10 + 8);
                      *(undefined8 *)(p_Var49 + lVar69 * 4) = *(undefined8 *)(p_Var72 + lVar69 * 4);
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 8) = uVar44;
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x10) = uVar5;
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x10 + 8) = uVar8;
                      uVar44 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x20 + 8);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x30);
                      uVar8 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x30 + 8);
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x20) =
                           *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x20);
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x20 + 8) = uVar44;
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x30) = uVar5;
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x30 + 8) = uVar8;
                      uVar44 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x40 + 8);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x50);
                      uVar8 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x50 + 8);
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x40) =
                           *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x40);
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x40 + 8) = uVar44;
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x50) = uVar5;
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x50 + 8) = uVar8;
                      uVar8 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x60 + 8);
                      uVar44 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x70);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x70 + 8);
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x60) =
                           *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x60);
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x60 + 8) = uVar8;
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x70) = uVar44;
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x70 + 8) = uVar5;
                      lVar69 = lVar69 + 0x20;
                      uVar74 = uVar74 - 4;
                    } while (uVar74 != 0);
                  }
                  if (uVar54 != 0) {
                    lVar89 = 0;
                    do {
                      uVar8 = *(undefined8 *)(p_Var72 + lVar89 + lVar69 * 4 + 8);
                      uVar44 = *(undefined8 *)(p_Var72 + lVar89 + lVar69 * 4 + 0x10);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar89 + lVar69 * 4 + 0x10 + 8);
                      *(undefined8 *)(p_Var49 + lVar89 + lVar69 * 4) =
                           *(undefined8 *)(p_Var72 + lVar89 + lVar69 * 4);
                      *(undefined8 *)(p_Var49 + lVar89 + lVar69 * 4 + 8) = uVar8;
                      *(undefined8 *)(p_Var49 + lVar89 + lVar69 * 4 + 0x10) = uVar44;
                      *(undefined8 *)(p_Var49 + lVar89 + lVar69 * 4 + 0x10 + 8) = uVar5;
                      lVar89 = lVar89 + 0x20;
                    } while (uVar54 * 0x20 != lVar89);
                  }
                  p_Var40 = p_Var49 + uVar50 * 4;
                  if (uVar78 == uVar50) goto LAB_002566a1;
                  p_Var67 = p_Var72 + uVar50 * 4;
                }
                do {
                  *(undefined4 *)p_Var40 = *(undefined4 *)p_Var67;
                  p_Var67 = p_Var67 + 4;
                  p_Var40 = p_Var40 + 4;
                } while (p_Var67 != p_Var39);
              }
LAB_002566a1:
              p_Var67 = p_Var40 + 4;
              if (p_Var27 != p_Var39) {
                uVar54 = (lVar33 + (long)puVar70 * -4) - 4;
                if (0x1b < uVar54) {
                  uVar74 = (uVar54 >> 2) + 1;
                  uVar50 = uVar74 & 0x7ffffffffffffff8;
                  uVar78 = (uVar50 - 8 >> 3) + 1;
                  uVar54 = (ulong)((uint)uVar78 & 3);
                  if (uVar50 - 8 < 0x18) {
                    lVar33 = 0;
                  }
                  else {
                    uVar78 = uVar78 & 0x3ffffffffffffffc;
                    lVar33 = 0;
                    do {
                      uVar44 = *(undefined8 *)(p_Var72 + lVar33 * 4 + (long)puVar70 * 4 + 8);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar33 * 4 + (long)puVar70 * 4 + 0x10);
                      uVar8 = *(undefined8 *)(p_Var72 + lVar33 * 4 + (long)puVar70 * 4 + 0x10 + 8);
                      *(undefined8 *)(p_Var40 + lVar33 * 4 + 4) =
                           *(undefined8 *)(p_Var72 + lVar33 * 4 + (long)puVar70 * 4);
                      *(undefined8 *)(p_Var40 + lVar33 * 4 + 4 + 8) = uVar44;
                      *(undefined8 *)(p_Var40 + lVar33 * 4 + 0x14) = uVar5;
                      *(undefined8 *)(p_Var40 + lVar33 * 4 + 0x14 + 8) = uVar8;
                      uVar44 = *(undefined8 *)(p_Var72 + lVar33 * 4 + (long)puVar70 * 4 + 0x20 + 8);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar33 * 4 + (long)puVar70 * 4 + 0x30);
                      uVar8 = *(undefined8 *)(p_Var72 + lVar33 * 4 + (long)puVar70 * 4 + 0x30 + 8);
                      *(undefined8 *)(p_Var40 + lVar33 * 4 + 0x24) =
                           *(undefined8 *)(p_Var72 + lVar33 * 4 + (long)puVar70 * 4 + 0x20);
                      *(undefined8 *)(p_Var40 + lVar33 * 4 + 0x24 + 8) = uVar44;
                      *(undefined8 *)(p_Var40 + lVar33 * 4 + 0x34) = uVar5;
                      *(undefined8 *)(p_Var40 + lVar33 * 4 + 0x34 + 8) = uVar8;
                      uVar44 = *(undefined8 *)(p_Var72 + lVar33 * 4 + (long)puVar70 * 4 + 0x40 + 8);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar33 * 4 + (long)puVar70 * 4 + 0x50);
                      uVar8 = *(undefined8 *)(p_Var72 + lVar33 * 4 + (long)puVar70 * 4 + 0x50 + 8);
                      *(undefined8 *)(p_Var40 + lVar33 * 4 + 0x44) =
                           *(undefined8 *)(p_Var72 + lVar33 * 4 + (long)puVar70 * 4 + 0x40);
                      *(undefined8 *)(p_Var40 + lVar33 * 4 + 0x44 + 8) = uVar44;
                      *(undefined8 *)(p_Var40 + lVar33 * 4 + 0x54) = uVar5;
                      *(undefined8 *)(p_Var40 + lVar33 * 4 + 0x54 + 8) = uVar8;
                      uVar8 = *(undefined8 *)(p_Var72 + lVar33 * 4 + (long)puVar70 * 4 + 0x60 + 8);
                      uVar44 = *(undefined8 *)(p_Var72 + lVar33 * 4 + (long)puVar70 * 4 + 0x70);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar33 * 4 + (long)puVar70 * 4 + 0x70 + 8);
                      *(undefined8 *)(p_Var40 + lVar33 * 4 + 100) =
                           *(undefined8 *)(p_Var72 + lVar33 * 4 + (long)puVar70 * 4 + 0x60);
                      *(undefined8 *)(p_Var40 + lVar33 * 4 + 100 + 8) = uVar8;
                      *(undefined8 *)(p_Var40 + lVar33 * 4 + 0x74) = uVar44;
                      *(undefined8 *)(p_Var40 + lVar33 * 4 + 0x74 + 8) = uVar5;
                      lVar33 = lVar33 + 0x20;
                      uVar78 = uVar78 - 4;
                    } while (uVar78 != 0);
                  }
                  if (uVar54 != 0) {
                    lVar69 = 0;
                    do {
                      uVar8 = *(undefined8 *)(p_Var72 + lVar69 + (long)(puVar70 + lVar33) * 4 + 8);
                      uVar44 = *(undefined8 *)
                                (p_Var72 + lVar69 + (long)(puVar70 + lVar33) * 4 + 0x10);
                      uVar5 = *(undefined8 *)
                               (p_Var72 + lVar69 + (long)(puVar70 + lVar33) * 4 + 0x10 + 8);
                      *(undefined8 *)(p_Var40 + lVar69 + lVar33 * 4 + 4) =
                           *(undefined8 *)(p_Var72 + lVar69 + (long)(puVar70 + lVar33) * 4);
                      *(undefined8 *)(p_Var40 + lVar69 + lVar33 * 4 + 4 + 8) = uVar8;
                      *(undefined8 *)(p_Var40 + lVar69 + lVar33 * 4 + 0x14) = uVar44;
                      *(undefined8 *)(p_Var40 + lVar69 + lVar33 * 4 + 0x14 + 8) = uVar5;
                      lVar69 = lVar69 + 0x20;
                    } while (uVar54 * 0x20 != lVar69);
                  }
                  p_Var67 = p_Var67 + uVar50 * 4;
                  if (uVar74 == uVar50) goto LAB_002567e3;
                  p_Var39 = p_Var39 + uVar50 * 4;
                }
                do {
                  *(undefined4 *)p_Var67 = *(undefined4 *)p_Var39;
                  p_Var39 = p_Var39 + 4;
                  p_Var67 = p_Var67 + 4;
                } while (p_Var39 != p_Var27);
              }
LAB_002567e3:
              if (p_Var72 != (_List_node_base *)0x0) {
                operator_delete(p_Var72);
              }
              p_Var27 = p_Var49 + local_b58._0_8_ * 4;
              pSVar93 = local_b20;
              p_Stack_3b0 = p_Var49;
            }
            else if (p_Var67 == p_Var39) {
              uVar103 = *(undefined4 *)p_Var39;
LAB_0025659b:
              *(undefined4 *)p_Var67 = uVar103;
              p_Var67 = p_Var67 + 4;
              pSVar93 = local_b20;
            }
            else {
              uVar103 = *(undefined4 *)p_Var39;
              p_Var72 = p_Var67 + -4;
              *(undefined4 *)p_Var67 = *(undefined4 *)(p_Var67 + -4);
              if (0 < (long)p_Var72 - (long)p_Var39) {
                uVar54 = ((ulong)((long)p_Var72 - (long)p_Var39) >> 2) + 1;
                do {
                  *(undefined4 *)p_Var72 = *(undefined4 *)(p_Var72 + -4);
                  p_Var72 = p_Var72 + -4;
                  uVar54 = uVar54 - 1;
                } while (1 < uVar54);
              }
              p_Var67 = p_Var67 + 4;
              *(undefined4 *)p_Var39 = uVar103;
              pSVar93 = local_b20;
            }
          }
          else if (cVar23 == '\0') {
            p_Var39 = p_Stack_3b0 + (long)*ppuVar62 * 4;
            if (p_Var67 == p_Var27) {
              local_b58._0_8_ = *ppuVar62;
              _local_c08 = ppuVar62;
              lVar33 = (long)p_Var27 - (long)p_Stack_3b0;
              if (lVar33 == 0x7ffffffffffffffc) {
                local_3a8 = p_Var27;
                p_Stack_3a0 = p_Var27;
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              uVar78 = lVar33 >> 2;
              uVar54 = uVar78;
              if (lVar33 == 0) {
                uVar54 = 1;
              }
              uVar50 = uVar54 + uVar78;
              if (0x1fffffffffffffff < uVar50) {
                uVar50 = 0x1fffffffffffffff;
              }
              if (CARRY8(uVar54,uVar78)) {
                uVar50 = 0x1fffffffffffffff;
              }
              p_Var49 = operator_new(uVar50 * 4);
              *(undefined4 *)(p_Var49 + local_b58._0_8_ * 4) = uVar100;
              p_Var40 = p_Var49;
              if (local_b58._0_8_ != 0) {
                uVar54 = local_b58._0_8_ + 0x3fffffffffffffff & 0x3fffffffffffffff;
                p_Var67 = p_Var72;
                if (6 < uVar54) {
                  uVar54 = uVar54 + 1;
                  uVar74 = uVar54 & 0x7ffffffffffffff8;
                  uVar57 = (uVar74 - 8 >> 3) + 1;
                  uVar78 = (ulong)((uint)uVar57 & 3);
                  if (uVar74 - 8 < 0x18) {
                    lVar69 = 0;
                  }
                  else {
                    uVar57 = uVar57 & 0x3ffffffffffffffc;
                    lVar69 = 0;
                    do {
                      uVar44 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 8);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x10);
                      uVar8 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x10 + 8);
                      *(undefined8 *)(p_Var49 + lVar69 * 4) = *(undefined8 *)(p_Var72 + lVar69 * 4);
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 8) = uVar44;
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x10) = uVar5;
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x10 + 8) = uVar8;
                      uVar44 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x20 + 8);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x30);
                      uVar8 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x30 + 8);
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x20) =
                           *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x20);
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x20 + 8) = uVar44;
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x30) = uVar5;
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x30 + 8) = uVar8;
                      uVar44 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x40 + 8);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x50);
                      uVar8 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x50 + 8);
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x40) =
                           *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x40);
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x40 + 8) = uVar44;
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x50) = uVar5;
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x50 + 8) = uVar8;
                      uVar8 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x60 + 8);
                      uVar44 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x70);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x70 + 8);
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x60) =
                           *(undefined8 *)(p_Var72 + lVar69 * 4 + 0x60);
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x60 + 8) = uVar8;
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x70) = uVar44;
                      *(undefined8 *)(p_Var49 + lVar69 * 4 + 0x70 + 8) = uVar5;
                      lVar69 = lVar69 + 0x20;
                      uVar57 = uVar57 - 4;
                    } while (uVar57 != 0);
                  }
                  if (uVar78 != 0) {
                    lVar89 = 0;
                    do {
                      uVar8 = *(undefined8 *)(p_Var72 + lVar89 + lVar69 * 4 + 8);
                      uVar44 = *(undefined8 *)(p_Var72 + lVar89 + lVar69 * 4 + 0x10);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar89 + lVar69 * 4 + 0x10 + 8);
                      *(undefined8 *)(p_Var49 + lVar89 + lVar69 * 4) =
                           *(undefined8 *)(p_Var72 + lVar89 + lVar69 * 4);
                      *(undefined8 *)(p_Var49 + lVar89 + lVar69 * 4 + 8) = uVar8;
                      *(undefined8 *)(p_Var49 + lVar89 + lVar69 * 4 + 0x10) = uVar44;
                      *(undefined8 *)(p_Var49 + lVar89 + lVar69 * 4 + 0x10 + 8) = uVar5;
                      lVar89 = lVar89 + 0x20;
                    } while (uVar78 * 0x20 != lVar89);
                  }
                  p_Var40 = p_Var49 + uVar74 * 4;
                  if (uVar54 == uVar74) goto LAB_00256901;
                  p_Var67 = p_Var72 + uVar74 * 4;
                }
                do {
                  *(undefined4 *)p_Var40 = *(undefined4 *)p_Var67;
                  p_Var67 = p_Var67 + 4;
                  p_Var40 = p_Var40 + 4;
                } while (p_Var67 != p_Var39);
              }
LAB_00256901:
              p_Var67 = p_Var40 + 4;
              if (p_Var27 != p_Var39) {
                uVar54 = (lVar33 + local_b58._0_8_ * -4) - 4;
                if (0x1b < uVar54) {
                  uVar57 = (uVar54 >> 2) + 1;
                  uVar74 = uVar57 & 0x7ffffffffffffff8;
                  uVar78 = (uVar74 - 8 >> 3) + 1;
                  uVar54 = (ulong)((uint)uVar78 & 3);
                  if (uVar74 - 8 < 0x18) {
                    lVar69 = 0;
                  }
                  else {
                    uVar78 = uVar78 & 0x3ffffffffffffffc;
                    lVar33 = local_b58._0_8_ * 4;
                    lVar69 = 0;
                    do {
                      uVar44 = *(undefined8 *)(p_Var72 + lVar69 * 4 + lVar33 + 8);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar69 * 4 + lVar33 + 0x10);
                      uVar8 = *(undefined8 *)(p_Var72 + lVar69 * 4 + lVar33 + 0x10 + 8);
                      *(undefined8 *)(p_Var40 + lVar69 * 4 + 4) =
                           *(undefined8 *)(p_Var72 + lVar69 * 4 + lVar33);
                      *(undefined8 *)(p_Var40 + lVar69 * 4 + 4 + 8) = uVar44;
                      *(undefined8 *)(p_Var40 + lVar69 * 4 + 0x14) = uVar5;
                      *(undefined8 *)(p_Var40 + lVar69 * 4 + 0x14 + 8) = uVar8;
                      uVar44 = *(undefined8 *)(p_Var72 + lVar69 * 4 + lVar33 + 0x20 + 8);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar69 * 4 + lVar33 + 0x30);
                      uVar8 = *(undefined8 *)(p_Var72 + lVar69 * 4 + lVar33 + 0x30 + 8);
                      *(undefined8 *)(p_Var40 + lVar69 * 4 + 0x24) =
                           *(undefined8 *)(p_Var72 + lVar69 * 4 + lVar33 + 0x20);
                      *(undefined8 *)(p_Var40 + lVar69 * 4 + 0x24 + 8) = uVar44;
                      *(undefined8 *)(p_Var40 + lVar69 * 4 + 0x34) = uVar5;
                      *(undefined8 *)(p_Var40 + lVar69 * 4 + 0x34 + 8) = uVar8;
                      uVar44 = *(undefined8 *)(p_Var72 + lVar69 * 4 + lVar33 + 0x40 + 8);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar69 * 4 + lVar33 + 0x50);
                      uVar8 = *(undefined8 *)(p_Var72 + lVar69 * 4 + lVar33 + 0x50 + 8);
                      *(undefined8 *)(p_Var40 + lVar69 * 4 + 0x44) =
                           *(undefined8 *)(p_Var72 + lVar69 * 4 + lVar33 + 0x40);
                      *(undefined8 *)(p_Var40 + lVar69 * 4 + 0x44 + 8) = uVar44;
                      *(undefined8 *)(p_Var40 + lVar69 * 4 + 0x54) = uVar5;
                      *(undefined8 *)(p_Var40 + lVar69 * 4 + 0x54 + 8) = uVar8;
                      uVar8 = *(undefined8 *)(p_Var72 + lVar69 * 4 + lVar33 + 0x60 + 8);
                      uVar44 = *(undefined8 *)(p_Var72 + lVar69 * 4 + lVar33 + 0x70);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar69 * 4 + lVar33 + 0x70 + 8);
                      *(undefined8 *)(p_Var40 + lVar69 * 4 + 100) =
                           *(undefined8 *)(p_Var72 + lVar69 * 4 + lVar33 + 0x60);
                      *(undefined8 *)(p_Var40 + lVar69 * 4 + 100 + 8) = uVar8;
                      *(undefined8 *)(p_Var40 + lVar69 * 4 + 0x74) = uVar44;
                      *(undefined8 *)(p_Var40 + lVar69 * 4 + 0x74 + 8) = uVar5;
                      lVar69 = lVar69 + 0x20;
                      uVar78 = uVar78 - 4;
                    } while (uVar78 != 0);
                  }
                  if (uVar54 != 0) {
                    lVar33 = (local_b58._0_8_ + lVar69) * 4;
                    lVar89 = 0;
                    do {
                      uVar8 = *(undefined8 *)(p_Var72 + lVar89 + lVar33 + 8);
                      uVar44 = *(undefined8 *)(p_Var72 + lVar89 + lVar33 + 0x10);
                      uVar5 = *(undefined8 *)(p_Var72 + lVar89 + lVar33 + 0x10 + 8);
                      *(undefined8 *)(p_Var40 + lVar89 + lVar69 * 4 + 4) =
                           *(undefined8 *)(p_Var72 + lVar89 + lVar33);
                      *(undefined8 *)(p_Var40 + lVar89 + lVar69 * 4 + 4 + 8) = uVar8;
                      *(undefined8 *)(p_Var40 + lVar89 + lVar69 * 4 + 0x14) = uVar44;
                      *(undefined8 *)(p_Var40 + lVar89 + lVar69 * 4 + 0x14 + 8) = uVar5;
                      lVar89 = lVar89 + 0x20;
                    } while (uVar54 * 0x20 != lVar89);
                  }
                  p_Var67 = p_Var67 + uVar74 * 4;
                  if (uVar57 == uVar74) goto LAB_00256a62;
                  p_Var39 = p_Var39 + uVar74 * 4;
                }
                do {
                  *(undefined4 *)p_Var67 = *(undefined4 *)p_Var39;
                  p_Var39 = p_Var39 + 4;
                  p_Var67 = p_Var67 + 4;
                } while (p_Var39 != p_Var27);
              }
LAB_00256a62:
              if (p_Var72 != (_List_node_base *)0x0) {
                operator_delete(p_Var72);
              }
              p_Var27 = p_Var49 + uVar50 * 4;
              pSVar93 = local_b20;
              p_Stack_3b0 = p_Var49;
            }
            else {
              if (p_Var67 == p_Var39) {
                uVar103 = uVar100;
                goto LAB_0025659b;
              }
              p_Var72 = p_Var67 + -4;
              *(undefined4 *)p_Var67 = *(undefined4 *)(p_Var67 + -4);
              if (0 < (long)p_Var72 - (long)p_Var39) {
                uVar54 = ((ulong)((long)p_Var72 - (long)p_Var39) >> 2) + 1;
                do {
                  *(undefined4 *)p_Var72 = *(undefined4 *)(p_Var72 + -4);
                  p_Var72 = p_Var72 + -4;
                  uVar54 = uVar54 - 1;
                } while (1 < uVar54);
              }
              p_Var67 = p_Var67 + 4;
              *(undefined4 *)p_Var39 = uVar100;
              pSVar93 = local_b20;
            }
          }
LAB_002561f0:
          ppuVar62 = ppuVar62 + 6;
        } while (ppuVar62 != ppuVar86);
        local_3a8 = p_Var67;
        p_Stack_3a0 = p_Var27;
        if (p_Stack_a70 != (_List_node_base *)local_a78) goto LAB_002561ab;
      }
      p_Var26 = p_Var26 + 0x10;
      if (p_Var26 == local_b38) goto LAB_00256bf1;
      puVar55 = puStack_3f0;
      puVar60 = local_3f8;
    } while( true );
  }
LAB_00256c06:
  if ((_List_node_base *)local_838._0_8_ != (_List_node_base *)0x0) {
    operator_delete((void *)local_838._0_8_);
  }
  pSVar96 = (SharedFontInternal *)0x0;
  if (-1 < (long)pSVar93) {
    pSVar96 = pSVar93;
  }
                    /* try { // try from 00256c1d to 00256c36 has its CatchHandler @ 0025be1b */
  detail::RangedValues<juce::Colour>::drop<juce::detail::MergeEqualItemsYes>
            ((RangedValues<juce::Colour> *)&local_3c8,0,(ulong)pSVar96,(long *)&local_1e8);
  if (local_1e8 != (_List_node_base *)0x0) {
    operator_delete(local_1e8);
  }
                    /* try { // try from 00256c49 to 00256c6b has its CatchHandler @ 0025be02 */
  pSVar21 = local_848;
  detail::RangedValues<signed_char>::getIntersectionsStartingAtZeroWith
            ((Ranges *)&local_378,(long *)&local_238,(ulong)pSVar93,(long)local_848);
  puVar61 = puStack_430;
  puVar52 = local_438;
  local_1e8 = (_List_node_base *)0x0;
  p_Stack_1e0 = (_List_node_base *)0x0;
  local_1d8 = (_List_node_base *)0x0;
                    /* try { // try from 00256c93 to 00256cad has its CatchHandler @ 0025bdfa */
  detail::Ranges::getIntersectionsWith
            ((undefined8 *)local_838,(long *)local_438,(long *)puStack_430,(long)pSVar93,
             (long)pSVar21);
  local_268 = (_List_node_base *)0x0;
  p_Stack_260 = (_List_node_base *)0x0;
  local_278 = 0;
  p_Stack_270 = (_List_node_base *)0x0;
  local_288 = (_List_node_base *)0x0;
  pppppppuStack_280 = (undefined8 *******)0x0;
  local_a78 = (undefined **)0x0;
  p_Stack_a70 = (_List_node_base *)0x0;
  p_Stack_a68 = (_List_node_base *)0x0;
  puVar55 = (ulong *)stack0xfffffffffffff7d0;
  puVar60 = (ulong *)local_838._0_8_;
  if ((_List_node_base *)local_838._0_8_ != stack0xfffffffffffff7d0) {
    p_Var26 = (_List_node_base *)0x0;
    local_b58._0_8_ = local_838._0_8_;
    ppuVar62 = (undefined **)0x0;
    do {
      uVar54 = *puVar60;
      uVar78 = (long)puVar61 - (long)puVar52;
      puVar71 = puVar52;
      if (0 < (long)uVar78) {
        uVar50 = uVar78 >> 4;
        do {
          uVar57 = uVar50 >> 1;
          uVar74 = uVar57;
          if ((long)puVar71[uVar57 * 2 + 1] <= (long)uVar54) {
            uVar74 = ~uVar57 + uVar50;
            puVar71 = puVar71 + uVar57 * 2 + 2;
          }
          uVar50 = uVar74;
        } while (0 < (long)uVar74);
      }
      if ((puVar71 != puVar61) && ((long)*puVar71 <= (long)uVar54)) {
        uVar78 = (long)puVar71 - (long)puVar52;
      }
      uVar100 = *(undefined4 *)((long)puStack_420 + ((long)uVar78 >> 2));
                    /* try { // try from 00256db6 to 00256dca has its CatchHandler @ 0025c0b7 */
      detail::Ranges::set((Ranges *)&local_288,uVar54,puVar60[1],&local_a78);
      p_Var67 = p_Stack_a70;
      ppuVar86 = local_a78;
      _local_c08 = p_Stack_a70;
      if ((long)p_Stack_a70 - (long)local_a78 != 0) {
        lVar69 = (long)p_Var26 - (long)ppuVar62 >> 4;
        uVar54 = ((long)p_Stack_a70 - (long)local_a78 >> 4) * -0x5555555555555555;
        bVar98 = uVar54 < (ulong)(lVar69 * -0x5555555555555555);
        lVar33 = uVar54 + lVar69 * 0x5555555555555555;
        if (!bVar98 && lVar33 != 0) {
          if (bVar98) {
            lVar33 = 0;
          }
          ppuVar62 = local_a78 + lVar69 * 2;
          ppuVar75 = ppuVar62 + lVar33 * 6;
          do {
            local_328 = (_List_node_base *)CONCAT44(local_328._4_4_,uVar100);
            if (*(char *)(ppuVar62 + 5) == '\0') {
              p_Var26 = p_Stack_270 + (long)*ppuVar62 * 4;
              if (local_268 == p_Stack_260) {
                std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
                          ((vector<int,std::allocator<int>> *)&p_Stack_270,(undefined4 *)p_Var26,
                           (undefined4 *)&local_328);
              }
              else if (local_268 == p_Var26) {
                *(undefined4 *)p_Var26 = uVar100;
                local_268 = p_Var26 + 4;
              }
              else {
                p_Var27 = local_268 + -4;
                *(undefined4 *)local_268 = *(undefined4 *)(local_268 + -4);
                local_268 = local_268 + 4;
                if (0 < (long)p_Var27 - (long)p_Var26) {
                  uVar54 = ((ulong)((long)p_Var27 - (long)p_Var26) >> 2) + 1;
                  do {
                    *(undefined4 *)p_Var27 = *(undefined4 *)(p_Var27 + -4);
                    p_Var27 = p_Var27 + -4;
                    uVar54 = uVar54 - 1;
                  } while (1 < uVar54);
                }
                *(undefined4 *)p_Var26 = uVar100;
              }
            }
            else {
                    /* try { // try from 00256e40 to 00256eef has its CatchHandler @ 0025c29e */
              detail::RangedValues<int>::applyOperation
                        ((RangedValues<int> *)&local_288,(long *)ppuVar62);
            }
            ppuVar62 = ppuVar62 + 6;
          } while (ppuVar62 != ppuVar75);
        }
      }
      p_Var26 = p_Var67;
      if (p_Var67 != (_List_node_base *)ppuVar86) {
        p_Stack_a70 = (_List_node_base *)ppuVar86;
        p_Var26 = (_List_node_base *)ppuVar86;
      }
      puVar60 = puVar60 + 2;
      ppuVar62 = ppuVar86;
    } while (puVar60 != puVar55);
    puVar60 = (ulong *)local_b58._0_8_;
    if (ppuVar86 != (undefined **)0x0) {
      operator_delete(ppuVar86);
    }
  }
  if (puVar60 != (ulong *)0x0) {
    operator_delete(puVar60);
  }
                    /* try { // try from 00256f54 to 00256f8b has its CatchHandler @ 0025bebc */
  detail::Ranges::erase((Ranges *)&local_288,0,(ulong)pSVar96,&local_1e8);
  detail::Ranges::shift((Ranges *)&local_288,(long)pSVar96,-(long)pSVar96,&local_1e8);
  p_Var26 = local_1e8;
  if ((long)p_Stack_1e0 - (long)local_1e8 != 0) {
    uVar54 = SUB168(SEXT816((long)p_Stack_1e0 - (long)local_1e8) * SEXT816(0x2aaaaaaaaaaaaaab),8);
    lVar33 = 0;
    do {
                    /* try { // try from 00256fd4 to 00256fe0 has its CatchHandler @ 0025c0c7 */
      detail::RangedValues<int>::applyOperation
                ((RangedValues<int> *)&local_288,(long *)(p_Var26 + lVar33));
      lVar33 = lVar33 + 0x30;
    } while (((uVar54 >> 3) - ((long)uVar54 >> 0x3f)) * 0x30 != lVar33);
  }
                    /* try { // try from 00256fea to 00257000 has its CatchHandler @ 0025bebc */
  detail::RangedValues<int>::mergeEqualItems((RangedValues<int> *)&local_288,0,(long *)&local_1e8);
  if (local_1e8 != (_List_node_base *)0x0) {
    operator_delete(local_1e8);
  }
  lVar33 = *(long *)local_ae8._0_8_;
  lVar69 = *(long *)(lVar33 + 0x148);
  p_Stack_950 = *(_List_node_base **)(lVar33 + 0x150);
  local_920 = *(long *)(lVar69 + 0x80);
  lStack_918 = *(long *)(lVar69 + 0x68);
  uStack_8f8 = *(undefined8 *)(lVar69 + 0x70);
  local_958 = *(_List_node_base **)(lVar33 + 0x168);
  uStack_930 = *(undefined8 *)(lVar33 + 0x158);
  lStack_988 = *(long *)(lVar33 + 0x250);
  local_990 = *(long *)(lVar33 + 0x268);
  p_Stack_968 = *(_List_node_base **)(lVar33 + 600);
  lStack_9c0 = *(long *)(lVar33 + 0x280);
  local_9c8 = *(undefined8 *)(lVar33 + 0x298);
  p_Stack_9a0 = *(_List_node_base **)(lVar33 + 0x288);
  local_a78 = &PTR__RangedIterator_00710b38;
  p_Stack_a70 = p_Stack_270;
  p_Stack_a68 = local_288;
  local_a60 = local_288;
  p_Stack_a58 = p_Stack_270;
  local_a50 = local_288;
  pppppppuStack_a48 = pppppppuStack_280;
  local_a40 = &PTR__RangedIterator_00712250;
  local_a38 = local_360;
  p_Stack_a30 = local_378;
  local_a28 = local_378;
  p_Stack_a20 = local_360;
  local_a18 = local_378;
  p_Stack_a10 = p_Stack_370;
  local_a08 = (_List_node_base *)&PTR__RangedIterator_00712648;
  local_a00 = p_Stack_3b0;
  p_Stack_9f8 = local_3c8;
  local_9f0 = local_3c8;
  p_Stack_9e8 = p_Stack_3b0;
  local_9e0 = local_3c8;
  uStack_9d8 = uStack_3c0;
  local_9d0 = &PTR__RangedIterator_00712200;
  local_998 = &PTR__RangedIterator_007121b0;
  local_960 = (_List_node_base *)&PTR__RangedIterator_00712160;
  local_928 = &PTR__RangedIterator_00712100;
  local_8f0 = (_List_node_base *)&local_8f0;
  local_8e0 = 0;
  stack0xfffffffffffff7d0 = (_List_node_base *)local_838;
  local_838._0_8_ = local_838;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uStack_820;
  _auStack_828 = auVar16 << 0x40;
  local_9b8 = lStack_9c0;
  lStack_9b0 = local_9c8;
  local_9a8 = lStack_9c0;
  local_980 = lStack_988;
  lStack_978 = local_990;
  local_970 = lStack_988;
  local_948 = p_Stack_950;
  p_Stack_940 = local_958;
  local_938 = p_Stack_950;
  local_910 = lStack_918;
  lStack_908 = local_920;
  local_900 = lStack_918;
  local_8e8 = local_8f0;
                    /* try { // try from 002572c1 to 002573c6 has its CatchHandler @ 0025bfb9 */
  p_Var26 = operator_new(0x18);
  *(undefined ****)(p_Var26 + 0x10) = &local_928;
  std::__detail::_List_node_base::_M_hook(p_Var26);
  auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
  p_Var26 = operator_new(0x18);
  *(_List_node_base ***)(p_Var26 + 0x10) = &local_960;
  std::__detail::_List_node_base::_M_hook(p_Var26);
  auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
  p_Var26 = operator_new(0x18);
  *(undefined ****)(p_Var26 + 0x10) = &local_998;
  std::__detail::_List_node_base::_M_hook(p_Var26);
  auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
  p_Var26 = operator_new(0x18);
  *(undefined ****)(p_Var26 + 0x10) = &local_9d0;
  std::__detail::_List_node_base::_M_hook(p_Var26);
  auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
  p_Var26 = operator_new(0x18);
  *(_List_node_base ***)(p_Var26 + 0x10) = &local_a08;
  std::__detail::_List_node_base::_M_hook(p_Var26);
  auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
  p_Var26 = operator_new(0x18);
  *(undefined ****)(p_Var26 + 0x10) = &local_a40;
  std::__detail::_List_node_base::_M_hook(p_Var26);
  auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
  p_Var26 = operator_new(0x18);
  *(undefined ****)(p_Var26 + 0x10) = &local_a78;
  std::__detail::_List_node_base::_M_hook(p_Var26);
  auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
  p_Var26 = local_8f0;
  while (p_Var26 != (_List_node_base *)&local_8f0) {
    p_Var67 = *(_List_node_base **)p_Var26;
    operator_delete(p_Var26);
    p_Var26 = p_Var67;
  }
  if ((_List_node_base *)local_838._0_8_ == (_List_node_base *)local_838) {
    local_8e0 = 0;
    local_8f0 = (_List_node_base *)&local_8f0;
    local_8e8 = (_List_node_base *)&local_8f0;
  }
  else {
    local_8f0 = (_List_node_base *)local_838._0_8_;
    local_8e8 = stack0xfffffffffffff7d0;
    *(_List_node_base **)stack0xfffffffffffff7d0 = (_List_node_base *)&local_8f0;
    *(_List_node_base **)(local_838._0_8_ + 8) = (_List_node_base *)&local_8f0;
    local_8e0 = auStack_828;
    p_Var26 = (_List_node_base *)local_838._0_8_;
    if ((_List_node_base *)local_838._0_8_ != (_List_node_base *)&local_8f0) {
      do {
                    /* try { // try from 00257497 to 00257499 has its CatchHandler @ 0025bfb4 */
        cVar23 = (**(code **)(**(long **)(p_Var26 + 0x10) + 0x18))();
        if (cVar23 == '\0') {
          if (p_Var26 != (_List_node_base *)&local_8f0) goto LAB_00257f30;
          break;
        }
        p_Var26 = *(_List_node_base **)p_Var26;
      } while (p_Var26 != (_List_node_base *)&local_8f0);
    }
  }
  if (local_8f0 == (_List_node_base *)&local_8f0) {
    local_8d8 = 0x8000000000000000;
LAB_00257d0a:
    uStack_8d0 = 0x7fffffffffffffff;
LAB_00257d15:
    if ((long)local_8d8 < (long)uStack_8d0) goto LAB_00257f30;
  }
  else {
    uVar54 = 0x8000000000000000;
    p_Var26 = local_8f0;
    do {
                    /* try { // try from 002574e7 to 002574e9 has its CatchHandler @ 0025c0a3 */
      uVar78 = (**(code **)(**(long **)(p_Var26 + 0x10) + 0x10))();
      if ((long)uVar54 < (long)uVar78) {
        uVar54 = uVar78;
      }
      p_Var26 = *(_List_node_base **)p_Var26;
    } while (p_Var26 != (_List_node_base *)&local_8f0);
    local_8d8 = uVar54;
    if (local_8f0 == (_List_node_base *)&local_8f0) goto LAB_00257d0a;
    uVar54 = 0x7fffffffffffffff;
    p_Var26 = local_8f0;
    do {
                    /* try { // try from 00257537 to 00257539 has its CatchHandler @ 0025c03f */
      (**(code **)(**(long **)(p_Var26 + 0x10) + 0x10))();
      if ((long)extraout_RDX_43 < (long)uVar54) {
        uVar54 = extraout_RDX_43;
      }
      p_Var26 = *(_List_node_base **)p_Var26;
    } while (p_Var26 != (_List_node_base *)&local_8f0);
    uStack_8d0 = uVar54;
    if ((local_8f0 == (_List_node_base *)&local_8f0) ||
       (*(_List_node_base **)local_8f0 == (_List_node_base *)&local_8f0)) goto LAB_00257d15;
    local_8b8 = (undefined **)&local_8b8;
    stack0xfffffffffffff7d0 = (_List_node_base *)local_838;
    local_838._0_8_ = (_List_node_base *)local_838;
    uStack_820 = (ulong)auStack_828;
    auStack_828 = (undefined1  [8])auStack_828;
    p_Stack_818 = (_List_node_base *)&p_Stack_818;
    pppppppuStack_808 = &pppppppuStack_808;
    local_7f8 = (_List_node_base *)&local_7f8;
    local_7e8 = (_List_node_base *)&local_7e8;
    local_7d8 = (_List_node_base *)&local_7d8;
    local_7b8 = (_List_node_base *)&local_7b8;
    p_Stack_7a8 = (_List_node_base *)&p_Stack_7a8;
    local_798 = &local_798;
    local_788 = &local_788;
    local_778 = &local_778;
    local_768 = &local_768;
    local_758 = &local_758;
    local_748 = &local_748;
    local_738 = &local_738;
    local_728 = &local_728;
    local_718 = &local_718;
    local_708 = &local_708;
    local_6f8 = &local_6f8;
    local_6e8 = &local_6e8;
    local_6d8 = &local_6d8;
    local_6c8 = &local_6c8;
    local_6b8 = &local_6b8;
    local_6a8 = &local_6a8;
    local_698 = &local_698;
    local_688 = &local_688;
    local_678 = &local_678;
    local_668 = &local_668;
    local_658 = &local_658;
    local_648 = &local_648;
    local_638 = &local_638;
    local_628 = &local_628;
    local_618 = &local_618;
    local_608 = &local_608;
    local_5f8 = &local_5f8;
    local_5e8 = &local_5e8;
    local_5d8 = &local_5d8;
    local_5c8 = &local_5c8;
    local_5b8 = &local_5b8;
    local_5a8 = &local_5a8;
    local_598 = &local_598;
    local_588 = &local_588;
    local_578 = &local_578;
    local_568 = &local_568;
    local_558 = &local_558;
    local_548 = &local_548;
    local_538 = &local_538;
    local_528 = &local_528;
    local_518 = &local_518;
    local_508 = &local_508;
    local_4f8 = &local_4f8;
    local_4e8 = &local_4e8;
    local_4d8 = &local_4d8;
    local_4c8 = &local_4c8;
    local_4b8 = &local_4b8;
    local_4a8 = &local_4a8;
    local_498 = &local_498;
    local_488 = &local_488;
    local_478 = &local_478;
    local_468 = &local_468;
    local_458 = &local_458;
    local_448 = &local_448;
    p_Var26 = (_List_node_base *)local_838;
    uStack_8b0 = (_List_node_base *)local_8b8;
    local_810 = p_Stack_818;
    local_800 = pppppppuStack_808;
    p_Stack_7f0 = local_7f8;
    p_Stack_7e0 = local_7e8;
    uStack_7d0 = local_7d8;
    local_7c8 = (_List_node_base *)&local_7c8;
    local_7c0 = (_List_node_base *)&local_7c8;
    local_7b0 = local_7b8;
    local_7a0 = p_Stack_7a8;
    local_790 = local_798;
    local_780 = local_788;
    local_770 = local_778;
    local_760 = local_768;
    local_750 = local_758;
    local_740 = local_748;
    local_730 = local_738;
    local_720 = local_728;
    local_710 = local_718;
    local_700 = local_708;
    local_6f0 = local_6f8;
    local_6e0 = local_6e8;
    local_6d0 = local_6d8;
    local_6c0 = local_6c8;
    local_6b0 = local_6b8;
    local_6a0 = local_6a8;
    local_690 = local_698;
    local_680 = local_688;
    local_670 = local_678;
    local_660 = local_668;
    local_650 = local_658;
    local_640 = local_648;
    local_630 = local_638;
    local_620 = local_628;
    local_610 = local_618;
    local_600 = local_608;
    local_5f0 = local_5f8;
    local_5e0 = local_5e8;
    local_5d0 = local_5d8;
    local_5c0 = local_5c8;
    local_5b0 = local_5b8;
    local_5a0 = local_5a8;
    local_590 = local_598;
    local_580 = local_588;
    local_570 = local_578;
    local_560 = local_568;
    local_550 = local_558;
    local_540 = local_548;
    local_530 = local_538;
    local_520 = local_528;
    local_510 = local_518;
    local_500 = local_508;
    local_4f0 = local_4f8;
    local_4e0 = local_4e8;
    local_4d0 = local_4d8;
    local_4c0 = local_4c8;
    local_4b0 = local_4b8;
    local_4a0 = local_4a8;
    local_490 = local_498;
    local_480 = local_488;
    local_470 = local_478;
    local_460 = local_468;
    local_450 = local_458;
    local_440 = local_448;
    do {
      p_Var67 = p_Var26;
      p_Var26 = (_List_node_base *)local_838;
      std::__detail::_List_node_base::_M_transfer((_List_node_base *)&local_8b8,local_8f0);
      _local_c08 = p_Var67;
      if (p_Var26 == p_Var67) {
        bVar98 = true;
      }
      else {
        do {
          p_Var72 = p_Var26;
          p_Var27 = *(_List_node_base **)p_Var72;
          if (p_Var27 == p_Var72) {
            p_Var26 = p_Var72;
            goto LAB_00257ce3;
          }
          if ((_List_node_base *)local_8b8 != (_List_node_base *)&local_8b8) {
            p_Var26 = p_Var27;
            p_Var39 = (_List_node_base *)local_8b8;
            do {
                    /* try { // try from 00257c6c to 00257c7b has its CatchHandler @ 0025c535 */
              (**(code **)(**(long **)(p_Var39 + 0x10) + 0x10))();
              (**(code **)(**(long **)(p_Var26 + 0x10) + 0x10))();
              if (extraout_RDX_44 < extraout_RDX_45) {
                p_Var40 = *(_List_node_base **)p_Var39;
                std::__detail::_List_node_base::_M_transfer(p_Var26,p_Var39);
                p_Var39 = p_Var40;
              }
              else {
                p_Var26 = *(_List_node_base **)p_Var26;
              }
            } while ((p_Var26 != p_Var72) && (p_Var39 != (_List_node_base *)&local_8b8));
            if (p_Var39 != (_List_node_base *)&local_8b8) {
              std::__detail::_List_node_base::_M_transfer(p_Var72,p_Var39);
            }
          }
          std::__detail::_List_node_base::swap((_List_node_base *)&local_8b8,p_Var72);
          p_Var26 = p_Var72 + 0x10;
        } while (p_Var72 + 0x10 != p_Var67);
        p_Var26 = p_Var67;
LAB_00257ce3:
        bVar98 = p_Var27 != p_Var72;
      }
      std::__detail::_List_node_base::swap((_List_node_base *)&local_8b8,p_Var26);
      p_Var26 = p_Var67 + (ulong)bVar98 * 0x10;
    } while (local_8f0 != (_List_node_base *)&local_8f0);
    if ((_List_node_base *)auStack_828 != p_Var26) {
      p_Var27 = (_List_node_base *)auStack_828;
      do {
        p_Var72 = p_Var27 + -0x10;
        p_Var39 = *(_List_node_base **)p_Var27;
        p_Var40 = *(_List_node_base **)(p_Var27 + -0x10);
        while( true ) {
          bVar99 = p_Var40 != p_Var72;
          p_Var49 = p_Var40;
          if (p_Var39 == p_Var27) break;
          while( true ) {
            p_Var40 = p_Var49;
            if (p_Var49 == p_Var72) goto LAB_00257ed6;
                    /* try { // try from 00257e9b to 00257eaa has its CatchHandler @ 0025c232 */
            (**(code **)(**(long **)(p_Var49 + 0x10) + 0x10))();
            (**(code **)(**(long **)(p_Var39 + 0x10) + 0x10))();
            if (extraout_RDX_49 <= extraout_RDX_48) break;
            p_Var40 = *(_List_node_base **)p_Var49;
            std::__detail::_List_node_base::_M_transfer(p_Var39,p_Var49);
            bVar99 = p_Var40 != p_Var72;
            p_Var49 = p_Var40;
            if (p_Var39 == p_Var27) goto LAB_00257ed6;
          }
          p_Var39 = *(_List_node_base **)p_Var39;
        }
LAB_00257ed6:
        if (bVar99) {
          std::__detail::_List_node_base::_M_transfer(p_Var27,p_Var40);
        }
        p_Var27 = p_Var27 + 0x10;
      } while (p_Var27 != p_Var26);
    }
    p_Var26 = p_Var67 + -0x10;
    if (bVar98 != false) {
      p_Var26 = p_Var67;
    }
    std::__detail::_List_node_base::swap(p_Var26,(_List_node_base *)&local_8f0);
    if ((long)local_8d8 < (long)uStack_8d0) goto LAB_00257f30;
  }
  do {
    uStack_8d0 = 0x7fffffffffffffff;
    if (local_8f0 != (_List_node_base *)&local_8f0) {
      plVar90 = *(long **)(local_8f0 + 0x10);
      p_Var26 = local_8f0;
      while( true ) {
        (**(code **)(*plVar90 + 0x20))(plVar90);
        cVar23 = (**(code **)(*plVar90 + 0x18))();
        if (cVar23 == '\0') break;
        uVar54 = (**(code **)(*plVar90 + 0x10))(plVar90);
        if ((long)local_8d8 < (long)uVar54) {
          local_8d8 = uVar54;
        }
        do {
          (**(code **)(*plVar90 + 0x10))(plVar90);
          if ((long)extraout_RDX_47 < (long)uStack_8d0) {
            uStack_8d0 = extraout_RDX_47;
          }
          p_Var26 = *(_List_node_base **)p_Var26;
          if (p_Var26 == (_List_node_base *)&local_8f0) goto LAB_00257df0;
          plVar90 = *(long **)(p_Var26 + 0x10);
        } while ((p_Var26 != local_8f0) &&
                ((**(code **)(*plVar90 + 0x10))(plVar90), (long)local_8d8 < extraout_RDX_46
                    /* try { // try from 00257d53 to 00257da5 has its CatchHandler @ 0025c222 */));
      }
      break;
    }
LAB_00257df0:
                    /* try { // try from 00257df0 to 00257dfc has its CatchHandler @ 0025be41 */
    std::__cxx11::list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>
    ::
    sort<juce::detail::IntersectingRangedValues<juce::Font_const,juce::detail::LineMetrics_const,juce::detail::JustifiedText::DrawType_const,float_const,juce::Colour,signed_char,int>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
              ((_List_node_base *)&local_8f0);
  } while ((long)uStack_8d0 <= (long)local_8d8);
LAB_00257f30:
  local_bf8._0_4_ = 0.0;
  local_bf8._4_4_ = 0.0;
  uStack_bf0._0_4_ = 0.0;
  uStack_bf0._4_4_ = 0.0;
  bVar58 = 1;
  uVar54 = 0;
  lVar69 = 0x7fffffffffffffff;
LAB_00257f63:
  local_1e8 = (_List_node_base *)&PTR__RangedIterator_00710b38;
  p_Stack_1c0 = local_a50;
  pppppppuStack_1b8 = pppppppuStack_a48;
  p_Stack_1d0 = local_a60;
  local_1c8 = p_Stack_a58;
  p_Stack_1e0 = p_Stack_a70;
  local_1d8 = p_Stack_a68;
  local_1b0 = &PTR__RangedIterator_00712250;
  local_188 = local_a18;
  p_Stack_180 = p_Stack_a10;
  local_198 = local_a28;
  p_Stack_190 = p_Stack_a20;
  local_1a8 = local_a38;
  p_Stack_1a0 = p_Stack_a30;
  local_178 = &PTR__RangedIterator_00712648;
  local_150 = local_9e0;
  uStack_148 = uStack_9d8;
  local_160 = local_9f0;
  p_Stack_158 = p_Stack_9e8;
  local_170 = local_a00;
  p_Stack_168 = p_Stack_9f8;
  local_140 = &PTR__RangedIterator_00712200;
  local_118 = local_9a8;
  p_Stack_110 = p_Stack_9a0;
  local_128 = local_9b8;
  lStack_120 = lStack_9b0;
  local_138 = local_9c8;
  lStack_130 = lStack_9c0;
  local_108 = &PTR__RangedIterator_007121b0;
  local_e0 = local_970;
  p_Stack_d8 = p_Stack_968;
  local_f0 = local_980;
  lStack_e8 = lStack_978;
  local_100 = local_990;
  lStack_f8 = lStack_988;
  local_d0 = (long *******)&PTR__RangedIterator_00712160;
  local_a8 = local_938;
  uStack_a0 = uStack_930;
  local_b8 = local_948;
  p_Stack_b0 = p_Stack_940;
  local_c8 = local_958;
  p_Stack_c0 = p_Stack_950;
  local_98 = &PTR__RangedIterator_00712100;
  local_80._8_8_ = lStack_908;
  local_80._0_8_ = local_910;
  local_70 = (undefined4)local_900;
  uStack_6c = local_900._4_4_;
  uStack_68 = (undefined4)uStack_8f8;
  uStack_64 = uStack_8f8._4_4_;
  local_90 = local_920;
  lStack_88 = lStack_918;
  local_50 = 0;
  p_Var26 = local_8f0;
  local_60 = (long *******)&local_60;
  local_58 = (long *******)&local_60;
  if (local_8f0 == (_List_node_base *)&local_8f0) {
    local_48 = local_8d8;
    uStack_40 = uStack_8d0;
  }
  else {
    do {
                    /* try { // try from 00258100 to 00258109 has its CatchHandler @ 0025c4c5 */
      p_Var67 = operator_new(0x18);
      *(long *)(p_Var67 + 0x10) = *(long *)(p_Var26 + 0x10);
      std::__detail::_List_node_base::_M_hook(p_Var67);
      local_50 = local_50 + 1;
      p_Var26 = *(_List_node_base **)p_Var26;
    } while (p_Var26 != (_List_node_base *)&local_8f0);
    local_48 = local_8d8;
    uStack_40 = uStack_8d0;
    ppppppplVar63 = local_60;
    if ((long ********)local_60 != &local_60) {
      do {
                    /* try { // try from 00258177 to 00258179 has its CatchHandler @ 0025c378 */
        cVar23 = (*(code *)(*ppppppplVar63[2])[3])();
        ppppppplVar82 = local_60;
        ppppppplVar76 = ppppppplVar63;
        if (cVar23 == '\0') break;
        ppppppplVar63 = (long *******)*ppppppplVar63;
        ppppppplVar76 = (long *******)&local_60;
      } while ((long ********)ppppppplVar63 != &local_60);
      while ((long ********)ppppppplVar82 != &local_60) {
        ppppppplVar63 = (long *******)*ppppppplVar82;
        operator_delete(ppppppplVar82);
        ppppppplVar82 = ppppppplVar63;
      }
      if ((long ********)ppppppplVar76 != &local_60) goto LAB_0025ba38;
    }
  }
  local_ae8._0_8_ = local_8d8;
  local_400 = uStack_8d0;
  if ((long)uStack_8d0 <= (long)local_8d8) {
    local_400 = local_8d8;
  }
  lVar89 = (long)local_948 - (long)p_Stack_950 >> 4;
  lVar37 = local_980 - lStack_988 >> 4;
  _local_ab8 = lVar37;
  local_248 = *(long *)(local_958 + lVar89 * 0x28);
  if ((bool)(bVar58 | lVar69 != local_248)) {
    local_bf8._0_4_ = (float)*(undefined8 *)(local_958 + lVar89 * 0x28 + 8);
    local_bf8._4_4_ = (float)((ulong)*(undefined8 *)(local_958 + lVar89 * 0x28 + 8) >> 0x20);
    uStack_bf0._0_4_ = 0.0;
    uStack_bf0._4_4_ = 0.0;
  }
  lVar69 = local_9b8 - lStack_9c0;
  local_af0 = (_List_node_base *)((long)local_9f0 - (long)p_Stack_9f8);
  local_848 = (SharedFontInternal *)((long)local_a28 - (long)p_Stack_a30);
  local_240 = (long)local_a60 - (long)p_Stack_a68;
  plVar90 = (long *)((local_910 - lStack_918 >> 1) + local_920);
  local_b58._0_8_ = local_9c8;
  local_ad0 = local_a00;
  local_b20 = (SharedFontInternal *)local_a38;
  local_840 = p_Stack_a70;
  local_8c0 = local_990;
  uVar91 = *(uint *)(local_990 + lVar37 * 4);
  uVar78 = (ulong)uVar91;
  if ((local_8d8 != uVar54) && (uVar91 != 1)) {
    local_b68 = (_List_node_base *)0x0;
    p_Stack_b60 = (_List_node_base *)0x0;
    local_b78 = (_List_node_base *)0x0;
    p_Stack_b70 = (_List_node_base *)0x0;
    local_b88 = (_List_node_base *)0x0;
    p_Stack_b80 = (_List_node_base *)0x0;
    local_b08 = (_List_node_base *)0x0;
    uStack_b00 = (_List_node_base *)0x0;
    local_af8 = (_List_node_base *)0x0;
    uVar78 = *(ulong *)(*(long *)(*(long *)(lVar33 + 0x148) + 0x20) +
                       *(long *)(local_958 + lVar89 * 0x28) * 0x10);
    if ((long)uVar54 < (long)uVar78) {
      uVar54 = uVar78;
    }
    _local_c08 = uVar54;
    local_388 = uVar54;
    local_1f8 = plVar90;
    if ((long)uVar54 < (long)local_8d8) {
                    /* try { // try from 002583e7 to 002586e8 has its CatchHandler @ 0025c1df */
      local_388 = local_8d8;
      detail::Ranges::erase((Ranges *)&local_b88,uVar54,local_8d8,&local_b08);
      p_Var67 = uStack_b00;
      p_Var26 = local_b08;
      p_Var27 = local_b88;
      if (0 < (long)p_Stack_b80 - (long)local_b88) {
        uVar78 = (ulong)((long)p_Stack_b80 - (long)local_b88) >> 4;
        do {
          uVar50 = uVar78 >> 1;
          lVar89 = uVar50 * 0x10;
          if (*(long *)(p_Var27 + lVar89) < (long)uVar54) {
            uVar50 = ~uVar50 + uVar78;
            p_Var27 = p_Var27 + lVar89 + 0x10;
          }
          uVar78 = uVar50;
        } while (0 < (long)uVar50);
      }
      lVar89 = (long)p_Var27 - (long)local_b88 >> 4;
      if (uStack_b00 == local_af8) {
        lVar37 = (long)uStack_b00 - (long)local_b08;
        if (lVar37 == 0x7fffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        uVar50 = (lVar37 >> 4) * -0x5555555555555555;
        uVar78 = uVar50;
        if (lVar37 == 0) {
          uVar78 = 1;
        }
        uVar74 = uVar78 + uVar50;
        if (0x2aaaaaaaaaaaaaa < uVar74) {
          uVar74 = 0x2aaaaaaaaaaaaaa;
        }
        if (CARRY8(uVar78,uVar50)) {
          uVar74 = 0x2aaaaaaaaaaaaaa;
        }
        p_Var39 = operator_new(uVar74 * 0x30);
        lVar37 = (lVar37 >> 4) * 0x10;
        *(long *)(p_Var39 + lVar37) = lVar89;
        p_Var39[lVar37 + 0x28] = (_List_node_base)0x0;
        p_Var72 = p_Var39;
        if (p_Var26 != p_Var67) {
          p_Var40 = p_Var26;
          do {
            uVar44 = *(undefined8 *)p_Var40;
            uVar5 = *(undefined8 *)(p_Var40 + 8);
            auVar105 = *(undefined1 (*) [16])(p_Var40 + 0x10);
            uVar100 = *(undefined4 *)(p_Var40 + 0x24);
            uVar103 = *(undefined4 *)(p_Var40 + 0x28);
            uVar108 = *(undefined4 *)(p_Var40 + 0x2c);
            *(undefined4 *)(p_Var72 + 0x20) = *(undefined4 *)(p_Var40 + 0x20);
            *(undefined4 *)(p_Var72 + 0x24) = uVar100;
            *(undefined4 *)(p_Var72 + 0x28) = uVar103;
            *(undefined4 *)(p_Var72 + 0x2c) = uVar108;
            *(undefined1 (*) [16])(p_Var72 + 0x10) = auVar105;
            *(undefined8 *)p_Var72 = uVar44;
            *(undefined8 *)(p_Var72 + 8) = uVar5;
            p_Var40 = p_Var40 + 0x30;
            p_Var72 = p_Var72 + 0x30;
          } while (p_Var40 != p_Var67);
        }
        if (p_Var26 != (_List_node_base *)0x0) {
          operator_delete(p_Var26);
        }
        local_af8 = p_Var39 + uVar74 * 0x30;
        local_b08 = p_Var39;
      }
      else {
        *(long *)uStack_b00 = lVar89;
        uStack_b00[0x28] = (_List_node_base)0x0;
        p_Var72 = uStack_b00;
      }
      p_Var67 = p_Stack_b80;
      p_Var26 = local_b88;
      uStack_b00 = p_Var72 + 0x30;
      lVar37 = (long)p_Var27 - (long)local_b88;
      lVar89 = lVar37 >> 4;
      if (p_Stack_b80 != local_b78) {
        p_Var26 = local_b08;
        if (p_Stack_b80 == p_Var27) {
          *(ulong *)p_Var27 = uVar54;
          *(ulong *)(p_Var27 + 8) = local_388;
          p_Stack_b80 = p_Stack_b80 + 0x10;
          lVar89 = (long)uStack_b00 - (long)local_b08;
        }
        else {
          lVar89 = lVar89 * 0x10;
          p_Var67 = local_b88 + lVar89;
          *(undefined8 *)p_Stack_b80 = *(undefined8 *)(p_Stack_b80 + -0x10);
          *(undefined8 *)(p_Stack_b80 + 8) = *(undefined8 *)(p_Stack_b80 + -8);
          p_Var27 = p_Stack_b80 + -0x10;
          if (0 < (long)p_Var27 - (long)p_Var67) {
            uVar78 = ((ulong)((long)p_Var27 - (long)p_Var67) >> 4) + 1;
            do {
              *(undefined8 *)p_Var27 = *(undefined8 *)(p_Var27 + -0x10);
              *(undefined8 *)(p_Var27 + 8) = *(undefined8 *)(p_Var27 + -8);
              p_Var27 = p_Var27 + -0x10;
              uVar78 = uVar78 - 1;
            } while (1 < uVar78);
          }
          *p_Var67 = SUB81(uVar54,0);
          *(int *)(p_Var67 + 1) = (int)(uVar54 >> 8);
          p_Var67[7] = SUB81(uVar54 >> 0x38,0);
          *(short *)(p_Var67 + 5) = (short)(uVar54 >> 0x28);
          *(ulong *)(local_b88 + lVar89 + 8) = local_388;
          lVar89 = (long)uStack_b00 - (long)local_b08;
          p_Stack_b80 = p_Stack_b80 + 0x10;
        }
        goto joined_r0x00258680;
      }
      lVar88 = (long)p_Stack_b80 - (long)local_b88;
      if (lVar88 == 0x7ffffffffffffff0) {
                    /* try { // try from 0025bdc9 to 0025bdec has its CatchHandler @ 0025c247 */
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_realloc_insert");
      }
      uVar50 = lVar88 >> 4;
      uVar78 = uVar50;
      if (lVar88 == 0) {
        uVar78 = 1;
      }
      uVar74 = uVar78 + uVar50;
      if (0x7ffffffffffffff < uVar74) {
        uVar74 = 0x7ffffffffffffff;
      }
      if (CARRY8(uVar78,uVar50)) {
        uVar74 = 0x7ffffffffffffff;
      }
      p_Var39 = operator_new(uVar74 * 0x10);
      lVar89 = lVar89 * 0x10;
      p_Var27 = p_Var26 + lVar89;
      *(ulong *)(p_Var39 + lVar89) = uVar54;
      *(ulong *)(p_Var39 + lVar89 + 8) = local_388;
      p_Var72 = p_Var39;
      if (lVar37 != 0) {
        lVar37 = 0;
        do {
          uVar44 = *(undefined8 *)(p_Var26 + lVar37 + 8);
          *(undefined8 *)(p_Var39 + lVar37) = *(undefined8 *)(p_Var26 + lVar37);
          *(undefined8 *)(p_Var39 + lVar37 + 8) = uVar44;
          lVar37 = lVar37 + 0x10;
        } while (lVar89 != lVar37);
        p_Var72 = p_Var39 + lVar37;
      }
      for (; p_Var72 = p_Var72 + 0x10, p_Var67 != p_Var27; p_Var27 = p_Var27 + 0x10) {
        uVar44 = *(undefined8 *)(p_Var27 + 8);
        *(undefined8 *)p_Var72 = *(undefined8 *)p_Var27;
        *(undefined8 *)(p_Var72 + 8) = uVar44;
      }
      if (p_Var26 != (_List_node_base *)0x0) {
        operator_delete(p_Var26);
      }
      local_b78 = p_Var39 + uVar74 * 0x10;
      local_b88 = p_Var39;
      p_Stack_b80 = p_Var72;
    }
    lVar89 = (long)uStack_b00 - (long)local_b08;
    p_Var26 = local_b08;
joined_r0x00258680:
    local_b08 = p_Var26;
    if (lVar89 != 0) {
      p_Var67 = p_Var26 + lVar89;
      local_b38 = p_Var67;
      do {
        p_Var72 = local_b68;
        p_Var27 = p_Stack_b70;
        _Var24 = p_Var26[0x28];
        if (_Var24 == (_List_node_base)0x2) {
          lVar89 = *(long *)p_Var26;
          lVar37 = *(long *)(p_Var26 + 8);
          if (lVar89 == lVar37) goto LAB_002587b0;
          p_Var27 = p_Stack_b70 + lVar89;
          p_Var72 = p_Stack_b70 + lVar37;
          p_Var39 = local_b68 + -(long)p_Var72;
          if ((p_Var39 != (_List_node_base *)0x0) && (0 < (long)p_Var39)) {
            if (p_Var39 < (_List_node_base *)0x8) {
LAB_00258a00:
              p_Var49 = p_Var72;
              p_Var40 = p_Var27;
LAB_00258a06:
              p_Var39 = p_Var39 + 1;
              lVar89 = 0;
              do {
                p_Var40[lVar89] = p_Var49[lVar89];
                p_Var39 = p_Var39 + -1;
                lVar89 = lVar89 + 1;
              } while ((_List_node_base *)0x1 < p_Var39);
            }
            else {
              if (p_Var27 < local_b68 + ~(ulong)p_Stack_b70 + (long)p_Stack_b70 + 1) {
                p_Var67 = local_b38;
                if (p_Var72 < p_Stack_b70 + (long)(local_b68 + ~(ulong)p_Var72 + lVar89) + 1)
                goto LAB_00258a00;
              }
              if (p_Var39 < (_List_node_base *)0x20) {
                p_Var95 = (_List_node_base *)0x0;
LAB_002592c1:
                p_Var49 = (_List_node_base *)
                          ((ulong)(local_b68 +
                                  (-(long)(p_Stack_b70 + lVar37) -
                                  (ulong)(p_Stack_b70 + lVar37 != local_b68)) + 1) &
                          0xfffffffffffffff8);
                p_Var40 = p_Var27 + (long)p_Var49;
                do {
                  *(undefined8 *)(p_Var27 + (long)p_Var95) =
                       *(undefined8 *)(p_Var72 + (long)p_Var95);
                  p_Var95 = p_Var95 + 8;
                } while (p_Var49 != p_Var95);
                if (local_b68 +
                    (-(long)(p_Stack_b70 + lVar37) - (ulong)(p_Stack_b70 + lVar37 != local_b68)) + 1
                    != p_Var49) {
                  p_Var39 = p_Var39 + -(long)p_Var49;
                  p_Var49 = p_Var72 + (long)p_Var49;
                  goto LAB_00258a06;
                }
              }
              else {
                p_Var95 = (_List_node_base *)((ulong)p_Var39 & 0xffffffffffffffe0);
                uVar78 = ((ulong)(p_Var95 + -0x20) >> 5) + 1;
                uVar50 = (ulong)((uint)uVar78 & 3);
                if (p_Var95 + -0x20 < (_List_node_base *)0x60) {
                  lVar88 = 0;
                }
                else {
                  uVar78 = uVar78 & 0xffffffffffffffc;
                  lVar88 = 0;
                  do {
                    uVar44 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 8);
                    uVar5 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x10);
                    uVar8 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x10 + 8);
                    *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89) =
                         *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37);
                    *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 8) = uVar44;
                    *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x10) = uVar5;
                    *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x10 + 8) = uVar8;
                    uVar44 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x20 + 8);
                    uVar5 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x30);
                    uVar8 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x30 + 8);
                    *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x20) =
                         *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x20);
                    *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x20 + 8) = uVar44;
                    *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x30) = uVar5;
                    *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x30 + 8) = uVar8;
                    uVar44 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x40 + 8);
                    uVar5 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x50);
                    uVar8 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x50 + 8);
                    *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x40) =
                         *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x40);
                    *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x40 + 8) = uVar44;
                    *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x50) = uVar5;
                    *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x50 + 8) = uVar8;
                    uVar44 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x60 + 8);
                    auVar105 = *(undefined1 (*) [16])(p_Stack_b70 + lVar88 + lVar37 + 0x70);
                    *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x60) =
                         *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x60);
                    *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x60 + 8) = uVar44;
                    *(undefined1 (*) [16])(p_Stack_b70 + lVar88 + lVar89 + 0x70) = auVar105;
                    lVar88 = lVar88 + 0x80;
                    uVar78 = uVar78 - 4;
                  } while (uVar78 != 0);
                }
                if (uVar50 != 0) {
                  lVar80 = 0;
                  do {
                    uVar44 = *(undefined8 *)(p_Stack_b70 + lVar80 + lVar88 + lVar37 + 8);
                    auVar105 = *(undefined1 (*) [16])(p_Stack_b70 + lVar80 + lVar88 + lVar37 + 0x10)
                    ;
                    *(undefined8 *)(p_Stack_b70 + lVar80 + lVar89 + lVar88) =
                         *(undefined8 *)(p_Stack_b70 + lVar80 + lVar88 + lVar37);
                    *(undefined8 *)(p_Stack_b70 + lVar80 + lVar89 + lVar88 + 8) = uVar44;
                    *(undefined1 (*) [16])(p_Stack_b70 + lVar80 + lVar89 + lVar88 + 0x10) = auVar105
                    ;
                    lVar80 = lVar80 + 0x20;
                  } while (uVar50 * 0x20 != lVar80);
                }
                p_Var67 = local_b38;
                if (p_Var39 != p_Var95) {
                  if (((ulong)p_Var39 & 0x18) == 0) {
                    p_Var49 = p_Var72 + (long)p_Var95;
                    p_Var40 = p_Var27 + (long)p_Var95;
                    p_Var39 = (_List_node_base *)(ulong)((uint)p_Var39 & 0x1f);
                    goto LAB_00258a06;
                  }
                  goto LAB_002592c1;
                }
              }
            }
            p_Var39 = local_b68 + -(long)p_Var72;
          }
          if (local_b68 != p_Var27 + (long)p_Var39) {
            local_b68 = p_Var27 + (long)p_Var39;
          }
        }
        else if (_Var24 == (_List_node_base)0x1) {
          uVar78 = *(ulong *)p_Var26;
          p_Var39 = p_Stack_b70 + uVar78;
          if (local_b68 == p_Stack_b60) {
            uVar50 = (long)local_b68 - (long)p_Stack_b70;
            if (uVar50 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("vector::_M_realloc_insert");
            }
            uVar74 = uVar50;
            if (uVar50 == 0) {
              uVar74 = 1;
            }
            p_Var67 = (_List_node_base *)(uVar74 + uVar50);
            if ((long)p_Var67 < 0) {
              p_Var67 = (_List_node_base *)0x7fffffffffffffff;
            }
            if (CARRY8(uVar74,uVar50)) {
              p_Var67 = (_List_node_base *)0x7fffffffffffffff;
            }
            if (p_Var67 == (_List_node_base *)0x0) {
              p_Var40 = (_List_node_base *)0x0;
            }
            else {
                    /* try { // try from 00258a99 to 00258afc has its CatchHandler @ 0025c215 */
              p_Var40 = operator_new((ulong)p_Var67);
            }
            p_Var40[uVar78] = *p_Var39;
            if ((long)uVar78 < 1) {
              p_Var49 = p_Var40 + uVar78;
            }
            else {
              p_Var49 = p_Var40;
              p_Var95 = p_Var27;
              if (0x1f < uVar78) {
                uVar74 = uVar78 & 0xffffffffffffffe0;
                uVar57 = (uVar74 - 0x20 >> 5) + 1;
                uVar50 = (ulong)((uint)uVar57 & 3);
                if (uVar74 - 0x20 < 0x60) {
                  lVar89 = 0;
                }
                else {
                  uVar57 = uVar57 & 0xffffffffffffffc;
                  lVar89 = 0;
                  do {
                    uVar44 = *(undefined8 *)(p_Var27 + lVar89 + 8);
                    uVar5 = *(undefined8 *)(p_Var27 + lVar89 + 0x10);
                    uVar8 = *(undefined8 *)(p_Var27 + lVar89 + 0x10 + 8);
                    *(undefined8 *)(p_Var40 + lVar89) = *(undefined8 *)(p_Var27 + lVar89);
                    *(undefined8 *)(p_Var40 + lVar89 + 8) = uVar44;
                    *(undefined8 *)(p_Var40 + lVar89 + 0x10) = uVar5;
                    *(undefined8 *)(p_Var40 + lVar89 + 0x10 + 8) = uVar8;
                    uVar44 = *(undefined8 *)(p_Var27 + lVar89 + 0x20 + 8);
                    uVar5 = *(undefined8 *)(p_Var27 + lVar89 + 0x30);
                    uVar8 = *(undefined8 *)(p_Var27 + lVar89 + 0x30 + 8);
                    *(undefined8 *)(p_Var40 + lVar89 + 0x20) =
                         *(undefined8 *)(p_Var27 + lVar89 + 0x20);
                    *(undefined8 *)(p_Var40 + lVar89 + 0x20 + 8) = uVar44;
                    *(undefined8 *)(p_Var40 + lVar89 + 0x30) = uVar5;
                    *(undefined8 *)(p_Var40 + lVar89 + 0x30 + 8) = uVar8;
                    uVar44 = *(undefined8 *)(p_Var27 + lVar89 + 0x40 + 8);
                    uVar5 = *(undefined8 *)(p_Var27 + lVar89 + 0x50);
                    uVar8 = *(undefined8 *)(p_Var27 + lVar89 + 0x50 + 8);
                    *(undefined8 *)(p_Var40 + lVar89 + 0x40) =
                         *(undefined8 *)(p_Var27 + lVar89 + 0x40);
                    *(undefined8 *)(p_Var40 + lVar89 + 0x40 + 8) = uVar44;
                    *(undefined8 *)(p_Var40 + lVar89 + 0x50) = uVar5;
                    *(undefined8 *)(p_Var40 + lVar89 + 0x50 + 8) = uVar8;
                    uVar44 = *(undefined8 *)(p_Var27 + lVar89 + 0x60 + 8);
                    auVar105 = *(undefined1 (*) [16])(p_Var27 + lVar89 + 0x70);
                    *(undefined8 *)(p_Var40 + lVar89 + 0x60) =
                         *(undefined8 *)(p_Var27 + lVar89 + 0x60);
                    *(undefined8 *)(p_Var40 + lVar89 + 0x60 + 8) = uVar44;
                    *(undefined1 (*) [16])(p_Var40 + lVar89 + 0x70) = auVar105;
                    lVar89 = lVar89 + 0x80;
                    uVar57 = uVar57 - 4;
                  } while (uVar57 != 0);
                }
                if (uVar50 != 0) {
                  lVar37 = 0;
                  do {
                    uVar44 = *(undefined8 *)(p_Var27 + lVar37 + lVar89 + 8);
                    auVar105 = *(undefined1 (*) [16])(p_Var27 + lVar37 + lVar89 + 0x10);
                    *(undefined8 *)(p_Var40 + lVar37 + lVar89) =
                         *(undefined8 *)(p_Var27 + lVar37 + lVar89);
                    *(undefined8 *)(p_Var40 + lVar37 + lVar89 + 8) = uVar44;
                    *(undefined1 (*) [16])(p_Var40 + lVar37 + lVar89 + 0x10) = auVar105;
                    lVar37 = lVar37 + 0x20;
                  } while (uVar50 * 0x20 != lVar37);
                }
                p_Var49 = p_Var40 + uVar74;
                if (uVar78 == uVar74) goto LAB_00258dc2;
                p_Var95 = p_Var27 + uVar74;
              }
              do {
                *p_Var49 = *p_Var95;
                p_Var95 = p_Var95 + 1;
                p_Var49 = p_Var49 + 1;
              } while (p_Var95 != p_Var39);
            }
LAB_00258dc2:
            p_Var95 = p_Var49 + 1;
            if ((long)p_Var72 - (long)p_Var39 < 1) {
              p_Var95 = p_Var95 + ((long)p_Var72 - (long)p_Var39);
            }
            else if (p_Var72 != p_Var39) {
              p_Var73 = p_Var72 + (-uVar78 - (long)p_Var27);
              if ((_List_node_base *)0x1f < p_Var73) {
                p_Var81 = (_List_node_base *)((ulong)p_Var73 & 0xffffffffffffffe0);
                uVar74 = ((ulong)(p_Var81 + -0x20) >> 5) + 1;
                uVar50 = (ulong)((uint)uVar74 & 3);
                if (p_Var81 + -0x20 < (_List_node_base *)0x60) {
                  lVar89 = 0;
                }
                else {
                  uVar74 = uVar74 & 0xffffffffffffffc;
                  lVar89 = 0;
                  do {
                    uVar44 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 8);
                    uVar5 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x10);
                    uVar8 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x10 + 8);
                    *(undefined8 *)(p_Var49 + lVar89 + 1) =
                         *(undefined8 *)(p_Var27 + lVar89 + uVar78);
                    *(undefined8 *)(p_Var49 + lVar89 + 1 + 8) = uVar44;
                    *(undefined8 *)(p_Var49 + lVar89 + 0x11) = uVar5;
                    *(undefined8 *)(p_Var49 + lVar89 + 0x11 + 8) = uVar8;
                    uVar44 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x20 + 8);
                    uVar5 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x30);
                    uVar8 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x30 + 8);
                    *(undefined8 *)(p_Var49 + lVar89 + 0x21) =
                         *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x20);
                    *(undefined8 *)(p_Var49 + lVar89 + 0x21 + 8) = uVar44;
                    *(undefined8 *)(p_Var49 + lVar89 + 0x31) = uVar5;
                    *(undefined8 *)(p_Var49 + lVar89 + 0x31 + 8) = uVar8;
                    uVar44 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x40 + 8);
                    uVar5 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x50);
                    uVar8 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x50 + 8);
                    *(undefined8 *)(p_Var49 + lVar89 + 0x41) =
                         *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x40);
                    *(undefined8 *)(p_Var49 + lVar89 + 0x41 + 8) = uVar44;
                    *(undefined8 *)(p_Var49 + lVar89 + 0x51) = uVar5;
                    *(undefined8 *)(p_Var49 + lVar89 + 0x51 + 8) = uVar8;
                    uVar44 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x60 + 8);
                    auVar105 = *(undefined1 (*) [16])(p_Var27 + lVar89 + uVar78 + 0x70);
                    *(undefined8 *)(p_Var49 + lVar89 + 0x61) =
                         *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x60);
                    *(undefined8 *)(p_Var49 + lVar89 + 0x61 + 8) = uVar44;
                    *(undefined1 (*) [16])(p_Var49 + lVar89 + 0x71) = auVar105;
                    lVar89 = lVar89 + 0x80;
                    uVar74 = uVar74 - 4;
                  } while (uVar74 != 0);
                }
                if (uVar50 != 0) {
                  lVar37 = 0;
                  do {
                    uVar44 = *(undefined8 *)(p_Var27 + lVar37 + uVar78 + lVar89 + 8);
                    auVar105 = *(undefined1 (*) [16])(p_Var27 + lVar37 + uVar78 + lVar89 + 0x10);
                    *(undefined8 *)(p_Var49 + lVar37 + lVar89 + 1) =
                         *(undefined8 *)(p_Var27 + lVar37 + uVar78 + lVar89);
                    *(undefined8 *)(p_Var49 + lVar37 + lVar89 + 1 + 8) = uVar44;
                    *(undefined1 (*) [16])(p_Var49 + lVar37 + lVar89 + 0x11) = auVar105;
                    lVar37 = lVar37 + 0x20;
                  } while (uVar50 * 0x20 != lVar37);
                }
                p_Var95 = p_Var95 + (long)p_Var81;
                if (p_Var73 == p_Var81) goto LAB_00259064;
                p_Var39 = p_Var39 + (long)p_Var81;
              }
              do {
                *p_Var95 = *p_Var39;
                p_Var39 = p_Var39 + 1;
                p_Var95 = p_Var95 + 1;
              } while (p_Var39 != p_Var72);
            }
LAB_00259064:
            local_b18 = p_Var67;
            if (p_Var27 != (_List_node_base *)0x0) {
              operator_delete(p_Var27);
            }
            p_Stack_b60 = local_b18;
            p_Stack_b70 = p_Var40;
            local_b68 = p_Var95;
LAB_002591ae:
            p_Stack_b60 = p_Stack_b60 + (long)p_Stack_b70;
            p_Var67 = local_b38;
          }
          else if (local_b68 == p_Var39) {
            local_b68 = local_b68 + 1;
          }
          else {
            _Var24 = *p_Var39;
            *local_b68 = local_b68[-1];
            p_Var27 = local_b68 + 1;
            p_Var72 = local_b68 + -1;
            p_Var40 = p_Var72 + -(long)p_Var39;
            if (0 < (long)p_Var40) {
              p_Var49 = p_Var72 + ~(ulong)p_Var39;
              if (((ulong)p_Var40 & 7) != 0) {
                uVar78 = 1;
                p_Var67 = p_Var72;
                do {
                  local_b68 = p_Var67;
                  *local_b68 = local_b68[-1];
                  uVar50 = uVar78 + 1;
                  bVar98 = uVar78 != ((ulong)p_Var40 & 7);
                  uVar78 = uVar50;
                  p_Var67 = local_b68 + -1;
                } while (bVar98);
                p_Var40 = p_Var72 + (-uVar50 - (long)p_Var39) + 1;
                p_Var72 = local_b68 + -1;
              }
              p_Var67 = local_b38;
              if ((_List_node_base *)0x6 < p_Var49) {
                lVar89 = -1;
                do {
                  local_b68[lVar89] = p_Var72[lVar89];
                  local_b68[lVar89 + -1] = p_Var72[lVar89 + -1];
                  local_b68[lVar89 + -2] = p_Var72[lVar89 + -2];
                  local_b68[lVar89 + -3] = p_Var72[lVar89 + -3];
                  local_b68[lVar89 + -4] = p_Var72[lVar89 + -4];
                  local_b68[lVar89 + -5] = p_Var72[lVar89 + -5];
                  local_b68[lVar89 + -6] = p_Var72[lVar89 + -6];
                  local_b68[lVar89 + -7] = p_Var72[lVar89 + -7];
                  lVar37 = lVar89 + -8;
                  lVar89 = lVar89 + -8;
                } while (p_Var40 + lVar37 < (_List_node_base *)0xfffffffffffffffe);
              }
            }
            *p_Var39 = _Var24;
            local_b68 = p_Var27;
          }
        }
        else if (_Var24 == (_List_node_base)0x0) {
          uVar78 = *(ulong *)p_Var26;
          p_Var72 = p_Stack_b70 + uVar78;
          if (local_b68 == p_Stack_b60) {
            local_b18 = local_b68;
            uVar50 = (long)local_b68 - (long)p_Stack_b70;
            if (uVar50 == 0x7fffffffffffffff) {
                    /* try { // try from 0025bd49 to 0025bd60 has its CatchHandler @ 0025c247 */
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("vector::_M_realloc_insert");
            }
            uVar74 = uVar50;
            if (uVar50 == 0) {
              uVar74 = 1;
            }
            p_Var67 = (_List_node_base *)(uVar74 + uVar50);
            if ((long)p_Var67 < 0) {
              p_Var67 = (_List_node_base *)0x7fffffffffffffff;
            }
            if (CARRY8(uVar74,uVar50)) {
              p_Var67 = (_List_node_base *)0x7fffffffffffffff;
            }
            if (p_Var67 == (_List_node_base *)0x0) {
              p_Var39 = (_List_node_base *)0x0;
            }
            else {
              p_Var39 = operator_new((ulong)p_Var67);
            }
            p_Var39[uVar78] = (_List_node_base)0x1;
            if ((long)uVar78 < 1) {
              p_Var40 = p_Var39 + uVar78;
            }
            else {
              p_Var40 = p_Var39;
              p_Var49 = p_Var27;
              if (0x1f < uVar78) {
                uVar74 = uVar78 & 0xffffffffffffffe0;
                uVar57 = (uVar74 - 0x20 >> 5) + 1;
                uVar50 = (ulong)((uint)uVar57 & 3);
                if (uVar74 - 0x20 < 0x60) {
                  lVar89 = 0;
                }
                else {
                  uVar57 = uVar57 & 0xffffffffffffffc;
                  lVar89 = 0;
                  do {
                    uVar44 = *(undefined8 *)(p_Var27 + lVar89 + 8);
                    uVar5 = *(undefined8 *)(p_Var27 + lVar89 + 0x10);
                    uVar8 = *(undefined8 *)(p_Var27 + lVar89 + 0x10 + 8);
                    *(undefined8 *)(p_Var39 + lVar89) = *(undefined8 *)(p_Var27 + lVar89);
                    *(undefined8 *)(p_Var39 + lVar89 + 8) = uVar44;
                    *(undefined8 *)(p_Var39 + lVar89 + 0x10) = uVar5;
                    *(undefined8 *)(p_Var39 + lVar89 + 0x10 + 8) = uVar8;
                    uVar44 = *(undefined8 *)(p_Var27 + lVar89 + 0x20 + 8);
                    uVar5 = *(undefined8 *)(p_Var27 + lVar89 + 0x30);
                    uVar8 = *(undefined8 *)(p_Var27 + lVar89 + 0x30 + 8);
                    *(undefined8 *)(p_Var39 + lVar89 + 0x20) =
                         *(undefined8 *)(p_Var27 + lVar89 + 0x20);
                    *(undefined8 *)(p_Var39 + lVar89 + 0x20 + 8) = uVar44;
                    *(undefined8 *)(p_Var39 + lVar89 + 0x30) = uVar5;
                    *(undefined8 *)(p_Var39 + lVar89 + 0x30 + 8) = uVar8;
                    uVar44 = *(undefined8 *)(p_Var27 + lVar89 + 0x40 + 8);
                    uVar5 = *(undefined8 *)(p_Var27 + lVar89 + 0x50);
                    uVar8 = *(undefined8 *)(p_Var27 + lVar89 + 0x50 + 8);
                    *(undefined8 *)(p_Var39 + lVar89 + 0x40) =
                         *(undefined8 *)(p_Var27 + lVar89 + 0x40);
                    *(undefined8 *)(p_Var39 + lVar89 + 0x40 + 8) = uVar44;
                    *(undefined8 *)(p_Var39 + lVar89 + 0x50) = uVar5;
                    *(undefined8 *)(p_Var39 + lVar89 + 0x50 + 8) = uVar8;
                    uVar44 = *(undefined8 *)(p_Var27 + lVar89 + 0x60 + 8);
                    auVar105 = *(undefined1 (*) [16])(p_Var27 + lVar89 + 0x70);
                    *(undefined8 *)(p_Var39 + lVar89 + 0x60) =
                         *(undefined8 *)(p_Var27 + lVar89 + 0x60);
                    *(undefined8 *)(p_Var39 + lVar89 + 0x60 + 8) = uVar44;
                    *(undefined1 (*) [16])(p_Var39 + lVar89 + 0x70) = auVar105;
                    lVar89 = lVar89 + 0x80;
                    uVar57 = uVar57 - 4;
                  } while (uVar57 != 0);
                }
                if (uVar50 != 0) {
                  lVar37 = 0;
                  do {
                    uVar44 = *(undefined8 *)(p_Var27 + lVar37 + lVar89 + 8);
                    auVar105 = *(undefined1 (*) [16])(p_Var27 + lVar37 + lVar89 + 0x10);
                    *(undefined8 *)(p_Var39 + lVar37 + lVar89) =
                         *(undefined8 *)(p_Var27 + lVar37 + lVar89);
                    *(undefined8 *)(p_Var39 + lVar37 + lVar89 + 8) = uVar44;
                    *(undefined1 (*) [16])(p_Var39 + lVar37 + lVar89 + 0x10) = auVar105;
                    lVar37 = lVar37 + 0x20;
                  } while (uVar50 * 0x20 != lVar37);
                }
                p_Var40 = p_Var39 + uVar74;
                if (uVar78 == uVar74) goto LAB_00258f02;
                p_Var49 = p_Var27 + uVar74;
              }
              do {
                *p_Var40 = *p_Var49;
                p_Var49 = p_Var49 + 1;
                p_Var40 = p_Var40 + 1;
              } while (p_Var49 != p_Var72);
            }
LAB_00258f02:
            p_Var49 = p_Var40 + 1;
            if ((long)local_b18 - (long)p_Var72 < 1) {
              p_Var49 = p_Var49 + ((long)local_b18 - (long)p_Var72);
            }
            else if (local_b18 != p_Var72) {
              p_Var95 = local_b18 + (-uVar78 - (long)p_Var27);
              if ((_List_node_base *)0x1f < p_Var95) {
                p_Var73 = (_List_node_base *)((ulong)p_Var95 & 0xffffffffffffffe0);
                uVar74 = ((ulong)(p_Var73 + -0x20) >> 5) + 1;
                uVar50 = (ulong)((uint)uVar74 & 3);
                if (p_Var73 + -0x20 < (_List_node_base *)0x60) {
                  lVar89 = 0;
                }
                else {
                  uVar74 = uVar74 & 0xffffffffffffffc;
                  lVar89 = 0;
                  do {
                    uVar44 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 8);
                    uVar5 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x10);
                    uVar8 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x10 + 8);
                    *(undefined8 *)(p_Var40 + lVar89 + 1) =
                         *(undefined8 *)(p_Var27 + lVar89 + uVar78);
                    *(undefined8 *)(p_Var40 + lVar89 + 1 + 8) = uVar44;
                    *(undefined8 *)(p_Var40 + lVar89 + 0x11) = uVar5;
                    *(undefined8 *)(p_Var40 + lVar89 + 0x11 + 8) = uVar8;
                    uVar44 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x20 + 8);
                    uVar5 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x30);
                    uVar8 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x30 + 8);
                    *(undefined8 *)(p_Var40 + lVar89 + 0x21) =
                         *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x20);
                    *(undefined8 *)(p_Var40 + lVar89 + 0x21 + 8) = uVar44;
                    *(undefined8 *)(p_Var40 + lVar89 + 0x31) = uVar5;
                    *(undefined8 *)(p_Var40 + lVar89 + 0x31 + 8) = uVar8;
                    uVar44 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x40 + 8);
                    uVar5 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x50);
                    uVar8 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x50 + 8);
                    *(undefined8 *)(p_Var40 + lVar89 + 0x41) =
                         *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x40);
                    *(undefined8 *)(p_Var40 + lVar89 + 0x41 + 8) = uVar44;
                    *(undefined8 *)(p_Var40 + lVar89 + 0x51) = uVar5;
                    *(undefined8 *)(p_Var40 + lVar89 + 0x51 + 8) = uVar8;
                    uVar44 = *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x60 + 8);
                    auVar105 = *(undefined1 (*) [16])(p_Var27 + lVar89 + uVar78 + 0x70);
                    *(undefined8 *)(p_Var40 + lVar89 + 0x61) =
                         *(undefined8 *)(p_Var27 + lVar89 + uVar78 + 0x60);
                    *(undefined8 *)(p_Var40 + lVar89 + 0x61 + 8) = uVar44;
                    *(undefined1 (*) [16])(p_Var40 + lVar89 + 0x71) = auVar105;
                    lVar89 = lVar89 + 0x80;
                    uVar74 = uVar74 - 4;
                  } while (uVar74 != 0);
                }
                if (uVar50 != 0) {
                  lVar37 = 0;
                  do {
                    uVar44 = *(undefined8 *)(p_Var27 + lVar37 + uVar78 + lVar89 + 8);
                    auVar105 = *(undefined1 (*) [16])(p_Var27 + lVar37 + uVar78 + lVar89 + 0x10);
                    *(undefined8 *)(p_Var40 + lVar37 + lVar89 + 1) =
                         *(undefined8 *)(p_Var27 + lVar37 + uVar78 + lVar89);
                    *(undefined8 *)(p_Var40 + lVar37 + lVar89 + 1 + 8) = uVar44;
                    *(undefined1 (*) [16])(p_Var40 + lVar37 + lVar89 + 0x11) = auVar105;
                    lVar37 = lVar37 + 0x20;
                  } while (uVar50 * 0x20 != lVar37);
                }
                p_Var49 = p_Var49 + (long)p_Var73;
                if (p_Var95 == p_Var73) goto LAB_00259184;
                p_Var72 = p_Var72 + (long)p_Var73;
              }
              do {
                *p_Var49 = *p_Var72;
                p_Var72 = p_Var72 + 1;
                p_Var49 = p_Var49 + 1;
              } while (p_Var72 != local_b18);
            }
LAB_00259184:
            local_1f0 = p_Var67;
            if (p_Var27 != (_List_node_base *)0x0) {
              operator_delete(p_Var27);
            }
            p_Stack_b60 = local_1f0;
            p_Stack_b70 = p_Var39;
            local_b68 = p_Var49;
            goto LAB_002591ae;
          }
          if (local_b68 == p_Var72) {
            *p_Var72 = (_List_node_base)0x1;
            local_b68 = local_b68 + 1;
          }
          else {
            *local_b68 = local_b68[-1];
            p_Var27 = local_b68 + 1;
            p_Var67 = local_b68 + -1;
            p_Var39 = p_Var67 + -(long)p_Var72;
            if (0 < (long)p_Var39) {
              p_Var40 = p_Var67 + ~(ulong)p_Var72;
              if (((ulong)p_Var39 & 7) != 0) {
                uVar78 = 1;
                p_Var49 = p_Var67;
                do {
                  local_b68 = p_Var49;
                  *local_b68 = local_b68[-1];
                  uVar50 = uVar78 + 1;
                  bVar98 = uVar78 != ((ulong)p_Var39 & 7);
                  uVar78 = uVar50;
                  p_Var49 = local_b68 + -1;
                } while (bVar98);
                p_Var39 = p_Var67 + (-uVar50 - (long)p_Var72) + 1;
                p_Var67 = local_b68 + -1;
              }
              if ((_List_node_base *)0x6 < p_Var40) {
                lVar89 = -1;
                do {
                  local_b68[lVar89] = p_Var67[lVar89];
                  local_b68[lVar89 + -1] = p_Var67[lVar89 + -1];
                  local_b68[lVar89 + -2] = p_Var67[lVar89 + -2];
                  local_b68[lVar89 + -3] = p_Var67[lVar89 + -3];
                  local_b68[lVar89 + -4] = p_Var67[lVar89 + -4];
                  local_b68[lVar89 + -5] = p_Var67[lVar89 + -5];
                  local_b68[lVar89 + -6] = p_Var67[lVar89 + -6];
                  local_b68[lVar89 + -7] = p_Var67[lVar89 + -7];
                  lVar37 = lVar89 + -8;
                  lVar89 = lVar89 + -8;
                } while (p_Var39 + lVar37 < (_List_node_base *)0xfffffffffffffffe);
              }
            }
            *p_Var72 = (_List_node_base)0x1;
            p_Var67 = local_b38;
            local_b68 = p_Var27;
          }
        }
LAB_002587b0:
        p_Var26 = p_Var26 + 0x30;
      } while (p_Var26 != p_Var67);
    }
    p_Var26 = local_b88;
    if (0 < (long)p_Stack_b80 - (long)local_b88) {
      uVar78 = (ulong)((long)p_Stack_b80 - (long)local_b88) >> 4;
      do {
        uVar50 = uVar78 >> 1;
        lVar89 = uVar50 * 0x10;
        if (*(long *)(p_Var26 + lVar89 + 8) <= (long)uVar54) {
          uVar50 = ~uVar50 + uVar78;
          p_Var26 = p_Var26 + lVar89 + 0x10;
        }
        uVar78 = uVar50;
      } while (0 < (long)uVar50);
    }
    if ((((p_Var26 != p_Stack_b80) && (*(long *)p_Var26 <= (long)uVar54)) &&
        ((long)p_Var26 - (long)local_b88 != 0)) &&
       (uVar54 = (long)p_Var26 - (long)local_b88 >> 4,
       p_Stack_b70[uVar54 - 1] == p_Stack_b70[uVar54])) {
      lVar89 = (long)uStack_b00 - (long)local_b08;
                    /* try { // try from 00259408 to 0025941c has its CatchHandler @ 0025c1df */
      detail::Ranges::mergeBack((Ranges *)&local_b88,uVar54,&local_b08);
      if ((long)uStack_b00 - (long)local_b08 != 0) {
        lVar89 = lVar89 >> 4;
        uVar54 = ((long)uStack_b00 - (long)local_b08 >> 4) * -0x5555555555555555;
        bVar98 = uVar54 < (ulong)(lVar89 * -0x5555555555555555);
        lVar37 = uVar54 + lVar89 * 0x5555555555555555;
        if (!bVar98 && lVar37 != 0) {
          if (bVar98) {
            lVar37 = 0;
          }
          p_Var67 = local_b08 + lVar89 * 0x10;
          p_Var26 = p_Var67 + lVar37 * 0x30;
          _local_c08 = p_Var26;
          do {
            p_Var72 = local_b68;
            p_Var27 = p_Stack_b70;
            if (p_Var67[0x28] == (_List_node_base)0x2) {
              lVar89 = *(long *)p_Var67;
              lVar37 = *(long *)(p_Var67 + 8);
              if (lVar89 == lVar37) goto LAB_00259490;
              p_Var27 = p_Stack_b70 + lVar89;
              p_Var72 = p_Stack_b70 + lVar37;
              p_Var39 = local_b68 + -(long)p_Var72;
              if ((p_Var39 != (_List_node_base *)0x0) && (0 < (long)p_Var39)) {
                if ((p_Var39 < (_List_node_base *)0x8) ||
                   ((p_Var27 < local_b68 + ~(ulong)p_Stack_b70 + (long)p_Stack_b70 + 1 &&
                    (p_Var72 < p_Stack_b70 + (long)(local_b68 + ~(ulong)p_Var72 + lVar89) + 1)))) {
                  p_Var49 = p_Var72;
                  p_Var40 = p_Var27;
LAB_002595f1:
                  p_Var39 = p_Var39 + 1;
                  lVar89 = 0;
                  do {
                    p_Var40[lVar89] = p_Var49[lVar89];
                    p_Var39 = p_Var39 + -1;
                    lVar89 = lVar89 + 1;
                  } while ((_List_node_base *)0x1 < p_Var39);
                }
                else if (p_Var39 < (_List_node_base *)0x20) {
                  p_Var95 = (_List_node_base *)0x0;
LAB_00259acd:
                  p_Var49 = (_List_node_base *)
                            ((ulong)(local_b68 +
                                    (-(long)(p_Stack_b70 + lVar37) -
                                    (ulong)(p_Stack_b70 + lVar37 != local_b68)) + 1) &
                            0xfffffffffffffff8);
                  p_Var40 = p_Var27 + (long)p_Var49;
                  do {
                    *(undefined8 *)(p_Var27 + (long)p_Var95) =
                         *(undefined8 *)(p_Var72 + (long)p_Var95);
                    p_Var95 = p_Var95 + 8;
                  } while (p_Var49 != p_Var95);
                  if (local_b68 +
                      (-(long)(p_Stack_b70 + lVar37) - (ulong)(p_Stack_b70 + lVar37 != local_b68)) +
                      1 != p_Var49) {
                    p_Var39 = p_Var39 + -(long)p_Var49;
                    p_Var49 = p_Var72 + (long)p_Var49;
                    goto LAB_002595f1;
                  }
                }
                else {
                  p_Var95 = (_List_node_base *)((ulong)p_Var39 & 0xffffffffffffffe0);
                  uVar54 = ((ulong)(p_Var95 + -0x20) >> 5) + 1;
                  uVar78 = (ulong)((uint)uVar54 & 3);
                  if (p_Var95 + -0x20 < (_List_node_base *)0x60) {
                    lVar88 = 0;
                  }
                  else {
                    uVar54 = uVar54 & 0xffffffffffffffc;
                    lVar88 = 0;
                    do {
                      uVar44 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 8);
                      uVar5 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x10);
                      uVar8 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x10 + 8);
                      *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89) =
                           *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37);
                      *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 8) = uVar44;
                      *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x10) = uVar5;
                      *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x10 + 8) = uVar8;
                      uVar44 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x20 + 8);
                      uVar5 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x30);
                      uVar8 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x30 + 8);
                      *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x20) =
                           *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x20);
                      *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x20 + 8) = uVar44;
                      *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x30) = uVar5;
                      *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x30 + 8) = uVar8;
                      uVar44 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x40 + 8);
                      uVar5 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x50);
                      uVar8 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x50 + 8);
                      *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x40) =
                           *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x40);
                      *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x40 + 8) = uVar44;
                      *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x50) = uVar5;
                      *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x50 + 8) = uVar8;
                      uVar8 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x60 + 8);
                      uVar44 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x70);
                      uVar5 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x70 + 8);
                      *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x60) =
                           *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x60);
                      *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x60 + 8) = uVar8;
                      *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x70) = uVar44;
                      *(undefined8 *)(p_Stack_b70 + lVar88 + lVar89 + 0x70 + 8) = uVar5;
                      lVar88 = lVar88 + 0x80;
                      uVar54 = uVar54 - 4;
                    } while (uVar54 != 0);
                  }
                  if (uVar78 != 0) {
                    lVar80 = 0;
                    do {
                      uVar8 = *(undefined8 *)(p_Stack_b70 + lVar80 + lVar88 + lVar37 + 8);
                      uVar44 = *(undefined8 *)(p_Stack_b70 + lVar80 + lVar88 + lVar37 + 0x10);
                      uVar5 = *(undefined8 *)(p_Stack_b70 + lVar80 + lVar88 + lVar37 + 0x10 + 8);
                      *(undefined8 *)(p_Stack_b70 + lVar80 + lVar89 + lVar88) =
                           *(undefined8 *)(p_Stack_b70 + lVar80 + lVar88 + lVar37);
                      *(undefined8 *)(p_Stack_b70 + lVar80 + lVar89 + lVar88 + 8) = uVar8;
                      *(undefined8 *)(p_Stack_b70 + lVar80 + lVar89 + lVar88 + 0x10) = uVar44;
                      *(undefined8 *)(p_Stack_b70 + lVar80 + lVar89 + lVar88 + 0x10 + 8) = uVar5;
                      lVar80 = lVar80 + 0x20;
                    } while (uVar78 * 0x20 != lVar80);
                  }
                  if (p_Var39 != p_Var95) {
                    if (((ulong)p_Var39 & 0x18) == 0) {
                      p_Var49 = p_Var72 + (long)p_Var95;
                      p_Var40 = p_Var27 + (long)p_Var95;
                      p_Var39 = (_List_node_base *)(ulong)((uint)p_Var39 & 0x1f);
                      goto LAB_002595f1;
                    }
                    goto LAB_00259acd;
                  }
                }
                p_Var39 = local_b68 + -(long)p_Var72;
              }
              if (local_b68 != p_Var27 + (long)p_Var39) {
                local_b68 = p_Var27 + (long)p_Var39;
              }
            }
            else if (p_Var67[0x28] == (_List_node_base)0x1) {
              p_Var40 = *(_List_node_base **)p_Var67;
              p_Var39 = p_Stack_b70 + (long)p_Var40;
              if (local_b68 == p_Stack_b60) {
                uVar54 = (long)local_b68 - (long)p_Stack_b70;
                if (uVar54 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  std::__throw_length_error("vector::_M_realloc_insert");
                }
                uVar78 = uVar54;
                if (uVar54 == 0) {
                  uVar78 = 1;
                }
                uVar50 = uVar78 + uVar54;
                if ((long)uVar50 < 0) {
                  uVar50 = 0x7fffffffffffffff;
                }
                if (CARRY8(uVar78,uVar54)) {
                  uVar50 = 0x7fffffffffffffff;
                }
                if (uVar50 == 0) {
                  p_Var49 = (_List_node_base *)0x0;
                  *p_Var40 = *p_Var39;
                  if (0 < (long)p_Var40) goto LAB_00259694;
LAB_002596ee:
                  p_Var95 = p_Var49 + (long)p_Var40;
                }
                else {
                    /* try { // try from 0025967c to 00259683 has its CatchHandler @ 0025bea5 */
                  p_Var49 = operator_new(uVar50);
                  p_Var49[(long)p_Var40] = *p_Var39;
                  if ((long)p_Var40 < 1) goto LAB_002596ee;
LAB_00259694:
                  p_Var95 = p_Var49;
                  p_Var73 = p_Var27;
                  if (p_Var40 < (_List_node_base *)0x20) {
LAB_00259850:
                    do {
                      *p_Var95 = *p_Var73;
                      p_Var73 = p_Var73 + 1;
                      p_Var95 = p_Var95 + 1;
                    } while (p_Var73 != p_Var39);
                  }
                  else {
                    p_Var73 = (_List_node_base *)((ulong)p_Var40 & 0xffffffffffffffe0);
                    uVar78 = ((ulong)(p_Var73 + -0x20) >> 5) + 1;
                    uVar54 = (ulong)((uint)uVar78 & 3);
                    if (p_Var73 + -0x20 < (_List_node_base *)0x60) {
                      lVar89 = 0;
                    }
                    else {
                      uVar78 = uVar78 & 0xffffffffffffffc;
                      lVar89 = 0;
                      do {
                        uVar44 = *(undefined8 *)(p_Var27 + lVar89 + 8);
                        uVar5 = *(undefined8 *)(p_Var27 + lVar89 + 0x10);
                        uVar8 = *(undefined8 *)(p_Var27 + lVar89 + 0x10 + 8);
                        *(undefined8 *)(p_Var49 + lVar89) = *(undefined8 *)(p_Var27 + lVar89);
                        *(undefined8 *)(p_Var49 + lVar89 + 8) = uVar44;
                        *(undefined8 *)(p_Var49 + lVar89 + 0x10) = uVar5;
                        *(undefined8 *)(p_Var49 + lVar89 + 0x10 + 8) = uVar8;
                        uVar44 = *(undefined8 *)(p_Var27 + lVar89 + 0x20 + 8);
                        uVar5 = *(undefined8 *)(p_Var27 + lVar89 + 0x30);
                        uVar8 = *(undefined8 *)(p_Var27 + lVar89 + 0x30 + 8);
                        *(undefined8 *)(p_Var49 + lVar89 + 0x20) =
                             *(undefined8 *)(p_Var27 + lVar89 + 0x20);
                        *(undefined8 *)(p_Var49 + lVar89 + 0x20 + 8) = uVar44;
                        *(undefined8 *)(p_Var49 + lVar89 + 0x30) = uVar5;
                        *(undefined8 *)(p_Var49 + lVar89 + 0x30 + 8) = uVar8;
                        uVar44 = *(undefined8 *)(p_Var27 + lVar89 + 0x40 + 8);
                        uVar5 = *(undefined8 *)(p_Var27 + lVar89 + 0x50);
                        uVar8 = *(undefined8 *)(p_Var27 + lVar89 + 0x50 + 8);
                        *(undefined8 *)(p_Var49 + lVar89 + 0x40) =
                             *(undefined8 *)(p_Var27 + lVar89 + 0x40);
                        *(undefined8 *)(p_Var49 + lVar89 + 0x40 + 8) = uVar44;
                        *(undefined8 *)(p_Var49 + lVar89 + 0x50) = uVar5;
                        *(undefined8 *)(p_Var49 + lVar89 + 0x50 + 8) = uVar8;
                        uVar8 = *(undefined8 *)(p_Var27 + lVar89 + 0x60 + 8);
                        uVar44 = *(undefined8 *)(p_Var27 + lVar89 + 0x70);
                        uVar5 = *(undefined8 *)(p_Var27 + lVar89 + 0x70 + 8);
                        *(undefined8 *)(p_Var49 + lVar89 + 0x60) =
                             *(undefined8 *)(p_Var27 + lVar89 + 0x60);
                        *(undefined8 *)(p_Var49 + lVar89 + 0x60 + 8) = uVar8;
                        *(undefined8 *)(p_Var49 + lVar89 + 0x70) = uVar44;
                        *(undefined8 *)(p_Var49 + lVar89 + 0x70 + 8) = uVar5;
                        lVar89 = lVar89 + 0x80;
                        uVar78 = uVar78 - 4;
                      } while (uVar78 != 0);
                    }
                    if (uVar54 != 0) {
                      lVar37 = 0;
                      do {
                        uVar8 = *(undefined8 *)(p_Var27 + lVar37 + lVar89 + 8);
                        uVar44 = *(undefined8 *)(p_Var27 + lVar37 + lVar89 + 0x10);
                        uVar5 = *(undefined8 *)(p_Var27 + lVar37 + lVar89 + 0x10 + 8);
                        *(undefined8 *)(p_Var49 + lVar37 + lVar89) =
                             *(undefined8 *)(p_Var27 + lVar37 + lVar89);
                        *(undefined8 *)(p_Var49 + lVar37 + lVar89 + 8) = uVar8;
                        *(undefined8 *)(p_Var49 + lVar37 + lVar89 + 0x10) = uVar44;
                        *(undefined8 *)(p_Var49 + lVar37 + lVar89 + 0x10 + 8) = uVar5;
                        lVar37 = lVar37 + 0x20;
                      } while (uVar54 * 0x20 != lVar37);
                    }
                    p_Var95 = p_Var73 + (long)p_Var49;
                    if (p_Var40 != p_Var73) {
                      p_Var73 = p_Var73 + (long)p_Var27;
                      goto LAB_00259850;
                    }
                  }
                }
                p_Var73 = p_Var95 + 1;
                if ((long)p_Var72 - (long)p_Var39 < 1) {
                  p_Var73 = p_Var73 + ((long)p_Var72 - (long)p_Var39);
                }
                else if (p_Var72 != p_Var39) {
                  p_Var81 = p_Var72 + (-(long)p_Var40 - (long)p_Var27);
                  if ((_List_node_base *)0x1f < p_Var81) {
                    p_Var79 = (_List_node_base *)((ulong)p_Var81 & 0xffffffffffffffe0);
                    uVar78 = ((ulong)(p_Var79 + -0x20) >> 5) + 1;
                    uVar54 = (ulong)((uint)uVar78 & 3);
                    if (p_Var79 + -0x20 < (_List_node_base *)0x60) {
                      lVar89 = 0;
                    }
                    else {
                      uVar78 = uVar78 & 0xffffffffffffffc;
                      p_Var1 = p_Var27 + (long)p_Var40;
                      lVar89 = 0;
                      do {
                        uVar44 = *(undefined8 *)(p_Var1 + lVar89 + 8);
                        uVar5 = *(undefined8 *)(p_Var1 + lVar89 + 0x10);
                        uVar8 = *(undefined8 *)(p_Var1 + lVar89 + 0x10 + 8);
                        *(undefined8 *)(p_Var95 + lVar89 + 1) = *(undefined8 *)(p_Var1 + lVar89);
                        *(undefined8 *)(p_Var95 + lVar89 + 1 + 8) = uVar44;
                        *(undefined8 *)(p_Var95 + lVar89 + 0x11) = uVar5;
                        *(undefined8 *)(p_Var95 + lVar89 + 0x11 + 8) = uVar8;
                        uVar44 = *(undefined8 *)(p_Var1 + lVar89 + 0x20 + 8);
                        uVar5 = *(undefined8 *)(p_Var1 + lVar89 + 0x30);
                        uVar8 = *(undefined8 *)(p_Var1 + lVar89 + 0x30 + 8);
                        *(undefined8 *)(p_Var95 + lVar89 + 0x21) =
                             *(undefined8 *)(p_Var1 + lVar89 + 0x20);
                        *(undefined8 *)(p_Var95 + lVar89 + 0x21 + 8) = uVar44;
                        *(undefined8 *)(p_Var95 + lVar89 + 0x31) = uVar5;
                        *(undefined8 *)(p_Var95 + lVar89 + 0x31 + 8) = uVar8;
                        uVar44 = *(undefined8 *)(p_Var1 + lVar89 + 0x40 + 8);
                        uVar5 = *(undefined8 *)(p_Var1 + lVar89 + 0x50);
                        uVar8 = *(undefined8 *)(p_Var1 + lVar89 + 0x50 + 8);
                        *(undefined8 *)(p_Var95 + lVar89 + 0x41) =
                             *(undefined8 *)(p_Var1 + lVar89 + 0x40);
                        *(undefined8 *)(p_Var95 + lVar89 + 0x41 + 8) = uVar44;
                        *(undefined8 *)(p_Var95 + lVar89 + 0x51) = uVar5;
                        *(undefined8 *)(p_Var95 + lVar89 + 0x51 + 8) = uVar8;
                        uVar8 = *(undefined8 *)(p_Var1 + lVar89 + 0x60 + 8);
                        uVar44 = *(undefined8 *)(p_Var1 + lVar89 + 0x70);
                        uVar5 = *(undefined8 *)(p_Var1 + lVar89 + 0x70 + 8);
                        *(undefined8 *)(p_Var95 + lVar89 + 0x61) =
                             *(undefined8 *)(p_Var1 + lVar89 + 0x60);
                        *(undefined8 *)(p_Var95 + lVar89 + 0x61 + 8) = uVar8;
                        *(undefined8 *)(p_Var95 + lVar89 + 0x71) = uVar44;
                        *(undefined8 *)(p_Var95 + lVar89 + 0x71 + 8) = uVar5;
                        lVar89 = lVar89 + 0x80;
                        uVar78 = uVar78 - 4;
                      } while (uVar78 != 0);
                    }
                    if (uVar54 != 0) {
                      p_Var40 = p_Var27 + (long)(p_Var40 + lVar89);
                      lVar37 = 0;
                      do {
                        uVar8 = *(undefined8 *)(p_Var40 + lVar37 + 8);
                        uVar44 = *(undefined8 *)(p_Var40 + lVar37 + 0x10);
                        uVar5 = *(undefined8 *)(p_Var40 + lVar37 + 0x10 + 8);
                        *(undefined8 *)(p_Var95 + lVar37 + lVar89 + 1) =
                             *(undefined8 *)(p_Var40 + lVar37);
                        *(undefined8 *)(p_Var95 + lVar37 + lVar89 + 1 + 8) = uVar8;
                        *(undefined8 *)(p_Var95 + lVar37 + lVar89 + 0x11) = uVar44;
                        *(undefined8 *)(p_Var95 + lVar37 + lVar89 + 0x11 + 8) = uVar5;
                        lVar37 = lVar37 + 0x20;
                      } while (uVar54 * 0x20 != lVar37);
                    }
                    p_Var73 = p_Var73 + (long)p_Var79;
                    if (p_Var81 == p_Var79) goto LAB_002599a4;
                    p_Var39 = p_Var39 + (long)p_Var79;
                  }
                  do {
                    *p_Var73 = *p_Var39;
                    p_Var39 = p_Var39 + 1;
                    p_Var73 = p_Var73 + 1;
                  } while (p_Var39 != p_Var72);
                }
LAB_002599a4:
                if (p_Var27 != (_List_node_base *)0x0) {
                  operator_delete(p_Var27);
                }
                p_Stack_b60 = p_Var49 + uVar50;
                p_Stack_b70 = p_Var49;
                local_b68 = p_Var73;
              }
              else if (local_b68 == p_Var39) {
                local_b68 = local_b68 + 1;
              }
              else {
                _Var24 = *p_Var39;
                *local_b68 = local_b68[-1];
                p_Var27 = local_b68 + 1;
                p_Var72 = local_b68 + -1;
                p_Var40 = p_Var72 + -(long)p_Var39;
                if (0 < (long)p_Var40) {
                  p_Var49 = p_Var72 + ~(ulong)p_Var39;
                  if (((ulong)p_Var40 & 7) != 0) {
                    uVar54 = 1;
                    p_Var95 = p_Var72;
                    do {
                      local_b68 = p_Var95;
                      *local_b68 = local_b68[-1];
                      uVar78 = uVar54 + 1;
                      bVar98 = uVar54 != ((ulong)p_Var40 & 7);
                      uVar54 = uVar78;
                      p_Var95 = local_b68 + -1;
                    } while (bVar98);
                    p_Var40 = p_Var72 + (-uVar78 - (long)p_Var39) + 1;
                    p_Var72 = local_b68 + -1;
                  }
                  if ((_List_node_base *)0x6 < p_Var49) {
                    lVar89 = -1;
                    do {
                      local_b68[lVar89] = p_Var72[lVar89];
                      local_b68[lVar89 + -1] = p_Var72[lVar89 + -1];
                      local_b68[lVar89 + -2] = p_Var72[lVar89 + -2];
                      local_b68[lVar89 + -3] = p_Var72[lVar89 + -3];
                      local_b68[lVar89 + -4] = p_Var72[lVar89 + -4];
                      local_b68[lVar89 + -5] = p_Var72[lVar89 + -5];
                      local_b68[lVar89 + -6] = p_Var72[lVar89 + -6];
                      local_b68[lVar89 + -7] = p_Var72[lVar89 + -7];
                      lVar37 = lVar89 + -8;
                      lVar89 = lVar89 + -8;
                    } while (p_Var40 + lVar37 < (_List_node_base *)0xfffffffffffffffe);
                  }
                }
                *p_Var39 = _Var24;
                local_b68 = p_Var27;
              }
            }
LAB_00259490:
            p_Var67 = p_Var67 + 0x30;
          } while (p_Var67 != p_Var26);
        }
      }
    }
                    /* try { // try from 00259b30 to 00259b4c has its CatchHandler @ 0025c1df */
    detail::RangedValues<signed_char>::mergeEqualItems
              ((RangedValues<signed_char> *)&local_b88,local_388,(long *)&local_b08);
    local_878 = *(undefined8 *)(lVar33 + 0x298);
    local_870 = *(undefined8 *)(lVar33 + 0x280);
    local_850 = *(undefined8 *)(lVar33 + 0x288);
    local_8b8 = &PTR__RangedIterator_00712250;
    uStack_8b0 = p_Stack_b70;
    local_8a8 = local_b88;
    local_8a0 = local_b88;
    local_898 = p_Stack_b70;
    local_890 = local_b88;
    local_888 = p_Stack_b80;
    local_880 = &PTR__RangedIterator_00712200;
                    /* try { // try from 00259bfd to 00259c11 has its CatchHandler @ 0025c112 */
    local_868 = local_870;
    local_860 = local_878;
    local_858 = local_870;
    detail::IntersectingRangedValues<float_const,signed_char>::IntersectionIterator::
    IntersectionIterator((IntersectionIterator *)local_838,(long)&local_8b8);
    do {
      local_328 = (_List_node_base *)&PTR__RangedIterator_00712250;
      local_300 = local_810;
      pppppppuStack_2f8 = pppppppuStack_808;
      local_310 = uStack_820;
      p_Stack_308 = p_Stack_818;
      p_Stack_320 = stack0xfffffffffffff7d0;
      local_318 = (_List_node_base *)auStack_828;
      local_2f0 = &PTR__RangedIterator_00712200;
      local_2c8 = (undefined4)local_7d8;
      uStack_2c4 = local_7d8._4_4_;
      uStack_2c0 = (undefined4)uStack_7d0;
      uStack_2bc = uStack_7d0._4_4_;
      local_2d8 = local_7e8;
      p_Stack_2d0 = p_Stack_7e0;
      local_2e8 = local_7f8;
      p_Stack_2e0 = p_Stack_7f0;
      local_2b8 = (long *******)&local_2b8;
      local_2a8 = 0;
      p_Var26 = local_7c8;
      local_2b0 = local_2b8;
      if (local_7c8 == (_List_node_base *)&local_7c8) {
        local_2a0 = local_7b0;
        p_Stack_298 = p_Stack_7a8;
      }
      else {
        do {
                    /* try { // try from 00259cd0 to 00259cd9 has its CatchHandler @ 0025cd8f */
          p_Var67 = operator_new(0x18);
          *(undefined8 *)(p_Var67 + 0x10) = *(undefined8 *)(p_Var26 + 0x10);
          std::__detail::_List_node_base::_M_hook(p_Var67);
          local_2a8 = local_2a8 + 1;
          p_Var26 = *(_List_node_base **)p_Var26;
        } while (p_Var26 != (_List_node_base *)&local_7c8);
        local_2a0 = local_7b0;
        p_Stack_298 = p_Stack_7a8;
        ppppppplVar63 = local_2b8;
        if ((long ********)local_2b8 != &local_2b8) {
          do {
                    /* try { // try from 00259d47 to 00259d49 has its CatchHandler @ 0025c9fe */
            cVar23 = (*(code *)(*ppppppplVar63[2])[3])();
            if (cVar23 == '\0') goto joined_r0x00259dad;
            ppppppplVar63 = (long *******)*ppppppplVar63;
          } while ((long ********)ppppppplVar63 != &local_2b8);
          ppppppplVar63 = (long *******)&local_2b8;
joined_r0x00259dad:
          ppppppplVar82 = local_2b8;
          if ((long ********)local_2b8 != &local_2b8) {
            do {
              ppppppplVar76 = (long *******)*ppppppplVar82;
              operator_delete(ppppppplVar82);
              ppppppplVar82 = ppppppplVar76;
            } while ((long ********)ppppppplVar76 != &local_2b8);
          }
          p_Var26 = local_7c8;
          plVar90 = local_1f8;
          if ((long ********)ppppppplVar63 != &local_2b8) goto joined_r0x00259f7b;
        }
      }
      if ((long)p_Stack_7a8 <= (long)local_7b0) {
        p_Stack_7a8 = local_7b0;
      }
      lVar89 = *(long *)(*(long *)(lVar33 + 0x148) + 8);
      p_Var26 = (_List_node_base *)(*(long *)(*(long *)(lVar33 + 0x148) + 0x10) - lVar89 >> 5);
      if ((long)p_Var26 < 0) {
        p_Var26 = (_List_node_base *)0x0;
      }
      p_Var67 = local_7b0;
      if ((long)local_7b0 < 0) {
        p_Var67 = (_List_node_base *)0x0;
      }
      if ((long)p_Stack_7a8 <= (long)p_Var26) {
        p_Var26 = p_Stack_7a8;
      }
      lVar37 = (long)p_Var26 - (long)p_Var67;
      if (lVar37 == 0 || (long)p_Var26 < (long)p_Var67) {
        lVar37 = 0;
      }
      if (lVar37 != 0) {
        puVar41 = (undefined8 *)(lVar89 + (long)p_Var67 * 0x20);
        puVar42 = puVar41 + lVar37 * 4;
        do {
          local_bf8._0_4_ = (float)*puVar41 + (float)local_bf8;
          local_bf8._4_4_ = (float)((ulong)*puVar41 >> 0x20) + local_bf8._4_4_;
          uStack_bf0._0_4_ = (float)uStack_bf0 + 0.0;
          uStack_bf0._4_4_ = uStack_bf0._4_4_ + 0.0;
          if (*(char *)((long)puVar41 + 0x1d) != '\0') {
            local_bf8._0_4_ =
                 (float)local_bf8 +
                 *(float *)(local_7f8 + ((long)local_7e8 - (long)p_Stack_7f0 >> 4) * 4);
            local_bf8._4_4_ = local_bf8._4_4_ + 0.0;
            uStack_bf0._0_4_ = (float)uStack_bf0 + 0.0;
            uStack_bf0._4_4_ = uStack_bf0._4_4_ + 0.0;
          }
          puVar41 = puVar41 + 4;
        } while (puVar41 != puVar42);
      }
      _local_c08 = CONCAT44(local_bf8._4_4_,(float)local_bf8);
      uStack_c00._0_4_ = (float)uStack_bf0;
      uStack_c00._4_4_ = uStack_bf0._4_4_;
      do {
        p_Stack_7a8 = (_List_node_base *)0x7fffffffffffffff;
        if (local_7c8 != (_List_node_base *)&local_7c8) {
          plVar90 = *(long **)(local_7c8 + 0x10);
          p_Var26 = local_7c8;
          while( true ) {
            (**(code **)(*plVar90 + 0x20))(plVar90);
            cVar23 = (**(code **)(*plVar90 + 0x18))(plVar90);
            if (cVar23 == '\0') break;
            p_Var67 = (_List_node_base *)(**(code **)(*plVar90 + 0x10))(plVar90);
            if ((long)local_7b0 < (long)p_Var67) {
              local_7b0 = p_Var67;
            }
            do {
              (**(code **)(*plVar90 + 0x10))(plVar90);
              if ((long)extraout_RDX_51 < (long)p_Stack_7a8) {
                p_Stack_7a8 = extraout_RDX_51;
              }
              p_Var26 = *(_List_node_base **)p_Var26;
              if (p_Var26 == (_List_node_base *)&local_7c8) goto LAB_00259f40;
              plVar90 = *(long **)(p_Var26 + 0x10);
            } while ((p_Var26 != local_7c8) &&
                    ((**(code **)(*plVar90 + 0x10))(plVar90), (long)local_7b0 < extraout_RDX_50
                    /* try { // try from 00259eb3 to 00259f05 has its CatchHandler @ 0025ce05 */));
          }
          break;
        }
LAB_00259f40:
                    /* try { // try from 00259f40 to 00259f47 has its CatchHandler @ 0025c9c7 */
        std::__cxx11::
        list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>::
        sort<juce::detail::IntersectingRangedValues<float_const,signed_char>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
                  ((_List_node_base *)&local_7c8);
      } while ((long)p_Stack_7a8 <= (long)local_7b0);
      local_bf8 = _local_c08;
      uStack_bf0 = uStack_c00;
    } while( true );
  }
  goto LAB_00259fe6;
LAB_00256bf1:
  if (local_a78 != (undefined **)0x0) {
    operator_delete(local_a78);
  }
  goto LAB_00256c06;
LAB_0025ba38:
  p_Var26 = local_8f0;
  lVar69 = local_390;
  lVar33 = local_380;
  lVar89 = local_258;
  while( true ) {
    local_390 = lVar69;
    local_380 = lVar33;
    local_258 = lVar89;
    if (p_Var26 == (_List_node_base *)&local_8f0) break;
    p_Var67 = *(_List_node_base **)p_Var26;
    operator_delete(p_Var26);
    p_Var26 = p_Var67;
    lVar69 = local_390;
    lVar33 = local_380;
    lVar89 = local_258;
  }
  if (p_Stack_270 != (_List_node_base *)0x0) {
    operator_delete(p_Stack_270);
  }
  if (local_288 != (_List_node_base *)0x0) {
    operator_delete(local_288);
  }
  if (local_360 != (_List_node_base *)0x0) {
    operator_delete(local_360);
  }
  if (local_378 != (_List_node_base *)0x0) {
    operator_delete(local_378);
  }
  if (p_Stack_3b0 != (_List_node_base *)0x0) {
    operator_delete(p_Stack_3b0);
  }
  if (local_3c8 != (_List_node_base *)0x0) {
    operator_delete(local_3c8);
  }
LAB_0025baf0:
  pPVar38 = *(ParagraphStorage **)(lVar33 + local_408 * 8);
  if (pPVar38[0x54] == (ParagraphStorage)0x0) {
                    /* try { // try from 0025bb10 to 0025bb17 has its CatchHandler @ 0025bf75 */
    pPVar32 = ParagraphStorage::getShapedText(pPVar38);
    lVar69 = *(long *)pPVar32;
    if (*(long *)(lVar69 + 0x150) == *(long *)(lVar69 + 0x158)) {
      fVar101 = 0.0;
    }
    else {
      fVar101 = *(float *)(*(long *)(lVar69 + 0x170) + -8);
    }
    *(float *)(pPVar38 + 0x50) = fVar101;
    pPVar38[0x54] = (ParagraphStorage)0x1;
    lVar69 = local_390;
  }
  else {
    fVar101 = *(float *)(pPVar38 + 0x50);
  }
  local_abc = local_abc + fVar101;
  lVar69 = lVar69 + 0x10;
  if (lVar69 == local_200) goto code_r0x0025bb75;
  goto LAB_002527ff;
joined_r0x00259f7b:
  while (local_1f8 = plVar90, p_Var26 != (_List_node_base *)&local_7c8) {
    p_Var67 = *(_List_node_base **)p_Var26;
    operator_delete(p_Var26);
    plVar90 = local_1f8;
    p_Var26 = p_Var67;
  }
  if (local_b08 != (_List_node_base *)0x0) {
    operator_delete(local_b08);
  }
  if (p_Stack_b70 != (_List_node_base *)0x0) {
    operator_delete(p_Stack_b70);
  }
  if (local_b88 != (_List_node_base *)0x0) {
    operator_delete(local_b88);
  }
  uVar78 = (ulong)*(uint *)(local_8c0 + _local_ab8 * 4);
LAB_00259fe6:
  iVar25 = (int)uVar78;
  if (iVar25 == 1) {
    p_Var26 = *(_List_node_base **)(lVar33 + 0x188);
    uVar50 = *(long *)(lVar33 + 400) - (long)p_Var26 >> 5;
LAB_0025a065:
    if (0xfffffffffffffff < uVar50) {
                    /* try { // try from 0025bd61 to 0025bd6c has its CatchHandler @ 0025c1ba */
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    }
    if (uVar50 == 0) {
      local_ab8 = (undefined1  [4])0xffffff01;
      pfVar43 = (float *)0x0;
      pfVar45 = (float *)0x0;
      local_8c0 = 0;
      p_Var67 = p_Var26;
    }
    else {
                    /* try { // try from 0025a092 to 0025a099 has its CatchHandler @ 0025c0ed */
      pfVar43 = operator_new(uVar50 * 8);
      memset(pfVar43,0,uVar50 * 8);
      p_Var67 = p_Var26 + uVar50 * 0x20;
      lVar89 = 0;
      pfVar45 = pfVar43;
      fVar101 = (float)local_bf8;
      fVar102 = local_bf8._4_4_;
      do {
        local_bf8._0_4_ = (float)*(undefined8 *)(p_Var26 + lVar89) + fVar101;
        local_bf8._4_4_ = (float)((ulong)*(undefined8 *)(p_Var26 + lVar89) >> 0x20) + fVar102;
        uStack_bf0._0_4_ = (float)uStack_bf0 + 0.0;
        uStack_bf0._4_4_ = uStack_bf0._4_4_ + 0.0;
        if (p_Var26[lVar89 + 0x1d] != (_List_node_base)0x0) {
          local_bf8._0_4_ = (float)local_bf8 + *(float *)(local_b58._0_8_ + (lVar69 >> 4) * 4);
          local_bf8._4_4_ = local_bf8._4_4_ + 0.0;
          uStack_bf0._0_4_ = (float)uStack_bf0 + 0.0;
          uStack_bf0._4_4_ = uStack_bf0._4_4_ + 0.0;
        }
        *(ulong *)pfVar45 =
             CONCAT44(fVar102 + (float)((ulong)*(undefined8 *)(p_Var26 + lVar89 + 8) >> 0x20),
                      fVar101 + (float)*(undefined8 *)(p_Var26 + lVar89 + 8));
        pfVar45 = pfVar45 + 2;
        lVar89 = lVar89 + 0x20;
        fVar101 = (float)local_bf8;
        fVar102 = local_bf8._4_4_;
      } while (uVar50 * 0x20 != lVar89);
      pfVar45 = pfVar43 + uVar50 * 2;
      iVar25 = *(int *)(local_8c0 + _local_ab8 * 4);
      auVar17._12_4_ = 0;
      auVar17._0_12_ = auStack_ab4;
      _local_ab8 = auVar17 << 0x20;
      local_8c0 = uVar50;
    }
    if (iVar25 == 1) {
      plVar90 = *(long **)(lVar33 + 0x200);
    }
  }
  else {
    lVar89 = *(long *)(*(long *)(lVar33 + 0x148) + 8);
    uVar54 = *(long *)(*(long *)(lVar33 + 0x148) + 0x10) - lVar89 >> 5;
    if ((long)uVar54 < 0) {
      uVar54 = 0;
    }
    lVar37 = local_ae8._0_8_;
    if ((long)local_ae8._0_8_ < 0) {
      lVar37 = 0;
    }
    if ((long)local_400 <= (long)uVar54) {
      uVar54 = local_400;
    }
    p_Var26 = (_List_node_base *)(lVar37 * 0x20 + lVar89);
    uVar50 = uVar54 - lVar37;
    if (uVar50 != 0 && lVar37 <= (long)uVar54) goto LAB_0025a065;
    local_ab8 = (undefined1  [4])(int)CONCAT71((int7)(uVar78 >> 8),1);
    pfVar45 = (float *)0x0;
    pfVar43 = (float *)0x0;
    local_8c0 = 0;
    p_Var67 = p_Var26;
  }
  _local_c08 = p_Var67;
  lVar69 = (long)local_af0 >> 4;
  local_ac8 = (SharedFontInternal *)*plVar90;
  if (local_ac8 != (SharedFontInternal *)0x0) {
    LOCK();
    *(int *)(local_ac8 + 8) = *(int *)(local_ac8 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_ac8 + 8) = *(int *)(local_ac8 + 8) + 1;
    UNLOCK();
  }
  local_af0 = (_List_node_base *)((long)pfVar45 - (long)pfVar43 >> 3);
  local_ad0 = (_List_node_base *)CONCAT44(local_ad0._4_4_,*(undefined4 *)(local_ad0 + lVar69 * 4));
  _Var24 = *(_List_node_base *)(local_b20 + ((long)local_848 >> 4));
  local_840 = (_List_node_base *)
              CONCAT44(local_840._4_4_,*(undefined4 *)(local_840 + (local_240 >> 4) * 4));
                    /* try { // try from 0025a29a to 0025a2a7 has its CatchHandler @ 0025c313 */
  local_ae8._0_8_ = *(long **)(local_b40 + 8);
  local_b18 = p_Var26;
  local_848 = local_ac8;
  plVar90 = (long *)(**(code **)(**(long **)(local_b40 + 8) + 0x100))();
                    /* try { // try from 0025a2c0 to 0025a2c4 has its CatchHandler @ 0025c129 */
  if (((SharedFontInternal *)*plVar90 != local_ac8) &&
     (uVar54 = FontOptions::operator==
                         ((FontOptions *)((SharedFontInternal *)*plVar90 + 0x18),
                          (undefined8 *)(local_ac8 + 0x18)), (char)uVar54 == '\0')) {
                    /* try { // try from 0025a2d4 to 0025a42e has its CatchHandler @ 0025c313 */
    (**(code **)(*(long *)local_ae8._0_8_ + 0xf8))(local_ae8._0_8_,&local_ac8);
  }
  local_8b8 = (undefined **)&DAT_3f800000;
  uStack_8b0 = (_List_node_base *)0x0;
  local_8a8 = (_List_node_base *)CONCAT44(local_abc,0x3f800000);
  uVar100 = (int)local_ad0;
  if (_Var24 != (_List_node_base)0x0) {
    uVar54 = Component::findColour(this_00,0x1000203,'\0');
    uVar100 = (undefined4)uVar54;
  }
  uVar44 = Graphics::setColour(local_b40,uVar100);
  _Var24 = local_b18[0x1f];
  if ((char)_Var24 < '\x01') {
    local_b20 = (SharedFontInternal *)
                CONCAT44(local_b20._4_4_,(int)CONCAT71((int7)((ulong)uVar44 >> 8),1));
    p_Var26 = local_be0;
    p_Var27 = local_be8;
  }
  else {
    uVar97 = *(undefined2 *)(local_b18 + 0x18);
    if (local_be0 == local_b10) {
      p_Var72 = operator_new(2);
      *(undefined2 *)p_Var72 = uVar97;
      if (local_be0 != (_List_node_base *)0x0) {
        operator_delete(local_be0);
      }
      local_b10 = p_Var72 + 2;
      _Var24 = local_b18[0x1f];
    }
    else {
      *(undefined2 *)local_be0 = uVar97;
      p_Var72 = local_be0;
    }
    fVar101 = (float)*(undefined8 *)pfVar43 -
              (float)(int)(char)_Var24 * (float)*(undefined8 *)local_b18;
    fVar102 = (float)((ulong)*(undefined8 *)pfVar43 >> 0x20) -
              (float)(int)(char)_Var24 * (float)((ulong)*(undefined8 *)local_b18 >> 0x20);
    if (local_be8 == (_List_node_base *)local_b98) {
      local_b98 = (float *)CONCAT44(fVar102,fVar101);
      pfVar45 = operator_new(8);
      *(float **)pfVar45 = local_b98;
      local_b98 = pfVar45 + 2;
      if (local_be8 != (_List_node_base *)0x0) {
        operator_delete(local_be8);
      }
      p_Var27 = (_List_node_base *)local_b98;
      local_be8 = (_List_node_base *)pfVar45;
    }
    else {
      *(float *)local_be8 = fVar101;
      *(float *)((long)local_be8 + 4) = fVar102;
      p_Var27 = (_List_node_base *)((long)local_be8 + 8);
    }
    local_b20 = (SharedFontInternal *)((ulong)local_b20 & 0xffffffff00000000);
    p_Var26 = p_Var72 + 2;
    local_be0 = p_Var72;
  }
  iVar25 = 0;
  local_b58._0_8_ = pfVar43;
  if (local_ab8[0] == '\0') {
    p_Var72 = (_List_node_base *)0x0;
    p_Var39 = local_b18;
    do {
      _Var24 = p_Var39[0x1f];
      if ((char)_Var24 < '\0') {
        iVar25 = iVar25 + -(char)_Var24;
        uVar97 = *(undefined2 *)(p_Var39 + 0x18);
        if (p_Var26 != local_b10) goto LAB_0025a4ed;
LAB_0025a536:
        lVar69 = (long)p_Var26 - (long)local_be0;
        if (lVar69 == 0x7ffffffffffffffe) {
                    /* try { // try from 0025bd0d to 0025bd18 has its CatchHandler @ 0025c2e3 */
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        uVar78 = lVar69 >> 1;
        uVar54 = uVar78;
        if (lVar69 == 0) {
          uVar54 = 1;
        }
        local_b10 = (_List_node_base *)(uVar54 + uVar78);
        if (0x3fffffffffffffff < local_b10) {
          local_b10 = (_List_node_base *)0x3fffffffffffffff;
        }
        if (CARRY8(uVar54,uVar78)) {
          local_b10 = (_List_node_base *)0x3fffffffffffffff;
        }
        local_b38 = p_Var72;
        if (local_b10 == (_List_node_base *)0x0) {
          p_Var72 = (_List_node_base *)0x0;
          *(undefined2 *)(uVar78 * 2) = uVar97;
          if (0 < lVar69) goto LAB_0025a5c8;
LAB_0025a635:
          p_Var40 = p_Var72 + uVar78 * 2;
        }
        else {
                    /* try { // try from 0025a5b1 to 0025a7e9 has its CatchHandler @ 0025c306 */
          p_Var72 = operator_new((long)local_b10 * 2);
          *(undefined2 *)(p_Var72 + uVar78 * 2) = uVar97;
          if (lVar69 < 1) goto LAB_0025a635;
LAB_0025a5c8:
          p_Var40 = p_Var72;
          if (local_be0 != p_Var26) {
            p_Var49 = local_be0;
            if (0x1d < lVar69 - 2U) {
              uVar74 = (lVar69 - 2U >> 1) + 1;
              uVar54 = uVar74 & 0xfffffffffffffff0;
              uVar50 = (uVar54 - 0x10 >> 4) + 1;
              uVar78 = (ulong)((uint)uVar50 & 3);
              if (uVar54 - 0x10 < 0x30) {
                lVar69 = 0;
              }
              else {
                uVar50 = uVar50 & 0x1ffffffffffffffc;
                lVar69 = 0;
                do {
                  uVar44 = *(undefined8 *)(local_be0 + lVar69 * 2 + 8);
                  uVar5 = *(undefined8 *)(local_be0 + lVar69 * 2 + 0x10);
                  uVar8 = *(undefined8 *)(local_be0 + lVar69 * 2 + 0x10 + 8);
                  *(undefined8 *)(p_Var72 + lVar69 * 2) = *(undefined8 *)(local_be0 + lVar69 * 2);
                  *(undefined8 *)(p_Var72 + lVar69 * 2 + 8) = uVar44;
                  *(undefined8 *)(p_Var72 + lVar69 * 2 + 0x10) = uVar5;
                  *(undefined8 *)(p_Var72 + lVar69 * 2 + 0x10 + 8) = uVar8;
                  uVar44 = *(undefined8 *)(local_be0 + lVar69 * 2 + 0x20 + 8);
                  uVar5 = *(undefined8 *)(local_be0 + lVar69 * 2 + 0x30);
                  uVar8 = *(undefined8 *)(local_be0 + lVar69 * 2 + 0x30 + 8);
                  *(undefined8 *)(p_Var72 + lVar69 * 2 + 0x20) =
                       *(undefined8 *)(local_be0 + lVar69 * 2 + 0x20);
                  *(undefined8 *)(p_Var72 + lVar69 * 2 + 0x20 + 8) = uVar44;
                  *(undefined8 *)(p_Var72 + lVar69 * 2 + 0x30) = uVar5;
                  *(undefined8 *)(p_Var72 + lVar69 * 2 + 0x30 + 8) = uVar8;
                  uVar44 = *(undefined8 *)(local_be0 + lVar69 * 2 + 0x40 + 8);
                  uVar5 = *(undefined8 *)(local_be0 + lVar69 * 2 + 0x50);
                  uVar8 = *(undefined8 *)(local_be0 + lVar69 * 2 + 0x50 + 8);
                  *(undefined8 *)(p_Var72 + lVar69 * 2 + 0x40) =
                       *(undefined8 *)(local_be0 + lVar69 * 2 + 0x40);
                  *(undefined8 *)(p_Var72 + lVar69 * 2 + 0x40 + 8) = uVar44;
                  *(undefined8 *)(p_Var72 + lVar69 * 2 + 0x50) = uVar5;
                  *(undefined8 *)(p_Var72 + lVar69 * 2 + 0x50 + 8) = uVar8;
                  uVar44 = *(undefined8 *)(local_be0 + lVar69 * 2 + 0x60 + 8);
                  p_Var40 = local_be0 + lVar69 * 2 + 0x70;
                  uVar100 = *(undefined4 *)p_Var40;
                  uVar103 = *(undefined4 *)(p_Var40 + 4);
                  uVar108 = *(undefined4 *)(p_Var40 + 8);
                  uVar7 = *(undefined4 *)(p_Var40 + 0xc);
                  *(undefined8 *)(p_Var72 + lVar69 * 2 + 0x60) =
                       *(undefined8 *)(local_be0 + lVar69 * 2 + 0x60);
                  *(undefined8 *)(p_Var72 + lVar69 * 2 + 0x60 + 8) = uVar44;
                  p_Var40 = p_Var72 + lVar69 * 2 + 0x70;
                  *(undefined4 *)p_Var40 = uVar100;
                  *(undefined4 *)(p_Var40 + 4) = uVar103;
                  *(undefined4 *)(p_Var40 + 8) = uVar108;
                  *(undefined4 *)(p_Var40 + 0xc) = uVar7;
                  lVar69 = lVar69 + 0x40;
                  uVar50 = uVar50 - 4;
                } while (uVar50 != 0);
              }
              if (uVar78 != 0) {
                lVar89 = 0;
                do {
                  uVar44 = *(undefined8 *)(local_be0 + lVar89 + lVar69 * 2 + 8);
                  p_Var40 = local_be0 + lVar89 + lVar69 * 2 + 0x10;
                  uVar100 = *(undefined4 *)p_Var40;
                  uVar103 = *(undefined4 *)(p_Var40 + 4);
                  uVar108 = *(undefined4 *)(p_Var40 + 8);
                  uVar7 = *(undefined4 *)(p_Var40 + 0xc);
                  *(undefined8 *)(p_Var72 + lVar89 + lVar69 * 2) =
                       *(undefined8 *)(local_be0 + lVar89 + lVar69 * 2);
                  *(undefined8 *)(p_Var72 + lVar89 + lVar69 * 2 + 8) = uVar44;
                  p_Var40 = p_Var72 + lVar89 + lVar69 * 2 + 0x10;
                  *(undefined4 *)p_Var40 = uVar100;
                  *(undefined4 *)(p_Var40 + 4) = uVar103;
                  *(undefined4 *)(p_Var40 + 8) = uVar108;
                  *(undefined4 *)(p_Var40 + 0xc) = uVar7;
                  lVar89 = lVar89 + 0x20;
                } while (uVar78 * 0x20 != lVar89);
              }
              p_Var40 = p_Var72 + uVar54 * 2;
              if (uVar74 == uVar54) goto LAB_0025a723;
              p_Var49 = local_be0 + uVar54 * 2;
            }
            do {
              *(undefined2 *)p_Var40 = *(undefined2 *)p_Var49;
              p_Var49 = p_Var49 + 2;
              p_Var40 = p_Var40 + 2;
            } while (p_Var49 != p_Var26);
          }
        }
LAB_0025a723:
        if (local_be0 != (_List_node_base *)0x0) {
          operator_delete(local_be0);
        }
        local_b10 = p_Var72 + (long)local_b10 * 2;
        local_be0 = p_Var72;
        pfVar43 = (float *)local_b58._0_8_;
        p_Var72 = local_b38;
        p_Var26 = p_Var40;
joined_r0x0025a76a:
        p_Var26 = p_Var26 + 2;
        if (p_Var27 == (_List_node_base *)local_b98) {
          lVar69 = (long)local_b98 - (long)local_be8;
          if (lVar69 == 0x7ffffffffffffff8) {
                    /* try { // try from 0025bd19 to 0025bd24 has its CatchHandler @ 0025c2d9 */
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("vector::_M_realloc_insert");
          }
          uVar78 = lVar69 >> 3;
          uVar54 = uVar78;
          if (lVar69 == 0) {
            uVar54 = 1;
          }
          local_b38 = (_List_node_base *)(uVar54 + uVar78);
          if ((_List_node_base *)0xfffffffffffffff < local_b38) {
            local_b38 = (_List_node_base *)0xfffffffffffffff;
          }
          if (CARRY8(uVar54,uVar78)) {
            local_b38 = (_List_node_base *)0xfffffffffffffff;
          }
          if (local_b38 == (_List_node_base *)0x0) {
            pfVar45 = (float *)0x0;
          }
          else {
            pfVar45 = operator_new((long)local_b38 * 8);
          }
          *(undefined8 *)(pfVar45 + uVar78 * 2) =
               *(undefined8 *)(local_b58._0_8_ + (long)p_Var72 * 8);
          pfVar43 = pfVar45;
          if (local_be8 != (_List_node_base *)local_b98) {
            p_Var27 = local_be8;
            if (0x17 < lVar69 - 8U) {
              uVar74 = (lVar69 - 8U >> 3) + 1;
              uVar54 = uVar74 & 0x3ffffffffffffffc;
              uVar50 = (uVar54 - 4 >> 2) + 1;
              uVar78 = (ulong)((uint)uVar50 & 3);
              if (uVar54 - 4 < 0xc) {
                lVar69 = 0;
              }
              else {
                uVar50 = uVar50 & 0x7ffffffffffffffc;
                lVar69 = 0;
                do {
                  uVar44 = *(undefined8 *)((float *)((long)local_be8 + lVar69 * 2 * 4) + 2);
                  uVar5 = *(undefined8 *)((long)local_be8 + (lVar69 * 2 + 4) * 4);
                  uVar8 = *(undefined8 *)((float *)((long)local_be8 + (lVar69 * 2 + 4) * 4) + 2);
                  *(undefined8 *)(pfVar45 + lVar69 * 2) =
                       *(undefined8 *)((long)local_be8 + lVar69 * 2 * 4);
                  *(undefined8 *)(pfVar45 + lVar69 * 2 + 2) = uVar44;
                  *(undefined8 *)(pfVar45 + lVar69 * 2 + 4) = uVar5;
                  *(undefined8 *)(pfVar45 + lVar69 * 2 + 4 + 2) = uVar8;
                  uVar44 = *(undefined8 *)((float *)((long)local_be8 + (lVar69 * 2 + 8) * 4) + 2);
                  uVar5 = *(undefined8 *)((long)local_be8 + (lVar69 * 2 + 0xc) * 4);
                  uVar8 = *(undefined8 *)((float *)((long)local_be8 + (lVar69 * 2 + 0xc) * 4) + 2);
                  *(undefined8 *)(pfVar45 + lVar69 * 2 + 8) =
                       *(undefined8 *)((long)local_be8 + (lVar69 * 2 + 8) * 4);
                  *(undefined8 *)(pfVar45 + lVar69 * 2 + 8 + 2) = uVar44;
                  *(undefined8 *)(pfVar45 + lVar69 * 2 + 0xc) = uVar5;
                  *(undefined8 *)(pfVar45 + lVar69 * 2 + 0xc + 2) = uVar8;
                  uVar44 = *(undefined8 *)((float *)((long)local_be8 + (lVar69 * 2 + 0x10) * 4) + 2)
                  ;
                  uVar5 = *(undefined8 *)((long)local_be8 + (lVar69 * 2 + 0x14) * 4);
                  uVar8 = *(undefined8 *)((float *)((long)local_be8 + (lVar69 * 2 + 0x14) * 4) + 2);
                  *(undefined8 *)(pfVar45 + lVar69 * 2 + 0x10) =
                       *(undefined8 *)((long)local_be8 + (lVar69 * 2 + 0x10) * 4);
                  *(undefined8 *)(pfVar45 + lVar69 * 2 + 0x10 + 2) = uVar44;
                  *(undefined8 *)(pfVar45 + lVar69 * 2 + 0x14) = uVar5;
                  *(undefined8 *)(pfVar45 + lVar69 * 2 + 0x14 + 2) = uVar8;
                  uVar44 = *(undefined8 *)((float *)((long)local_be8 + (lVar69 * 2 + 0x18) * 4) + 2)
                  ;
                  pfVar43 = (float *)((long)local_be8 + (lVar69 * 2 + 0x1c) * 4);
                  fVar101 = *pfVar43;
                  fVar102 = pfVar43[1];
                  fVar107 = pfVar43[2];
                  fVar111 = pfVar43[3];
                  *(undefined8 *)(pfVar45 + lVar69 * 2 + 0x18) =
                       *(undefined8 *)((long)local_be8 + (lVar69 * 2 + 0x18) * 4);
                  *(undefined8 *)(pfVar45 + lVar69 * 2 + 0x18 + 2) = uVar44;
                  pfVar43 = pfVar45 + lVar69 * 2 + 0x1c;
                  *pfVar43 = fVar101;
                  pfVar43[1] = fVar102;
                  pfVar43[2] = fVar107;
                  pfVar43[3] = fVar111;
                  lVar69 = lVar69 + 0x10;
                  uVar50 = uVar50 - 4;
                } while (uVar50 != 0);
              }
              if (uVar78 != 0) {
                lVar89 = 0;
                do {
                  puVar41 = (undefined8 *)((long)local_be8 + lVar89 + lVar69 * 8);
                  uVar44 = puVar41[1];
                  puVar87 = (undefined4 *)((long)local_be8 + lVar89 + lVar69 * 8 + 0x10);
                  uVar100 = *puVar87;
                  uVar103 = puVar87[1];
                  uVar108 = puVar87[2];
                  uVar7 = puVar87[3];
                  puVar42 = (undefined8 *)((long)pfVar45 + lVar89 + lVar69 * 8);
                  *puVar42 = *puVar41;
                  puVar42[1] = uVar44;
                  puVar87 = (undefined4 *)((long)pfVar45 + lVar89 + lVar69 * 8 + 0x10);
                  *puVar87 = uVar100;
                  puVar87[1] = uVar103;
                  puVar87[2] = uVar108;
                  puVar87[3] = uVar7;
                  lVar89 = lVar89 + 0x20;
                } while (uVar78 * 0x20 != lVar89);
              }
              pfVar43 = pfVar45 + uVar54 * 2;
              if (uVar74 == uVar54) goto LAB_0025a973;
              p_Var27 = (_List_node_base *)((long)local_be8 + uVar54 * 2 * 4);
            }
            do {
              *(undefined8 *)pfVar43 = *(undefined8 *)p_Var27;
              p_Var27 = (_List_node_base *)((long)p_Var27 + 8);
              pfVar43 = pfVar43 + 2;
            } while (p_Var27 != (_List_node_base *)local_b98);
          }
LAB_0025a973:
          if (local_be8 != (_List_node_base *)0x0) {
            operator_delete(local_be8);
          }
          p_Var27 = (_List_node_base *)(pfVar43 + 2);
          local_b98 = pfVar45 + (long)local_b38 * 2;
          pfVar43 = (float *)local_b58._0_8_;
          local_be8 = (_List_node_base *)pfVar45;
        }
        else {
          *(undefined8 *)p_Var27 = *(undefined8 *)(pfVar43 + (long)p_Var72 * 2);
          p_Var27 = (_List_node_base *)((long)p_Var27 + 8);
        }
      }
      else {
        if (iVar25 < 1) {
          iVar25 = 1;
        }
        iVar25 = iVar25 + -1;
        if (_Var24 == (_List_node_base)0x0) {
          uVar97 = *(undefined2 *)(p_Var39 + 0x18);
          if (p_Var26 == local_b10) goto LAB_0025a536;
LAB_0025a4ed:
          *(undefined2 *)p_Var26 = uVar97;
          goto joined_r0x0025a76a;
        }
      }
      p_Var39 = p_Var39 + 0x20;
      p_Var72 = p_Var72 + 1;
    } while (p_Var39 != p_Var67);
    iVar25 = (uint)(0 < iVar25) << 8;
  }
                    /* try { // try from 0025a9ea to 0025a9ec has its CatchHandler @ 0025c313 */
  (**(code **)(*(long *)local_ae8._0_8_ + 0x70))();
  uVar44 = local_ae8._0_8_;
  if (((byte)local_b20 & (short)iVar25 == 0) != 0) goto LAB_0025ac6e;
  fVar101 = (float)local_8b8 * (float)local_8a8 - local_8b8._4_4_ * uStack_8b0._4_4_;
  if (ABS(fVar101) == INFINITY) {
    if ((fVar101 != 0.0) || (NAN(fVar101))) goto LAB_0025aa8b;
LAB_0025aaea:
    fVar102 = uStack_8b0._4_4_;
    fVar101 = (float)local_8a8;
    fVar107 = local_8a8._4_4_;
  }
  else {
    if ((ABS(fVar101) <= 0.0) || (ABS(fVar101) <= ABS(fVar101) * 2.220446e-16)) goto LAB_0025aaea;
LAB_0025aa8b:
    fVar102 = -uStack_8b0._4_4_ * (1.0 / fVar101);
    fVar101 = (float)local_8b8 * (1.0 / fVar101);
    fVar107 = -(float)uStack_8b0 * fVar102 - local_8a8._4_4_ * fVar101;
  }
  fVar111 = 0.0;
  fVar113 = fVar102 * 0.0 + fVar101 * 0.0 + fVar107;
  fVar112 = (float)*(int *)(local_8c8 + 0x4c) * fVar101 + fVar102 * 0.0 + fVar107;
  fVar102 = (float)*(int *)(local_8c8 + 0x48) * fVar102;
  fVar106 = fVar107 + fVar102 + fVar101 * 0.0;
  fVar107 = fVar107 + fVar102 + (float)*(int *)(local_8c8 + 0x4c) * fVar101;
  fVar101 = fVar112;
  if (fVar106 <= fVar112) {
    fVar101 = fVar106;
  }
  fVar102 = fVar107;
  if (fVar101 <= fVar107) {
    fVar102 = fVar101;
  }
  if (fVar113 <= fVar102) {
    fVar102 = fVar113;
  }
  if (fVar112 <= fVar106) {
    fVar112 = fVar106;
  }
  if (fVar107 <= fVar112) {
    fVar107 = fVar112;
  }
  if (fVar107 <= fVar113) {
    fVar107 = fVar113;
  }
  fVar112 = fVar102 + -10.0;
  fVar101 = (fVar107 - fVar102) + fVar102 + 10.0;
  if ((byte)local_b20 == 0) {
    fVar111 = *pfVar43;
  }
  if ((short)iVar25 == 0) {
    fVar102 = (float)(*(int *)(local_8c8 + 0x48) + *(int *)(local_8c8 + 0x40));
  }
  else {
    fVar102 = pfVar43[(long)local_af0 * 2 + -2] + *(float *)(local_b18 + local_8c0 * 0x20 + -0x20);
  }
  fVar107 = fVar111 - fVar102;
  fVar106 = fVar112 - fVar101;
  if (fVar107 < 0.0) {
    fVar107 = -fVar107;
  }
  if (fVar106 < 0.0) {
    fVar106 = -fVar106;
  }
  _local_838 = ZEXT816(0);
  p_Stack_818 = (_List_node_base *)CONCAT71(p_Stack_818._1_7_,1);
  if (fVar112 <= fVar101) {
    fVar101 = fVar112;
  }
  if (fVar111 <= fVar102) {
    fVar102 = fVar111;
  }
  _auStack_828 = _local_838;
  Path::addRectangle(fVar102,fVar101,fVar107,fVar106,(Path *)local_838);
                    /* try { // try from 0025ac45 to 0025ac55 has its CatchHandler @ 0025c0f2 */
  (**(code **)(*(long *)uVar44 + 0x48))(uVar44,(Path *)local_838,&local_8b8);
  auVar105 = _local_838;
  iStack_82c = 0;
  auVar11 = _local_838;
  local_838._0_8_ = auVar105._0_8_;
  uVar5 = local_838._0_8_;
  _local_838 = auVar11;
  free((void *)uVar5);
LAB_0025ac6e:
  lVar69 = (long)p_Var27 - (long)local_be8 >> 3;
                    /* try { // try from 0025ac8c to 0025ac9f has its CatchHandler @ 0025c1ef */
  puVar41 = &local_8b8;
  p_Var27 = local_be8;
  (**(code **)(*(long *)uVar44 + 0x108))(uVar44,(long)p_Var26 - (long)local_be0 >> 1);
                    /* try { // try from 0025aca4 to 0025aca9 has its CatchHandler @ 0025c1e7 */
  (**(code **)(*(long *)uVar44 + 0x78))(uVar44);
  if (local_ac8[0x7d] != (SharedFontInternal)0x0) {
    TVar3 = local_8c8[0x1d6];
    fVar101 = *(float *)(local_ac8 + 100);
    uVar44 = extraout_RDX_52;
    if (fVar101 <= 0.0) {
      fVar101 = *(float *)(local_ac8 + 0x68);
                    /* try { // try from 0025ace9 to 0025acf5 has its CatchHandler @ 0025c096 */
      uVar44 = Font::SharedFontInternal::getAscentDescent
                         (local_ac8,(long *)&local_ac8,extraout_RDX_52,lVar69,(uint *)p_Var27,
                          (ulong)puVar41);
      fVar101 = fVar101 * ((float)((ulong)uVar44 >> 0x20) + (float)uVar44);
      uVar44 = extraout_RDX_53;
    }
                    /* try { // try from 0025ad19 to 0025ad25 has its CatchHandler @ 0025c313 */
    uVar44 = Font::SharedFontInternal::getAscentDescent
                       (local_ac8,(long *)&local_ac8,uVar44,lVar69,(uint *)p_Var27,(ulong)puVar41);
    fVar102 = *(float *)(local_ac8 + 100);
    if (fVar102 <= 0.0) {
      local_b38 = (_List_node_base *)CONCAT44(local_b38._4_4_,*(undefined4 *)(local_ac8 + 0x68));
                    /* try { // try from 0025ad4f to 0025ad5b has its CatchHandler @ 0025c08e */
      uVar5 = Font::SharedFontInternal::getAscentDescent
                        (local_ac8,(long *)&local_ac8,extraout_RDX_54,lVar69,(uint *)p_Var27,
                         (ulong)puVar41);
      fVar102 = (float)local_b38 * ((float)((ulong)uVar5 >> 0x20) + (float)uVar5);
    }
    fVar101 = (fVar101 +
              (-1.0 / ((float)((ulong)uVar44 >> 0x20) + (float)uVar44)) * (float)uVar44 * fVar102) *
              0.3;
    if (local_ab8[0] == '\0') {
      p_Var27 = local_b18 + local_8c0 * 0x20 + -0x20;
      p_Var26 = local_b18;
      do {
        p_Var72 = p_Var26 + -0x20;
        do {
          p_Var39 = p_Var67;
          if (p_Var72 + 0x40 == p_Var67) break;
          p_Var40 = p_Var72 + 0x3d;
          p_Var49 = p_Var72 + 0x5d;
          p_Var72 = p_Var72 + 0x20;
          p_Var39 = p_Var72;
        } while ((*p_Var40 != (_List_node_base)0x0) == (*p_Var49 != (_List_node_base)0x0));
        if ((TVar3 != (TextEditor)0x0) || (p_Var26[0x1d] == (_List_node_base)0x0)) {
          if (p_Var39 == p_Var67) {
            fVar107 = pfVar43[(long)local_af0 * 2 + -2];
            fVar102 = *(float *)p_Var27;
          }
          else {
            fVar102 = *(float *)((long)pfVar43 + ((long)p_Var39 - (long)local_b18 >> 2));
            fVar107 = *(float *)p_Var39;
          }
          uVar44 = *(undefined8 *)((long)pfVar43 + ((long)p_Var26 - (long)local_b18 >> 2));
          fVar111 = (float)uVar44;
          fVar107 = (fVar107 + fVar102) - fVar111;
          auStack_ab4._0_4_ = SUB84((ulong)uVar44 >> 0x20,0);
          fVar102 = fVar111 + fVar107;
          if (fVar107 < 0.0) {
            auStack_828._0_4_ = fVar102;
            fVar112 = fVar111;
          }
          else {
            auStack_828._0_4_ = fVar111;
            fVar112 = fVar102;
          }
          _local_838 = ZEXT816(0);
          p_Stack_818 = (_List_node_base *)CONCAT71(p_Stack_818._1_7_,1);
          fVar113 = fVar101 + fVar101 + (float)auStack_ab4._0_4_;
          fVar109 = fVar113 + fVar101;
          fVar106 = fVar113;
          if (0.0 <= fVar101) {
            fVar106 = fVar109;
          }
          local_b38 = (_List_node_base *)CONCAT44(local_b38._4_4_,fVar106);
          if (fVar101 < 0.0) {
            uStack_820._0_4_ = fVar109;
            uStack_820._4_4_ = fVar113;
          }
          else {
            uStack_820._0_4_ = fVar113;
            uStack_820._4_4_ = fVar109;
          }
          local_ab8 = (undefined1  [4])
                      (~-(uint)(fVar107 < 0.0) & (uint)fVar111 |
                      (uint)fVar102 & -(uint)(fVar107 < 0.0));
          auStack_ab4._4_8_ = 0;
          local_ae8._0_16_ =
               ZEXT416(-(uint)(fVar101 < 0.0) & (uint)fVar109 |
                       ~-(uint)(fVar101 < 0.0) & (uint)fVar113);
          auStack_828._4_4_ = fVar112;
          local_838._0_8_ = malloc(0x60);
          local_838._8_4_ = 0x18;
          *(undefined4 *)local_838._0_8_ = 0x47c35100;
          *(undefined1 (*) [4])(local_838._0_8_ + 4) = local_ab8;
          *(float *)(local_838._0_8_ + 8) = (float)local_b38;
          *(undefined4 *)(local_838._0_8_ + 0xc) = 0x47c35080;
          *(undefined1 (*) [4])(local_838._0_8_ + 0x10) = local_ab8;
          *(undefined4 *)(local_838._0_8_ + 0x14) = local_ae8._0_4_;
          *(undefined4 *)(local_838._0_8_ + 0x18) = 0x47c35080;
          *(float *)(local_838._0_8_ + 0x1c) = fVar112;
          *(undefined4 *)(local_838._0_8_ + 0x20) = local_ae8._0_4_;
          *(undefined4 *)(local_838._0_8_ + 0x24) = 0x47c35080;
          *(float *)(local_838._0_8_ + 0x28) = fVar112;
          *(float *)(local_838._0_8_ + 0x2c) = (float)local_b38;
          iStack_82c = 0xd;
          *(undefined4 *)(local_838._0_8_ + 0x30) = 0x47c35280;
          cVar23 = (**(code **)(**(long **)(local_b40 + 8) + 0x68))();
          if (cVar23 == '\0') {
            if ((long)iStack_82c != 0) {
              pfVar45 = (float *)(local_838._0_8_ + (long)iStack_82c * 4);
              pfVar46 = (float *)local_838._0_8_;
              do {
                fVar102 = *pfVar46;
                if ((fVar102 != 100002.0) || (NAN(fVar102))) {
                  if ((((fVar102 == 100004.0) && (!NAN(fVar102))) ||
                      ((fVar102 == 100001.0 && (!NAN(fVar102))))) ||
                     ((fVar102 == 100003.0 && (!NAN(fVar102))))) {
                    /* try { // try from 0025b03d to 0025b29b has its CatchHandler @ 0025c318 */
                    (**(code **)(**(long **)(local_b40 + 8) + 200))
                              (*(long **)(local_b40 + 8),local_838,&local_8b8);
                    break;
                  }
                }
                else {
                  pfVar46 = pfVar46 + 2;
                }
                pfVar46 = pfVar46 + 1;
              } while (pfVar46 != pfVar45);
            }
          }
          iStack_82c = 0;
          auVar105 = _local_838;
          uVar44 = local_838._0_8_;
          _local_838 = auVar105;
          free((void *)uVar44);
        }
        p_Var26 = p_Var39 + (ulong)(p_Var39 != p_Var67) * 0x20;
      } while (p_Var26 != p_Var67);
    }
  }
  if ((int)local_840 != 0) {
    fVar101 = *pfVar43;
    fVar102 = pfVar43[(long)local_af0 * 2 + -2];
    fVar107 = *(float *)(local_b18 + local_8c0 * 0x20 + -0x20);
    fVar111 = pfVar43[1];
    if (local_b40[0x10] != (Graphics)0x0) {
      local_b40[0x10] = (Graphics)0x0;
                    /* try { // try from 0025ae4b to 0025ae4d has its CatchHandler @ 0025c313 */
      (**(code **)(**(long **)(local_b40 + 8) + 0x70))();
    }
    pGVar77 = local_b40;
    local_b40[0x10] = (Graphics)0x0;
                    /* try { // try from 0025ae61 to 0025af50 has its CatchHandler @ 0025c2ef */
    (**(code **)(**(long **)(local_b40 + 8) + 0x70))();
    (**(code **)(**(long **)(pGVar77 + 8) + 0x20))(*(long **)(pGVar77 + 8),&local_8b8);
    dVar6 = (double)(fVar111 + 0.5) + 6755399441055744.0;
    iVar25 = SUB84((double)(fVar102 + fVar107) + 6755399441055744.0,0);
    stack0xfffffffffffff7d0 =
         (_List_node_base *)
         ((ulong)(uint)(iVar25 - SUB84((double)fVar101 + 6755399441055744.0,0)) | 0x100000000);
    local_838._0_8_ =
         (ulong)((double)fVar101 + 6755399441055744.0) & 0xffffffff | (long)dVar6 << 0x20;
    if (pGVar77[0x10] != (Graphics)0x0) {
      pGVar77[0x10] = (Graphics)0x0;
      (**(code **)(**(long **)(pGVar77 + 8) + 0x70))();
    }
    (**(code **)(**(long **)(pGVar77 + 8) + 0x30))(*(long **)(pGVar77 + 8),local_838);
    iVar18 = _ZN4juce7ColoursL16transparentBlackE_5;
    fVar102 = (float)iVar25;
    fVar101 = (float)SUB84(dVar6,0) + 1.0;
    _local_c08 = ZEXT416((uint)fVar101);
    p_Var26 = (_List_node_base *)CONCAT44(fVar101,fVar102);
    local_b88 = (_List_node_base *)0x0;
    p_Stack_b80 = p_Var26;
    (**(code **)(**(long **)(pGVar77 + 8) + 0x70))();
    plVar90 = *(long **)(pGVar77 + 8);
    if ((int)local_ad0 == iVar18) {
      local_838._0_4_ = (int)local_ad0;
      stack0xfffffffffffff7d0 = (_List_node_base *)0x0;
      _auStack_828 = ZEXT816(0x3f800000) << 0x40;
      p_Stack_818 = (_List_node_base *)0x0;
      local_810 = (_List_node_base *)&DAT_3f800000;
                    /* try { // try from 0025af99 to 0025afa6 has its CatchHandler @ 0025c079 */
      (**(code **)(*plVar90 + 0x90))(plVar90,local_838);
      if (auStack_828 != (undefined1  [8])0x0) {
        LOCK();
        plVar90 = (long *)((long)auStack_828 + 8);
        *(int *)plVar90 = (int)*plVar90 + -1;
        UNLOCK();
        if ((int)*plVar90 == 0) {
          (**(code **)(*(long *)auStack_828 + 8))();
        }
      }
      pvVar22 = stack0xfffffffffffff7d0;
      if (stack0xfffffffffffff7d0 != (void *)0x0) {
        *(undefined4 *)((long)stack0xfffffffffffff7d0 + 0x24) = 0;
        free(*(void **)((long)stack0xfffffffffffff7d0 + 0x18));
        operator_delete(pvVar22);
      }
      pGVar77 = local_b40;
                    /* try { // try from 0025aff5 to 0025b002 has its CatchHandler @ 0025c2ef */
      (**(code **)(**(long **)(local_b40 + 8) + 0xb8))(*(long **)(local_b40 + 8),&local_b88);
    }
    else {
                    /* try { // try from 0025b323 to 0025b325 has its CatchHandler @ 0025c2ef */
      auVar105 = (**(code **)(*plVar90 + 0x60))();
      iVar64 = (int)fVar102;
      iVar25 = 0x7fffffff;
      if (2.1474836e+09 <= fVar102) {
        iVar64 = 0x7fffffff;
      }
      if (fVar101 + 0.0 < 2.1474836e+09) {
        fVar101 = ceilf(fVar101 + 0.0);
        iVar25 = (int)fVar101;
      }
      iVar59 = auVar105._0_4_;
      iVar53 = 0;
      if (-1 < iVar59) {
        iVar53 = iVar59;
      }
      iVar47 = 0;
      if (-1 < auVar105._0_8_) {
        iVar47 = auVar105._4_4_;
      }
      iVar59 = iVar59 + auVar105._8_4_;
      if (iVar64 < iVar59) {
        iVar59 = iVar64;
      }
      pGVar77 = local_b40;
      if (-1 < iVar59 - iVar53) {
        iVar64 = auVar105._12_4_ + auVar105._4_4_;
        if (iVar25 < iVar64) {
          iVar64 = iVar25;
        }
        if (((-1 < iVar64 - iVar47) && (0 < iVar59 - iVar53)) && (iVar64 != iVar47)) {
          uVar91 = (int)(float)iVar47 ^ (int)((float)iVar53 / 3.0);
          _local_ab8 = ZEXT416((uint)((float)(int)((float)iVar53 / 3.0) * 3.0 + 0.0));
          fVar102 = (float)iVar59;
          fVar101 = (float)(int)(float)iVar47;
          local_ae8._0_4_ = (float)iVar64;
          local_b08 = (_List_node_base *)0x0;
          uStack_b00._0_4_ = 0;
          uStack_b00._4_4_ = 0;
          uVar100 = 0;
          uVar103 = 0;
          _local_c08 = ZEXT416((uint)fVar102);
          local_b38 = (_List_node_base *)(ulong)(uint)fVar101;
          uStack_b30 = 0;
          if (fVar101 < (float)iVar64) {
            bVar58 = 0;
            do {
              p_Var26 = p_Stack_b80;
              for (fVar107 = (float)bVar58 * 3.0 + (float)local_ab8; p_Stack_b80 = p_Var26,
                  fVar107 < fVar102; fVar107 = fVar107 + 6.0) {
                if ((int)(uint)uStack_b00 <= uStack_b00._4_4_) {
                  uVar65 = uStack_b00._4_4_ +
                           ((uStack_b00._4_4_ - (uStack_b00._4_4_ + 1 >> 0x1f)) + 1 >> 1) + 9;
                  uVar66 = uVar65 & 0xfffffff8;
                  if ((uint)uStack_b00 != uVar66) {
                    if ((int)uVar66 < 1) {
                      free(local_b08);
                      local_b08 = (_List_node_base *)0x0;
                    }
                    else {
                      local_b08 = realloc(local_b08,(ulong)uVar66 << 4);
                    }
                  }
                  uStack_b00._0_4_ = uVar65 & 0xfffffff8;
                }
                p_Var26 = local_b08 + (long)uStack_b00._4_4_ * 0x10;
                *(float *)p_Var26 = fVar107;
                *(float *)(p_Var26 + 4) = fVar101;
                *(float *)(p_Var26 + 8) = 3.0;
                *(float *)(p_Var26 + 0xc) = 1.0;
                p_Var26 = p_Stack_b80;
                uStack_b00._4_4_ = uStack_b00._4_4_ + 1;
              }
              bVar58 = bVar58 ^ 1;
              fVar101 = fVar101 + 1.0;
            } while (fVar101 < (float)local_ae8._0_4_);
            uVar100 = SUB84(local_b88,0);
            uVar103 = (undefined4)((ulong)local_b88 >> 0x20);
          }
          RectangleList<float>::clipTo(CONCAT44(uVar103,uVar100),p_Var26,(long *)&local_b08);
          iVar25 = iVar18;
          if ((uVar91 & 1) == 0) {
            iVar25 = (int)local_ad0;
          }
          local_838._0_4_ = iVar25;
          stack0xfffffffffffff7d0 = (_List_node_base *)0x0;
          _auStack_828 = ZEXT816(0x3f800000) << 0x40;
          p_Stack_818 = (_List_node_base *)0x0;
          local_810 = (_List_node_base *)0x3f800000;
                    /* try { // try from 0025b5ee to 0025b5f6 has its CatchHandler @ 0025bf7a */
          (**(code **)(**(long **)(local_b40 + 8) + 0x90))(*(long **)(local_b40 + 8),local_838);
          if (auStack_828 != (undefined1  [8])0x0) {
            LOCK();
            plVar90 = (long *)((long)auStack_828 + 8);
            *(int *)plVar90 = (int)*plVar90 + -1;
            UNLOCK();
            if ((int)*plVar90 == 0) {
              (**(code **)(*(long *)auStack_828 + 8))();
            }
          }
          pvVar22 = stack0xfffffffffffff7d0;
          if (stack0xfffffffffffff7d0 != (void *)0x0) {
            *(undefined4 *)((long)stack0xfffffffffffff7d0 + 0x24) = 0;
            free(*(void **)((long)stack0xfffffffffffff7d0 + 0x18));
            operator_delete(pvVar22);
          }
                    /* try { // try from 0025b645 to 0025b652 has its CatchHandler @ 0025bf8c */
          (**(code **)(**(long **)(local_b40 + 8) + 0xc0))(*(long **)(local_b40 + 8),&local_b08);
          uStack_b00 = (_List_node_base *)(ulong)(uint)uStack_b00;
          free(local_b08);
          local_b08 = (_List_node_base *)0x0;
          uStack_b00._0_4_ = 0;
          uStack_b00._4_4_ = 0;
          if ((float)local_b38 < (float)local_ae8._0_4_) {
            bVar58 = 1;
            fVar101 = (float)local_b38;
            uVar100 = local_b38._4_4_;
            uVar103 = (float)uStack_b30;
            uVar108 = uStack_b30._4_4_;
            do {
              fVar107 = (float)bVar58 * 3.0 + (float)local_ab8;
              if (fVar107 < fVar102) {
                local_b38 = (_List_node_base *)CONCAT44(uVar100,fVar101);
                uStack_b30 = CONCAT44(uVar108,uVar103);
                do {
                  if ((int)(uint)uStack_b00 <= uStack_b00._4_4_) {
                    uVar65 = uStack_b00._4_4_ +
                             ((uStack_b00._4_4_ - (uStack_b00._4_4_ + 1 >> 0x1f)) + 1 >> 1) + 9;
                    uVar66 = uVar65 & 0xfffffff8;
                    if ((uint)uStack_b00 != uVar66) {
                      if ((int)uVar66 < 1) {
                        free(local_b08);
                        local_b08 = (_List_node_base *)0x0;
                      }
                      else {
                        local_b08 = realloc(local_b08,(ulong)uVar66 << 4);
                      }
                      fVar101 = (float)local_b38;
                      uVar100 = local_b38._4_4_;
                      uVar103 = (float)uStack_b30;
                      uVar108 = uStack_b30._4_4_;
                    }
                    uStack_b00._0_4_ = uVar65 & 0xfffffff8;
                  }
                  iVar25 = uStack_b00._4_4_ + 1;
                  p_Var26 = local_b08 + (long)uStack_b00._4_4_ * 0x10;
                  *(float *)p_Var26 = fVar107;
                  *(float *)(p_Var26 + 4) = fVar101;
                  *(undefined4 *)(p_Var26 + 8) = 0x40400000;
                  *(undefined4 *)(p_Var26 + 0xc) = 0x3f800000;
                  fVar107 = fVar107 + 6.0;
                  uStack_b00._4_4_ = iVar25;
                } while (fVar107 < fVar102);
              }
              bVar58 = bVar58 ^ 1;
              fVar101 = fVar101 + 1.0;
            } while (fVar101 < (float)local_ae8._0_4_);
          }
          RectangleList<float>::clipTo(local_b88,p_Stack_b80,(long *)&local_b08);
          iVar25 = (int)local_ad0;
          if ((uVar91 & 1) == 0) {
            iVar25 = iVar18;
          }
          local_838._0_4_ = iVar25;
          stack0xfffffffffffff7d0 = (_List_node_base *)0x0;
          _auStack_828 = ZEXT816(0x3f800000) << 0x40;
          p_Stack_818 = (_List_node_base *)0x0;
          local_810 = (_List_node_base *)&DAT_3f800000;
                    /* try { // try from 0025b81f to 0025b827 has its CatchHandler @ 0025bf7a */
          (**(code **)(**(long **)(local_b40 + 8) + 0x90))(*(long **)(local_b40 + 8),local_838);
          if (auStack_828 != (undefined1  [8])0x0) {
            LOCK();
            plVar90 = (long *)((long)auStack_828 + 8);
            *(int *)plVar90 = (int)*plVar90 + -1;
            UNLOCK();
            if ((int)*plVar90 == 0) {
              (**(code **)(*(long *)auStack_828 + 8))();
            }
          }
          pvVar22 = stack0xfffffffffffff7d0;
          if (stack0xfffffffffffff7d0 != (void *)0x0) {
            *(undefined4 *)((long)stack0xfffffffffffff7d0 + 0x24) = 0;
            free(*(void **)((long)stack0xfffffffffffff7d0 + 0x18));
            operator_delete(pvVar22);
          }
                    /* try { // try from 0025b876 to 0025b883 has its CatchHandler @ 0025bf8c */
          (**(code **)(**(long **)(local_b40 + 8) + 0xc0))(*(long **)(local_b40 + 8),&local_b08);
          uStack_b00 = (_List_node_base *)(ulong)(uint)uStack_b00;
          free(local_b08);
          pGVar77 = local_b40;
          pfVar43 = (float *)local_b58._0_8_;
        }
      }
    }
                    /* try { // try from 0025b8b7 to 0025b8b9 has its CatchHandler @ 0025c2ef */
    (**(code **)(**(long **)(pGVar77 + 8) + 0x78))();
    if (pGVar77[0x10] == (Graphics)0x0) {
                    /* try { // try from 0025b8e7 to 0025b8e9 has its CatchHandler @ 0025c058 */
      (**(code **)(**(long **)(pGVar77 + 8) + 0x78))();
    }
    else {
      pGVar77[0x10] = (Graphics)0x0;
    }
  }
  if (local_ac8 != (SharedFontInternal *)0x0) {
    LOCK();
    pSVar93 = local_ac8 + 8;
    *(int *)pSVar93 = *(int *)pSVar93 + -1;
    UNLOCK();
    if (*(int *)pSVar93 == 0) {
      (**(code **)(*(long *)local_ac8 + 8))();
    }
  }
  if (local_848 != (SharedFontInternal *)0x0) {
    LOCK();
    pSVar93 = local_848 + 8;
    *(int *)pSVar93 = *(int *)pSVar93 + -1;
    UNLOCK();
    if (*(int *)pSVar93 == 0) {
      (**(code **)(*(long *)local_848 + 8))();
    }
  }
  if (pfVar43 != (float *)0x0) {
    operator_delete(pfVar43);
  }
  do {
    uStack_8d0 = 0x7fffffffffffffff;
    if (local_8f0 != (_List_node_base *)&local_8f0) {
      plVar90 = *(long **)(local_8f0 + 0x10);
      p_Var26 = local_8f0;
      while( true ) {
        (**(code **)(*plVar90 + 0x20))(plVar90);
        cVar23 = (**(code **)(*plVar90 + 0x18))();
        if (cVar23 == '\0') break;
        uVar54 = (**(code **)(*plVar90 + 0x10))(plVar90);
        if ((long)local_8d8 < (long)uVar54) {
          local_8d8 = uVar54;
        }
        do {
          (**(code **)(*plVar90 + 0x10))(plVar90);
          if ((long)extraout_RDX_56 < (long)uStack_8d0) {
            uStack_8d0 = extraout_RDX_56;
          }
          p_Var26 = *(_List_node_base **)p_Var26;
          if (p_Var26 == (_List_node_base *)&local_8f0) goto LAB_0025ba10;
          plVar90 = *(long **)(p_Var26 + 0x10);
        } while ((p_Var26 != local_8f0) &&
                ((**(code **)(*plVar90 + 0x10))(plVar90), (long)local_8d8 < extraout_RDX_55
                    /* try { // try from 0025b973 to 0025b9c5 has its CatchHandler @ 0025c9d8 */));
      }
      break;
    }
LAB_0025ba10:
                    /* try { // try from 0025ba10 to 0025ba1c has its CatchHandler @ 0025c271 */
    std::__cxx11::list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>
    ::
    sort<juce::detail::IntersectingRangedValues<juce::Font_const,juce::detail::LineMetrics_const,juce::detail::JustifiedText::DrawType_const,float_const,juce::Colour,signed_char,int>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
              ((_List_node_base *)&local_8f0);
  } while ((long)uStack_8d0 <= (long)local_8d8);
  bVar58 = 0;
  uVar54 = local_400;
  lVar69 = local_248;
  goto LAB_00257f63;
joined_r0x002558eb:
  while (p_Var27 != (_List_node_base *)&local_7c8) {
    p_Var72 = *(_List_node_base **)p_Var27;
    operator_delete(p_Var27);
    p_Var27 = p_Var72;
  }
  if (local_378 != (_List_node_base *)0x0) {
    operator_delete(local_378);
  }
  if (p_Stack_b70 != (_List_node_base *)0x0) {
    operator_delete(p_Stack_b70);
  }
  if (local_b88 != (_List_node_base *)0x0) {
    operator_delete(local_b88);
  }
  iVar25 = *(int *)(local_400 + (long)local_b18 * 4);
LAB_00255949:
  if (iVar25 == 1) {
    lVar69 = *(long *)(lVar33 + 0x188);
    uVar54 = *(long *)(lVar33 + 400) - lVar69 >> 5;
  }
  else {
    lVar69 = *(long *)(*(long *)(lVar33 + 0x148) + 8);
    p_Var27 = (_List_node_base *)(*(long *)(*(long *)(lVar33 + 0x148) + 0x10) - lVar69 >> 5);
    if ((long)p_Var27 < 0) {
      p_Var27 = (_List_node_base *)0x0;
    }
    lVar37 = _local_ab8;
    if ((long)_local_ab8 < 0) {
      lVar37 = 0;
    }
    if ((long)local_af0 <= (long)p_Var27) {
      p_Var27 = local_af0;
    }
    lVar69 = lVar37 * 0x20 + lVar69;
    uVar54 = (long)p_Var27 - lVar37;
    if (uVar54 == 0 || (long)p_Var27 < lVar37) {
      puVar41 = (undefined8 *)0x0;
      puVar42 = (undefined8 *)0x0;
      uVar54 = 0;
      pSVar93 = *(SharedFontInternal **)local_ae8._0_8_;
      goto joined_r0x00255f25;
    }
  }
  if (0xfffffffffffffff < uVar54) {
                    /* try { // try from 0025bd3d to 0025bd48 has its CatchHandler @ 0025c21d */
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
  if (uVar54 == 0) {
    uVar54 = 0;
    puVar42 = (undefined8 *)0x0;
    puVar41 = (undefined8 *)0x0;
  }
  else {
                    /* try { // try from 002559ed to 002559f4 has its CatchHandler @ 0025c1b5 */
    puVar42 = operator_new(uVar54 * 8);
    memset(puVar42,0,uVar54 * 8);
    lVar37 = 0;
    puVar41 = puVar42;
    do {
      uVar44 = *(undefined8 *)(lVar69 + 8 + lVar37);
      fVar101 = (float)*(undefined8 *)(lVar69 + lVar37) + (float)local_c08;
      fVar102 = (float)((ulong)*(undefined8 *)(lVar69 + lVar37) >> 0x20) + (float)auStack_c04;
      uStack_c00._0_4_ = (float)uStack_c00 + 0.0;
      uStack_c00._4_4_ = uStack_c00._4_4_ + 0.0;
      if (*(char *)(lVar69 + 0x1d + lVar37) != '\0') {
        fVar101 = fVar101 + *(float *)(local_b58._0_8_ + (lVar89 >> 4) * 4);
        fVar102 = fVar102 + 0.0;
        uStack_c00._0_4_ = (float)uStack_c00 + 0.0;
        uStack_c00._4_4_ = uStack_c00._4_4_ + 0.0;
      }
      *puVar41 = CONCAT44((float)auStack_c04 + (float)((ulong)uVar44 >> 0x20),
                          (float)local_c08 + (float)uVar44);
      puVar41 = puVar41 + 1;
      lVar37 = lVar37 + 0x20;
      local_c08 = (undefined1  [4])fVar101;
      auStack_c04 = (undefined1  [4])fVar102;
    } while (uVar54 * 0x20 != lVar37);
    puVar41 = puVar42 + uVar54;
    iVar25 = *(int *)(local_400 + (long)local_b18 * 4);
  }
  if (iVar25 == 1) {
    pSVar93 = (SharedFontInternal *)**(undefined8 **)(lVar33 + 0x200);
  }
  else {
    pSVar93 = *(SharedFontInternal **)local_ae8._0_8_;
  }
joined_r0x00255f25:
  if (pSVar93 != (SharedFontInternal *)0x0) {
    LOCK();
    *(int *)(pSVar93 + 8) = *(int *)(pSVar93 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(pSVar93 + 8) = *(int *)(pSVar93 + 8) + 1;
    UNLOCK();
  }
                    /* try { // try from 00255af7 to 00255baf has its CatchHandler @ 0025c3b4 */
  local_8b8 = (undefined **)pSVar93;
  uVar78 = Component::findColour(this_00,0x1000202,'\0');
  fVar101 = 1.0;
  pCVar51 = Component::currentlyFocusedComponent;
  if (Component::currentlyFocusedComponent != this_00) {
    do {
      if (pCVar51 == (Component *)0x0) {
        fVar101 = 0.5;
        goto LAB_00255b48;
      }
      pCVar51 = *(Component **)(pCVar51 + 0x30);
    } while (pCVar51 != this_00);
    fVar101 = 1.0;
  }
LAB_00255b48:
  iVar25 = SUB84((double)((float)((uint)(uVar78 >> 0x18) & 0xff) * fVar101) + 6755399441055744.0,0);
  if (0xfe < iVar25) {
    iVar25 = 0xff;
  }
  uVar50 = (ulong)(uint)(iVar25 << 0x18);
  Graphics::setColour(local_b40,(uint)uVar78 & 0xffffff | iVar25 << 0x18);
  uVar44 = Font::SharedFontInternal::getAscentDescent
                     ((SharedFontInternal *)local_8b8,&local_8b8,extraout_RDX_36,uVar50,
                      (uint *)p_Var26,(ulong)p_Var67);
  local_b58._8_4_ = extraout_XMM0_Dc;
  local_b58._0_8_ = uVar44;
  local_b58._12_4_ = extraout_XMM0_Dd;
  fVar101 = *(float *)((long)local_8b8 + 100);
  uVar44 = extraout_RDX_37;
  fVar102 = fVar101;
  if (fVar101 <= 0.0) {
    fVar102 = *(float *)((long)local_8b8 + 0x68);
                    /* try { // try from 00255bdb to 00255be7 has its CatchHandler @ 0025c1bf */
    uVar5 = Font::SharedFontInternal::getAscentDescent
                      ((SharedFontInternal *)local_8b8,&local_8b8,extraout_RDX_37,uVar50,
                       (uint *)p_Var26,(ulong)p_Var67);
    fVar101 = *(float *)((long)local_8b8 + 100);
    uVar44 = extraout_RDX_38;
    fVar102 = fVar102 * ((float)((ulong)uVar5 >> 0x20) + (float)uVar5);
  }
  local_b38 = (_List_node_base *)*puVar42;
  uStack_b30 = 0;
  fVar107 = *(float *)(uVar54 * 0x20 + -0x20 + lVar69);
  if (fVar101 <= 0.0) {
    fVar101 = *(float *)((long)local_8b8 + 0x68);
                    /* try { // try from 00255c4e to 00255c52 has its CatchHandler @ 0025c1cf */
    uVar44 = Font::SharedFontInternal::getAscentDescent
                       ((SharedFontInternal *)local_8b8,&local_8b8,uVar44,uVar50,(uint *)p_Var26,
                        (ulong)p_Var67);
    fVar101 = fVar101 * ((float)((ulong)uVar44 >> 0x20) + (float)uVar44);
    uVar44 = extraout_RDX_39;
  }
                    /* try { // try from 00255c7c to 00255c80 has its CatchHandler @ 0025c3b4 */
  uVar44 = Font::SharedFontInternal::getAscentDescent
                     ((SharedFontInternal *)local_8b8,&local_8b8,uVar44,uVar50,(uint *)p_Var26,
                      (ulong)p_Var67);
  fVar111 = *(float *)((long)local_8b8 + 100);
  fVar112 = (float)uVar44;
  fVar106 = (float)((ulong)uVar44 >> 0x20);
  if (fVar111 <= 0.0) {
    local_ae8._8_4_ = extraout_XMM0_Dc_00;
    local_ae8._0_8_ = uVar44;
    local_ae8._12_4_ = extraout_XMM0_Dd_00;
    local_ab8 = (undefined1  [4])*(undefined4 *)((long)local_8b8 + 0x68);
                    /* try { // try from 00255cb5 to 00255cb9 has its CatchHandler @ 0025c1c7 */
    uVar44 = Font::SharedFontInternal::getAscentDescent
                       ((SharedFontInternal *)local_8b8,&local_8b8,extraout_RDX_40,uVar50,
                        (uint *)p_Var26,(ulong)p_Var67);
    fVar111 = (float)local_ab8 * ((float)((ulong)uVar44 >> 0x20) + (float)uVar44);
    fVar112 = (float)local_ae8._0_4_;
    fVar106 = (float)local_ae8._4_4_;
  }
  auVar110._0_4_ = (float)local_b38 + 0.0;
  auVar110._4_4_ =
       (-1.0 / ((float)local_b58._4_4_ + (float)local_b58._0_4_)) * (float)local_b58._0_4_ * fVar102
       + local_abc + local_b38._4_4_;
  auVar110._8_4_ = (float)uStack_b30 + 0.0;
  auVar110._12_4_ = uStack_b30._4_4_ + 0.0;
  auVar104._0_4_ = (float)puVar42[((long)puVar41 - (long)puVar42 >> 3) + -1] + fVar107;
  auVar104._4_4_ =
       (float)((ulong)puVar42[((long)puVar41 - (long)puVar42 >> 3) + -1] >> 0x20) +
       fVar101 + (-1.0 / (fVar106 + fVar112)) * fVar112 * fVar111 + local_abc;
  auVar104._8_8_ = 0;
  local_838._8_4_ = auVar110._0_4_ - auVar104._0_4_;
  iStack_82c = (int)(auVar110._4_4_ - auVar104._4_4_);
  if ((float)local_838._8_4_ < 0.0) {
    local_838._8_4_ = -(float)local_838._8_4_;
  }
  if ((float)iStack_82c < 0.0) {
    iStack_82c = (int)-(float)iStack_82c;
  }
  auVar105 = minps(auVar104,auVar110);
  local_838._0_8_ = auVar105._0_8_;
                    /* try { // try from 00255dcb to 00255dd8 has its CatchHandler @ 0025c3b4 */
  (**(code **)(**(long **)(local_b40 + 8) + 0xb8))(*(long **)(local_b40 + 8),local_838);
  if ((_List_node_base *)local_8b8 != (_List_node_base *)0x0) {
    LOCK();
    p_Var27 = (_List_node_base *)((long)local_8b8 + 8);
    *(int *)p_Var27 = *(int *)p_Var27 + -1;
    UNLOCK();
    if (*(int *)p_Var27 == 0) {
      (**(code **)((long)*local_8b8 + 8))();
    }
  }
  if (pSVar93 != (SharedFontInternal *)0x0) {
    LOCK();
    pSVar96 = pSVar93 + 8;
    *(int *)pSVar96 = *(int *)pSVar96 + -1;
    UNLOCK();
    if (*(int *)pSVar96 == 0) {
      (**(code **)(*(long *)pSVar93 + 8))(pSVar93);
    }
  }
  operator_delete(puVar42);
  do {
    p_Stack_940 = (_List_node_base *)0x7fffffffffffffff;
    if (local_960 != (_List_node_base *)&local_960) {
      plVar90 = *(long **)(local_960 + 0x10);
      p_Var27 = local_960;
      while( true ) {
        (**(code **)(*plVar90 + 0x20))(plVar90);
        cVar23 = (**(code **)(*plVar90 + 0x18))();
        if (cVar23 == '\0') break;
        p_Var72 = (_List_node_base *)(**(code **)(*plVar90 + 0x10))(plVar90);
        if ((long)local_948 < (long)p_Var72) {
          local_948 = p_Var72;
        }
        do {
          (**(code **)(*plVar90 + 0x10))(plVar90);
          if ((long)extraout_RDX_42 < (long)p_Stack_940) {
            p_Stack_940 = extraout_RDX_42;
          }
          p_Var27 = *(_List_node_base **)p_Var27;
          if (p_Var27 == (_List_node_base *)&local_960) goto LAB_00255ee0;
          plVar90 = *(long **)(p_Var27 + 0x10);
        } while ((p_Var27 != local_960) &&
                ((**(code **)(*plVar90 + 0x10))(plVar90), (long)local_948 < extraout_RDX_41
                    /* try { // try from 00255e43 to 00255e95 has its CatchHandler @ 0025c9f6 */));
      }
      break;
    }
LAB_00255ee0:
                    /* try { // try from 00255ee0 to 00255eec has its CatchHandler @ 0025c301 */
    std::__cxx11::list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>
    ::
    sort<juce::detail::IntersectingRangedValues<juce::Font_const,juce::detail::LineMetrics_const,juce::detail::JustifiedText::DrawType_const,float_const,signed_char>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
              ((_List_node_base *)&local_960);
  } while ((long)p_Stack_940 <= (long)local_948);
  bVar58 = 0;
  p_Var27 = local_af0;
  p_Var72 = local_ad0;
  goto LAB_00253933;
code_r0x0025bb75:
  if (local_be8 != (_List_node_base *)0x0) {
    operator_delete(local_be8);
  }
  if (local_be0 != (_List_node_base *)0x0) {
    operator_delete(local_be0);
  }
  goto LAB_0025bb93;
code_r0x002526c9:
  p_Var26 = local_a08;
  while (p_Var26 != (_List_node_base *)&local_a08) {
    p_Var67 = *(_List_node_base **)p_Var26;
    operator_delete(p_Var26);
    p_Var26 = p_Var67;
  }
  if ((_List_node_base *)local_8b8 != (_List_node_base *)0x0) {
    operator_delete(local_8b8);
  }
  pTVar19 = local_8c8;
  if (local_328 != (_List_node_base *)0x0) {
    operator_delete(local_328);
  }
  if (p_Stack_1d0 != (_List_node_base *)0x0) {
    operator_delete(p_Stack_1d0);
  }
  if (local_1e8 != (_List_node_base *)0x0) {
    operator_delete(local_1e8);
  }
                    /* try { // try from 0025274f to 00252751 has its CatchHandler @ 0025be50 */
  (**(code **)(**(long **)(local_b40 + 8) + 0x60))();
  lVar33 = *(long *)(pTVar19 + 0x330);
  lVar69 = *(long *)(lVar33 + 0x68);
  local_200 = *(long *)(lVar33 + 0x70);
  if (local_200 != lVar69) {
    iVar25 = SUB84((double)((float)extraout_var - local_abc) + 6755399441055744.0,0);
    local_24c = (float)iVar25;
    lVar33 = *(long *)(lVar33 + 0x80);
    local_250 = (float)(extraout_var_00 + iVar25);
    this_00 = (Component *)(pTVar19 + 8);
    local_b98 = (float *)0x0;
    local_be8 = (_List_node_base *)0x0;
    local_b10 = (_List_node_base *)0x0;
    local_be0 = (_List_node_base *)0x0;
    lVar89 = lVar69;
    local_380 = lVar33;
    local_258 = lVar69;
LAB_002527ff:
    local_408 = lVar69 - lVar89 >> 4;
    pPVar38 = *(ParagraphStorage **)(lVar33 + (lVar69 - lVar89 >> 1));
    lVar37 = *(long *)(pPVar38 + 0x30);
    lVar88 = *(long *)(lVar37 + 0x70) - *(long *)(lVar37 + 0x68);
    local_390 = lVar69;
    if (lVar88 == 0) {
      pSVar93 = (SharedFontInternal *)0x0;
      if (pPVar38[0x60] != (ParagraphStorage)0x0) goto LAB_002528df;
LAB_00252901:
                    /* try { // try from 00252901 to 00252908 has its CatchHandler @ 0025be46 */
      lVar69 = local_390;
      pPVar32 = ParagraphStorage::getShapedText(pPVar38);
      lVar37 = *(long *)(*(long *)pPVar32 + 0x90) - *(long *)(*(long *)pPVar32 + 0x88) >> 5;
      *(long *)(pPVar38 + 0x58) = lVar37;
      pPVar38[0x60] = (ParagraphStorage)0x1;
      pPVar38 = *(ParagraphStorage **)(lVar33 + local_408 * 8);
    }
    else {
      lVar33 = *(long *)(lVar37 + 0x80);
      lVar89 = (lVar88 >> 4) * 0x10;
      lVar69 = 0;
      pSVar93 = (SharedFontInternal *)0x0;
      do {
        while( true ) {
          pPVar32 = *(ParagraphStorage **)(lVar33 + (lVar69 >> 1));
          if (pPVar32 == pPVar38) goto LAB_002528b0;
          if (pPVar32[0x60] != (ParagraphStorage)0x0) break;
                    /* try { // try from 00252875 to 0025287c has its CatchHandler @ 0025c050 */
          pPVar36 = ParagraphStorage::getShapedText(pPVar32);
          lVar37 = *(long *)(*(long *)pPVar36 + 0x90) - *(long *)(*(long *)pPVar36 + 0x88) >> 5;
          *(long *)(pPVar32 + 0x58) = lVar37;
          pPVar32[0x60] = (ParagraphStorage)0x1;
          pSVar93 = pSVar93 + lVar37;
          lVar69 = lVar69 + 0x10;
          if (lVar89 == lVar69) goto LAB_002528b0;
        }
        pSVar93 = pSVar93 + *(long *)(pPVar32 + 0x58);
        lVar69 = lVar69 + 0x10;
      } while (lVar89 != lVar69);
LAB_002528b0:
      pPVar38 = *(ParagraphStorage **)(local_380 + local_408 * 8);
      lVar33 = local_380;
      lVar89 = local_258;
      if (pPVar38[0x60] == (ParagraphStorage)0x0) goto LAB_00252901;
LAB_002528df:
      lVar37 = *(long *)(pPVar38 + 0x58);
      lVar69 = local_390;
    }
    local_848 = pSVar93 + lVar37;
    if ((long)(pSVar93 + lVar37) <= (long)pSVar93) {
      local_848 = pSVar93;
    }
    lVar37 = *(long *)(pPVar38 + 0x30);
    lVar88 = *(long *)(lVar37 + 0x70) - *(long *)(lVar37 + 0x68);
    local_b20 = pSVar93;
    if (lVar88 == 0) {
      auVar14._12_4_ = 0;
      auVar14._0_12_ = _auStack_c04;
      _local_c08 = auVar14 << 0x20;
      if (pPVar38[0x54] != (ParagraphStorage)0x0) goto LAB_00252a14;
LAB_00252a4f:
                    /* try { // try from 00252a4f to 00252ac8 has its CatchHandler @ 0025bf75 */
      pPVar32 = ParagraphStorage::getShapedText(pPVar38);
      lVar69 = *(long *)pPVar32;
      if (*(long *)(lVar69 + 0x150) == *(long *)(lVar69 + 0x158)) {
        fVar101 = 0.0;
      }
      else {
        fVar101 = *(float *)(*(long *)(lVar69 + 0x170) + -8);
      }
      *(float *)(pPVar38 + 0x50) = fVar101;
      pPVar38[0x54] = (ParagraphStorage)0x1;
      lVar69 = local_390;
      if (local_24c <= fVar101 + (float)local_c08) {
LAB_00252aa5:
        if ((float)local_c08 <= local_250) {
          pPVar38 = ParagraphStorage::getShapedText(*(ParagraphStorage **)(lVar33 + local_408 * 8));
                    /* try { // try from 00252acc to 00252af0 has its CatchHandler @ 0025be4b */
          detail::RangedValues<signed_char>::getIntersectionsStartingAtZeroWith
                    ((Ranges *)&local_3c8,(long *)&local_aa8,(ulong)local_b20,(long)local_848);
          lVar33 = *(long *)pPVar38;
          lVar69 = *(long *)(lVar33 + 0x148);
          lStack_9c0 = *(long *)(lVar33 + 0x150);
          local_990 = *(long *)(lVar69 + 0x80);
          lStack_988 = *(long *)(lVar69 + 0x68);
          p_Var26 = *(_List_node_base **)(lVar69 + 0x70);
          local_9c8 = *(long *)(lVar33 + 0x168);
          p_Var67 = *(_List_node_base **)(lVar33 + 0x158);
          p_Stack_9f8 = *(_List_node_base **)(lVar33 + 0x250);
          local_a00 = *(_List_node_base **)(lVar33 + 0x268);
          uStack_9d8 = *(undefined8 *)(lVar33 + 600);
          p_Stack_a30 = *(_List_node_base **)(lVar33 + 0x280);
          local_a38 = *(_List_node_base **)(lVar33 + 0x298);
          p_Stack_a10 = *(_List_node_base **)(lVar33 + 0x288);
          local_a78 = &PTR__RangedIterator_00712250;
          p_Stack_a70 = p_Stack_3b0;
          p_Stack_a68 = local_3c8;
          local_a60 = local_3c8;
          p_Stack_a58 = p_Stack_3b0;
          local_a50 = local_3c8;
          pppppppuStack_a48 = (undefined8 *******)uStack_3c0;
          local_a40 = &PTR__RangedIterator_00712200;
          local_a08 = (_List_node_base *)&PTR__RangedIterator_007121b0;
          local_9d0 = &PTR__RangedIterator_00712160;
          local_998 = &PTR__RangedIterator_00712100;
          local_960 = (_List_node_base *)&local_960;
          p_Stack_950 = (_List_node_base *)0x0;
          stack0xfffffffffffff7d0 = (_List_node_base *)local_838;
          local_838._0_8_ = local_838;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uStack_820;
          _auStack_828 = auVar15 << 0x40;
          local_a28 = p_Stack_a30;
          p_Stack_a20 = local_a38;
          local_a18 = p_Stack_a30;
          local_9f0 = p_Stack_9f8;
          p_Stack_9e8 = local_a00;
          local_9e0 = p_Stack_9f8;
          local_9b8 = lStack_9c0;
          lStack_9b0 = local_9c8;
          local_9a8 = lStack_9c0;
          p_Stack_9a0 = p_Var67;
          local_980 = lStack_988;
          lStack_978 = local_990;
          local_970 = lStack_988;
          p_Stack_968 = p_Var26;
          local_958 = local_960;
                    /* try { // try from 00252ce9 to 00252d9a has its CatchHandler @ 0025bff5 */
          p_Var27 = operator_new(0x18);
          *(undefined ****)(p_Var27 + 0x10) = &local_998;
          std::__detail::_List_node_base::_M_hook(p_Var27);
          auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
          p_Var27 = operator_new(0x18);
          *(undefined ****)(p_Var27 + 0x10) = &local_9d0;
          std::__detail::_List_node_base::_M_hook(p_Var27);
          auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
          p_Var27 = operator_new(0x18);
          *(_List_node_base ***)(p_Var27 + 0x10) = &local_a08;
          std::__detail::_List_node_base::_M_hook(p_Var27);
          auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
          p_Var27 = operator_new(0x18);
          *(undefined ****)(p_Var27 + 0x10) = &local_a40;
          std::__detail::_List_node_base::_M_hook(p_Var27);
          auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
          p_Var27 = operator_new(0x18);
          *(undefined ****)(p_Var27 + 0x10) = &local_a78;
          std::__detail::_List_node_base::_M_hook(p_Var27);
          auStack_828 = (undefined1  [8])((long)auStack_828 + 1);
          p_Var27 = local_960;
          while (p_Var27 != (_List_node_base *)&local_960) {
            p_Var72 = *(_List_node_base **)p_Var27;
            operator_delete(p_Var27);
            p_Var27 = p_Var72;
          }
          if ((_List_node_base *)local_838._0_8_ == (_List_node_base *)local_838) {
            p_Stack_950 = (_List_node_base *)0x0;
            local_960 = (_List_node_base *)&local_960;
            local_958 = (_List_node_base *)&local_960;
          }
          else {
            local_960 = (_List_node_base *)local_838._0_8_;
            local_958 = stack0xfffffffffffff7d0;
            *(_List_node_base **)stack0xfffffffffffff7d0 = (_List_node_base *)&local_960;
            *(_List_node_base **)(local_838._0_8_ + 8) = (_List_node_base *)&local_960;
            p_Stack_950 = (_List_node_base *)auStack_828;
            p_Var27 = (_List_node_base *)local_838._0_8_;
            if ((_List_node_base *)local_838._0_8_ != (_List_node_base *)&local_960) {
              do {
                    /* try { // try from 00252e77 to 00252e79 has its CatchHandler @ 0025c035 */
                cVar23 = (**(code **)(**(long **)(p_Var27 + 0x10) + 0x18))();
                if (cVar23 == '\0') {
                  if (p_Var27 != (_List_node_base *)&local_960) goto LAB_00253910;
                  break;
                }
                p_Var27 = *(_List_node_base **)p_Var27;
              } while (p_Var27 != (_List_node_base *)&local_960);
            }
          }
          if (local_960 == (_List_node_base *)&local_960) {
            local_948 = (_List_node_base *)0x8000000000000000;
LAB_002536ea:
            p_Stack_940 = (_List_node_base *)0x7fffffffffffffff;
LAB_002536f5:
            if ((long)local_948 < (long)p_Stack_940) goto LAB_00253910;
          }
          else {
            p_Var72 = (_List_node_base *)0x8000000000000000;
            p_Var27 = local_960;
            do {
                    /* try { // try from 00252ec7 to 00252ec9 has its CatchHandler @ 0025c11a */
              p_Var39 = (_List_node_base *)(**(code **)(**(long **)(p_Var27 + 0x10) + 0x10))();
              if ((long)p_Var72 < (long)p_Var39) {
                p_Var72 = p_Var39;
              }
              p_Var27 = *(_List_node_base **)p_Var27;
            } while (p_Var27 != (_List_node_base *)&local_960);
            local_948 = p_Var72;
            if (local_960 == (_List_node_base *)&local_960) goto LAB_002536ea;
            p_Var72 = (_List_node_base *)0x7fffffffffffffff;
            p_Var27 = local_960;
            do {
                    /* try { // try from 00252f17 to 00252f19 has its CatchHandler @ 0025c09e */
              (**(code **)(**(long **)(p_Var27 + 0x10) + 0x10))();
              if ((long)extraout_RDX_27 < (long)p_Var72) {
                p_Var72 = extraout_RDX_27;
              }
              p_Var27 = *(_List_node_base **)p_Var27;
            } while (p_Var27 != (_List_node_base *)&local_960);
            p_Stack_940 = p_Var72;
            if ((local_960 == (_List_node_base *)&local_960) ||
               (*(_List_node_base **)local_960 == (_List_node_base *)&local_960)) goto LAB_002536f5;
            local_8b8 = (undefined **)&local_8b8;
            stack0xfffffffffffff7d0 = (_List_node_base *)local_838;
            local_838._0_8_ = (_List_node_base *)local_838;
            uStack_820 = (ulong)auStack_828;
            auStack_828 = (undefined1  [8])auStack_828;
            p_Stack_818 = (_List_node_base *)&p_Stack_818;
            pppppppuStack_808 = &pppppppuStack_808;
            local_7f8 = (_List_node_base *)&local_7f8;
            local_7e8 = (_List_node_base *)&local_7e8;
            local_7d8 = (_List_node_base *)&local_7d8;
            local_7b8 = (_List_node_base *)&local_7b8;
            p_Stack_7a8 = (_List_node_base *)&p_Stack_7a8;
            local_798 = &local_798;
            local_788 = &local_788;
            local_778 = &local_778;
            local_768 = &local_768;
            local_758 = &local_758;
            local_748 = &local_748;
            local_738 = &local_738;
            local_728 = &local_728;
            local_718 = &local_718;
            local_708 = &local_708;
            local_6f8 = &local_6f8;
            local_6e8 = &local_6e8;
            local_6d8 = &local_6d8;
            local_6c8 = &local_6c8;
            local_6b8 = &local_6b8;
            local_6a8 = &local_6a8;
            local_698 = &local_698;
            local_688 = &local_688;
            local_678 = &local_678;
            local_668 = &local_668;
            local_658 = &local_658;
            local_648 = &local_648;
            local_638 = &local_638;
            local_628 = &local_628;
            local_618 = &local_618;
            local_608 = &local_608;
            local_5f8 = &local_5f8;
            local_5e8 = &local_5e8;
            local_5d8 = &local_5d8;
            local_5c8 = &local_5c8;
            local_5b8 = &local_5b8;
            local_5a8 = &local_5a8;
            local_598 = &local_598;
            local_588 = &local_588;
            local_578 = &local_578;
            local_568 = &local_568;
            local_558 = &local_558;
            local_548 = &local_548;
            local_538 = &local_538;
            local_528 = &local_528;
            local_518 = &local_518;
            local_508 = &local_508;
            local_4f8 = &local_4f8;
            local_4e8 = &local_4e8;
            local_4d8 = &local_4d8;
            local_4c8 = &local_4c8;
            local_4b8 = &local_4b8;
            local_4a8 = &local_4a8;
            local_498 = &local_498;
            local_488 = &local_488;
            local_478 = &local_478;
            local_468 = &local_468;
            local_458 = &local_458;
            local_448 = &local_448;
            p_Var27 = (_List_node_base *)local_838;
            uStack_8b0 = (_List_node_base *)local_8b8;
            local_810 = p_Stack_818;
            local_800 = pppppppuStack_808;
            p_Stack_7f0 = local_7f8;
            p_Stack_7e0 = local_7e8;
            uStack_7d0 = local_7d8;
            local_7c8 = (_List_node_base *)&local_7c8;
            local_7c0 = (_List_node_base *)&local_7c8;
            local_7b0 = local_7b8;
            local_7a0 = p_Stack_7a8;
            local_790 = local_798;
            local_780 = local_788;
            local_770 = local_778;
            local_760 = local_768;
            local_750 = local_758;
            local_740 = local_748;
            local_730 = local_738;
            local_720 = local_728;
            local_710 = local_718;
            local_700 = local_708;
            local_6f0 = local_6f8;
            local_6e0 = local_6e8;
            local_6d0 = local_6d8;
            local_6c0 = local_6c8;
            local_6b0 = local_6b8;
            local_6a0 = local_6a8;
            local_690 = local_698;
            local_680 = local_688;
            local_670 = local_678;
            local_660 = local_668;
            local_650 = local_658;
            local_640 = local_648;
            local_630 = local_638;
            local_620 = local_628;
            local_610 = local_618;
            local_600 = local_608;
            local_5f0 = local_5f8;
            local_5e0 = local_5e8;
            local_5d0 = local_5d8;
            local_5c0 = local_5c8;
            local_5b0 = local_5b8;
            local_5a0 = local_5a8;
            local_590 = local_598;
            local_580 = local_588;
            local_570 = local_578;
            local_560 = local_568;
            local_550 = local_558;
            local_540 = local_548;
            local_530 = local_538;
            local_520 = local_528;
            local_510 = local_518;
            local_500 = local_508;
            local_4f0 = local_4f8;
            local_4e0 = local_4e8;
            local_4d0 = local_4d8;
            local_4c0 = local_4c8;
            local_4b0 = local_4b8;
            local_4a0 = local_4a8;
            local_490 = local_498;
            local_480 = local_488;
            local_470 = local_478;
            local_460 = local_468;
            local_450 = local_458;
            local_440 = local_448;
            do {
              p_Var72 = p_Var27;
              p_Var27 = (_List_node_base *)local_838;
              std::__detail::_List_node_base::_M_transfer((_List_node_base *)&local_8b8,local_960);
              if (p_Var27 == p_Var72) {
                bVar98 = true;
              }
              else {
                do {
                  p_Var40 = p_Var27;
                  p_Var39 = *(_List_node_base **)p_Var40;
                  if (p_Var39 == p_Var40) {
                    p_Var27 = p_Var40;
                    goto LAB_002536c3;
                  }
                  if ((_List_node_base *)local_8b8 != (_List_node_base *)&local_8b8) {
                    p_Var27 = p_Var39;
                    p_Var49 = (_List_node_base *)local_8b8;
                    do {
                    /* try { // try from 0025364c to 0025365b has its CatchHandler @ 0025c602 */
                      (**(code **)(**(long **)(p_Var49 + 0x10) + 0x10))();
                      (**(code **)(**(long **)(p_Var27 + 0x10) + 0x10))();
                      if (extraout_RDX_28 < extraout_RDX_29) {
                        p_Var95 = *(_List_node_base **)p_Var49;
                        std::__detail::_List_node_base::_M_transfer(p_Var27,p_Var49);
                        p_Var49 = p_Var95;
                      }
                      else {
                        p_Var27 = *(_List_node_base **)p_Var27;
                      }
                    } while ((p_Var27 != p_Var40) && (p_Var49 != (_List_node_base *)&local_8b8));
                    if (p_Var49 != (_List_node_base *)&local_8b8) {
                      std::__detail::_List_node_base::_M_transfer(p_Var40,p_Var49);
                    }
                  }
                  std::__detail::_List_node_base::swap((_List_node_base *)&local_8b8,p_Var40);
                  p_Var27 = p_Var40 + 0x10;
                } while (p_Var40 + 0x10 != p_Var72);
                p_Var27 = p_Var72;
LAB_002536c3:
                bVar98 = p_Var39 != p_Var40;
              }
              std::__detail::_List_node_base::swap((_List_node_base *)&local_8b8,p_Var27);
              p_Var27 = p_Var72 + (ulong)bVar98 * 0x10;
            } while (local_960 != (_List_node_base *)&local_960);
            if ((_List_node_base *)auStack_828 != p_Var27) {
              p_Var39 = (_List_node_base *)auStack_828;
              do {
                p_Var40 = p_Var39 + -0x10;
                p_Var49 = *(_List_node_base **)p_Var39;
                p_Var95 = *(_List_node_base **)(p_Var39 + -0x10);
                while( true ) {
                  bVar99 = p_Var95 != p_Var40;
                  p_Var73 = p_Var95;
                  if (p_Var49 == p_Var39) break;
                  while( true ) {
                    p_Var95 = p_Var73;
                    if (p_Var73 == p_Var40) goto LAB_002538b6;
                    /* try { // try from 0025387b to 0025388a has its CatchHandler @ 0025c276 */
                    (**(code **)(**(long **)(p_Var73 + 0x10) + 0x10))();
                    (**(code **)(**(long **)(p_Var49 + 0x10) + 0x10))();
                    if (extraout_RDX_33 <= extraout_RDX_32) break;
                    p_Var95 = *(_List_node_base **)p_Var73;
                    std::__detail::_List_node_base::_M_transfer(p_Var49,p_Var73);
                    bVar99 = p_Var95 != p_Var40;
                    p_Var73 = p_Var95;
                    if (p_Var49 == p_Var39) goto LAB_002538b6;
                  }
                  p_Var49 = *(_List_node_base **)p_Var49;
                }
LAB_002538b6:
                if (bVar99) {
                  std::__detail::_List_node_base::_M_transfer(p_Var39,p_Var95);
                }
                p_Var39 = p_Var39 + 0x10;
              } while (p_Var39 != p_Var27);
            }
            p_Var27 = p_Var72 + -0x10;
            if (bVar98 != false) {
              p_Var27 = p_Var72;
            }
            std::__detail::_List_node_base::swap(p_Var27,(_List_node_base *)&local_960);
            if ((long)local_948 < (long)p_Stack_940) goto LAB_00253910;
          }
          do {
            p_Stack_940 = (_List_node_base *)0x7fffffffffffffff;
            if (local_960 != (_List_node_base *)&local_960) {
              plVar90 = *(long **)(local_960 + 0x10);
              p_Var27 = local_960;
              while( true ) {
                (**(code **)(*plVar90 + 0x20))(plVar90);
                cVar23 = (**(code **)(*plVar90 + 0x18))();
                if (cVar23 == '\0') break;
                p_Var72 = (_List_node_base *)(**(code **)(*plVar90 + 0x10))(plVar90);
                if ((long)local_948 < (long)p_Var72) {
                  local_948 = p_Var72;
                }
                do {
                  (**(code **)(*plVar90 + 0x10))(plVar90);
                  if ((long)extraout_RDX_31 < (long)p_Stack_940) {
                    p_Stack_940 = extraout_RDX_31;
                  }
                  p_Var27 = *(_List_node_base **)p_Var27;
                  if (p_Var27 == (_List_node_base *)&local_960) goto LAB_002537d0;
                  plVar90 = *(long **)(p_Var27 + 0x10);
                } while ((p_Var27 != local_960) &&
                        ((**(code **)(*plVar90 + 0x10))(plVar90), (long)local_948 < extraout_RDX_30
                    /* try { // try from 00253733 to 00253785 has its CatchHandler @ 0025c23f */));
              }
              break;
            }
LAB_002537d0:
                    /* try { // try from 002537d0 to 002537dc has its CatchHandler @ 0025bea0 */
            std::__cxx11::
            list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>::
            sort<juce::detail::IntersectingRangedValues<juce::Font_const,juce::detail::LineMetrics_const,juce::detail::JustifiedText::DrawType_const,float_const,signed_char>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
                      ((_List_node_base *)&local_960);
          } while ((long)p_Stack_940 <= (long)local_948);
LAB_00253910:
          _local_c08 = ZEXT816(0);
          bVar58 = 1;
          p_Var27 = (_List_node_base *)0x0;
          p_Var72 = (_List_node_base *)0x7fffffffffffffff;
LAB_00253933:
          local_1e8 = (_List_node_base *)&PTR__RangedIterator_00712250;
          p_Stack_1c0 = local_a50;
          pppppppuStack_1b8 = pppppppuStack_a48;
          p_Stack_1d0 = local_a60;
          local_1c8 = p_Stack_a58;
          p_Stack_1e0 = p_Stack_a70;
          local_1d8 = p_Stack_a68;
          local_1b0 = &PTR__RangedIterator_00712200;
          local_188 = local_a18;
          p_Stack_180 = p_Stack_a10;
          local_198 = local_a28;
          p_Stack_190 = p_Stack_a20;
          local_1a8 = local_a38;
          p_Stack_1a0 = p_Stack_a30;
          local_178 = &PTR__RangedIterator_007121b0;
          local_150 = local_9e0;
          uStack_148 = uStack_9d8;
          local_160 = local_9f0;
          p_Stack_158 = p_Stack_9e8;
          local_170 = local_a00;
          p_Stack_168 = p_Stack_9f8;
          local_140 = &PTR__RangedIterator_00712160;
          local_118 = local_9a8;
          p_Stack_110 = p_Stack_9a0;
          local_128 = local_9b8;
          lStack_120 = lStack_9b0;
          local_138 = local_9c8;
          lStack_130 = lStack_9c0;
          local_108 = &PTR__RangedIterator_00712100;
          local_e0 = local_970;
          p_Stack_d8 = p_Stack_968;
          local_f0 = local_980;
          lStack_e8 = lStack_978;
          local_100 = local_990;
          lStack_f8 = lStack_988;
          local_d0 = (long *******)&local_d0;
          p_Stack_c0 = (_List_node_base *)0x0;
          p_Var39 = local_960;
          local_c8 = (_List_node_base *)local_d0;
          if (local_960 == (_List_node_base *)&local_960) {
            local_b8 = local_948;
            p_Stack_b0 = p_Stack_940;
          }
          else {
            do {
                    /* try { // try from 00253a70 to 00253a79 has its CatchHandler @ 0025c4f5 */
              p_Var40 = operator_new(0x18);
              *(long *)(p_Var40 + 0x10) = *(long *)(p_Var39 + 0x10);
              std::__detail::_List_node_base::_M_hook(p_Var40);
              p_Stack_c0 = (_List_node_base *)((long)p_Stack_c0 + 1);
              p_Var39 = *(_List_node_base **)p_Var39;
            } while (p_Var39 != (_List_node_base *)&local_960);
            local_b8 = local_948;
            p_Stack_b0 = p_Stack_940;
            ppppppplVar63 = local_d0;
            if ((long ********)local_d0 != &local_d0) {
              do {
                    /* try { // try from 00253af7 to 00253af9 has its CatchHandler @ 0025c3f8 */
                cVar23 = (*(code *)(*ppppppplVar63[2])[3])();
                if (cVar23 == '\0') goto joined_r0x00253b63;
                ppppppplVar63 = (long *******)*ppppppplVar63;
              } while ((long ********)ppppppplVar63 != &local_d0);
              ppppppplVar63 = (long *******)&local_d0;
joined_r0x00253b63:
              ppppppplVar82 = local_d0;
              if ((long ********)local_d0 != &local_d0) {
                do {
                  ppppppplVar76 = (long *******)*ppppppplVar82;
                  operator_delete(ppppppplVar82);
                  ppppppplVar82 = ppppppplVar76;
                } while ((long ********)ppppppplVar76 != &local_d0);
              }
              if ((long ********)ppppppplVar63 != &local_d0) goto LAB_00255f50;
            }
          }
          _local_ab8 = (ulong)local_948;
          local_af0 = p_Stack_940;
          if ((long)p_Stack_940 <= (long)local_948) {
            local_af0 = local_948;
          }
          lVar69 = local_9b8 - lStack_9c0 >> 4;
          local_b18 = (_List_node_base *)((long)local_9f0 - (long)p_Stack_9f8 >> 4);
          local_ad0 = *(_List_node_base **)(local_9c8 + lVar69 * 0x28);
          if ((bool)(bVar58 | p_Var72 != local_ad0)) {
            uStack_c00 = 0;
            _local_c08 = *(ulong *)(local_9c8 + 8 + lVar69 * 0x28);
          }
          lVar89 = (long)local_a28 - (long)p_Stack_a30;
          local_ae8._0_8_ = (local_980 - lStack_988 >> 1) + local_990;
          local_b58._0_8_ = local_a38;
          local_400 = (ulong)local_a00;
          iVar25 = *(int *)((long)local_a00 + (long)local_b18 * 4);
          if ((local_948 != p_Var27) && (iVar25 != 1)) {
            local_b68 = (_List_node_base *)0x0;
            p_Stack_b60 = (_List_node_base *)0x0;
            local_b78 = (_List_node_base *)0x0;
            p_Stack_b70 = (_List_node_base *)0x0;
            local_b88 = (_List_node_base *)0x0;
            p_Stack_b80 = (_List_node_base *)0x0;
            local_378 = (_List_node_base *)0x0;
            p_Stack_370 = (_List_node_base *)0x0;
            local_368 = (_List_node_base *)0x0;
            p_Var72 = *(_List_node_base **)
                       (*(long *)(*(long *)(lVar33 + 0x148) + 0x20) +
                       *(long *)(local_9c8 + lVar69 * 0x28) * 0x10);
            if ((long)p_Var27 < (long)p_Var72) {
              p_Var27 = p_Var72;
            }
            local_840 = p_Var27;
            if ((long)p_Var27 < (long)local_948) {
                    /* try { // try from 00253d25 to 00254021 has its CatchHandler @ 0025c22a */
              local_840 = local_948;
              detail::Ranges::erase((Ranges *)&local_b88,(ulong)p_Var27,(ulong)local_948,&local_378)
              ;
              p_Var39 = p_Stack_370;
              p_Var72 = local_378;
              p_Var40 = local_b88;
              if (0 < (long)p_Stack_b80 - (long)local_b88) {
                uVar54 = (ulong)((long)p_Stack_b80 - (long)local_b88) >> 4;
                do {
                  uVar78 = uVar54 >> 1;
                  lVar69 = uVar78 * 0x10;
                  if (*(long *)(p_Var40 + lVar69) < (long)p_Var27) {
                    uVar78 = ~uVar78 + uVar54;
                    p_Var40 = p_Var40 + lVar69 + 0x10;
                  }
                  uVar54 = uVar78;
                } while (0 < (long)uVar78);
              }
              lVar69 = (long)p_Var40 - (long)local_b88 >> 4;
              if (p_Stack_370 == local_368) {
                lVar37 = (long)p_Stack_370 - (long)local_378;
                if (lVar37 == 0x7fffffffffffffe0) {
                    /* try { // try from 0025bda5 to 0025bdc8 has its CatchHandler @ 0025c2d1 */
                    /* WARNING: Subroutine does not return */
                  std::__throw_length_error("vector::_M_realloc_insert");
                }
                uVar78 = (lVar37 >> 4) * -0x5555555555555555;
                uVar54 = uVar78;
                if (lVar37 == 0) {
                  uVar54 = 1;
                }
                uVar50 = uVar54 + uVar78;
                if (0x2aaaaaaaaaaaaaa < uVar50) {
                  uVar50 = 0x2aaaaaaaaaaaaaa;
                }
                if (CARRY8(uVar54,uVar78)) {
                  uVar50 = 0x2aaaaaaaaaaaaaa;
                }
                p_Var95 = operator_new(uVar50 * 0x30);
                lVar37 = (lVar37 >> 4) * 0x10;
                *(long *)(p_Var95 + lVar37) = lVar69;
                p_Var95[lVar37 + 0x28] = (_List_node_base)0x0;
                p_Var49 = p_Var95;
                if (p_Var72 != p_Var39) {
                  p_Var73 = p_Var72;
                  do {
                    uVar8 = *(undefined8 *)p_Var73;
                    uVar10 = *(undefined8 *)(p_Var73 + 8);
                    uVar44 = *(undefined8 *)(p_Var73 + 0x10);
                    uVar5 = *(undefined8 *)(p_Var73 + 0x18);
                    uVar100 = *(undefined4 *)(p_Var73 + 0x24);
                    uVar103 = *(undefined4 *)(p_Var73 + 0x28);
                    uVar108 = *(undefined4 *)(p_Var73 + 0x2c);
                    *(undefined4 *)(p_Var49 + 0x20) = *(undefined4 *)(p_Var73 + 0x20);
                    *(undefined4 *)(p_Var49 + 0x24) = uVar100;
                    *(undefined4 *)(p_Var49 + 0x28) = uVar103;
                    *(undefined4 *)(p_Var49 + 0x2c) = uVar108;
                    *(undefined8 *)(p_Var49 + 0x10) = uVar44;
                    *(undefined8 *)(p_Var49 + 0x18) = uVar5;
                    *(undefined8 *)p_Var49 = uVar8;
                    *(undefined8 *)(p_Var49 + 8) = uVar10;
                    p_Var73 = p_Var73 + 0x30;
                    p_Var49 = p_Var49 + 0x30;
                  } while (p_Var73 != p_Var39);
                }
                if (p_Var72 != (_List_node_base *)0x0) {
                  operator_delete(p_Var72);
                }
                local_368 = p_Var95 + uVar50 * 0x30;
                local_378 = p_Var95;
              }
              else {
                *(long *)p_Stack_370 = lVar69;
                p_Stack_370[0x28] = (_List_node_base)0x0;
                p_Var49 = p_Stack_370;
              }
              p_Var39 = p_Stack_b80;
              p_Var72 = local_b88;
              p_Stack_370 = p_Var49 + 0x30;
              lVar37 = (long)p_Var40 - (long)local_b88;
              lVar69 = lVar37 >> 4;
              if (p_Stack_b80 != local_b78) {
                p_Var72 = local_378;
                if (p_Stack_b80 == p_Var40) {
                  *(_List_node_base **)p_Var40 = p_Var27;
                  *(_List_node_base **)(p_Var40 + 8) = local_840;
                  p_Stack_b80 = p_Stack_b80 + 0x10;
                  lVar69 = (long)p_Stack_370 - (long)local_378;
                }
                else {
                  lVar69 = lVar69 * 0x10;
                  p_Var39 = local_b88 + lVar69;
                  *(undefined8 *)p_Stack_b80 = *(undefined8 *)(p_Stack_b80 + -0x10);
                  *(undefined8 *)(p_Stack_b80 + 8) = *(undefined8 *)(p_Stack_b80 + -8);
                  p_Var40 = p_Stack_b80 + -0x10;
                  if (0 < (long)p_Var40 - (long)p_Var39) {
                    uVar54 = ((ulong)((long)p_Var40 - (long)p_Var39) >> 4) + 1;
                    do {
                      *(undefined8 *)p_Var40 = *(undefined8 *)(p_Var40 + -0x10);
                      *(undefined8 *)(p_Var40 + 8) = *(undefined8 *)(p_Var40 + -8);
                      p_Var40 = p_Var40 + -0x10;
                      uVar54 = uVar54 - 1;
                    } while (1 < uVar54);
                  }
                  *p_Var39 = SUB81(p_Var27,0);
                  *(int *)(p_Var39 + 1) = (int)((ulong)p_Var27 >> 8);
                  p_Var39[7] = SUB81((ulong)p_Var27 >> 0x38,0);
                  *(short *)(p_Var39 + 5) = (short)((ulong)p_Var27 >> 0x28);
                  *(_List_node_base **)(local_b88 + lVar69 + 8) = local_840;
                  lVar69 = (long)p_Stack_370 - (long)local_378;
                  p_Stack_b80 = p_Stack_b80 + 0x10;
                }
                goto joined_r0x00253fb9;
              }
              lVar88 = (long)p_Stack_b80 - (long)local_b88;
              if (lVar88 == 0x7ffffffffffffff0) {
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              uVar78 = lVar88 >> 4;
              uVar54 = uVar78;
              if (lVar88 == 0) {
                uVar54 = 1;
              }
              uVar50 = uVar54 + uVar78;
              if (0x7ffffffffffffff < uVar50) {
                uVar50 = 0x7ffffffffffffff;
              }
              if (CARRY8(uVar54,uVar78)) {
                uVar50 = 0x7ffffffffffffff;
              }
              p_Var95 = operator_new(uVar50 * 0x10);
              lVar69 = lVar69 * 0x10;
              p_Var40 = p_Var72 + lVar69;
              *(_List_node_base **)(p_Var95 + lVar69) = p_Var27;
              *(_List_node_base **)(p_Var95 + lVar69 + 8) = local_840;
              p_Var49 = p_Var95;
              if (lVar37 != 0) {
                lVar37 = 0;
                do {
                  uVar44 = *(undefined8 *)(p_Var72 + lVar37 + 8);
                  *(undefined8 *)(p_Var95 + lVar37) = *(undefined8 *)(p_Var72 + lVar37);
                  *(undefined8 *)(p_Var95 + lVar37 + 8) = uVar44;
                  lVar37 = lVar37 + 0x10;
                } while (lVar69 != lVar37);
                p_Var49 = p_Var95 + lVar37;
              }
              for (; p_Var49 = p_Var49 + 0x10, p_Var39 != p_Var40; p_Var40 = p_Var40 + 0x10) {
                uVar44 = *(undefined8 *)(p_Var40 + 8);
                *(undefined8 *)p_Var49 = *(undefined8 *)p_Var40;
                *(undefined8 *)(p_Var49 + 8) = uVar44;
              }
              if (p_Var72 != (_List_node_base *)0x0) {
                operator_delete(p_Var72);
              }
              local_b78 = p_Var95 + uVar50 * 0x10;
              local_b88 = p_Var95;
              p_Stack_b80 = p_Var49;
            }
            lVar69 = (long)p_Stack_370 - (long)local_378;
            p_Var72 = local_378;
joined_r0x00253fb9:
            local_378 = p_Var72;
            if (lVar69 != 0) {
              p_Var39 = p_Var72 + lVar69;
              local_b38 = p_Var39;
              do {
                p_Var49 = local_b68;
                p_Var40 = p_Stack_b70;
                _Var24 = p_Var72[0x28];
                if (_Var24 == (_List_node_base)0x2) {
                  lVar69 = *(long *)p_Var72;
                  lVar37 = *(long *)(p_Var72 + 8);
                  if (lVar69 == lVar37) goto LAB_002540f0;
                  p_Var40 = p_Stack_b70 + lVar69;
                  p_Var26 = p_Stack_b70 + lVar37;
                  p_Var49 = local_b68 + -(long)p_Var26;
                  if ((p_Var49 != (_List_node_base *)0x0) && (0 < (long)p_Var49)) {
                    if (p_Var49 < (_List_node_base *)0x8) {
LAB_00254340:
                      p_Var73 = p_Var26;
                      p_Var95 = p_Var40;
LAB_00254346:
                      p_Var49 = p_Var49 + 1;
                      lVar69 = 0;
                      do {
                        p_Var95[lVar69] = p_Var73[lVar69];
                        p_Var49 = p_Var49 + -1;
                        lVar69 = lVar69 + 1;
                      } while ((_List_node_base *)0x1 < p_Var49);
                    }
                    else {
                      if (p_Var40 < local_b68 + ~(ulong)p_Stack_b70 + (long)p_Stack_b70 + 1) {
                        p_Var39 = local_b38;
                        if (p_Var26 < p_Stack_b70 + (long)(local_b68 + ~(ulong)p_Var26 + lVar69) + 1
                           ) goto LAB_00254340;
                      }
                      if (p_Var49 < (_List_node_base *)0x20) {
                        p_Var81 = (_List_node_base *)0x0;
LAB_00254c01:
                        p_Var73 = (_List_node_base *)
                                  ((ulong)(local_b68 +
                                          (-(long)(p_Stack_b70 + lVar37) -
                                          (ulong)(p_Stack_b70 + lVar37 != local_b68)) + 1) &
                                  0xfffffffffffffff8);
                        p_Var95 = p_Var40 + (long)p_Var73;
                        do {
                          *(undefined8 *)(p_Var40 + (long)p_Var81) =
                               *(undefined8 *)(p_Var26 + (long)p_Var81);
                          p_Var81 = p_Var81 + 8;
                        } while (p_Var73 != p_Var81);
                        if (local_b68 +
                            (-(long)(p_Stack_b70 + lVar37) -
                            (ulong)(p_Stack_b70 + lVar37 != local_b68)) + 1 != p_Var73) {
                          p_Var49 = p_Var49 + -(long)p_Var73;
                          p_Var73 = p_Var26 + (long)p_Var73;
                          goto LAB_00254346;
                        }
                      }
                      else {
                        p_Var81 = (_List_node_base *)((ulong)p_Var49 & 0xffffffffffffffe0);
                        uVar54 = ((ulong)(p_Var81 + -0x20) >> 5) + 1;
                        uVar78 = (ulong)((uint)uVar54 & 3);
                        if (p_Var81 + -0x20 < (_List_node_base *)0x60) {
                          lVar88 = 0;
                        }
                        else {
                          uVar54 = uVar54 & 0xffffffffffffffc;
                          lVar88 = 0;
                          do {
                            uVar44 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 8);
                            uVar5 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x10);
                            uVar8 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x10 + 8);
                            *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69) =
                                 *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37);
                            *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 8) = uVar44;
                            *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x10) = uVar5;
                            *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x10 + 8) = uVar8;
                            uVar44 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x20 + 8);
                            uVar5 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x30);
                            uVar8 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x30 + 8);
                            *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x20) =
                                 *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x20);
                            *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x20 + 8) = uVar44;
                            *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x30) = uVar5;
                            *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x30 + 8) = uVar8;
                            uVar44 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x40 + 8);
                            uVar5 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x50);
                            uVar8 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x50 + 8);
                            *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x40) =
                                 *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x40);
                            *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x40 + 8) = uVar44;
                            *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x50) = uVar5;
                            *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x50 + 8) = uVar8;
                            uVar8 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x60 + 8);
                            uVar44 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x70);
                            uVar5 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x70 + 8);
                            *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x60) =
                                 *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x60);
                            *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x60 + 8) = uVar8;
                            *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x70) = uVar44;
                            *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x70 + 8) = uVar5;
                            lVar88 = lVar88 + 0x80;
                            uVar54 = uVar54 - 4;
                          } while (uVar54 != 0);
                        }
                        p_Var67 = (_List_node_base *)0x0;
                        if (uVar78 != 0) {
                          p_Var39 = p_Stack_b70 + lVar88 + lVar37;
                          p_Var95 = p_Stack_b70 + lVar69 + lVar88;
                          p_Var67 = (_List_node_base *)(uVar78 * 0x20);
                          p_Var73 = (_List_node_base *)0x0;
                          do {
                            uVar8 = *(undefined8 *)(p_Var39 + (long)p_Var73 + 8);
                            uVar44 = *(undefined8 *)(p_Var39 + 0x10 + (long)p_Var73);
                            uVar5 = *(undefined8 *)(p_Var39 + 0x10 + (long)p_Var73 + 8);
                            *(undefined8 *)(p_Var95 + (long)p_Var73) =
                                 *(undefined8 *)(p_Var39 + (long)p_Var73);
                            *(undefined8 *)(p_Var95 + (long)p_Var73 + 8) = uVar8;
                            *(undefined8 *)(p_Var95 + 0x10 + (long)p_Var73) = uVar44;
                            *(undefined8 *)(p_Var95 + 0x10 + (long)p_Var73 + 8) = uVar5;
                            p_Var73 = p_Var73 + 0x20;
                          } while (p_Var67 != p_Var73);
                        }
                        p_Var39 = local_b38;
                        if (p_Var49 != p_Var81) {
                          if (((ulong)p_Var49 & 0x18) == 0) {
                            p_Var73 = p_Var26 + (long)p_Var81;
                            p_Var95 = p_Var40 + (long)p_Var81;
                            p_Var49 = (_List_node_base *)(ulong)((uint)p_Var49 & 0x1f);
                            goto LAB_00254346;
                          }
                          goto LAB_00254c01;
                        }
                      }
                    }
                    p_Var49 = local_b68 + -(long)p_Var26;
                  }
                  if (local_b68 != p_Var40 + (long)p_Var49) {
                    local_b68 = p_Var40 + (long)p_Var49;
                  }
                  goto LAB_002540f0;
                }
                if (_Var24 == (_List_node_base)0x1) {
                  uVar54 = *(ulong *)p_Var72;
                  p_Var95 = p_Stack_b70 + uVar54;
                  if (local_b68 != p_Stack_b60) {
                    if (local_b68 == p_Var95) {
                      local_b68 = local_b68 + 1;
                    }
                    else {
                      _Var24 = *p_Var95;
                      p_Var26 = (_List_node_base *)CONCAT71((int7)((ulong)p_Var26 >> 8),_Var24);
                      *local_b68 = local_b68[-1];
                      p_Var40 = local_b68 + 1;
                      p_Var67 = local_b68 + -1;
                      p_Var49 = p_Var67 + -(long)p_Var95;
                      if (0 < (long)p_Var49) {
                        p_Var73 = p_Var67 + ~(ulong)p_Var95;
                        if (((ulong)p_Var49 & 7) != 0) {
                          uVar54 = 1;
                          p_Var39 = p_Var67;
                          do {
                            local_b68 = p_Var39;
                            *local_b68 = local_b68[-1];
                            uVar78 = uVar54 + 1;
                            bVar98 = uVar54 != ((ulong)p_Var49 & 7);
                            uVar54 = uVar78;
                            p_Var39 = local_b68 + -1;
                          } while (bVar98);
                          p_Var49 = p_Var67 + (-uVar78 - (long)p_Var95) + 1;
                          p_Var67 = local_b68 + -1;
                        }
                        p_Var39 = local_b38;
                        if ((_List_node_base *)0x6 < p_Var73) {
                          lVar69 = -1;
                          do {
                            local_b68[lVar69] = p_Var67[lVar69];
                            local_b68[lVar69 + -1] = p_Var67[lVar69 + -1];
                            local_b68[lVar69 + -2] = p_Var67[lVar69 + -2];
                            local_b68[lVar69 + -3] = p_Var67[lVar69 + -3];
                            local_b68[lVar69 + -4] = p_Var67[lVar69 + -4];
                            local_b68[lVar69 + -5] = p_Var67[lVar69 + -5];
                            local_b68[lVar69 + -6] = p_Var67[lVar69 + -6];
                            local_b68[lVar69 + -7] = p_Var67[lVar69 + -7];
                            lVar37 = lVar69 + -8;
                            lVar69 = lVar69 + -8;
                          } while (p_Var49 + lVar37 < (_List_node_base *)0xfffffffffffffffe);
                        }
                      }
                      *p_Var95 = _Var24;
                      p_Var67 = p_Var72;
                      local_b68 = p_Var40;
                    }
                    goto LAB_002540f0;
                  }
                  uVar78 = (long)local_b68 - (long)p_Stack_b70;
                  if (uVar78 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__throw_length_error("vector::_M_realloc_insert");
                  }
                  uVar50 = uVar78;
                  if (uVar78 == 0) {
                    uVar50 = 1;
                  }
                  uVar74 = uVar50 + uVar78;
                  if ((long)uVar74 < 0) {
                    uVar74 = 0x7fffffffffffffff;
                  }
                  if (CARRY8(uVar50,uVar78)) {
                    uVar74 = 0x7fffffffffffffff;
                  }
                  if (uVar74 == 0) {
                    p_Var39 = (_List_node_base *)0x0;
                  }
                  else {
                    /* try { // try from 002543d6 to 00254437 has its CatchHandler @ 0025c237 */
                    p_Var39 = operator_new(uVar74);
                  }
                  p_Var39[uVar54] = *p_Var95;
                  if ((long)uVar54 < 1) {
                    p_Var73 = p_Var39 + uVar54;
                  }
                  else {
                    p_Var73 = p_Var39;
                    p_Var81 = p_Var40;
                    if (0x1f < uVar54) {
                      uVar50 = uVar54 & 0xffffffffffffffe0;
                      uVar57 = (uVar50 - 0x20 >> 5) + 1;
                      uVar78 = (ulong)((uint)uVar57 & 3);
                      if (uVar50 - 0x20 < 0x60) {
                        lVar69 = 0;
                      }
                      else {
                        uVar57 = uVar57 & 0xffffffffffffffc;
                        lVar69 = 0;
                        do {
                          uVar44 = *(undefined8 *)(p_Var40 + lVar69 + 8);
                          uVar5 = *(undefined8 *)(p_Var40 + lVar69 + 0x10);
                          uVar8 = *(undefined8 *)(p_Var40 + lVar69 + 0x10 + 8);
                          *(undefined8 *)(p_Var39 + lVar69) = *(undefined8 *)(p_Var40 + lVar69);
                          *(undefined8 *)(p_Var39 + lVar69 + 8) = uVar44;
                          *(undefined8 *)(p_Var39 + lVar69 + 0x10) = uVar5;
                          *(undefined8 *)(p_Var39 + lVar69 + 0x10 + 8) = uVar8;
                          uVar44 = *(undefined8 *)(p_Var40 + lVar69 + 0x20 + 8);
                          uVar5 = *(undefined8 *)(p_Var40 + lVar69 + 0x30);
                          uVar8 = *(undefined8 *)(p_Var40 + lVar69 + 0x30 + 8);
                          *(undefined8 *)(p_Var39 + lVar69 + 0x20) =
                               *(undefined8 *)(p_Var40 + lVar69 + 0x20);
                          *(undefined8 *)(p_Var39 + lVar69 + 0x20 + 8) = uVar44;
                          *(undefined8 *)(p_Var39 + lVar69 + 0x30) = uVar5;
                          *(undefined8 *)(p_Var39 + lVar69 + 0x30 + 8) = uVar8;
                          uVar44 = *(undefined8 *)(p_Var40 + lVar69 + 0x40 + 8);
                          uVar5 = *(undefined8 *)(p_Var40 + lVar69 + 0x50);
                          uVar8 = *(undefined8 *)(p_Var40 + lVar69 + 0x50 + 8);
                          *(undefined8 *)(p_Var39 + lVar69 + 0x40) =
                               *(undefined8 *)(p_Var40 + lVar69 + 0x40);
                          *(undefined8 *)(p_Var39 + lVar69 + 0x40 + 8) = uVar44;
                          *(undefined8 *)(p_Var39 + lVar69 + 0x50) = uVar5;
                          *(undefined8 *)(p_Var39 + lVar69 + 0x50 + 8) = uVar8;
                          uVar8 = *(undefined8 *)(p_Var40 + lVar69 + 0x60 + 8);
                          uVar44 = *(undefined8 *)(p_Var40 + lVar69 + 0x70);
                          uVar5 = *(undefined8 *)(p_Var40 + lVar69 + 0x70 + 8);
                          *(undefined8 *)(p_Var39 + lVar69 + 0x60) =
                               *(undefined8 *)(p_Var40 + lVar69 + 0x60);
                          *(undefined8 *)(p_Var39 + lVar69 + 0x60 + 8) = uVar8;
                          *(undefined8 *)(p_Var39 + lVar69 + 0x70) = uVar44;
                          *(undefined8 *)(p_Var39 + lVar69 + 0x70 + 8) = uVar5;
                          lVar69 = lVar69 + 0x80;
                          uVar57 = uVar57 - 4;
                        } while (uVar57 != 0);
                      }
                      if (uVar78 != 0) {
                        lVar37 = 0;
                        do {
                          uVar8 = *(undefined8 *)(p_Var40 + lVar37 + lVar69 + 8);
                          uVar44 = *(undefined8 *)(p_Var40 + lVar37 + lVar69 + 0x10);
                          uVar5 = *(undefined8 *)(p_Var40 + lVar37 + lVar69 + 0x10 + 8);
                          *(undefined8 *)(p_Var39 + lVar37 + lVar69) =
                               *(undefined8 *)(p_Var40 + lVar37 + lVar69);
                          *(undefined8 *)(p_Var39 + lVar37 + lVar69 + 8) = uVar8;
                          *(undefined8 *)(p_Var39 + lVar37 + lVar69 + 0x10) = uVar44;
                          *(undefined8 *)(p_Var39 + lVar37 + lVar69 + 0x10 + 8) = uVar5;
                          lVar37 = lVar37 + 0x20;
                        } while (uVar78 * 0x20 != lVar37);
                      }
                      p_Var73 = p_Var39 + uVar50;
                      if (uVar54 == uVar50) goto LAB_00254702;
                      p_Var81 = p_Var40 + uVar50;
                    }
                    do {
                      *p_Var73 = *p_Var81;
                      p_Var81 = p_Var81 + 1;
                      p_Var73 = p_Var73 + 1;
                    } while (p_Var81 != p_Var95);
                  }
LAB_00254702:
                  p_Var81 = p_Var73 + 1;
                  if ((long)p_Var49 - (long)p_Var95 < 1) {
                    p_Var81 = p_Var81 + ((long)p_Var49 - (long)p_Var95);
                  }
                  else if (p_Var49 != p_Var95) {
                    p_Var67 = p_Var49 + (-uVar54 - (long)p_Var40);
                    if ((_List_node_base *)0x1f < p_Var67) {
                      p_Var26 = (_List_node_base *)((ulong)p_Var67 & 0xffffffffffffffe0);
                      uVar50 = ((ulong)(p_Var26 + -0x20) >> 5) + 1;
                      uVar78 = (ulong)((uint)uVar50 & 3);
                      if (p_Var26 + -0x20 < (_List_node_base *)0x60) {
                        lVar69 = 0;
                      }
                      else {
                        uVar50 = uVar50 & 0xffffffffffffffc;
                        lVar69 = 0;
                        do {
                          uVar44 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 8);
                          uVar5 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x10);
                          uVar8 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x10 + 8);
                          *(undefined8 *)(p_Var73 + lVar69 + 1) =
                               *(undefined8 *)(p_Var40 + lVar69 + uVar54);
                          *(undefined8 *)(p_Var73 + lVar69 + 1 + 8) = uVar44;
                          *(undefined8 *)(p_Var73 + lVar69 + 0x11) = uVar5;
                          *(undefined8 *)(p_Var73 + lVar69 + 0x11 + 8) = uVar8;
                          uVar44 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x20 + 8);
                          uVar5 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x30);
                          uVar8 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x30 + 8);
                          *(undefined8 *)(p_Var73 + lVar69 + 0x21) =
                               *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x20);
                          *(undefined8 *)(p_Var73 + lVar69 + 0x21 + 8) = uVar44;
                          *(undefined8 *)(p_Var73 + lVar69 + 0x31) = uVar5;
                          *(undefined8 *)(p_Var73 + lVar69 + 0x31 + 8) = uVar8;
                          uVar44 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x40 + 8);
                          uVar5 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x50);
                          uVar8 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x50 + 8);
                          *(undefined8 *)(p_Var73 + lVar69 + 0x41) =
                               *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x40);
                          *(undefined8 *)(p_Var73 + lVar69 + 0x41 + 8) = uVar44;
                          *(undefined8 *)(p_Var73 + lVar69 + 0x51) = uVar5;
                          *(undefined8 *)(p_Var73 + lVar69 + 0x51 + 8) = uVar8;
                          uVar8 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x60 + 8);
                          uVar44 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x70);
                          uVar5 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x70 + 8);
                          *(undefined8 *)(p_Var73 + lVar69 + 0x61) =
                               *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x60);
                          *(undefined8 *)(p_Var73 + lVar69 + 0x61 + 8) = uVar8;
                          *(undefined8 *)(p_Var73 + lVar69 + 0x71) = uVar44;
                          *(undefined8 *)(p_Var73 + lVar69 + 0x71 + 8) = uVar5;
                          lVar69 = lVar69 + 0x80;
                          uVar50 = uVar50 - 4;
                        } while (uVar50 != 0);
                      }
                      if (uVar78 != 0) {
                        lVar37 = 0;
                        do {
                          uVar8 = *(undefined8 *)(p_Var40 + lVar37 + uVar54 + lVar69 + 8);
                          uVar44 = *(undefined8 *)(p_Var40 + lVar37 + uVar54 + lVar69 + 0x10);
                          uVar5 = *(undefined8 *)(p_Var40 + lVar37 + uVar54 + lVar69 + 0x10 + 8);
                          *(undefined8 *)(p_Var73 + lVar37 + lVar69 + 1) =
                               *(undefined8 *)(p_Var40 + lVar37 + uVar54 + lVar69);
                          *(undefined8 *)(p_Var73 + lVar37 + lVar69 + 1 + 8) = uVar8;
                          *(undefined8 *)(p_Var73 + lVar37 + lVar69 + 0x11) = uVar44;
                          *(undefined8 *)(p_Var73 + lVar37 + lVar69 + 0x11 + 8) = uVar5;
                          lVar37 = lVar37 + 0x20;
                        } while (uVar78 * 0x20 != lVar37);
                      }
                      p_Var81 = p_Var81 + (long)p_Var26;
                      if (p_Var67 == p_Var26) goto LAB_002549a4;
                      p_Var95 = p_Var95 + (long)p_Var26;
                    }
                    do {
                      *p_Var81 = *p_Var95;
                      p_Var95 = p_Var95 + 1;
                      p_Var81 = p_Var81 + 1;
                    } while (p_Var95 != p_Var49);
                  }
LAB_002549a4:
                  local_8c0 = uVar74;
                  if (p_Var40 != (_List_node_base *)0x0) {
                    operator_delete(p_Var40);
                  }
                  uVar54 = local_8c0;
                  p_Stack_b70 = p_Var39;
                  local_b68 = p_Var81;
LAB_00254ae6:
                  p_Stack_b60 = p_Stack_b70 + uVar54;
                  p_Var39 = local_b38;
                }
                else if (_Var24 == (_List_node_base)0x0) {
                  puVar4 = *(undefined1 **)p_Var72;
                  p_Var95 = p_Stack_b70 + (long)puVar4;
                  if (local_b68 == p_Stack_b60) {
                    uVar78 = (long)local_b68 - (long)p_Stack_b70;
                    if (uVar78 == 0x7fffffffffffffff) {
                    /* try { // try from 0025bd25 to 0025bd3c has its CatchHandler @ 0025c2d1 */
                    /* WARNING: Subroutine does not return */
                      std::__throw_length_error("vector::_M_realloc_insert");
                    }
                    uVar50 = uVar78;
                    if (uVar78 == 0) {
                      uVar50 = 1;
                    }
                    uVar54 = uVar50 + uVar78;
                    if ((long)uVar54 < 0) {
                      uVar54 = 0x7fffffffffffffff;
                    }
                    if (CARRY8(uVar50,uVar78)) {
                      uVar54 = 0x7fffffffffffffff;
                    }
                    if (uVar54 == 0) {
                      p_Var39 = (_List_node_base *)0x0;
                      *puVar4 = 1;
                      if (0 < (long)puVar4) goto LAB_0025444a;
LAB_0025450f:
                      p_Var73 = (_List_node_base *)(puVar4 + (long)p_Var39);
                    }
                    else {
                      p_Var39 = operator_new(uVar54);
                      p_Var39[(long)puVar4] = (_List_node_base)0x1;
                      if ((long)puVar4 < 1) goto LAB_0025450f;
LAB_0025444a:
                      p_Var73 = p_Var39;
                      p_Var81 = p_Var40;
                      if (puVar4 < (undefined1 *)0x20) {
LAB_00254830:
                        do {
                          *p_Var73 = *p_Var81;
                          p_Var81 = p_Var81 + 1;
                          p_Var73 = p_Var73 + 1;
                        } while (p_Var81 != p_Var95);
                      }
                      else {
                        puVar48 = (undefined1 *)((ulong)puVar4 & 0xffffffffffffffe0);
                        uVar50 = ((ulong)(puVar48 + -0x20) >> 5) + 1;
                        uVar78 = (ulong)((uint)uVar50 & 3);
                        if (puVar48 + -0x20 < (undefined1 *)0x60) {
                          lVar69 = 0;
                        }
                        else {
                          uVar50 = uVar50 & 0xffffffffffffffc;
                          lVar69 = 0;
                          do {
                            uVar44 = *(undefined8 *)(p_Var40 + lVar69 + 8);
                            uVar5 = *(undefined8 *)(p_Var40 + lVar69 + 0x10);
                            uVar8 = *(undefined8 *)(p_Var40 + lVar69 + 0x10 + 8);
                            *(undefined8 *)(p_Var39 + lVar69) = *(undefined8 *)(p_Var40 + lVar69);
                            *(undefined8 *)(p_Var39 + lVar69 + 8) = uVar44;
                            *(undefined8 *)(p_Var39 + lVar69 + 0x10) = uVar5;
                            *(undefined8 *)(p_Var39 + lVar69 + 0x10 + 8) = uVar8;
                            uVar44 = *(undefined8 *)(p_Var40 + lVar69 + 0x20 + 8);
                            uVar5 = *(undefined8 *)(p_Var40 + lVar69 + 0x30);
                            uVar8 = *(undefined8 *)(p_Var40 + lVar69 + 0x30 + 8);
                            *(undefined8 *)(p_Var39 + lVar69 + 0x20) =
                                 *(undefined8 *)(p_Var40 + lVar69 + 0x20);
                            *(undefined8 *)(p_Var39 + lVar69 + 0x20 + 8) = uVar44;
                            *(undefined8 *)(p_Var39 + lVar69 + 0x30) = uVar5;
                            *(undefined8 *)(p_Var39 + lVar69 + 0x30 + 8) = uVar8;
                            uVar44 = *(undefined8 *)(p_Var40 + lVar69 + 0x40 + 8);
                            uVar5 = *(undefined8 *)(p_Var40 + lVar69 + 0x50);
                            uVar8 = *(undefined8 *)(p_Var40 + lVar69 + 0x50 + 8);
                            *(undefined8 *)(p_Var39 + lVar69 + 0x40) =
                                 *(undefined8 *)(p_Var40 + lVar69 + 0x40);
                            *(undefined8 *)(p_Var39 + lVar69 + 0x40 + 8) = uVar44;
                            *(undefined8 *)(p_Var39 + lVar69 + 0x50) = uVar5;
                            *(undefined8 *)(p_Var39 + lVar69 + 0x50 + 8) = uVar8;
                            uVar8 = *(undefined8 *)(p_Var40 + lVar69 + 0x60 + 8);
                            uVar44 = *(undefined8 *)(p_Var40 + lVar69 + 0x70);
                            uVar5 = *(undefined8 *)(p_Var40 + lVar69 + 0x70 + 8);
                            *(undefined8 *)(p_Var39 + lVar69 + 0x60) =
                                 *(undefined8 *)(p_Var40 + lVar69 + 0x60);
                            *(undefined8 *)(p_Var39 + lVar69 + 0x60 + 8) = uVar8;
                            *(undefined8 *)(p_Var39 + lVar69 + 0x70) = uVar44;
                            *(undefined8 *)(p_Var39 + lVar69 + 0x70 + 8) = uVar5;
                            lVar69 = lVar69 + 0x80;
                            uVar50 = uVar50 - 4;
                          } while (uVar50 != 0);
                        }
                        if (uVar78 != 0) {
                          lVar37 = 0;
                          do {
                            uVar8 = *(undefined8 *)(p_Var40 + lVar37 + lVar69 + 8);
                            uVar44 = *(undefined8 *)(p_Var40 + lVar37 + lVar69 + 0x10);
                            uVar5 = *(undefined8 *)(p_Var40 + lVar37 + lVar69 + 0x10 + 8);
                            *(undefined8 *)(p_Var39 + lVar37 + lVar69) =
                                 *(undefined8 *)(p_Var40 + lVar37 + lVar69);
                            *(undefined8 *)(p_Var39 + lVar37 + lVar69 + 8) = uVar8;
                            *(undefined8 *)(p_Var39 + lVar37 + lVar69 + 0x10) = uVar44;
                            *(undefined8 *)(p_Var39 + lVar37 + lVar69 + 0x10 + 8) = uVar5;
                            lVar37 = lVar37 + 0x20;
                          } while (uVar78 * 0x20 != lVar37);
                        }
                        p_Var73 = (_List_node_base *)(puVar48 + (long)p_Var39);
                        if (puVar4 != puVar48) {
                          p_Var81 = (_List_node_base *)(puVar48 + (long)p_Var40);
                          goto LAB_00254830;
                        }
                      }
                    }
                    p_Var81 = p_Var73 + 1;
                    if ((long)p_Var49 - (long)p_Var95 < 1) {
                      p_Var81 = p_Var81 + ((long)p_Var49 - (long)p_Var95);
                    }
                    else if (p_Var49 != p_Var95) {
                      p_Var67 = p_Var49 + (-(long)puVar4 - (long)p_Var40);
                      if ((_List_node_base *)0x1f < p_Var67) {
                        p_Var26 = (_List_node_base *)((ulong)p_Var67 & 0xffffffffffffffe0);
                        uVar50 = ((ulong)(p_Var26 + -0x20) >> 5) + 1;
                        uVar78 = (ulong)((uint)uVar50 & 3);
                        if (p_Var26 + -0x20 < (_List_node_base *)0x60) {
                          lVar69 = 0;
                        }
                        else {
                          uVar50 = uVar50 & 0xffffffffffffffc;
                          p_Var79 = p_Var40 + (long)puVar4;
                          lVar69 = 0;
                          do {
                            uVar44 = *(undefined8 *)(p_Var79 + lVar69 + 8);
                            uVar5 = *(undefined8 *)(p_Var79 + lVar69 + 0x10);
                            uVar8 = *(undefined8 *)(p_Var79 + lVar69 + 0x10 + 8);
                            *(undefined8 *)(p_Var73 + lVar69 + 1) =
                                 *(undefined8 *)(p_Var79 + lVar69);
                            *(undefined8 *)(p_Var73 + lVar69 + 1 + 8) = uVar44;
                            *(undefined8 *)(p_Var73 + lVar69 + 0x11) = uVar5;
                            *(undefined8 *)(p_Var73 + lVar69 + 0x11 + 8) = uVar8;
                            uVar44 = *(undefined8 *)(p_Var79 + lVar69 + 0x20 + 8);
                            uVar5 = *(undefined8 *)(p_Var79 + lVar69 + 0x30);
                            uVar8 = *(undefined8 *)(p_Var79 + lVar69 + 0x30 + 8);
                            *(undefined8 *)(p_Var73 + lVar69 + 0x21) =
                                 *(undefined8 *)(p_Var79 + lVar69 + 0x20);
                            *(undefined8 *)(p_Var73 + lVar69 + 0x21 + 8) = uVar44;
                            *(undefined8 *)(p_Var73 + lVar69 + 0x31) = uVar5;
                            *(undefined8 *)(p_Var73 + lVar69 + 0x31 + 8) = uVar8;
                            uVar44 = *(undefined8 *)(p_Var79 + lVar69 + 0x40 + 8);
                            uVar5 = *(undefined8 *)(p_Var79 + lVar69 + 0x50);
                            uVar8 = *(undefined8 *)(p_Var79 + lVar69 + 0x50 + 8);
                            *(undefined8 *)(p_Var73 + lVar69 + 0x41) =
                                 *(undefined8 *)(p_Var79 + lVar69 + 0x40);
                            *(undefined8 *)(p_Var73 + lVar69 + 0x41 + 8) = uVar44;
                            *(undefined8 *)(p_Var73 + lVar69 + 0x51) = uVar5;
                            *(undefined8 *)(p_Var73 + lVar69 + 0x51 + 8) = uVar8;
                            uVar8 = *(undefined8 *)(p_Var79 + lVar69 + 0x60 + 8);
                            uVar44 = *(undefined8 *)(p_Var79 + lVar69 + 0x70);
                            uVar5 = *(undefined8 *)(p_Var79 + lVar69 + 0x70 + 8);
                            *(undefined8 *)(p_Var73 + lVar69 + 0x61) =
                                 *(undefined8 *)(p_Var79 + lVar69 + 0x60);
                            *(undefined8 *)(p_Var73 + lVar69 + 0x61 + 8) = uVar8;
                            *(undefined8 *)(p_Var73 + lVar69 + 0x71) = uVar44;
                            *(undefined8 *)(p_Var73 + lVar69 + 0x71 + 8) = uVar5;
                            lVar69 = lVar69 + 0x80;
                            uVar50 = uVar50 - 4;
                          } while (uVar50 != 0);
                        }
                        if (uVar78 != 0) {
                          p_Var79 = p_Var40 + (long)(puVar4 + lVar69);
                          lVar37 = 0;
                          do {
                            uVar8 = *(undefined8 *)(p_Var79 + lVar37 + 8);
                            uVar44 = *(undefined8 *)(p_Var79 + lVar37 + 0x10);
                            uVar5 = *(undefined8 *)(p_Var79 + lVar37 + 0x10 + 8);
                            *(undefined8 *)(p_Var73 + lVar37 + lVar69 + 1) =
                                 *(undefined8 *)(p_Var79 + lVar37);
                            *(undefined8 *)(p_Var73 + lVar37 + lVar69 + 1 + 8) = uVar8;
                            *(undefined8 *)(p_Var73 + lVar37 + lVar69 + 0x11) = uVar44;
                            *(undefined8 *)(p_Var73 + lVar37 + lVar69 + 0x11 + 8) = uVar5;
                            lVar37 = lVar37 + 0x20;
                          } while (uVar78 * 0x20 != lVar37);
                        }
                        p_Var81 = p_Var81 + (long)p_Var26;
                        if (p_Var67 == p_Var26) goto LAB_00254ac4;
                        p_Var95 = p_Var95 + (long)p_Var26;
                      }
                      do {
                        *p_Var81 = *p_Var95;
                        p_Var95 = p_Var95 + 1;
                        p_Var81 = p_Var81 + 1;
                      } while (p_Var95 != p_Var49);
                    }
LAB_00254ac4:
                    if (p_Var40 != (_List_node_base *)0x0) {
                      operator_delete(p_Var40);
                    }
                    p_Stack_b70 = p_Var39;
                    local_b68 = p_Var81;
                    goto LAB_00254ae6;
                  }
                  if (local_b68 == p_Var95) {
                    *p_Var95 = (_List_node_base)0x1;
                    local_b68 = local_b68 + 1;
                  }
                  else {
                    *local_b68 = local_b68[-1];
                    p_Var40 = local_b68 + 1;
                    p_Var67 = local_b68 + -1;
                    p_Var39 = p_Var67 + -(long)p_Var95;
                    if (0 < (long)p_Var39) {
                      p_Var26 = p_Var67 + ~(ulong)p_Var95;
                      if (((ulong)p_Var39 & 7) != 0) {
                        uVar54 = 1;
                        p_Var49 = p_Var67;
                        do {
                          local_b68 = p_Var49;
                          *local_b68 = local_b68[-1];
                          uVar78 = uVar54 + 1;
                          bVar98 = uVar54 != ((ulong)p_Var39 & 7);
                          uVar54 = uVar78;
                          p_Var49 = local_b68 + -1;
                        } while (bVar98);
                        p_Var39 = p_Var67 + (-uVar78 - (long)p_Var95) + 1;
                        p_Var67 = local_b68 + -1;
                      }
                      if ((_List_node_base *)0x6 < p_Var26) {
                        lVar69 = -1;
                        do {
                          local_b68[lVar69] = p_Var67[lVar69];
                          local_b68[lVar69 + -1] = p_Var67[lVar69 + -1];
                          local_b68[lVar69 + -2] = p_Var67[lVar69 + -2];
                          local_b68[lVar69 + -3] = p_Var67[lVar69 + -3];
                          local_b68[lVar69 + -4] = p_Var67[lVar69 + -4];
                          local_b68[lVar69 + -5] = p_Var67[lVar69 + -5];
                          local_b68[lVar69 + -6] = p_Var67[lVar69 + -6];
                          local_b68[lVar69 + -7] = p_Var67[lVar69 + -7];
                          lVar37 = lVar69 + -8;
                          lVar69 = lVar69 + -8;
                        } while (p_Var39 + lVar37 < (_List_node_base *)0xfffffffffffffffe);
                      }
                    }
                    *p_Var95 = (_List_node_base)0x1;
                    p_Var39 = local_b38;
                    p_Var67 = p_Var72;
                    local_b68 = p_Var40;
                  }
                }
LAB_002540f0:
                p_Var72 = p_Var72 + 0x30;
              } while (p_Var72 != p_Var39);
            }
            p_Var72 = local_840;
            p_Var39 = local_b88;
            if (0 < (long)p_Stack_b80 - (long)local_b88) {
              uVar54 = (ulong)((long)p_Stack_b80 - (long)local_b88) >> 4;
              do {
                uVar78 = uVar54 >> 1;
                lVar69 = uVar78 * 0x10;
                if (*(long *)(p_Var39 + lVar69 + 8) <= (long)p_Var27) {
                  uVar78 = ~uVar78 + uVar54;
                  p_Var39 = p_Var39 + lVar69 + 0x10;
                }
                uVar54 = uVar78;
              } while (0 < (long)uVar78);
            }
            if ((((p_Var39 != p_Stack_b80) && (*(long *)p_Var39 <= (long)p_Var27)) &&
                ((long)p_Var39 - (long)local_b88 != 0)) &&
               (uVar54 = (long)p_Var39 - (long)local_b88 >> 4,
               p_Stack_b70[uVar54 - 1] == p_Stack_b70[uVar54])) {
              lVar69 = (long)p_Stack_370 - (long)local_378;
                    /* try { // try from 00254d59 to 00254d6d has its CatchHandler @ 0025c22a */
              detail::Ranges::mergeBack((Ranges *)&local_b88,uVar54,&local_378);
              if ((long)p_Stack_370 - (long)local_378 != 0) {
                lVar69 = lVar69 >> 4;
                uVar54 = ((long)p_Stack_370 - (long)local_378 >> 4) * -0x5555555555555555;
                bVar98 = uVar54 < (ulong)(lVar69 * -0x5555555555555555);
                lVar37 = uVar54 + lVar69 * 0x5555555555555555;
                if (!bVar98 && lVar37 != 0) {
                  if (bVar98) {
                    lVar37 = 0;
                  }
                  p_Var27 = local_378 + lVar69 * 0x10;
                  p_Var39 = p_Var27 + lVar37 * 0x30;
                  do {
                    p_Var49 = local_b68;
                    p_Var40 = p_Stack_b70;
                    if (p_Var27[0x28] == (_List_node_base)0x2) {
                      lVar69 = *(long *)p_Var27;
                      lVar37 = *(long *)(p_Var27 + 8);
                      if (lVar69 != lVar37) {
                        p_Var40 = p_Stack_b70 + lVar69;
                        p_Var26 = p_Stack_b70 + lVar37;
                        p_Var49 = local_b68 + -(long)p_Var26;
                        if ((p_Var49 != (_List_node_base *)0x0) && (0 < (long)p_Var49)) {
                          if ((p_Var49 < (_List_node_base *)0x8) ||
                             ((p_Var40 < local_b68 + ~(ulong)p_Stack_b70 + (long)p_Stack_b70 + 1 &&
                              (p_Var26 < p_Stack_b70 + (long)(local_b68 + ~(ulong)p_Var26 + lVar69)
                                         + 1)))) {
                            p_Var73 = p_Var26;
                            p_Var95 = p_Var40;
LAB_00254f41:
                            p_Var49 = p_Var49 + 1;
                            lVar69 = 0;
                            do {
                              p_Var95[lVar69] = p_Var73[lVar69];
                              p_Var49 = p_Var49 + -1;
                              lVar69 = lVar69 + 1;
                            } while ((_List_node_base *)0x1 < p_Var49);
                          }
                          else if (p_Var49 < (_List_node_base *)0x20) {
                            p_Var81 = (_List_node_base *)0x0;
LAB_00255431:
                            p_Var73 = (_List_node_base *)
                                      ((ulong)(local_b68 +
                                              (-(long)(p_Stack_b70 + lVar37) -
                                              (ulong)(p_Stack_b70 + lVar37 != local_b68)) + 1) &
                                      0xfffffffffffffff8);
                            p_Var95 = p_Var40 + (long)p_Var73;
                            do {
                              *(undefined8 *)(p_Var40 + (long)p_Var81) =
                                   *(undefined8 *)(p_Var26 + (long)p_Var81);
                              p_Var81 = p_Var81 + 8;
                            } while (p_Var73 != p_Var81);
                            if (local_b68 +
                                (-(long)(p_Stack_b70 + lVar37) -
                                (ulong)(p_Stack_b70 + lVar37 != local_b68)) + 1 != p_Var73) {
                              p_Var49 = p_Var49 + -(long)p_Var73;
                              p_Var73 = p_Var26 + (long)p_Var73;
                              goto LAB_00254f41;
                            }
                          }
                          else {
                            p_Var81 = (_List_node_base *)((ulong)p_Var49 & 0xffffffffffffffe0);
                            uVar54 = ((ulong)(p_Var81 + -0x20) >> 5) + 1;
                            uVar78 = (ulong)((uint)uVar54 & 3);
                            if (p_Var81 + -0x20 < (_List_node_base *)0x60) {
                              lVar88 = 0;
                            }
                            else {
                              uVar54 = uVar54 & 0xffffffffffffffc;
                              lVar88 = 0;
                              do {
                                uVar44 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 8);
                                uVar5 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x10);
                                uVar8 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x10 + 8);
                                *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69) =
                                     *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37);
                                *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 8) = uVar44;
                                *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x10) = uVar5;
                                *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x10 + 8) = uVar8;
                                uVar44 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x20 + 8);
                                uVar5 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x30);
                                uVar8 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x30 + 8);
                                *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x20) =
                                     *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x20);
                                *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x20 + 8) = uVar44;
                                *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x30) = uVar5;
                                *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x30 + 8) = uVar8;
                                uVar44 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x40 + 8);
                                uVar5 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x50);
                                uVar8 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x50 + 8);
                                *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x40) =
                                     *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x40);
                                *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x40 + 8) = uVar44;
                                *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x50) = uVar5;
                                *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x50 + 8) = uVar8;
                                uVar8 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x60 + 8);
                                uVar44 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x70);
                                uVar5 = *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x70 + 8);
                                *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x60) =
                                     *(undefined8 *)(p_Stack_b70 + lVar88 + lVar37 + 0x60);
                                *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x60 + 8) = uVar8;
                                *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x70) = uVar44;
                                *(undefined8 *)(p_Stack_b70 + lVar88 + lVar69 + 0x70 + 8) = uVar5;
                                lVar88 = lVar88 + 0x80;
                                uVar54 = uVar54 - 4;
                              } while (uVar54 != 0);
                            }
                            p_Var67 = (_List_node_base *)0x0;
                            if (uVar78 != 0) {
                              p_Var95 = p_Stack_b70 + lVar88 + lVar37;
                              p_Var73 = p_Stack_b70 + lVar69 + lVar88;
                              p_Var67 = (_List_node_base *)(uVar78 * 0x20);
                              p_Var79 = (_List_node_base *)0x0;
                              do {
                                uVar8 = *(undefined8 *)(p_Var95 + (long)p_Var79 + 8);
                                uVar44 = *(undefined8 *)(p_Var95 + 0x10 + (long)p_Var79);
                                uVar5 = *(undefined8 *)(p_Var95 + 0x10 + (long)p_Var79 + 8);
                                *(undefined8 *)(p_Var73 + (long)p_Var79) =
                                     *(undefined8 *)(p_Var95 + (long)p_Var79);
                                *(undefined8 *)(p_Var73 + (long)p_Var79 + 8) = uVar8;
                                *(undefined8 *)(p_Var73 + 0x10 + (long)p_Var79) = uVar44;
                                *(undefined8 *)(p_Var73 + 0x10 + (long)p_Var79 + 8) = uVar5;
                                p_Var79 = p_Var79 + 0x20;
                              } while (p_Var67 != p_Var79);
                            }
                            if (p_Var49 != p_Var81) {
                              if (((ulong)p_Var49 & 0x18) == 0) {
                                p_Var73 = p_Var26 + (long)p_Var81;
                                p_Var95 = p_Var40 + (long)p_Var81;
                                p_Var49 = (_List_node_base *)(ulong)((uint)p_Var49 & 0x1f);
                                goto LAB_00254f41;
                              }
                              goto LAB_00255431;
                            }
                          }
                          p_Var49 = local_b68 + -(long)p_Var26;
                        }
                        if (local_b68 != p_Var40 + (long)p_Var49) {
                          local_b68 = p_Var40 + (long)p_Var49;
                        }
                      }
                    }
                    else if (p_Var27[0x28] == (_List_node_base)0x1) {
                      uVar54 = *(ulong *)p_Var27;
                      p_Var95 = p_Stack_b70 + uVar54;
                      if (local_b68 == p_Stack_b60) {
                        uVar78 = (long)local_b68 - (long)p_Stack_b70;
                        local_b38 = p_Var27;
                        if (uVar78 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__throw_length_error("vector::_M_realloc_insert");
                        }
                        uVar50 = uVar78;
                        if (uVar78 == 0) {
                          uVar50 = 1;
                        }
                        uVar74 = uVar50 + uVar78;
                        if ((long)uVar74 < 0) {
                          uVar74 = 0x7fffffffffffffff;
                        }
                        if (CARRY8(uVar50,uVar78)) {
                          uVar74 = 0x7fffffffffffffff;
                        }
                        if (uVar74 == 0) {
                          p_Var73 = (_List_node_base *)0x0;
                        }
                        else {
                    /* try { // try from 00254fd4 to 00254fdb has its CatchHandler @ 0025becc */
                          p_Var73 = operator_new(uVar74);
                        }
                        p_Var73[uVar54] = *p_Var95;
                        if ((long)uVar54 < 1) {
                          p_Var27 = p_Var73 + uVar54;
                        }
                        else {
                          p_Var27 = p_Var73;
                          p_Var81 = p_Var40;
                          if (0x1f < uVar54) {
                            uVar50 = uVar54 & 0xffffffffffffffe0;
                            uVar57 = (uVar50 - 0x20 >> 5) + 1;
                            uVar78 = (ulong)((uint)uVar57 & 3);
                            if (uVar50 - 0x20 < 0x60) {
                              lVar69 = 0;
                            }
                            else {
                              uVar57 = uVar57 & 0xffffffffffffffc;
                              lVar69 = 0;
                              do {
                                uVar44 = *(undefined8 *)(p_Var40 + lVar69 + 8);
                                uVar5 = *(undefined8 *)(p_Var40 + lVar69 + 0x10);
                                uVar8 = *(undefined8 *)(p_Var40 + lVar69 + 0x10 + 8);
                                *(undefined8 *)(p_Var73 + lVar69) =
                                     *(undefined8 *)(p_Var40 + lVar69);
                                *(undefined8 *)(p_Var73 + lVar69 + 8) = uVar44;
                                *(undefined8 *)(p_Var73 + lVar69 + 0x10) = uVar5;
                                *(undefined8 *)(p_Var73 + lVar69 + 0x10 + 8) = uVar8;
                                uVar44 = *(undefined8 *)(p_Var40 + lVar69 + 0x20 + 8);
                                uVar5 = *(undefined8 *)(p_Var40 + lVar69 + 0x30);
                                uVar8 = *(undefined8 *)(p_Var40 + lVar69 + 0x30 + 8);
                                *(undefined8 *)(p_Var73 + lVar69 + 0x20) =
                                     *(undefined8 *)(p_Var40 + lVar69 + 0x20);
                                *(undefined8 *)(p_Var73 + lVar69 + 0x20 + 8) = uVar44;
                                *(undefined8 *)(p_Var73 + lVar69 + 0x30) = uVar5;
                                *(undefined8 *)(p_Var73 + lVar69 + 0x30 + 8) = uVar8;
                                uVar44 = *(undefined8 *)(p_Var40 + lVar69 + 0x40 + 8);
                                uVar5 = *(undefined8 *)(p_Var40 + lVar69 + 0x50);
                                uVar8 = *(undefined8 *)(p_Var40 + lVar69 + 0x50 + 8);
                                *(undefined8 *)(p_Var73 + lVar69 + 0x40) =
                                     *(undefined8 *)(p_Var40 + lVar69 + 0x40);
                                *(undefined8 *)(p_Var73 + lVar69 + 0x40 + 8) = uVar44;
                                *(undefined8 *)(p_Var73 + lVar69 + 0x50) = uVar5;
                                *(undefined8 *)(p_Var73 + lVar69 + 0x50 + 8) = uVar8;
                                uVar8 = *(undefined8 *)(p_Var40 + lVar69 + 0x60 + 8);
                                uVar44 = *(undefined8 *)(p_Var40 + lVar69 + 0x70);
                                uVar5 = *(undefined8 *)(p_Var40 + lVar69 + 0x70 + 8);
                                *(undefined8 *)(p_Var73 + lVar69 + 0x60) =
                                     *(undefined8 *)(p_Var40 + lVar69 + 0x60);
                                *(undefined8 *)(p_Var73 + lVar69 + 0x60 + 8) = uVar8;
                                *(undefined8 *)(p_Var73 + lVar69 + 0x70) = uVar44;
                                *(undefined8 *)(p_Var73 + lVar69 + 0x70 + 8) = uVar5;
                                lVar69 = lVar69 + 0x80;
                                uVar57 = uVar57 - 4;
                              } while (uVar57 != 0);
                            }
                            if (uVar78 != 0) {
                              lVar37 = 0;
                              do {
                                uVar8 = *(undefined8 *)(p_Var40 + lVar37 + lVar69 + 8);
                                uVar44 = *(undefined8 *)(p_Var40 + lVar37 + lVar69 + 0x10);
                                uVar5 = *(undefined8 *)(p_Var40 + lVar37 + lVar69 + 0x10 + 8);
                                *(undefined8 *)(p_Var73 + lVar37 + lVar69) =
                                     *(undefined8 *)(p_Var40 + lVar37 + lVar69);
                                *(undefined8 *)(p_Var73 + lVar37 + lVar69 + 8) = uVar8;
                                *(undefined8 *)(p_Var73 + lVar37 + lVar69 + 0x10) = uVar44;
                                *(undefined8 *)(p_Var73 + lVar37 + lVar69 + 0x10 + 8) = uVar5;
                                lVar37 = lVar37 + 0x20;
                              } while (uVar78 * 0x20 != lVar37);
                            }
                            p_Var27 = p_Var73 + uVar50;
                            if (uVar54 == uVar50) goto LAB_002551b2;
                            p_Var81 = p_Var40 + uVar50;
                          }
                          do {
                            *p_Var27 = *p_Var81;
                            p_Var81 = p_Var81 + 1;
                            p_Var27 = p_Var27 + 1;
                          } while (p_Var81 != p_Var95);
                        }
LAB_002551b2:
                        p_Var81 = p_Var27 + 1;
                        if ((long)p_Var49 - (long)p_Var95 < 1) {
                          p_Var81 = p_Var81 + ((long)p_Var49 - (long)p_Var95);
                        }
                        else if (p_Var49 != p_Var95) {
                          p_Var67 = p_Var49 + (-uVar54 - (long)p_Var40);
                          if ((_List_node_base *)0x1f < p_Var67) {
                            p_Var26 = (_List_node_base *)((ulong)p_Var67 & 0xffffffffffffffe0);
                            uVar50 = ((ulong)(p_Var26 + -0x20) >> 5) + 1;
                            uVar78 = (ulong)((uint)uVar50 & 3);
                            if (p_Var26 + -0x20 < (_List_node_base *)0x60) {
                              lVar69 = 0;
                            }
                            else {
                              uVar50 = uVar50 & 0xffffffffffffffc;
                              lVar69 = 0;
                              do {
                                uVar44 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 8);
                                uVar5 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x10);
                                uVar8 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x10 + 8);
                                *(undefined8 *)(p_Var27 + lVar69 + 1) =
                                     *(undefined8 *)(p_Var40 + lVar69 + uVar54);
                                *(undefined8 *)(p_Var27 + lVar69 + 1 + 8) = uVar44;
                                *(undefined8 *)(p_Var27 + lVar69 + 0x11) = uVar5;
                                *(undefined8 *)(p_Var27 + lVar69 + 0x11 + 8) = uVar8;
                                uVar44 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x20 + 8);
                                uVar5 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x30);
                                uVar8 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x30 + 8);
                                *(undefined8 *)(p_Var27 + lVar69 + 0x21) =
                                     *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x20);
                                *(undefined8 *)(p_Var27 + lVar69 + 0x21 + 8) = uVar44;
                                *(undefined8 *)(p_Var27 + lVar69 + 0x31) = uVar5;
                                *(undefined8 *)(p_Var27 + lVar69 + 0x31 + 8) = uVar8;
                                uVar44 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x40 + 8);
                                uVar5 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x50);
                                uVar8 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x50 + 8);
                                *(undefined8 *)(p_Var27 + lVar69 + 0x41) =
                                     *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x40);
                                *(undefined8 *)(p_Var27 + lVar69 + 0x41 + 8) = uVar44;
                                *(undefined8 *)(p_Var27 + lVar69 + 0x51) = uVar5;
                                *(undefined8 *)(p_Var27 + lVar69 + 0x51 + 8) = uVar8;
                                uVar8 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x60 + 8);
                                uVar44 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x70);
                                uVar5 = *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x70 + 8);
                                *(undefined8 *)(p_Var27 + lVar69 + 0x61) =
                                     *(undefined8 *)(p_Var40 + lVar69 + uVar54 + 0x60);
                                *(undefined8 *)(p_Var27 + lVar69 + 0x61 + 8) = uVar8;
                                *(undefined8 *)(p_Var27 + lVar69 + 0x71) = uVar44;
                                *(undefined8 *)(p_Var27 + lVar69 + 0x71 + 8) = uVar5;
                                lVar69 = lVar69 + 0x80;
                                uVar50 = uVar50 - 4;
                              } while (uVar50 != 0);
                            }
                            if (uVar78 != 0) {
                              lVar37 = 0;
                              do {
                                uVar8 = *(undefined8 *)(p_Var40 + lVar37 + uVar54 + lVar69 + 8);
                                uVar44 = *(undefined8 *)(p_Var40 + lVar37 + uVar54 + lVar69 + 0x10);
                                uVar5 = *(undefined8 *)
                                         (p_Var40 + lVar37 + uVar54 + lVar69 + 0x10 + 8);
                                *(undefined8 *)(p_Var27 + lVar37 + lVar69 + 1) =
                                     *(undefined8 *)(p_Var40 + lVar37 + uVar54 + lVar69);
                                *(undefined8 *)(p_Var27 + lVar37 + lVar69 + 1 + 8) = uVar8;
                                *(undefined8 *)(p_Var27 + lVar37 + lVar69 + 0x11) = uVar44;
                                *(undefined8 *)(p_Var27 + lVar37 + lVar69 + 0x11 + 8) = uVar5;
                                lVar37 = lVar37 + 0x20;
                              } while (uVar78 * 0x20 != lVar37);
                            }
                            p_Var81 = p_Var81 + (long)p_Var26;
                            if (p_Var67 == p_Var26) goto LAB_002552f4;
                            p_Var95 = p_Var95 + (long)p_Var26;
                          }
                          do {
                            *p_Var81 = *p_Var95;
                            p_Var95 = p_Var95 + 1;
                            p_Var81 = p_Var81 + 1;
                          } while (p_Var95 != p_Var49);
                        }
LAB_002552f4:
                        local_8c0 = uVar74;
                        if (p_Var40 != (_List_node_base *)0x0) {
                          operator_delete(p_Var40);
                        }
                        p_Stack_b60 = p_Var73 + local_8c0;
                        p_Var27 = local_b38;
                        p_Stack_b70 = p_Var73;
                        local_b68 = p_Var81;
                      }
                      else {
                        if (local_b68 == p_Var95) {
                          local_b68 = local_b68 + 1;
                          goto LAB_00254dd8;
                        }
                        _Var24 = *p_Var95;
                        p_Var26 = (_List_node_base *)CONCAT71((int7)((ulong)p_Var26 >> 8),_Var24);
                        *local_b68 = local_b68[-1];
                        p_Var40 = local_b68 + 1;
                        p_Var49 = local_b68 + -1;
                        p_Var73 = p_Var49 + -(long)p_Var95;
                        if (0 < (long)p_Var73) {
                          p_Var81 = p_Var49 + ~(ulong)p_Var95;
                          if (((ulong)p_Var73 & 7) != 0) {
                            uVar54 = 1;
                            p_Var67 = p_Var49;
                            do {
                              local_b68 = p_Var67;
                              *local_b68 = local_b68[-1];
                              uVar78 = uVar54 + 1;
                              bVar98 = uVar54 != ((ulong)p_Var73 & 7);
                              uVar54 = uVar78;
                              p_Var67 = local_b68 + -1;
                            } while (bVar98);
                            p_Var73 = p_Var49 + (-uVar78 - (long)p_Var95) + 1;
                            p_Var49 = local_b68 + -1;
                          }
                          p_Var67 = p_Var27;
                          if ((_List_node_base *)0x6 < p_Var81) {
                            lVar69 = -1;
                            do {
                              local_b68[lVar69] = p_Var49[lVar69];
                              local_b68[lVar69 + -1] = p_Var49[lVar69 + -1];
                              local_b68[lVar69 + -2] = p_Var49[lVar69 + -2];
                              local_b68[lVar69 + -3] = p_Var49[lVar69 + -3];
                              local_b68[lVar69 + -4] = p_Var49[lVar69 + -4];
                              local_b68[lVar69 + -5] = p_Var49[lVar69 + -5];
                              local_b68[lVar69 + -6] = p_Var49[lVar69 + -6];
                              local_b68[lVar69 + -7] = p_Var49[lVar69 + -7];
                              lVar37 = lVar69 + -8;
                              lVar69 = lVar69 + -8;
                            } while (p_Var73 + lVar37 < (_List_node_base *)0xfffffffffffffffe);
                          }
                        }
                        *p_Var95 = _Var24;
                        local_b68 = p_Var40;
                      }
                    }
LAB_00254dd8:
                    p_Var27 = p_Var27 + 0x30;
                  } while (p_Var27 != p_Var39);
                }
              }
            }
                    /* try { // try from 002554a0 to 002554b7 has its CatchHandler @ 0025c22a */
            detail::RangedValues<signed_char>::mergeEqualItems
                      ((RangedValues<signed_char> *)&local_b88,(long)p_Var72,(long *)&local_378);
            local_878 = *(undefined8 *)(lVar33 + 0x298);
            local_870 = *(undefined8 *)(lVar33 + 0x280);
            local_850 = *(undefined8 *)(lVar33 + 0x288);
            local_8b8 = &PTR__RangedIterator_00712250;
            uStack_8b0 = p_Stack_b70;
            local_8a8 = local_b88;
            local_8a0 = local_b88;
            local_898 = p_Stack_b70;
            local_890 = local_b88;
            local_888 = p_Stack_b80;
            local_880 = &PTR__RangedIterator_00712200;
                    /* try { // try from 00255568 to 0025557c has its CatchHandler @ 0025c1d7 */
            local_868 = local_870;
            local_860 = local_878;
            local_858 = local_870;
            detail::IntersectingRangedValues<float_const,signed_char>::IntersectionIterator::
            IntersectionIterator((IntersectionIterator *)local_838,(long)&local_8b8);
LAB_002555a0:
            local_328 = (_List_node_base *)&PTR__RangedIterator_00712250;
            local_300 = local_810;
            pppppppuStack_2f8 = pppppppuStack_808;
            local_310 = uStack_820;
            p_Stack_308 = p_Stack_818;
            p_Stack_320 = stack0xfffffffffffff7d0;
            local_318 = (_List_node_base *)auStack_828;
            local_2f0 = &PTR__RangedIterator_00712200;
            local_2c8 = (undefined4)local_7d8;
            uStack_2c4 = local_7d8._4_4_;
            uStack_2c0 = (undefined4)uStack_7d0;
            uStack_2bc = uStack_7d0._4_4_;
            local_2d8 = local_7e8;
            p_Stack_2d0 = p_Stack_7e0;
            local_2e8 = local_7f8;
            p_Stack_2e0 = p_Stack_7f0;
            local_2b8 = (long *******)&local_2b8;
            local_2a8 = 0;
            p_Var27 = local_7c8;
            local_2b0 = local_2b8;
            if (local_7c8 == (_List_node_base *)&local_7c8) {
              local_2a0 = local_7b0;
              p_Stack_298 = p_Stack_7a8;
            }
            else {
              do {
                    /* try { // try from 00255640 to 00255649 has its CatchHandler @ 0025cdc2 */
                p_Var72 = operator_new(0x18);
                *(undefined8 *)(p_Var72 + 0x10) = *(undefined8 *)(p_Var27 + 0x10);
                std::__detail::_List_node_base::_M_hook(p_Var72);
                local_2a8 = local_2a8 + 1;
                p_Var27 = *(_List_node_base **)p_Var27;
              } while (p_Var27 != (_List_node_base *)&local_7c8);
              local_2a0 = local_7b0;
              p_Stack_298 = p_Stack_7a8;
              ppppppplVar63 = local_2b8;
              if ((long ********)local_2b8 != &local_2b8) {
                do {
                    /* try { // try from 002556b7 to 002556b9 has its CatchHandler @ 0025cb8b */
                  cVar23 = (*(code *)(*ppppppplVar63[2])[3])();
                  if (cVar23 == '\0') goto joined_r0x0025571d;
                  ppppppplVar63 = (long *******)*ppppppplVar63;
                } while ((long ********)ppppppplVar63 != &local_2b8);
                ppppppplVar63 = (long *******)&local_2b8;
joined_r0x0025571d:
                ppppppplVar82 = local_2b8;
                if ((long ********)local_2b8 != &local_2b8) {
                  do {
                    ppppppplVar76 = (long *******)*ppppppplVar82;
                    operator_delete(ppppppplVar82);
                    ppppppplVar82 = ppppppplVar76;
                  } while ((long ********)ppppppplVar76 != &local_2b8);
                }
                p_Var27 = local_7c8;
                if ((long ********)ppppppplVar63 != &local_2b8) goto joined_r0x002558eb;
              }
            }
            if ((long)p_Stack_7a8 <= (long)local_7b0) {
              p_Stack_7a8 = local_7b0;
            }
            lVar69 = *(long *)(*(long *)(lVar33 + 0x148) + 8);
            p_Var27 = (_List_node_base *)(*(long *)(*(long *)(lVar33 + 0x148) + 0x10) - lVar69 >> 5)
            ;
            if ((long)p_Var27 < 0) {
              p_Var27 = (_List_node_base *)0x0;
            }
            p_Var72 = local_7b0;
            if ((long)local_7b0 < 0) {
              p_Var72 = (_List_node_base *)0x0;
            }
            if ((long)p_Stack_7a8 <= (long)p_Var27) {
              p_Var27 = p_Stack_7a8;
            }
            lVar37 = (long)p_Var27 - (long)p_Var72;
            if (lVar37 == 0 || (long)p_Var27 < (long)p_Var72) {
              lVar37 = 0;
            }
            if (lVar37 != 0) {
              puVar41 = (undefined8 *)(lVar69 + (long)p_Var72 * 0x20);
              puVar42 = puVar41 + lVar37 * 4;
              do {
                local_c08 = (undefined1  [4])((float)*puVar41 + (float)local_c08);
                auStack_c04 = (undefined1  [4])
                              ((float)((ulong)*puVar41 >> 0x20) + (float)auStack_c04);
                uStack_c00._0_4_ = (float)uStack_c00 + 0.0;
                uStack_c00._4_4_ = uStack_c00._4_4_ + 0.0;
                if (*(char *)((long)puVar41 + 0x1d) != '\0') {
                  local_c08 = (undefined1  [4])
                              ((float)local_c08 +
                              *(float *)(local_7f8 + ((long)local_7e8 - (long)p_Stack_7f0 >> 4) * 4)
                              );
                  auStack_c04 = (undefined1  [4])((float)auStack_c04 + 0.0);
                  uStack_c00._0_4_ = (float)uStack_c00 + 0.0;
                  uStack_c00._4_4_ = uStack_c00._4_4_ + 0.0;
                }
                puVar41 = puVar41 + 4;
              } while (puVar41 != puVar42);
            }
            do {
              p_Stack_7a8 = (_List_node_base *)0x7fffffffffffffff;
              if (local_7c8 != (_List_node_base *)&local_7c8) {
                plVar90 = *(long **)(local_7c8 + 0x10);
                p_Var27 = local_7c8;
                while( true ) {
                  (**(code **)(*plVar90 + 0x20))(plVar90);
                  cVar23 = (**(code **)(*plVar90 + 0x18))(plVar90);
                  if (cVar23 == '\0') break;
                  p_Var72 = (_List_node_base *)(**(code **)(*plVar90 + 0x10))(plVar90);
                  if ((long)local_7b0 < (long)p_Var72) {
                    local_7b0 = p_Var72;
                  }
                  do {
                    (**(code **)(*plVar90 + 0x10))(plVar90);
                    if ((long)extraout_RDX_35 < (long)p_Stack_7a8) {
                      p_Stack_7a8 = extraout_RDX_35;
                    }
                    p_Var27 = *(_List_node_base **)p_Var27;
                    if (p_Var27 == (_List_node_base *)&local_7c8) goto LAB_002558b0;
                    plVar90 = *(long **)(p_Var27 + 0x10);
                  } while ((p_Var27 != local_7c8) &&
                          ((**(code **)(*plVar90 + 0x10))(plVar90),
                          (long)local_7b0 < extraout_RDX_34
                    /* try { // try from 00255823 to 00255875 has its CatchHandler @ 0025cf54 */));
                }
                break;
              }
LAB_002558b0:
                    /* try { // try from 002558b0 to 002558b7 has its CatchHandler @ 0025c9e5 */
              std::__cxx11::
              list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>::
              sort<juce::detail::IntersectingRangedValues<float_const,signed_char>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
                        ((_List_node_base *)&local_7c8);
            } while ((long)p_Stack_7a8 <= (long)local_7b0);
            goto LAB_002555a0;
          }
          goto LAB_00255949;
        }
      }
    }
    else {
      lVar33 = *(long *)(lVar37 + 0x80);
      auVar13._12_4_ = 0;
      auVar13._0_12_ = _auStack_c04;
      _local_c08 = auVar13 << 0x20;
      lVar89 = 0;
      do {
        pPVar32 = *(ParagraphStorage **)(lVar33 + (lVar89 >> 1));
        if (pPVar32 == pPVar38) break;
        if (pPVar32[0x54] == (ParagraphStorage)0x0) {
                    /* try { // try from 002529b1 to 002529b8 has its CatchHandler @ 0025c04e */
          pPVar36 = ParagraphStorage::getShapedText(pPVar32);
          lVar37 = *(long *)pPVar36;
          if (*(long *)(lVar37 + 0x150) == *(long *)(lVar37 + 0x158)) {
            fVar101 = 0.0;
          }
          else {
            fVar101 = *(float *)(*(long *)(lVar37 + 0x170) + -8);
          }
          *(float *)(pPVar32 + 0x50) = fVar101;
          pPVar32[0x54] = (ParagraphStorage)0x1;
        }
        else {
          fVar101 = *(float *)(pPVar32 + 0x50);
        }
        local_c08 = (undefined1  [4])((float)local_c08 + fVar101);
        lVar89 = lVar89 + 0x10;
      } while ((lVar88 >> 4) * 0x10 != lVar89);
      pPVar38 = *(ParagraphStorage **)(local_380 + local_408 * 8);
      lVar33 = local_380;
      lVar89 = local_258;
      if (pPVar38[0x54] == (ParagraphStorage)0x0) goto LAB_00252a4f;
LAB_00252a14:
      if (local_24c <= *(float *)(pPVar38 + 0x50) + (float)local_c08) goto LAB_00252aa5;
    }
    goto LAB_0025baf0;
  }
LAB_0025bb93:
  if (puStack_420 != (undefined4 *)0x0) {
    operator_delete(puStack_420);
  }
  if (local_438 != (ulong *)0x0) {
    operator_delete(local_438);
  }
  if (pvStack_220 != (void *)0x0) {
    operator_delete(pvStack_220);
  }
  if (local_238 != (void *)0x0) {
    operator_delete(local_238);
  }
  if (p_Stack_a90 != (_List_node_base *)0x0) {
    operator_delete(p_Stack_a90);
  }
  if (local_aa8 != (ulong *)0x0) {
    operator_delete(local_aa8);
  }
  if (puStack_3e0 != (undefined4 *)0x0) {
    operator_delete(puStack_3e0);
  }
  if (local_3f8 != (ulong *)0x0) {
    operator_delete(local_3f8);
  }
  if (local_348 != (void *)0x0) {
    operator_delete(local_348);
  }
  if (local_b40[0x10] == (Graphics)0x0) {
                    /* try { // try from 0025bc50 to 0025bc52 has its CatchHandler @ 0025bded */
    (**(code **)(**(long **)(local_b40 + 8) + 0x78))();
  }
  else {
    local_b40[0x10] = (Graphics)0x0;
  }
  return;
}


