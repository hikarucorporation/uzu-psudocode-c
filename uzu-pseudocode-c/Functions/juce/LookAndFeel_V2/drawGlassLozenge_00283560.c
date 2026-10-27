// Function : drawGlassLozenge
// Namespace: juce:LookAndFeel_V2
// Entry    : 00283560
// Prototype: undefined drawGlassLozenge(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, float param_4, float param_5, undefined8 param_6, uint * param_7, byte param_8, byte param_9, undefined8 param_10_00, undefined4 param_11)
// Body     : 00283560 - 00284358


/* WARNING: Removing unreachable block (ram,0x002837bd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::LookAndFeel_V2::drawGlassLozenge(juce::Graphics&, float, float, float, float, juce::Colour
   const&, float, float, bool, bool, bool, bool) */

void __cdecl
juce::LookAndFeel_V2::drawGlassLozenge
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,float param_4,float param_5,
          undefined8 param_6,uint *param_7,byte param_8,byte param_9,undefined8 param_10_00,
          undefined4 param_11)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [14];
  undefined1 auVar5 [12];
  unkbyte10 Var6;
  undefined1 auVar7 [12];
  undefined8 __ptr;
  undefined8 this;
  byte bVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  double *__ptr_00;
  float *pfVar12;
  float *pfVar13;
  byte bVar14;
  int iVar15;
  byte bVar16;
  long lVar17;
  uint uVar18;
  double *pdVar19;
  byte bVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  uint uVar27;
  undefined8 in_XMM0_Qb;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined2 uVar55;
  float fVar28;
  undefined1 auVar29 [15];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM2_Ba;
  undefined1 uVar44;
  undefined1 in_XMM2_Bb;
  undefined1 uVar45;
  undefined1 in_XMM2_Bc;
  undefined1 uVar46;
  undefined1 in_XMM2_Bd;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined4 uVar52;
  float fVar53;
  undefined4 uVar54;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined1 local_160 [8];
  undefined8 uStack_158;
  undefined1 local_150;
  double *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138 [16];
  undefined1 local_128 [8];
  undefined8 uStack_120;
  float *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  float local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined1 local_a8 [16];
  ulong local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  fVar22 = (float)param_3;
  uStack_120 = in_XMM0_Qb;
  local_128 = (undefined1  [8])param_1_00;
  auVar26 = _local_128;
  if ((param_4 < (float)CONCAT13(in_XMM2_Bd,CONCAT12(in_XMM2_Bc,CONCAT11(in_XMM2_Bb,in_XMM2_Ba))))
     && (param_4 < fVar22)) {
    local_138._0_8_ = param_6;
    fVar28 = (float)CONCAT13(in_XMM2_Bd,CONCAT12(in_XMM2_Bc,CONCAT11(in_XMM2_Bb,in_XMM2_Ba))) *
             DAT_005d9044;
    fVar53 = DAT_005d9044 * fVar22;
    if (fVar28 <= DAT_005d9044 * fVar22) {
      fVar53 = fVar28;
    }
    fVar28 = (float)(~-(uint)(param_5 < 0.0) & (uint)param_5 | (uint)fVar53 & -(uint)(param_5 < 0.0)
                    );
    local_58 = ZEXT416((uint)fVar28);
    local_108 = 0;
    uStack_100 = 0;
    local_118 = (float *)0x0;
    uStack_110 = 0;
    local_f8 = 1;
    bVar8 = param_8 | (byte)param_10_00;
    bVar20 = (byte)param_10_00 | param_9;
    local_cc = (undefined4)CONCAT71((int7)((ulong)param_10_00 >> 8),bVar20);
    bVar20 = bVar20 ^ 1;
    bVar16 = (param_8 | (byte)param_11) ^ 1;
    bVar14 = (param_9 | (byte)param_11) ^ 1;
    local_128._0_4_ = SUB84(param_1_00,0);
    uVar52 = local_128._0_4_;
    local_b8._0_4_ = (float)param_2;
    fVar53 = (float)CONCAT13(in_XMM2_Bd,CONCAT12(in_XMM2_Bc,CONCAT11(in_XMM2_Bb,in_XMM2_Ba)));
    local_d4 = (uint)(bVar8 ^ 1);
    local_d8 = (uint)bVar20;
    local_dc = (uint)bVar16;
    local_e0 = (uint)bVar14;
    _local_128 = auVar26;
    local_e4 = param_4;
    local_d0 = param_11;
    fVar23 = (float)local_b8;
    local_b8 = param_2;
    local_c8 = param_3;
    Path::addRoundedRectangle
              ((float)uVar52,fVar23,
               (float)CONCAT13(in_XMM2_Bd,CONCAT12(in_XMM2_Bc,CONCAT11(in_XMM2_Bb,in_XMM2_Ba))),
               fVar22,fVar28,fVar28,(Path *)&local_118,local_d4,bVar20,bVar16,bVar14);
    uVar18 = (int)((float)(byte)*param_7 * DAT_005de424) & 0xffU |
             ((int)((float)*(byte *)((long)param_7 + 1) * DAT_005de424) & 0xffU) << 8 |
             ((int)((float)*(byte *)((long)param_7 + 2) * DAT_005de424) & 0xffU) << 0x10 |
             (uint)*(byte *)((long)param_7 + 3) << 0x18;
    auVar26._4_8_ = (ulong)(uint)((float)local_b8 + (float)local_c8) << 0x20;
    auVar26._0_4_ = (float)local_b8;
    auVar26._12_4_ = 0;
    _local_160 = auVar26 << 0x20;
    local_150 = 0;
    __ptr_00 = malloc(0x80);
    local_140 = 8;
    *__ptr_00 = 0.0;
    *(uint *)(__ptr_00 + 1) = uVar18;
    local_13c = 2;
    __ptr_00[2] = 1.0;
    *(uint *)(__ptr_00 + 3) = uVar18;
    uVar18 = *param_7;
    iVar11 = SUB84((double)((float)(uVar18 >> 0x18) * DAT_005d9088) + DAT_005d9098,0);
    iVar15 = 0xff;
    if (iVar11 < 0xff) {
      iVar15 = iVar11;
    }
    uVar21 = uVar18 & 0xffffff | iVar15 << 0x18;
    local_148 = __ptr_00;
    memmove(__ptr_00 + 4,__ptr_00 + 2,0x10);
    __ptr_00[2] = 0.03;
    *(uint *)(__ptr_00 + 3) = uVar21;
    local_13c = 3;
    lVar17 = 0;
    if (((DAT_00652e30 < *__ptr_00) || (lVar17 = 1, DAT_00652e30 < __ptr_00[2])) ||
       (lVar17 = 2, DAT_00652e30 < __ptr_00[4])) {
      pdVar19 = __ptr_00 + lVar17 * 2;
      memmove(__ptr_00 + lVar17 * 2 + 2,pdVar19,(ulong)((uint)lVar17 ^ 3) << 4);
    }
    else {
      pdVar19 = __ptr_00 + 6;
    }
    *pdVar19 = 0.4;
    *(uint *)(pdVar19 + 1) = uVar18;
    local_13c = 4;
    uVar18 = 0;
    if (((_DAT_005de668 < *__ptr_00) || (uVar18 = 1, _DAT_005de668 < __ptr_00[2])) ||
       ((uVar18 = 2, _DAT_005de668 < __ptr_00[4] || (uVar18 = 3, _DAT_005de668 < __ptr_00[6])))) {
      pdVar19 = __ptr_00 + (ulong)uVar18 * 2;
      memmove(__ptr_00 + (ulong)uVar18 * 2 + 2,pdVar19,(ulong)(4 - uVar18) << 4);
    }
    else {
      pdVar19 = __ptr_00 + 8;
    }
    this = local_138._0_8_;
    *pdVar19 = 0.97;
    *(uint *)(pdVar19 + 1) = uVar21;
    local_13c = 5;
                    /* try { // try from 002838f5 to 002839bd has its CatchHandler @ 002843d4 */
    Graphics::setGradientFill((Graphics *)local_138._0_8_,(undefined8 *)local_160);
    cVar9 = (**(code **)(**(long **)(this + 8) + 0x68))();
    if (cVar9 == '\0') {
      if ((long)uStack_110._4_4_ != 0) {
        pfVar13 = local_118;
        do {
          fVar22 = *pfVar13;
          if ((fVar22 != DAT_005de3d0) || (NAN(fVar22) || NAN(DAT_005de3d0))) {
            if ((fVar22 != DAT_005de3d4) || (NAN(fVar22) || NAN(DAT_005de3d4))) {
              if (((fVar22 != DAT_005de3d8) || (NAN(fVar22) || NAN(DAT_005de3d8))) &&
                 ((fVar22 != DAT_005de3dc || (NAN(fVar22) || NAN(DAT_005de3dc)))))
              goto LAB_00283964;
            }
            local_188 = ZEXT416(DAT_005d9038);
            local_178 = 0x3f800000;
            (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),&local_118,local_188);
            break;
          }
          pfVar13 = pfVar13 + 2;
LAB_00283964:
          pfVar13 = pfVar13 + 1;
        } while (pfVar13 != local_118 + uStack_110._4_4_);
      }
    }
    local_138 = ZEXT416((uint)(DAT_0065b218 * (float)local_c8 +
                              ((float)local_c8 - ((float)local_58._0_4_ + (float)local_58._0_4_))));
    free(__ptr_00);
    uVar52 = _ZN4juce7ColoursL16transparentBlackE_5;
    local_160._4_4_ = DAT_005d9044 * (float)local_c8 + (float)local_b8;
    uVar18 = (int)((float)(byte)*param_7 * DAT_005de424) & 0xffU |
             ((int)((float)*(byte *)((long)param_7 + 1) * DAT_005de424) & 0xffU) << 8 |
             ((int)((float)*(byte *)((long)param_7 + 2) * DAT_005de424) & 0xffU) << 0x10 |
             (uint)*(byte *)((long)param_7 + 3) << 0x18;
    local_160._0_4_ = (float)local_138._0_4_ + (float)local_128._0_4_;
    uStack_158._4_4_ = local_160._4_4_;
    uStack_158._0_4_ = local_128._0_4_;
    local_150 = 1;
    local_148 = malloc(0x80);
    local_140 = 8;
    *local_148 = 0.0;
    *(undefined4 *)(local_148 + 1) = uVar52;
    local_13c = 2;
    local_148[2] = 1.0;
    auVar25._0_4_ = (float)local_58._0_4_ * _DAT_005dd170;
    auVar25._4_4_ = (float)local_58._0_4_ * _UNK_005dd174;
    auVar25._8_4_ = (float)local_58._0_4_ * _UNK_005dd178;
    auVar25._12_4_ = (float)local_58._0_4_ * _UNK_005dd17c;
    auVar30._4_4_ = local_138._0_4_;
    auVar30._0_4_ = local_138._0_4_;
    auVar30._8_4_ = local_138._0_4_;
    auVar30._12_4_ = local_138._0_4_;
    auVar26 = divps(auVar25,auVar30);
    dVar1 = (double)auVar26._0_4_ + _DAT_00651e80;
    dVar2 = (double)auVar26._4_4_ + _UNK_00651e88;
    *(uint *)(local_148 + 3) = uVar18;
    auVar31._8_8_ = -(ulong)(dVar2 < 0.0);
    auVar31._0_8_ = -(ulong)(dVar1 < 0.0);
    uVar18 = movmskpd(uVar18,auVar31);
    dVar24 = 0.0;
    if (((uVar18 & 2) == 0) && (dVar24 = _DAT_005d9000, dVar2 <= _DAT_005d9000)) {
      dVar24 = dVar2;
    }
    local_48._8_4_ = SUB84(dVar2,0);
    local_48._0_8_ = dVar1;
    local_48._12_4_ = (int)((ulong)dVar2 >> 0x20);
    local_78._4_4_ = (float)local_c8;
    local_78._0_4_ = (float)local_b8;
    fStack_70 = (float)local_b8._4_4_;
    fStack_6c = (float)local_c8._4_4_;
    local_68 = (float)local_128._0_4_;
    fStack_64 = (float)local_138._0_4_;
    fStack_60 = (float)local_128._4_4_;
    fStack_5c = (float)local_138._4_4_;
    ColourGradient::addColour(dVar24,(ColourGradient *)local_160,uVar52);
    uVar52 = 0;
    uVar54 = 0;
    if ((uVar18 & 1) == 0) {
      uVar52 = SUB84(_DAT_005d9000,0);
      uVar54 = (undefined4)((ulong)_DAT_005d9000 >> 0x20);
      if ((double)local_48._0_8_ <= _DAT_005d9000) {
        uVar52 = local_48._0_4_;
        uVar54 = local_48._4_4_;
      }
    }
    iVar15 = (int)(float)local_78._0_4_;
    uVar44 = (undefined1)iVar15;
    uVar45 = (undefined1)((uint)iVar15 >> 8);
    uVar46 = (undefined1)((uint)iVar15 >> 0x10);
    uVar47 = (undefined1)((uint)iVar15 >> 0x18);
    iVar11 = (int)(float)local_78._4_4_;
    local_78[4] = (char)iVar11;
    local_78._0_4_ = iVar15;
    local_78[5] = (char)((uint)iVar11 >> 8);
    local_78[6] = (char)((uint)iVar11 >> 0x10);
    local_78[7] = (char)((uint)iVar11 >> 0x18);
    fStack_70 = (float)(int)fStack_70;
    fStack_6c = (float)(int)fStack_6c;
    local_68 = (float)(int)local_68;
    fStack_64 = (float)(int)fStack_64;
    fStack_60 = (float)(int)fStack_60;
    fStack_5c = (float)(int)fStack_5c;
    iVar11 = SUB84((double)((float)*(byte *)((long)param_7 + 3) * DAT_005d9088) + DAT_005d9098,0);
    iVar15 = 0xff;
    if (iVar11 < 0xff) {
      iVar15 = iVar11;
    }
    ColourGradient::addColour
              ((double)CONCAT44(uVar54,uVar52),(ColourGradient *)local_160,
               iVar15 << 0x18 |
               (int)((float)(byte)*param_7 * DAT_005de424) & 0xffU |
               ((int)((float)*(byte *)((long)param_7 + 1) * DAT_005de424) & 0xffU) << 8 |
               ((int)((float)*(byte *)((long)param_7 + 2) * DAT_005de424) & 0xffU) << 0x10);
    uVar52 = local_cc;
    cVar9 = (char)local_d0;
    if (bVar8 == 0 && cVar9 == '\0') {
      if (*(Graphics *)(this + 0x10) != (Graphics)0x0) {
        *(Graphics *)(this + 0x10) = (Graphics)0x0;
                    /* try { // try from 00283c6e to 00283c70 has its CatchHandler @ 0028436b */
        (**(code **)(**(long **)(this + 8) + 0x70))();
      }
      *(Graphics *)(this + 0x10) = (Graphics)0x1;
                    /* try { // try from 00283c76 to 00283d6d has its CatchHandler @ 0028439f */
      Graphics::setGradientFill((Graphics *)this,(undefined8 *)local_160);
      local_188._4_4_ = local_78._0_4_;
      local_188._0_4_ = local_68;
      local_188._8_4_ = fStack_64;
      local_188._12_4_ = local_78._4_4_;
      if (*(Graphics *)(this + 0x10) != (Graphics)0x0) {
        *(Graphics *)(this + 0x10) = (Graphics)0x0;
        (**(code **)(**(long **)(this + 8) + 0x70))();
      }
      (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),local_188);
      cVar10 = (**(code **)(**(long **)(this + 8) + 0x68))();
      if (cVar10 == '\0') {
        if ((long)uStack_110._4_4_ != 0) {
          uVar44 = SUB41(DAT_005de3d8,0);
          uVar45 = (undefined1)((uint)DAT_005de3d8 >> 8);
          uVar46 = (undefined1)((uint)DAT_005de3d8 >> 0x10);
          uVar47 = (undefined1)((uint)DAT_005de3d8 >> 0x18);
          pfVar13 = local_118;
          do {
            fVar22 = *pfVar13;
            if ((fVar22 != DAT_005de3d0) || (NAN(fVar22) || NAN(DAT_005de3d0))) {
              if ((fVar22 != DAT_005de3d4) || (NAN(fVar22) || NAN(DAT_005de3d4))) {
                if (((fVar22 != DAT_005de3d8) || (NAN(fVar22) || NAN(DAT_005de3d8))) &&
                   ((fVar22 != DAT_005de3dc || (NAN(fVar22) || NAN(DAT_005de3dc)))))
                goto LAB_00283d14;
              }
              local_188 = ZEXT416(DAT_005d9038);
              local_178 = 0x3f800000;
              (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),&local_118,local_188);
              break;
            }
            pfVar13 = pfVar13 + 2;
LAB_00283d14:
            pfVar13 = pfVar13 + 1;
          } while (pfVar13 != local_118 + uStack_110._4_4_);
        }
      }
      if (*(Graphics *)(this + 0x10) == (Graphics)0x0) {
                    /* try { // try from 00283d83 to 00283d85 has its CatchHandler @ 00284361 */
        (**(code **)(**(long **)(this + 8) + 0x78))();
      }
      else {
        *(Graphics *)(this + 0x10) = (Graphics)0x0;
      }
    }
    auVar26 = _local_160;
    if (cVar9 == '\0' && (char)uVar52 == '\0') {
      fVar22 = local_128._0_4_ + fVar53;
      local_160._0_4_ = fVar22 - (float)local_138._0_4_;
      auVar25 = _local_160;
      uStack_158._4_4_ = auVar26._12_4_;
      local_160 = auVar25._0_8_;
      uStack_158._0_4_ = fVar22;
      if (*(Graphics *)(this + 0x10) != (Graphics)0x0) {
        *(Graphics *)(this + 0x10) = (Graphics)0x0;
                    /* try { // try from 00283dc2 to 00283dc4 has its CatchHandler @ 00284369 */
        (**(code **)(**(long **)(this + 8) + 0x70))();
      }
      *(Graphics *)(this + 0x10) = (Graphics)0x1;
                    /* try { // try from 00283dca to 00283efc has its CatchHandler @ 0028439d */
      Graphics::setGradientFill((Graphics *)this,(undefined8 *)local_160);
      local_188._4_4_ = local_78._0_4_;
      local_188._0_4_ = ((int)local_68 + (int)fVar53) - (int)fStack_64;
      local_188._12_4_ = local_78._4_4_;
      local_188._8_4_ = (int)fStack_64 + 2;
      if (*(Graphics *)(this + 0x10) != (Graphics)0x0) {
        *(Graphics *)(this + 0x10) = (Graphics)0x0;
        (**(code **)(**(long **)(this + 8) + 0x70))();
      }
      (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),local_188);
      cVar9 = (**(code **)(**(long **)(this + 8) + 0x68))();
      if (cVar9 == '\0') {
        if ((long)uStack_110._4_4_ != 0) {
          uVar44 = SUB41(DAT_005de3d8,0);
          uVar45 = (undefined1)((uint)DAT_005de3d8 >> 8);
          uVar46 = (undefined1)((uint)DAT_005de3d8 >> 0x10);
          uVar47 = (undefined1)((uint)DAT_005de3d8 >> 0x18);
          pfVar13 = local_118;
          do {
            fVar22 = *pfVar13;
            if ((fVar22 != DAT_005de3d0) || (NAN(fVar22) || NAN(DAT_005de3d0))) {
              if ((fVar22 != DAT_005de3d4) || (NAN(fVar22) || NAN(DAT_005de3d4))) {
                if (((fVar22 != DAT_005de3d8) || (NAN(fVar22) || NAN(DAT_005de3d8))) &&
                   ((fVar22 != DAT_005de3dc || (NAN(fVar22) || NAN(DAT_005de3dc)))))
                goto LAB_00283ea4;
              }
              local_188 = ZEXT416(DAT_005d9038);
              local_178 = 0x3f800000;
              (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),&local_118,local_188);
              break;
            }
            pfVar13 = pfVar13 + 2;
LAB_00283ea4:
            pfVar13 = pfVar13 + 1;
          } while (pfVar13 != local_118 + uStack_110._4_4_);
        }
      }
      if (*(Graphics *)(this + 0x10) == (Graphics)0x0) {
                    /* try { // try from 00283f12 to 00283f14 has its CatchHandler @ 00284359 */
        (**(code **)(**(long **)(this + 8) + 0x78))();
      }
      else {
        *(Graphics *)(this + 0x10) = (Graphics)0x0;
      }
    }
    fVar22 = (float)local_58._0_4_ * DAT_005d98f0;
    uVar18 = CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) ^
             CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44)));
    uVar44 = (undefined1)uVar18;
    uVar45 = (undefined1)(uVar18 >> 8);
    uVar46 = (undefined1)(uVar18 >> 0x10);
    uVar47 = (undefined1)(uVar18 >> 0x18);
    if (bVar8 == 0) {
      uVar44 = SUB41(fVar22,0);
      uVar45 = (undefined1)((uint)fVar22 >> 8);
      uVar46 = (undefined1)((uint)fVar22 >> 0x10);
      uVar47 = (undefined1)((uint)fVar22 >> 0x18);
    }
    local_178 = 0;
    uStack_170 = 0;
    local_188 = ZEXT816(0);
    local_168 = 1;
    fVar28 = 0.0;
    if ((char)uVar52 == '\0') {
      fVar28 = fVar22;
    }
    fVar23 = (float)local_128._0_4_ +
             (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44)));
    uVar48 = 0;
    uVar49 = 0;
    uVar50 = 0;
    uVar51 = 0;
    fVar53 = fVar53 - (fVar28 + (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))));
    uVar44 = SUB41(fVar53,0);
    uVar45 = (undefined1)((uint)fVar53 >> 8);
    uVar46 = (undefined1)((uint)fVar53 >> 0x10);
    uVar47 = (undefined1)((uint)fVar53 >> 0x18);
    _local_128 = ZEXT416((uint)(DAT_005d98f0 * (float)local_c8));
    Path::addRoundedRectangle
              (fVar23,DAT_005d9068 * (float)local_58._0_4_ + (float)local_b8,fVar53,
               DAT_005d98f0 * (float)local_c8,fVar22,fVar22,(Path *)local_188,local_d4,
               (char)local_d8,(char)local_dc,(char)local_e0);
    uVar52 = _ZN4juce7ColoursL16transparentWhiteE_6;
    auVar32._8_4_ = 0xffffffff;
    auVar32._0_8_ = 0xffffffffffffffff;
    auVar32._12_4_ = 0xffffffff;
    auVar29 = auVar32._0_15_ ^ ZEXT215(*(ushort *)((long)param_7 + 1));
    uVar18 = CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) ^
             CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44)));
    uVar21 = CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48))) ^
             CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)));
    auVar40._0_14_ = auVar29._0_14_;
    auVar40[0xe] = auVar29[7];
    auVar40[0xf] = (char)(uVar21 >> 0x18);
    auVar39._14_2_ = auVar40._14_2_;
    auVar39._0_13_ = auVar29._0_13_;
    auVar39[0xd] = (char)(uVar21 >> 0x10);
    auVar38._13_3_ = auVar39._13_3_;
    auVar38._0_12_ = auVar29._0_12_;
    auVar38[0xc] = auVar29[6];
    auVar37._12_4_ = auVar38._12_4_;
    auVar37._0_11_ = auVar29._0_11_;
    auVar37[0xb] = (char)(uVar21 >> 8);
    auVar36._11_5_ = auVar37._11_5_;
    auVar36._0_10_ = auVar29._0_10_;
    auVar36[10] = auVar29[5];
    auVar35._10_6_ = auVar36._10_6_;
    auVar35._0_9_ = auVar29._0_9_;
    auVar35[9] = (char)uVar21;
    auVar34._9_7_ = auVar35._9_7_;
    auVar34._0_8_ = auVar29._0_8_;
    auVar34[8] = auVar29[4];
    Var6 = CONCAT91(CONCAT81(auVar34._8_8_,(char)(uVar18 >> 0x18)),auVar29[3]);
    auVar5._2_10_ = Var6;
    auVar5[1] = (char)(uVar18 >> 0x10);
    auVar5[0] = auVar29[2];
    auVar4._2_12_ = auVar5;
    auVar4[1] = (char)(uVar18 >> 8);
    auVar4[0] = auVar29[1];
    uVar55 = CONCAT11((char)uVar18,auVar29[0]);
    auVar33._2_14_ = auVar4;
    auVar43._0_12_ = auVar33._0_12_;
    auVar43._12_2_ = (short)Var6;
    auVar43._14_2_ = (short)(uVar21 >> 0x10);
    auVar42._12_4_ = auVar43._12_4_;
    auVar42._0_10_ = auVar33._0_10_;
    auVar42._10_2_ = (short)uVar21;
    auVar41._10_6_ = auVar42._10_6_;
    auVar41._0_8_ = auVar33._0_8_;
    auVar41._8_2_ = auVar5._0_2_;
    auVar7._4_8_ = auVar41._8_8_;
    auVar7._2_2_ = (short)(uVar18 >> 0x10);
    auVar7._0_2_ = auVar4._0_2_;
    fVar22 = (float)(byte)~(byte)*param_7 * _DAT_005de484 + DAT_005de3b0;
    bVar8 = *(byte *)((long)param_7 + 3);
    uVar21 = (int)((float)CONCAT22((short)uVar18,uVar55) * _DAT_005dd180 + _DAT_005dcd50) &
             _DAT_005dcd60;
    uVar27 = (int)((float)auVar7._0_4_ * _UNK_005dd184 + _UNK_005dcd54) & _UNK_005dcd64;
    fVar53 = (float)local_128._0_4_ + (float)local_b8;
    auVar3[8] = SUB41(fVar53,0);
    auVar3._4_4_ = uVar18;
    auVar3[9] = (char)((uint)fVar53 >> 8);
    auVar3[10] = (char)((uint)fVar53 >> 0x10);
    auVar3[0xb] = (char)((uint)fVar53 >> 0x18);
    auVar3._0_4_ = (float)local_c8 * DAT_005de478 + (float)local_b8;
    auVar3._12_4_ = 0;
    local_a8 = auVar3 << 0x20;
    local_98 = local_98 & 0xffffffffffffff00;
    local_90 = malloc(0x80);
    local_88 = 8;
    *local_90 = 0;
    *(uint *)(local_90 + 1) =
         (int)fVar22 & 0xffU | uVar21 << 8 | uVar27 << 0x10 | (uint)bVar8 << 0x18;
    local_84 = 2;
    local_90[2] = 0x3ff0000000000000;
    *(undefined4 *)(local_90 + 3) = uVar52;
                    /* try { // try from 002840c7 to 002840d6 has its CatchHandler @ 0028436f */
    Graphics::setGradientFill((Graphics *)this,(undefined8 *)local_a8);
    free(local_90);
                    /* try { // try from 002840eb to 00284192 has its CatchHandler @ 00284386 */
    cVar9 = (**(code **)(**(long **)(this + 8) + 0x68))();
    if (cVar9 == '\0') {
      if ((long)(int)local_188._12_4_ != 0) {
        pfVar13 = (float *)(local_188._0_8_ + (long)(int)local_188._12_4_ * 4);
        pfVar12 = (float *)local_188._0_8_;
        do {
          fVar22 = *pfVar12;
          if ((fVar22 != DAT_005de3d0) || (NAN(fVar22) || NAN(DAT_005de3d0))) {
            if ((fVar22 != DAT_005de3d4) || (NAN(fVar22) || NAN(DAT_005de3d4))) {
              if (((fVar22 != DAT_005de3d8) || (NAN(fVar22) || NAN(DAT_005de3d8))) &&
                 ((fVar22 != DAT_005de3dc || (NAN(fVar22) || NAN(DAT_005de3dc)))))
              goto LAB_00284134;
            }
            local_a8 = ZEXT416(DAT_005d9038);
            local_98 = 0x3f800000;
            (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),local_188,local_a8);
            break;
          }
          pfVar12 = pfVar12 + 2;
LAB_00284134:
          pfVar12 = pfVar12 + 1;
        } while (pfVar12 != pfVar13);
      }
    }
    local_188._12_4_ = 0;
    auVar26 = local_188;
    __ptr = local_188._0_8_;
    local_188 = auVar26;
    free((void *)__ptr);
    iVar11 = SUB84((double)((float)*(byte *)((long)param_7 + 3) * DAT_00651f30) + DAT_005d9098,0);
    iVar15 = 0xff;
    if (iVar11 < 0xff) {
      iVar15 = iVar11;
    }
                    /* try { // try from 00284233 to 0028423a has its CatchHandler @ 0028436d */
    Graphics::setColour((Graphics *)this,
                        iVar15 << 0x18 |
                        (int)((float)(byte)*param_7 * DAT_005de3c0) & 0xffU |
                        ((int)((float)*(byte *)((long)param_7 + 1) * DAT_005de3c0) & 0xffU) << 8 |
                        ((int)((float)*(byte *)((long)param_7 + 2) * DAT_005de3c0) & 0xffU) << 0x10)
    ;
    local_a8._4_8_ = 0;
    local_a8._0_4_ = local_e4;
    local_188 = ZEXT416(DAT_005d9038);
    local_178 = 0x3f800000;
                    /* try { // try from 00284276 to 0028430e has its CatchHandler @ 00284381 */
    cVar9 = (**(code **)(**(long **)(this + 8) + 0x68))();
    if (cVar9 == '\0') {
      if ((long)uStack_110._4_4_ != 0) {
        pfVar13 = local_118;
        do {
          fVar22 = *pfVar13;
          if ((fVar22 != DAT_005de3d0) || (NAN(fVar22) || NAN(DAT_005de3d0))) {
            if ((fVar22 != DAT_005de3d4) || (NAN(fVar22) || NAN(DAT_005de3d4))) {
              if (((fVar22 != DAT_005de3d8) || (NAN(fVar22) || NAN(DAT_005de3d8))) &&
                 ((fVar22 != DAT_005de3dc || (NAN(fVar22) || NAN(DAT_005de3dc)))))
              goto LAB_002842c4;
            }
            (**(code **)(**(long **)(this + 8) + 0xd8))
                      (*(long **)(this + 8),&local_118,local_a8,local_188);
            break;
          }
          pfVar13 = pfVar13 + 2;
LAB_002842c4:
          pfVar13 = pfVar13 + 1;
        } while (pfVar13 != local_118 + uStack_110._4_4_);
      }
    }
    free(local_148);
    uStack_110 = uStack_110 & 0xffffffff;
    free(local_118);
  }
  return;
}


