// Function : getPathFillType
// Namespace: juce:SVGState
// Entry    : 002b1ec0
// Prototype: undefined getPathFillType(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3, uint * param_4, SVGState * param_5, undefined8 param_6, long * param_7, byte * param_8, byte * param_9, SVGState * param_10, uint param_11)
// Body     : 002b1ec0 - 002b22a9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::SVGState::getPathFillType(juce::Path const&, juce::SVGState::XmlPath const&,
   juce::StringRef, juce::String const&, juce::String const&, juce::Colour) const */

void __cdecl
juce::SVGState::getPathFillType
          (undefined8 param_1_00,undefined8 param_2_00,ulong param_3,uint *param_4,SVGState *param_5
          ,undefined8 param_6,long *param_7,byte *param_8,byte *param_9,SVGState *param_10,
          uint param_11)

{
  long *plVar1;
  SVGState SVar2;
  void *__src;
  double dVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *__dest;
  byte *pbVar8;
  int iVar9;
  undefined8 extraout_RDX;
  uint uVar10;
  int *piVar11;
  SVGState **ppSVar12;
  byte *pbVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  char *local_98;
  byte *local_90;
  undefined1 local_88 [16];
  SVGState *local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_60;
  undefined8 *local_58;
  long *plStack_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  pbVar13 = param_9;
  if (*param_10 == (SVGState)0x0) {
    local_88 = ZEXT416((uint)DAT_005d9038);
    local_78 = *(SVGState **)param_9;
    SVar2 = *local_78;
  }
  else {
    local_78 = param_10;
    dVar3 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)&local_78);
    fVar15 = (float)dVar3;
    fVar16 = (float)(~-(uint)NAN(fVar15) &
                    ~-(uint)(DAT_005d94c8 <= (float)(_DAT_005d91c0 & (uint)fVar15)) & (uint)fVar15);
    fVar15 = DAT_005d9038;
    if (fVar16 <= DAT_005d9038) {
      fVar15 = fVar16;
    }
    param_2_00 = 0;
    param_3 = CONCAT44(0,~-(uint)(fVar16 < 0.0) & (uint)fVar15);
    local_88._8_8_ = 0;
    local_88._0_8_ = param_3;
    local_78 = *(SVGState **)param_9;
    SVar2 = *local_78;
  }
  if (SVar2 != (SVGState)0x0) {
    dVar3 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)&local_78);
    fVar15 = (float)dVar3;
    fVar16 = (float)(~-(uint)NAN(fVar15) &
                    ~-(uint)(DAT_005d94c8 <= (float)(_DAT_005d91c0 & (uint)fVar15)) & (uint)fVar15);
    fVar15 = DAT_005d9038;
    if (fVar16 <= DAT_005d9038) {
      fVar15 = fVar16;
    }
    param_3 = 0;
    param_2_00 = CONCAT44(local_88._4_4_,
                          (float)local_88._0_4_ * (float)(~-(uint)(fVar16 < 0.0) & (uint)fVar15));
    local_88._0_8_ = param_2_00;
  }
  local_78 = (SVGState *)&DAT_0061ac58;
  ppSVar12 = &local_78;
  pbVar8 = param_8;
  getStyleAttribute((SVGState *)&local_90,(long)param_5,param_7,param_8,(byte *)ppSVar12,pbVar13);
                    /* try { // try from 002b1fcc to 002b1fd6 has its CatchHandler @ 002b22e6 */
  parseURL((SVGState *)&local_98,(long *)&local_90,extraout_RDX,pbVar8,ppSVar12,pbVar13);
  if (*local_98 != '\0') {
    local_68 = local_88._0_4_;
    local_60 = 0xff000000;
    local_58 = (undefined8 *)0x0;
    plStack_50 = (long *)0x0;
    local_48 = ZEXT416((uint)DAT_005d9038);
    local_38 = 0x3f800000;
                    /* try { // try from 002b2029 to 002b205d has its CatchHandler @ 002b22b3 */
    local_78 = param_5;
    local_70 = param_6;
    uVar6 = XmlPath::applyOperationToChildWithID<juce::SVGState::GetFillTypeOp>
                      ((ulong)(uint)DAT_005d9038,param_2_00,param_3,(XmlPath *)(param_5 + 8),
                       (ulong *)&local_98,&local_78,pbVar8,ppSVar12,pbVar13);
    puVar4 = local_58;
    if ((char)uVar6 != '\0') {
      *param_4 = local_60;
      if (local_58 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        puVar7 = operator_new(0x28);
        *puVar7 = *puVar4;
        puVar7[1] = puVar4[1];
        *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar4 + 2);
        puVar7[3] = 0;
        puVar7[4] = 0;
        uVar5 = *(uint *)((long)puVar4 + 0x24);
        if (0 < (int)uVar5) {
          __src = (void *)puVar4[3];
          uVar10 = uVar5 + (uVar5 >> 1) + 8 & 0xfffffff8;
          if ((int)uVar10 < 1) {
            __dest = (void *)0x0;
          }
          else {
            __dest = malloc((ulong)uVar10 << 4);
            puVar7[3] = __dest;
          }
          *(uint *)(puVar7 + 4) = uVar10;
          memcpy(__dest,__src,(ulong)uVar5 << 4);
        }
        *(uint *)((long)puVar7 + 0x24) = uVar5;
      }
      *(undefined8 **)(param_4 + 2) = puVar7;
      *(long **)(param_4 + 4) = plStack_50;
      if (plStack_50 == (long *)0x0) {
        *(undefined8 *)(param_4 + 10) = local_38;
        *(undefined8 *)(param_4 + 6) = local_48._0_8_;
        *(undefined8 *)(param_4 + 8) = local_48._8_8_;
      }
      else {
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
        *(undefined8 *)(param_4 + 10) = local_38;
        param_4[6] = local_48._0_4_;
        param_4[7] = local_48._4_4_;
        param_4[8] = local_48._8_4_;
        param_4[9] = local_48._12_4_;
        if (plStack_50 != (long *)0x0) {
          LOCK();
          plVar1 = plStack_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plStack_50 + 8))();
          }
        }
      }
      puVar4 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        *(undefined4 *)((long)local_58 + 0x24) = 0;
        free((void *)local_58[3]);
        operator_delete(puVar4);
      }
      goto LAB_002b2255;
    }
    if (plStack_50 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plStack_50 + 8))();
      }
    }
    puVar4 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      *(undefined4 *)((long)local_58 + 0x24) = 0;
      free((void *)local_58[3]);
      operator_delete(puVar4);
    }
  }
  uVar5 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (local_90,&DAT_0065e5f2);
  if (uVar5 == 0) {
    uVar5 = _ZN4juce7ColoursL16transparentBlackE_5;
  }
  else {
                    /* try { // try from 002b2139 to 002b2146 has its CatchHandler @ 002b22aa */
    uVar5 = parseColour(param_5,param_7,param_8,param_11,ppSVar12,pbVar13);
    iVar14 = SUB84((double)((float)local_88._0_4_ * (float)(uVar5 >> 0x18)) + DAT_005d9098,0);
    iVar9 = 0xff;
    if (iVar14 < 0xff) {
      iVar9 = iVar14;
    }
    uVar5 = uVar5 & 0xffffff | iVar9 << 0x18;
  }
  *param_4 = uVar5;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  *(undefined1 (*) [16])(param_4 + 6) = ZEXT416((uint)DAT_005d9038);
  param_4[10] = 0x3f800000;
  param_4[0xb] = 0;
LAB_002b2255:
  piVar11 = (int *)(local_98 + -0x10);
  if (piVar11 != &emptyString) {
    LOCK();
    iVar9 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(piVar11);
    }
  }
  local_90 = local_90 + -0x10;
  if (local_90 != (byte *)&emptyString) {
    LOCK();
    iVar9 = *(int *)local_90;
    *(int *)local_90 = *(int *)local_90 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(local_90);
    }
  }
  return;
}


