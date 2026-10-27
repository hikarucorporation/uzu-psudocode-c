// Function : getString
// Namespace: Steinberg:ConstStringTable
// Entry    : 001856c0
// Prototype: undefined1[16] getString(undefined8 param_1_00, char * param_2)
// Body     : 001856c0 - 00185801


/* Steinberg::ConstStringTable::getString(char const*) const */

undefined1  [16] __thiscall
Steinberg::ConstStringTable::getString(undefined8 param_1_00,char *param_2)

{
  map<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
  *pmVar1;
  ulong uVar2;
  map<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
  *this;
  map<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
  *pmVar3;
  size_t sVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  map<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
  *pmVar8;
  ulong uVar9;
  undefined8 uVar10;
  map<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
  *pmVar11;
  ulong uVar12;
  undefined1 uVar19;
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  char *local_38;
  void *local_30;
  
  this = stringMap;
  pmVar8 = *(map<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
             **)(stringMap + 0x10);
  if (pmVar8 != (map<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
                 *)0x0) {
    pmVar1 = stringMap + 8;
    pmVar3 = pmVar1;
    do {
      pmVar11 = pmVar8 + 0x18;
      if (param_2 <= *(char **)(pmVar8 + 0x20)) {
        pmVar11 = pmVar8 + 0x10;
        pmVar3 = pmVar8;
      }
      pmVar8 = *(map<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
                 **)pmVar11;
    } while (pmVar8 != (map<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
                        *)0x0);
    if (pmVar3 != pmVar1) {
      if (param_2 < *(char **)(pmVar3 + 0x20)) {
        pmVar3 = pmVar1;
      }
      if (pmVar3 != pmVar1) {
        pvVar6 = *(void **)(pmVar3 + 0x28);
        uVar10 = 0;
        goto LAB_001857f1;
      }
    }
  }
  sVar4 = strlen(param_2);
  uVar5 = (long)((sVar4 << 0x20) + 0x100000000) >> 0x20;
  uVar7 = 0xffffffffffffffff;
  if (!CARRY8(uVar5,uVar5)) {
    uVar7 = uVar5 * 2;
  }
  pvVar6 = operator_new__(uVar7);
  if (0 < (int)(uint)sVar4) {
    uVar7 = sVar4 & 0xffffffff;
    if (uVar7 < 0x10) {
      uVar5 = 0;
    }
    else {
      uVar12 = (ulong)((uint)sVar4 & 0xf);
      uVar5 = uVar7 - uVar12;
      uVar9 = 0;
      do {
        uVar2 = *(ulong *)(param_2 + uVar9);
        uVar19 = (undefined1)(uVar2 >> 0x38);
        auVar18._8_6_ = 0;
        auVar18._0_8_ = uVar2;
        auVar18[0xe] = uVar19;
        auVar18[0xf] = uVar19;
        uVar19 = (undefined1)(uVar2 >> 0x30);
        auVar17._14_2_ = auVar18._14_2_;
        auVar17._8_5_ = 0;
        auVar17._0_8_ = uVar2;
        auVar17[0xd] = uVar19;
        auVar16._13_3_ = auVar17._13_3_;
        auVar16._8_4_ = 0;
        auVar16._0_8_ = uVar2;
        auVar16[0xc] = uVar19;
        uVar19 = (undefined1)(uVar2 >> 0x28);
        auVar15._12_4_ = auVar16._12_4_;
        auVar15._8_3_ = 0;
        auVar15._0_8_ = uVar2;
        auVar15[0xb] = uVar19;
        auVar14._11_5_ = auVar15._11_5_;
        auVar14._8_2_ = 0;
        auVar14._0_8_ = uVar2;
        auVar14[10] = uVar19;
        uVar19 = (undefined1)(uVar2 >> 0x20);
        auVar28._10_6_ = auVar14._10_6_;
        auVar28[8] = 0;
        auVar28._0_8_ = uVar2;
        auVar28[9] = uVar19;
        auVar29._9_7_ = auVar28._9_7_;
        auVar29[8] = uVar19;
        auVar29._0_8_ = uVar2;
        uVar19 = (undefined1)(uVar2 >> 0x18);
        auVar13._8_8_ = auVar29._8_8_;
        auVar13[7] = uVar19;
        auVar13[6] = uVar19;
        uVar19 = (undefined1)(uVar2 >> 0x10);
        auVar13[5] = uVar19;
        auVar13[4] = uVar19;
        uVar19 = (undefined1)(uVar2 >> 8);
        auVar13[3] = uVar19;
        auVar13[2] = uVar19;
        auVar13[0] = (undefined1)uVar2;
        auVar13[1] = auVar13[0];
        uVar2 = *(ulong *)(param_2 + uVar9 + 8);
        uVar19 = (undefined1)(uVar2 >> 0x38);
        auVar27._8_6_ = 0;
        auVar27._0_8_ = uVar2;
        auVar27[0xe] = uVar19;
        auVar27[0xf] = uVar19;
        uVar19 = (undefined1)(uVar2 >> 0x30);
        auVar26._14_2_ = auVar27._14_2_;
        auVar26._8_5_ = 0;
        auVar26._0_8_ = uVar2;
        auVar26[0xd] = uVar19;
        auVar25._13_3_ = auVar26._13_3_;
        auVar25._8_4_ = 0;
        auVar25._0_8_ = uVar2;
        auVar25[0xc] = uVar19;
        uVar19 = (undefined1)(uVar2 >> 0x28);
        auVar24._12_4_ = auVar25._12_4_;
        auVar24._8_3_ = 0;
        auVar24._0_8_ = uVar2;
        auVar24[0xb] = uVar19;
        auVar23._11_5_ = auVar24._11_5_;
        auVar23._8_2_ = 0;
        auVar23._0_8_ = uVar2;
        auVar23[10] = uVar19;
        uVar19 = (undefined1)(uVar2 >> 0x20);
        auVar22._10_6_ = auVar23._10_6_;
        auVar22[8] = 0;
        auVar22._0_8_ = uVar2;
        auVar22[9] = uVar19;
        auVar21._9_7_ = auVar22._9_7_;
        auVar21[8] = uVar19;
        auVar21._0_8_ = uVar2;
        uVar19 = (undefined1)(uVar2 >> 0x18);
        auVar20._8_8_ = auVar21._8_8_;
        auVar20[7] = uVar19;
        auVar20[6] = uVar19;
        uVar19 = (undefined1)(uVar2 >> 0x10);
        auVar20[5] = uVar19;
        auVar20[4] = uVar19;
        uVar19 = (undefined1)(uVar2 >> 8);
        auVar20[3] = uVar19;
        auVar20[2] = uVar19;
        auVar20[0] = (undefined1)uVar2;
        auVar20[1] = auVar20[0];
        auVar29 = psraw(auVar13,8);
        auVar28 = psraw(auVar20,8);
        *(undefined1 (*) [16])((long)pvVar6 + uVar9 * 2) = auVar29;
        *(undefined1 (*) [16])((long)pvVar6 + uVar9 * 2 + 0x10) = auVar28;
        uVar9 = uVar9 + 0x10;
      } while (uVar5 != uVar9);
      if (uVar12 == 0) goto LAB_001857d2;
    }
    do {
      *(short *)((long)pvVar6 + uVar5 * 2) = (short)param_2[uVar5];
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar5);
  }
LAB_001857d2:
  *(undefined2 *)((long)pvVar6 + ((long)(sVar4 << 0x20) >> 0x1f)) = 0;
  local_38 = param_2;
  local_30 = pvVar6;
  auVar29 = std::
            map<char_const*,char16_t*,std::less<char_const*>,std::allocator<std::pair<char_const*const,char16_t*>>>
            ::insert<std::pair<char_const*,char16_t*>>(this,(ulong *)&local_38);
  uVar10 = auVar29._8_8_;
LAB_001857f1:
  auVar30._8_8_ = uVar10;
  auVar30._0_8_ = pvVar6;
  return auVar30;
}


