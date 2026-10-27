// Function : getTextBounds
// Namespace: juce:TextEditor
// Entry    : 0026b690
// Prototype: long * getTextBounds(long * param_1, TextEditor * param_2, long param_3, undefined8 param_4, undefined8 param_5, ulong param_6)
// Body     : 0026b690 - 0026ca3a


/* WARNING: Removing unreachable block (ram,0x0026c183) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TextEditor::getTextBounds(juce::Range<int>) const */

long * __cdecl
juce::TextEditor::getTextBounds
          (long *param_1,TextEditor *param_2,long param_3,undefined8 param_4,undefined8 param_5,
          ulong param_6)

{
  int iVar1;
  _List_node_base *p_Var2;
  ParagraphStorage *this;
  double dVar3;
  undefined8 uVar4;
  long *******ppppppplVar5;
  char cVar6;
  _List_node_base *p_Var7;
  long lVar8;
  _List_node_base *p_Var9;
  _List_node_base *p_Var10;
  ParagraphStorage *pPVar11;
  ParagraphStorage *pPVar12;
  int *piVar13;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long extraout_RDX_03;
  long extraout_RDX_04;
  long extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  long extraout_RDX_08;
  long extraout_RDX_09;
  undefined8 extraout_RDX_10;
  int *piVar14;
  int iVar15;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *******ppppppplVar22;
  long lVar23;
  void **ppvVar24;
  int iVar25;
  _List_node_base *p_Var26;
  _List_node_base *p_Var27;
  int iVar28;
  ulong uVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  _List_node_base *local_620;
  undefined8 local_618;
  undefined **local_610;
  void *local_608;
  void *pvStack_600;
  void *local_5f8;
  void *pvStack_5f0;
  void *local_5e8;
  undefined8 uStack_5e0;
  undefined **local_5d8;
  long local_5d0;
  long lStack_5c8;
  long local_5c0;
  long lStack_5b8;
  long local_5b0;
  undefined8 uStack_5a8;
  _List_node_base *local_5a0;
  _List_node_base *local_598;
  undefined8 *******local_590;
  long local_588;
  long lStack_580;
  TextEditor *local_578;
  _List_node_base *local_570;
  _List_node_base *local_568;
  float local_560;
  float local_55c;
  ulong local_558;
  ulong local_550;
  _List_node_base *local_548;
  ParagraphStorage *local_540;
  _List_node_base *local_538;
  long local_530;
  long local_528;
  _List_node_base *local_520;
  void *local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  void *pvStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  _List_node_base *local_4e8 [2];
  undefined8 *******local_4d8 [4];
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
  void *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined **local_c8;
  void *local_c0;
  void *pvStack_b8;
  void *local_b0;
  void *pvStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined **local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  undefined8 uStack_60;
  long *******local_58;
  long *******local_50;
  long local_48;
  long local_40;
  long lStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_508 = 0;
  pvStack_500 = (void *)0x0;
  local_518 = (void *)0x0;
  uStack_510 = 0;
  local_e8 = (void *)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_558 = (ulong)(int)param_3;
  local_550 = param_3 >> 0x20;
  if (param_3 >> 0x20 <= (long)local_558) {
    local_550 = local_558;
  }
                    /* try { // try from 0026b6e9 to 0026b70f has its CatchHandler @ 0026ca3d */
  ppvVar24 = &local_e8;
  detail::RangedValues<int>::set<juce::detail::MergeEqualItemsYes>
            ((RangedValues<int> *)&local_518,local_558,local_550,0,(long *)ppvVar24);
  lVar19 = *(long *)(param_2 + 0x330);
  local_5d0 = *(long *)(lVar19 + 0x80);
  lStack_5c8 = *(long *)(lVar19 + 0x68);
  uStack_5a8 = *(undefined8 *)(lVar19 + 0x70);
  local_610 = &PTR__RangedIterator_00710b38;
  local_608 = pvStack_500;
  pvStack_600 = local_518;
  local_5f8 = local_518;
  pvStack_5f0 = pvStack_500;
  local_5e8 = local_518;
  uStack_5e0 = uStack_510;
  local_5d8 = &PTR__RangedIterator_00710ae8;
  local_5a0 = (_List_node_base *)&local_5a0;
  local_590 = (undefined8 *******)0x0;
  local_4e8[0] = (_List_node_base *)local_4e8;
  local_4d8[0] = (undefined8 *******)0x0;
  local_5c0 = lStack_5c8;
  lStack_5b8 = local_5d0;
  local_5b0 = lStack_5c8;
  local_598 = local_5a0;
  local_4e8[1] = local_4e8[0];
                    /* try { // try from 0026b7e9 to 0026b81e has its CatchHandler @ 0026ca45 */
  p_Var7 = operator_new(0x18);
  *(undefined ****)(p_Var7 + 0x10) = &local_5d8;
  std::__detail::_List_node_base::_M_hook(p_Var7);
  local_4d8[0] = (undefined8 *******)((long)local_4d8[0] + 1);
  p_Var7 = operator_new(0x18);
  *(undefined ****)(p_Var7 + 0x10) = &local_610;
  std::__detail::_List_node_base::_M_hook(p_Var7);
  local_4d8[0] = (undefined8 *******)((long)local_4d8[0] + 1);
  p_Var10 = local_5a0;
  p_Var7 = local_4e8[0];
  p_Var2 = local_4e8[1];
  while( true ) {
    local_4e8[0] = p_Var7;
    local_4e8[1] = p_Var2;
    if (p_Var10 == (_List_node_base *)&local_5a0) break;
    p_Var7 = *(_List_node_base **)p_Var10;
    operator_delete(p_Var10);
    p_Var10 = p_Var7;
    p_Var7 = local_4e8[0];
    p_Var2 = local_4e8[1];
  }
  local_578 = param_2;
  if (p_Var7 == (_List_node_base *)local_4e8) {
    local_590 = (undefined8 *******)0x0;
    local_5a0 = (_List_node_base *)&local_5a0;
    local_598 = (_List_node_base *)&local_5a0;
  }
  else {
    *(_List_node_base **)p_Var2 = (_List_node_base *)&local_5a0;
    *(_List_node_base **)(p_Var7 + 8) = (_List_node_base *)&local_5a0;
    local_590 = local_4d8[0];
    local_5a0 = p_Var7;
    local_598 = p_Var2;
    if (p_Var7 != (_List_node_base *)&local_5a0) {
      do {
                    /* try { // try from 0026b8f7 to 0026b8f9 has its CatchHandler @ 0026ca75 */
        cVar6 = (**(code **)(**(long **)(p_Var7 + 0x10) + 0x18))();
        if (cVar6 == '\0') {
          if (p_Var7 != (_List_node_base *)&local_5a0) goto LAB_0026c370;
          break;
        }
        p_Var7 = *(_List_node_base **)p_Var7;
      } while (p_Var7 != (_List_node_base *)&local_5a0);
    }
  }
  if (local_5a0 == (_List_node_base *)&local_5a0) {
    local_588 = -0x8000000000000000;
LAB_0026c13d:
    lStack_580 = 0x7fffffffffffffff;
LAB_0026c148:
    if (local_588 < lStack_580) goto LAB_0026c370;
  }
  else {
    lVar19 = -0x8000000000000000;
    p_Var7 = local_5a0;
    do {
                    /* try { // try from 0026b947 to 0026b949 has its CatchHandler @ 0026ca79 */
      lVar8 = (**(code **)(**(long **)(p_Var7 + 0x10) + 0x10))();
      if (lVar19 < lVar8) {
        lVar19 = lVar8;
      }
      p_Var7 = *(_List_node_base **)p_Var7;
    } while (p_Var7 != (_List_node_base *)&local_5a0);
    local_588 = lVar19;
    if (local_5a0 == (_List_node_base *)&local_5a0) goto LAB_0026c13d;
    lVar19 = 0x7fffffffffffffff;
    p_Var7 = local_5a0;
    do {
                    /* try { // try from 0026b997 to 0026b999 has its CatchHandler @ 0026ca77 */
      (**(code **)(**(long **)(p_Var7 + 0x10) + 0x10))();
      if (extraout_RDX < lVar19) {
        lVar19 = extraout_RDX;
      }
      p_Var7 = *(_List_node_base **)p_Var7;
    } while (p_Var7 != (_List_node_base *)&local_5a0);
    lStack_580 = lVar19;
    if ((local_5a0 == (_List_node_base *)&local_5a0) ||
       (*(_List_node_base **)local_5a0 == (_List_node_base *)&local_5a0)) goto LAB_0026c148;
    local_620 = (_List_node_base *)&local_620;
    local_4e8[0] = (_List_node_base *)local_4e8;
    local_4d8[0] = local_4d8;
    local_4d8[2] = local_4d8 + 2;
    local_4b8 = &local_4b8;
    local_4a8 = &local_4a8;
    local_498 = &local_498;
    local_488 = &local_488;
    local_478 = &local_478;
    local_468 = &local_468;
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
    p_Var7 = local_4e8[0];
    local_618 = local_620;
    local_4e8[1] = local_4e8[0];
    local_4d8[1] = local_4d8[0];
    local_4d8[3] = local_4d8[2];
    local_4b0 = local_4b8;
    local_4a0 = local_4a8;
    local_490 = local_498;
    local_480 = local_488;
    local_470 = local_478;
    local_460 = local_468;
    local_450 = local_458;
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
    do {
      p_Var10 = p_Var7;
      std::__detail::_List_node_base::_M_transfer((_List_node_base *)&local_620,local_5a0);
      p_Var7 = (_List_node_base *)local_4e8;
      if (p_Var7 == p_Var10) {
        uVar29 = 1;
      }
      else {
        do {
          p_Var9 = p_Var7;
          p_Var2 = *(_List_node_base **)p_Var9;
          if (p_Var2 == p_Var9) {
            p_Var7 = p_Var9;
            goto LAB_0026c123;
          }
          if (local_620 != (_List_node_base *)&local_620) {
            p_Var27 = local_620;
            p_Var7 = p_Var2;
            do {
                    /* try { // try from 0026c0a7 to 0026c0b6 has its CatchHandler @ 0026cb15 */
              (**(code **)(**(long **)(p_Var27 + 0x10) + 0x10))();
              (**(code **)(**(long **)(p_Var7 + 0x10) + 0x10))();
              if (extraout_RDX_00 < extraout_RDX_01) {
                p_Var26 = *(_List_node_base **)p_Var27;
                std::__detail::_List_node_base::_M_transfer(p_Var7,p_Var27);
                p_Var27 = p_Var26;
              }
              else {
                p_Var7 = *(_List_node_base **)p_Var7;
              }
            } while ((p_Var7 != p_Var9) && (p_Var27 != (_List_node_base *)&local_620));
            if (p_Var27 != (_List_node_base *)&local_620) {
              std::__detail::_List_node_base::_M_transfer(p_Var9,p_Var27);
            }
          }
          std::__detail::_List_node_base::swap((_List_node_base *)&local_620,p_Var9);
          p_Var7 = p_Var9 + 0x10;
        } while (p_Var9 + 0x10 != p_Var10);
        p_Var7 = p_Var10;
LAB_0026c123:
        uVar29 = (ulong)(p_Var2 != p_Var9);
      }
      std::__detail::_List_node_base::swap((_List_node_base *)&local_620,p_Var7);
      p_Var7 = p_Var10 + uVar29 * 0x10;
    } while (local_5a0 != (_List_node_base *)&local_5a0);
    for (p_Var7 = (_List_node_base *)local_4d8; p_Var7 != p_Var10 + uVar29 * 0x10;
        p_Var7 = p_Var7 + 0x10) {
      p_Var2 = p_Var7 + -0x10;
      p_Var9 = *(_List_node_base **)p_Var7;
      p_Var27 = *(_List_node_base **)(p_Var7 + -0x10);
      while( true ) {
        bVar30 = p_Var27 != p_Var2;
        p_Var26 = p_Var27;
        if (p_Var9 == p_Var7) break;
        while( true ) {
          p_Var27 = p_Var26;
          if (p_Var26 == p_Var2) goto LAB_0026c301;
                    /* try { // try from 0026c2cc to 0026c2db has its CatchHandler @ 0026caa3 */
          (**(code **)(**(long **)(p_Var26 + 0x10) + 0x10))();
          (**(code **)(**(long **)(p_Var9 + 0x10) + 0x10))();
          if (extraout_RDX_05 <= extraout_RDX_04) break;
          p_Var27 = *(_List_node_base **)p_Var26;
          std::__detail::_List_node_base::_M_transfer(p_Var9,p_Var26);
          bVar30 = p_Var27 != p_Var2;
          p_Var26 = p_Var27;
          if (p_Var9 == p_Var7) goto LAB_0026c301;
        }
        p_Var9 = *(_List_node_base **)p_Var9;
      }
LAB_0026c301:
      if (bVar30) {
        std::__detail::_List_node_base::_M_transfer(p_Var7,p_Var27);
      }
    }
    p_Var7 = p_Var10 + -0x10;
    if ((char)uVar29 != '\0') {
      p_Var7 = p_Var10;
    }
    std::__detail::_List_node_base::swap(p_Var7,(_List_node_base *)&local_5a0);
    param_2 = local_578;
    if (local_588 < lStack_580) goto LAB_0026c370;
  }
  do {
    lStack_580 = 0x7fffffffffffffff;
    if (local_5a0 != (_List_node_base *)&local_5a0) {
      plVar21 = *(long **)(local_5a0 + 0x10);
      p_Var7 = local_5a0;
      while( true ) {
        (**(code **)(*plVar21 + 0x20))(plVar21);
        cVar6 = (**(code **)(*plVar21 + 0x18))(plVar21);
        if (cVar6 == '\0') break;
        lVar19 = (**(code **)(*plVar21 + 0x10))(plVar21);
        if (local_588 < lVar19) {
          local_588 = lVar19;
        }
        do {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          if (extraout_RDX_03 < lStack_580) {
            lStack_580 = extraout_RDX_03;
          }
          p_Var7 = *(_List_node_base **)p_Var7;
          if (p_Var7 == (_List_node_base *)&local_5a0) goto LAB_0026c230;
          plVar21 = *(long **)(p_Var7 + 0x10);
        } while ((p_Var7 != local_5a0) &&
                ((**(code **)(*plVar21 + 0x10))(plVar21), local_588 < extraout_RDX_02
                    /* try { // try from 0026c194 to 0026c1ea has its CatchHandler @ 0026ca7b */));
      }
      break;
    }
LAB_0026c230:
                    /* try { // try from 0026c230 to 0026c23c has its CatchHandler @ 0026ca3b */
    std::__cxx11::list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>
    ::
    sort<juce::detail::IntersectingRangedValues<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>const,int>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
              ((_List_node_base *)&local_5a0);
  } while (lStack_580 <= local_588);
LAB_0026c370:
  do {
    local_c8 = &PTR__RangedIterator_00710b38;
    local_a0 = local_5e8;
    uStack_98 = uStack_5e0;
    local_b0 = local_5f8;
    pvStack_a8 = pvStack_5f0;
    local_c0 = local_608;
    pvStack_b8 = pvStack_600;
    local_90 = &PTR__RangedIterator_00710ae8;
    local_68 = local_5b0;
    uStack_60 = uStack_5a8;
    local_78 = local_5c0;
    lStack_70 = lStack_5b8;
    local_88 = local_5d0;
    lStack_80 = lStack_5c8;
    local_48 = 0;
    p_Var7 = local_5a0;
    local_58 = (long *******)&local_58;
    local_50 = (long *******)&local_58;
    if (local_5a0 == (_List_node_base *)&local_5a0) {
      local_40 = local_588;
      lStack_38 = lStack_580;
    }
    else {
      do {
                    /* try { // try from 0026c410 to 0026c419 has its CatchHandler @ 0026cae5 */
        p_Var10 = operator_new(0x18);
        lVar19 = *(long *)(p_Var7 + 0x10);
        *(long *)(p_Var10 + 0x10) = lVar19;
        ppppppplVar22 = (long *******)&local_58;
        std::__detail::_List_node_base::_M_hook(p_Var10);
        local_48 = local_48 + 1;
        p_Var7 = *(_List_node_base **)p_Var7;
      } while (p_Var7 != (_List_node_base *)&local_5a0);
      local_40 = local_588;
      lStack_38 = lStack_580;
      ppppppplVar16 = local_58;
      if ((long ********)local_58 != &local_58) {
        do {
                    /* try { // try from 0026c477 to 0026c479 has its CatchHandler @ 0026cab2 */
          cVar6 = (*(code *)(*ppppppplVar16[2])[3])();
          uVar4 = extraout_RDX_06;
          ppppppplVar5 = local_58;
          ppppppplVar17 = ppppppplVar16;
          if (cVar6 == '\0') break;
          ppppppplVar16 = (long *******)*ppppppplVar16;
          ppppppplVar17 = (long *******)&local_58;
        } while ((long ********)ppppppplVar16 != &local_58);
        while ((long ********)ppppppplVar5 != &local_58) {
          ppppppplVar16 = (long *******)*ppppppplVar5;
          operator_delete(ppppppplVar5);
          uVar4 = extraout_RDX_07;
          ppppppplVar5 = ppppppplVar16;
        }
        if ((long ********)ppppppplVar17 != &local_58) {
          p_Var7 = local_5a0;
          while (p_Var7 != (_List_node_base *)&local_5a0) {
            p_Var10 = *(_List_node_base **)p_Var7;
            operator_delete(p_Var7);
            uVar4 = extraout_RDX_10;
            p_Var7 = p_Var10;
          }
          iVar25 = *(int *)(param_2 + 0x278);
          iVar28 = *(int *)(param_2 + 0x19c);
          iVar15 = *(int *)(*(long *)(param_2 + 0x188) + 0x208);
          iVar18 = *(int *)(param_2 + 0x27c);
          iVar1 = *(int *)(param_2 + 0x198);
                    /* try { // try from 0026c97b to 0026c97f has its CatchHandler @ 0026ca3d */
          fVar33 = getYOffset(param_2,ppppppplVar22,uVar4,lVar19,(uint *)ppvVar24,param_6);
          if ((long)*(int *)((long)param_1 + 0xc) != 0) {
            dVar3 = (double)(fVar33 + (float)iVar1 + (float)iVar18) + DAT_005d9098;
            iVar18 = *(int *)(*(long *)(local_578 + 0x188) + 0x20c);
            piVar14 = (int *)*param_1;
            piVar13 = piVar14 + (long)*(int *)((long)param_1 + 0xc) * 4;
            do {
              *piVar14 = *piVar14 + ((iVar28 + iVar25) - iVar15);
              piVar14[1] = piVar14[1] + (SUB84(dVar3,0) - iVar18);
              piVar14 = piVar14 + 4;
            } while (piVar14 != piVar13);
          }
          if (local_e8 != (void *)0x0) {
            operator_delete(local_e8);
          }
          if (pvStack_500 != (void *)0x0) {
            operator_delete(pvStack_500);
          }
          if (local_518 != (void *)0x0) {
            operator_delete(local_518);
          }
          return param_1;
        }
      }
    }
    lVar8 = local_5d0;
    lVar20 = local_5c0 - lStack_5c8;
                    /* try { // try from 0026c4f4 to 0026c4f8 has its CatchHandler @ 0026ca83 */
    pPVar11 = ParagraphStorage::getShapedText(*(ParagraphStorage **)(local_5d0 + (lVar20 >> 1)));
    lVar20 = lVar20 >> 4;
    local_4e8[0] = (_List_node_base *)0x0;
    local_4e8[1] = (_List_node_base *)0x0;
    local_4d8[0] = (undefined8 *******)0x0;
    lVar19 = *(long *)(*(long *)(lVar8 + lVar20 * 8) + 0x20);
    lVar23 = local_558 - lVar19;
    lVar19 = local_550 - lVar19;
    if (lVar19 <= lVar23) {
      lVar19 = lVar23;
    }
                    /* try { // try from 0026c53f to 0026c54b has its CatchHandler @ 0026ca8b */
    detail::ShapedText::getGlyphRanges(*(long *)pPVar11,lVar23,lVar19,(long *)local_4e8);
    local_570 = local_4e8[0];
    local_548 = local_4e8[1];
    local_528 = lVar8;
    p_Var7 = local_4e8[0];
    local_540 = pPVar11;
    local_530 = lVar20;
    if (local_4e8[0] != local_4e8[1]) {
      do {
        local_538 = p_Var7;
        detail::ShapedText::getGlyphsBounds
                  (&local_620,*(long *)local_540,*(long *)p_Var7,*(long *)(p_Var7 + 8));
        local_568 = local_620;
        if ((long)local_618._4_4_ != 0) {
          local_520 = local_620 + (long)local_618._4_4_ * 0x10;
          p_Var7 = local_620;
          do {
            fVar33 = *(float *)(p_Var7 + 4);
            pPVar11 = *(ParagraphStorage **)(lVar8 + lVar20 * 8);
            lVar19 = *(long *)(pPVar11 + 0x30);
            lVar8 = *(long *)(lVar19 + 0x70) - *(long *)(lVar19 + 0x68);
            if (lVar8 == 0) {
              fVar34 = 0.0;
            }
            else {
              lVar19 = *(long *)(lVar19 + 0x80);
              fVar34 = 0.0;
              lVar20 = 0;
              do {
                this = *(ParagraphStorage **)(lVar19 + (lVar20 >> 1));
                if (this == pPVar11) break;
                if (this[0x54] == (ParagraphStorage)0x0) {
                    /* try { // try from 0026c803 to 0026c80a has its CatchHandler @ 0026cbbf */
                  pPVar12 = ParagraphStorage::getShapedText(this);
                  lVar23 = *(long *)pPVar12;
                  if (*(long *)(lVar23 + 0x150) == *(long *)(lVar23 + 0x158)) {
                    fVar31 = 0.0;
                  }
                  else {
                    fVar31 = *(float *)(*(long *)(lVar23 + 0x170) + -8);
                  }
                  *(float *)(this + 0x50) = fVar31;
                  this[0x54] = (ParagraphStorage)0x1;
                }
                else {
                  fVar31 = *(float *)(this + 0x50);
                }
                fVar34 = fVar34 + fVar31;
                lVar20 = lVar20 + 0x10;
              } while ((lVar8 >> 4) * 0x10 != lVar20);
            }
            fVar31 = *(float *)p_Var7;
            local_560 = *(float *)(p_Var7 + 8);
            local_55c = *(float *)(p_Var7 + 0xc);
            iVar25 = -0x80000000;
            iVar28 = -0x80000000;
            if (DAT_00653430 < fVar31) {
              fVar32 = floorf(fVar31);
              iVar28 = (int)fVar32;
            }
            fVar33 = fVar33 + fVar34;
            if (DAT_00653430 < fVar33) {
              fVar34 = floorf(fVar33);
              iVar25 = (int)fVar34;
            }
            iVar15 = 0x7fffffff;
            iVar18 = 0x7fffffff;
            if (fVar31 + local_560 < DAT_00653434) {
              fVar34 = ceilf(fVar31 + local_560);
              iVar18 = (int)fVar34;
            }
            if (fVar33 + local_55c < DAT_00653434) {
              fVar33 = ceilf(fVar33 + local_55c);
              iVar15 = (int)fVar33;
            }
            RectangleList<int>::add
                      (param_1,CONCAT44(iVar25,iVar28),CONCAT44(iVar15 - iVar25,iVar18 - iVar28));
            p_Var7 = p_Var7 + 0x10;
            lVar8 = local_528;
            lVar20 = local_530;
          } while (p_Var7 != local_520);
        }
        free(local_568);
        p_Var7 = local_538 + 0x10;
      } while (p_Var7 != local_548);
    }
    param_2 = local_578;
    if (local_570 != (_List_node_base *)0x0) {
      operator_delete(local_570);
      param_2 = local_578;
    }
    do {
      lStack_580 = 0x7fffffffffffffff;
      if (local_5a0 != (_List_node_base *)&local_5a0) {
        plVar21 = *(long **)(local_5a0 + 0x10);
        p_Var7 = local_5a0;
        while( true ) {
          (**(code **)(*plVar21 + 0x20))(plVar21);
          cVar6 = (**(code **)(*plVar21 + 0x18))(plVar21);
          if (cVar6 == '\0') break;
          lVar19 = (**(code **)(*plVar21 + 0x10))(plVar21);
          if (local_588 < lVar19) {
            local_588 = lVar19;
          }
          do {
            (**(code **)(*plVar21 + 0x10))(plVar21);
            if (extraout_RDX_09 < lStack_580) {
              lStack_580 = extraout_RDX_09;
            }
            p_Var7 = *(_List_node_base **)p_Var7;
            if (p_Var7 == (_List_node_base *)&local_5a0) goto LAB_0026c690;
            plVar21 = *(long **)(p_Var7 + 0x10);
          } while ((p_Var7 != local_5a0) &&
                  ((**(code **)(*plVar21 + 0x10))(plVar21), local_588 < extraout_RDX_08
                    /* try { // try from 0026c5f4 to 0026c64a has its CatchHandler @ 0026cbba */));
        }
        break;
      }
LAB_0026c690:
                    /* try { // try from 0026c690 to 0026c69c has its CatchHandler @ 0026caaa */
      std::__cxx11::
      list<juce::detail::RangedIterator*,std::allocator<juce::detail::RangedIterator*>>::
      sort<juce::detail::IntersectingRangedValues<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>const,int>::IntersectionIterator::advance()::_lambda(auto:1&,auto:2&)_1_>
                ((_List_node_base *)&local_5a0);
    } while (lStack_580 <= local_588);
  } while( true );
}


